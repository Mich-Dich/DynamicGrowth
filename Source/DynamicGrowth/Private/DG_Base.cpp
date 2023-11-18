// Fill out your copyright notice in the Description page of Project Settings.

#include "DG_Base.h"

#include "Engine/World.h"
#include <Kismet/KismetMathLibrary.h>

DEFINE_LOG_CATEGORY(Log_DGP);

// Sets default values
ADG_Base::ADG_Base() {
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ADG_Base::BeginPlay() {
    Super::BeginPlay();

}

// Called every frame
void ADG_Base::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);

}

// Construction Script
void ADG_Base::OnConstruction(const FTransform& transform) {

    Super::OnConstruction(transform);

    // Start Measurement of Execution Time
    FunctionName = "Construction Script";
    FTimeMeasurement LocMD = StartTimeMeasuring(FunctionName);

    // Get Ref for [World] OR abort constructionscript
    World = GetWorld();
    if (!World) {

        UE_LOG(Log_DGP, Error, TEXT("%s - Failed to get refference to [World] %s"), *FunctionName, *AbbortingNotice);
        UE_LOG(Log_DGP, Log, TEXT("========================================================================================================================================================================="));
        return;
    }

    // Specefie Seed
    if (MaualSeed)
        FMath::RandInit(RandomSeed);

    // Ensure sensible Value
    if (GrowDirection == FVector(0))        GrowDirection = FVector(0, 0, 1);

    FlushPersistentDebugLines(World);

    SpawnCircleOfTrunks(GrowDirection, CircleOfTrunksNum, CircleOfTrunksRadius);
    // CreateTrunkSplineInstant(GetActorLocation(), true, GrowDirection);

    // Log Execution duration of Main-Proccess
    MeasureExecutionTime(&LocMD);
}

void ADG_Base::SpawnCircleOfTrunks(FVector Direction, int32 number, float Radius) {

    // Generate Perpendicular Vector
    FVector Perpendicular = FVector::CrossProduct(RandomVector(), Direction);

    // Rotate Around [Direction] to spawn trunks
    for (int32 x = 0; x < number; x++) {

        FVector Rotated = Perpendicular.RotateAngleAxis((360 / number) * x, Direction);
        FVector NewLoc = GetActorLocation() + (Rotated * Radius);
        CreateTrunkSplineInstant(NewLoc, true, GrowDirection);
    }
}

// Create the spline for a trunk (Version: Instant growth)
void ADG_Base::CreateTrunkSplineInstant(FVector StartLoc, bool OverrideInitalDirection, FVector InitalGrowDirection) {

    // Set Inital Variables
    FVector CurrentLoc = StartLoc;
    FVector EndLocation = CurrentLoc + GrowTargetLocation;
    FVector TraceNormal = FVector(0);
    FVector TraceEnd = FVector(0);
    FVector PrevTraceNormal;
    TArray<FVector> SplinePoints = { CurrentLoc };
    if (OverrideInitalDirection)    PrevTraceNormal = InitalGrowDirection;
    else                            PrevTraceNormal = (GrowTarget == EGrowTarget::GrowDirection) ? FastNormalize(GrowDirection) : FastNormalize(EndLocation - CurrentLoc);

    // Support vars for line trace
    FHitResult HitResult;
    FCollisionQueryParams TraceParams(FName(TEXT("Trunk Spline - Trace")), true, this);
    float TrunkRadius = InitalTrunkRadius;
    bool Hit = false;

    // Vars for main Loop, building spline
    bool SplineAtTarget = false;
    float CurrentSplineLength = 0.0f;
    int32 SegmentCount = 0;
    int32 MaxSegmentCount = (GrowTarget == EGrowTarget::GrowDirection) ? (GrowSize / SegmentSize) * 1.5f : (GrowTargetLocation.Size() / SegmentSize) * 1.5f;
    UE_LOG(Log_DGP, Log, TEXT("Calculated max segment-Count: [%d]"), MaxSegmentCount);

    // Vars for internal Loop, finding good path
    int32 Attempts = 0;
    int32 MaxAttempts = 5;
    bool FoundGoodPath = false;

    // Draw Debug for [GrowTarget]
    if (GrowTarget == EGrowTarget::GrowDirection)   DrawDebugArrowAuto(CurrentLoc, CurrentLoc + (FastNormalize(GrowDirection) * GrowSize), EDebugType::DebugOnlyMainInfo, FColor::Green);
    else                                            DrawDebugSphereAuto(EndLocation, TargetGrowPercision, EDebugType::DebugOnlyMainInfo, FColor::Green);

    // Calc spline points
    while (!(SplineAtTarget || SegmentCount >= MaxSegmentCount)) {

        // DEBUG
        UE_LOG(Log_DGP, Log, TEXT("."));
        UE_LOG(Log_DGP, Log, TEXT(" - - [%d] - - - - - - - - - - - - - - - - - - - - - - - -"), SegmentCount);

        TrunkRadius = InitalTrunkRadius * (1 - (SegmentCount / MaxSegmentCount));

        // Search for GOOD Segment (doen't collide)
        FoundGoodPath = false;
        Attempts = 0;
        while (!(FoundGoodPath || Attempts >= MaxAttempts)) {

            // Set [TraceNormal] Acording to [GrowTarget]
            if (GrowTarget == EGrowTarget::GrowDirection)
                TraceNormal = FastNormalize(GrowDirection);
            else
                TraceNormal = FastNormalize(EndLocation - CurrentLoc);

            // Make [TraceEnd]
            FVector RandomVec = (RandomVector() * (SegmentSize * InfluenceOfRandomVector) * (1 - (SegmentCount / MaxSegmentCount)));
            FVector LerpVector = FastNormalize(FMath::Lerp(TraceNormal, PrevTraceNormal, InfluenceOfPreviousSegment)) * SegmentSize;
            TraceEnd = (CurrentLoc + LerpVector + RandomVec);

            DrawDebugArrowAuto(CurrentLoc, CurrentLoc + LerpVector, EDebugType::DebugAllInfo, FColor::White);  // Trace for LerpVector
            DrawDebugArrowAuto(CurrentLoc + LerpVector, TraceEnd, EDebugType::DebugAllInfo, FColor::Blue);      // Trace for RandomVec

            // Override [TraceNormal] after adding [RandomVec]
            TraceNormal = FastNormalize(TraceEnd - CurrentLoc);

            // Trace for trunk segment
            if (TracesType == ETraceType::UseLineTrace)
                Hit = World->LineTraceSingleByChannel(HitResult, CurrentLoc, TraceEnd, ECC_Visibility, TraceParams);
            else
                Hit = World->SweepSingleByChannel(HitResult, CurrentLoc, TraceEnd, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeSphere(TrunkRadius), TraceParams);

            // Found GOOD Segment
            if (!Hit)
                FoundGoodPath = true;

            Attempts++;
        }

        // Draw Last Trace
        if (TracesType == ETraceType::UseLineTrace)
            DrawDebugForLineTraceAuto(HitResult, Hit, EDebugType::DebugAllInfo);
        else
            DrawDebugForSphereTraceAuto(HitResult, Hit, TrunkRadius, EDebugType::DebugAllInfo);

        // Handle Bad segment => Calc new end-of-segment with recursive "Colide and Slide"
        if (!FoundGoodPath)
            TraceEnd = ColideAndSlide(HitResult, 0, TraceParams, TrunkRadius);

        // Merge Segment-Points if to close
        if ((CurrentLoc - TraceEnd).Size() <= MergeDistance) {

            int32 LastIndex = SplinePoints.Num() - 1;
            CurrentSplineLength -= (SplinePoints[LastIndex] - TraceEnd).Size() / 2;
            SplinePoints[LastIndex] = MiddleOfTwoVetors(SplinePoints[LastIndex], TraceEnd);
            DrawDebugArrowAuto(TraceEnd, SplinePoints[LastIndex], EDebugType::DebugAllInfo, FColor::Purple);
            TraceEnd = SplinePoints[LastIndex];
        } else {

            SplinePoints.Emplace(TraceEnd);
        }

        // Set Loop parameter
        CurrentLoc = TraceEnd;
        PrevTraceNormal = TraceNormal;
        SegmentCount++;
        if (GrowTarget == EGrowTarget::GrowDirection) {

            CurrentSplineLength += (CurrentLoc - TraceEnd).Size();
            SplineAtTarget = (CurrentSplineLength >= GrowSize);
            UE_LOG(Log_DGP, Log, TEXT("   Current Progress: %.0f%"), (CurrentSplineLength / GrowSize) * 100);
        } else {

            SplineAtTarget = ((EndLocation - CurrentLoc).Size() < TargetGrowPercision);
            UE_LOG(Log_DGP, Log, TEXT("   Distance to [Target Location]: %.0f"), (EndLocation - CurrentLoc).Size());
        }
    }

    // Visualize resulting TrunkLine
    for (int32 x = 0; x < SplinePoints.Num() - 1; x++) {

        DrawDebugLineAuto(SplinePoints[x], SplinePoints[x + 1], EDebugType::DebugOnlyMainInfo, FColor::Black);
        DrawDebugPointAuto(SplinePoints[x + 1], EDebugType::DebugOnlyMainInfo, FColor::Black);
    }
}




/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    - - - - - FUNCTIONS			(PRIVATE)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Get Brightness at specific Location
void ADG_Base::GetBrightnessAtLocation(FVector TargetLocation) {


}

// "Collide and Slide" algorithm
FVector ADG_Base::ColideAndSlide(FHitResult& HitResult, int32 Iteration, FCollisionQueryParams TraceParams, float TraceRadius) {

    // Savegard against infinite loop
    if (Iteration >= MaxBounces)
        return FVector(0);

    // herper vars
    bool CollisionHit;
    FVector TraceNormalVec = FastNormalize(HitResult.TraceStart - HitResult.TraceEnd);

    // Get [Corner Location]
    float angle = AngleVectorsRad(TraceNormalVec, HitResult.ImpactNormal);
    FVector CornerPoint = HitResult.Location + (TraceNormalVec * TraceRadius / FMath::Cos(angle));

    // Get Location for [End of bend] = [CornerPoint] + [ImpactNormal * TraceRadius] + [SegmentMultiplierAfterCollision]
    FVector EndLoc = CornerPoint + (FastNormalize((HitResult.Location + (HitResult.ImpactNormal * TraceRadius)) - CornerPoint) * ((CornerPoint - HitResult.TraceEnd).Size() * SegmentMultiplierAfterCollision));
    DrawDebugPointAuto(EndLoc);

    // Trace for perpendicular section
    if (TracesType == ETraceType::UseLineTrace) {

        CollisionHit = World->LineTraceSingleByChannel(HitResult, CornerPoint, EndLoc, ECC_Visibility, TraceParams);
        DrawDebugForLineTraceAuto(HitResult, CollisionHit, EDebugType::DebugAllInfo);
    } else {

        CollisionHit = World->SweepSingleByChannel(HitResult, CornerPoint, EndLoc, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeSphere(TraceRadius), TraceParams);
        DrawDebugForSphereTraceAuto(HitResult, CollisionHit, TraceRadius, EDebugType::DebugAllInfo);
    }

    // Handle recursion
    if (CollisionHit)       return ColideAndSlide(HitResult, Iteration + 1, TraceParams);
    else                    return EndLoc;
}

// Auto draw DebugLine if [DrawDebug] in actor settings is set
void ADG_Base::DrawDebugForLineTraceAuto(const FHitResult& HitResult, bool Hit, TEnumAsByte<EDebugType> DebugLevel, FColor Color, FColor HitColor, float Size) {

    if (DebugType.GetIntValue() >= DebugLevel) {

        if (Hit && HitResult.bBlockingHit) {
            // Green up to the blocking hit, Red thereafter
            DrawDebugLine(World, HitResult.TraceStart, HitResult.Location, Color, true);
            DrawDebugLine(World, HitResult.Location, HitResult.TraceEnd, HitColor, true);
            DrawDebugPoint(World, HitResult.ImpactPoint, Size, Color, true, 0.0f);
        } else {
            // no hit means all green
            DrawDebugLine(World, HitResult.TraceStart, HitResult.TraceEnd, Color, true);
        }
    }
}

// Draw Debug for sphere-trace
void ADG_Base::DrawDebugForSphereTraceAuto(const FHitResult& HitResult, bool Hit, float Radius, TEnumAsByte<EDebugType> DebugLevel, FColor Color, FColor HitColor) {

    if (DebugType.GetIntValue() >= DebugLevel) {

        if (Hit && HitResult.bBlockingHit) {
            // Green up to the blocking hit, Red thereafter
            DrawDebugCapuleForSphereTrace(World, HitResult.TraceStart, HitResult.Location, Radius, Color, true, 0.0f);
            DrawDebugCapuleForSphereTrace(World, HitResult.Location, HitResult.TraceEnd, Radius, HitColor, true, 0.0f);
            DrawDebugPoint(World, HitResult.ImpactPoint, 10.0f, Color, true, 0.0f);
        } else {
            // no hit means all green
            DrawDebugCapuleForSphereTrace(World, HitResult.TraceStart, HitResult.TraceEnd, Radius, Color, true, 0.0f);
        }
    }
}

// Draw a capsule to represent [Sphere Trace]
void ADG_Base::DrawDebugCapuleForSphereTrace(const UWorld* InWorld, FVector const& Start, FVector const& End, float Radius, FColor const& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority) {
    FVector const TraceVec = End - Start;
    float const Dist = TraceVec.Size();

    FVector const Center = Start + TraceVec * 0.5f;
    float const HalfHeight = (Dist * 0.5f) + Radius;

    FQuat const CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
    ::DrawDebugCapsule(InWorld, Center, HalfHeight, Radius, CapsuleRot, Color, bPersistentLines, LifeTime, DepthPriority);
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    - - - - - FUNCTIONS			(FORCEINLINE)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//Start Measurement of Execution Time
FTimeMeasurement ADG_Base::StartTimeMeasuring(FString MainProccessName = "") {

    /*  COPY TO START

    // Start Measurement of Execution Time
    FTimeMeasurement LocMD = StartTimeMeasuring(ProccessName);
    */

    // Print Notice
    UE_LOG(Log_DGP, Log, TEXT("========================================================================================================================================================================="));
    UE_LOG(Log_DGP, Log, TEXT(" Starting Measurement of [%s]"), *MainProccessName);
    UE_LOG(Log_DGP, Log, TEXT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"));

    // get current Timestamp and return Struct
    double StartTime = FPlatformTime::Seconds();
    FTimeMeasurement LocMD = FTimeMeasurement(StartTime, MainProccessName, { StartTime });

    return LocMD;
}

// Log Execution duration of Sub-Proccess
void ADG_Base::MiddleTimeMeasuring(FTimeMeasurement* MeasurementData, FString SubProccessName) {

    /*  COPY TO END OF SUBPROCCESS

    // Log Execution duration of Sub-Proccess
    MiddleTimeMeasuring(&LocMD, FString::Printf(TEXT("Sub Proccess Name")));
    */

    double CurrentTime = FPlatformTime::Seconds();
    double LastStep = MeasurementData->StepsTime[MeasurementData->StepsTime.Num() - 1];
    double Duration = (CurrentTime - LastStep) * 1000;

    MeasurementData->StepsNames.Add(SubProccessName);
    MeasurementData->StepsTime.Add(CurrentTime);

    // Print Notice
    UE_LOG(Log_DGP, Log, TEXT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"));
    UE_LOG(Log_DGP, Log, TEXT(" SubProcces [%s] duration %.4f ms"), *SubProccessName, Duration);
    UE_LOG(Log_DGP, Log, TEXT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"));
}

// Log Execution duration of Main-Proccess
void ADG_Base::MeasureExecutionTime(FTimeMeasurement* MeasurementData) {

    /*  COPY TO END OF MAIN-PROCCESS

    // Log Execution duration of Main-Proccess
    MeasureExecutionTime(&LocMD);
    */

    // Calc MainProccess duration
    double end = FPlatformTime::Seconds();
    double Duration = (end - MeasurementData->StartTime) * 1000;

    // Log Main- and SubProccesses duration
    UE_LOG(Log_DGP, Log, TEXT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"));

    // If StepsTime is bigger than 0 THEN print measurement for every segment 
    if (MeasurementData->StepsTime.Num() > 1) {

        double MiddleDuraton = 0.0f;
        for (int32 x = 1; x < MeasurementData->StepsTime.Num(); x++) {

            MiddleDuraton = (MeasurementData->StepsTime[x - 1] - MeasurementData->StepsTime[x]) * 1000;
            UE_LOG(Log_DGP, Log, TEXT(" Sub-Proccess [%s] duration: %.4f ms"), *MeasurementData->StepsNames[x - 1], MiddleDuraton);
        }
    }

    UE_LOG(Log_DGP, Log, TEXT(" Proccessing Time of [%s]: %.4f ms"), *MeasurementData->MainPreoccesName, Duration);
    UE_LOG(Log_DGP, Log, TEXT("========================================================================================================================================================================="));
}

// faster version of Normalize Vector
FVector ADG_Base::FastNormalize(FVector Vector) {

    const float temp = FMath::InvSqrtEst((Vector.X * Vector.X) + (Vector.Y * Vector.Y) + (Vector.Z * Vector.Z));
    FVector res = Vector * temp;
    return res;
}

// Converts a bool to a string
FString ADG_Base::BoolToString(bool value) {
    return value ? FString::Printf(TEXT("true")) : FString::Printf(TEXT("false"));
}

// simple function to calc angle between vectors (does NOT respect direction: value = 0 - 180)
float ADG_Base::AngleVectorsRad(const FVector Vector1, const FVector Vector2) {

    FVector LocVec1 = FastNormalize(Vector1);
    FVector LocVec2 = FastNormalize(Vector2);
    double tempRes = FVector::DotProduct(LocVec1, LocVec2);

    return UKismetMathLibrary::Acos(tempRes);
}

// Auto draw DebugPoint if [DrawDebug] in actor settings is set
void ADG_Base::DrawDebugPointAuto(const FVector Location, TEnumAsByte<EDebugType> DebugLevel, FColor Color, float Size) {

    if (DebugType.GetIntValue() >= DebugLevel)
        DrawDebugPoint(World, Location, Size, Color, true);
}

// Auto draw DebugLine if [DrawDebug] in actor settings is set
void ADG_Base::DrawDebugLineAuto(const FVector& Start, const FVector& End, TEnumAsByte<EDebugType> DebugLevel, FColor Color, float Size) {

    if (DebugType.GetIntValue() >= DebugLevel)
        DrawDebugLine(World, Start, End, Color, true);
}

// Auto draw DebugLine if [DrawDebug] in actor settings is set
void ADG_Base::DrawDebugSphereAuto(const FVector& Loc, const float Size, TEnumAsByte<EDebugType> DebugLevel, FColor Color) {

    if (DebugType.GetIntValue() >= DebugLevel)
        DrawDebugSphere(World, Loc, Size, 16, Color, true);
}

// Auto draw DebugLine if [DrawDebug] in actor settings is set
void ADG_Base::DrawDebugArrowAuto(const FVector& Start, const FVector& End, TEnumAsByte<EDebugType> DebugLevel, FColor Color) {

    if (DebugType.GetIntValue() >= DebugLevel)
        DrawDebugDirectionalArrow(World, Start, End, (Start - End).Size(), Color, true);
}

// Simple function to generate random Vector
FVector ADG_Base::RandomVector() {

    return FastNormalize(FVector(FMath::FRandRange(-1.0f, 1.0f), FMath::FRandRange(-1.0f, 1.0f), FMath::FRandRange(-1.0f, 1.0f)));
}

// Simple function to generate random Vector
FVector ADG_Base::MiddleOfTwoVetors(const FVector& Start, const FVector& End) {

    return ((Start + End) / 2);
}

// Visualize LineTrace IMPORTANT - NEEDS [WORLD] TO BE SET - !!
void ADG_Base::VisualizeLinetrace(bool LineTraceHit, FVector StartLocation, FVector EndLocation, FVector MiddleLocation) {

    if (LineTraceHit) {
        DrawDebugLine(World, StartLocation, MiddleLocation, FColor::Green, false, 5);
        DrawDebugLine(World, MiddleLocation, EndLocation, FColor::Red, false, 5);
    } else
        DrawDebugLine(World, StartLocation, EndLocation, FColor::Green, false, 5);
}
