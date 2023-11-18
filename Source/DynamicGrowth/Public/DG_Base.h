// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Materials/MaterialInterface.h"
#include "Components/SplineComponent.h"
#include "ProceduralMeshComponent.h"

#include "DG_Base.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(Log_DGP, Log, All);

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 - - - - - ENUMS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

UENUM()
enum EGrowTarget {
	GrowDirection			UMETA(DisplayName = "Grow in Direction"),
	GrowToTargetLocation	UMETA(DisplayName = "Grow to Target Location"),
};

UENUM()
enum ETraceType {
	UseLineTrace			UMETA(DisplayName = "Use Line-Trace"),
	UseSphereTrace			UMETA(DisplayName = "Use Sphere-Trace"),
};

UENUM()
enum EDebugType {
	DebugNone			UMETA(DisplayName = "None"),
	DebugOnlyMainInfo	UMETA(DisplayName = "Show only Main Info"),
	DebugAllInfo		UMETA(DsiplayName = "Show All Info"),
};

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 - - - - - STRUCTS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

USTRUCT()
struct FTimeMeasurement {

	FTimeMeasurement() {
		StartTime = 0.0f;
		MainPreoccesName = "Default Proccess-Name";
		StepsTime = {};
		StepsNames = {};
	}

	FTimeMeasurement(double inStartTime, FString inMainPreoccesName, TArray<double> inStepsTime) {
		StartTime = inStartTime;
		MainPreoccesName = inMainPreoccesName;
		StepsTime = inStepsTime;
		StepsNames = {};
	}

	FTimeMeasurement(double inStartTime, FString inMainPreoccesName, TArray<double> inStepsTime, TArray<FString> inStepsNames) {
		StartTime = inStartTime;
		MainPreoccesName = inMainPreoccesName;
		StepsTime = inStepsTime;
		StepsNames = inStepsNames;
	}

	UPROPERTY()
		double StartTime = 0.0f;

	UPROPERTY()
		FString MainPreoccesName;

	UPROPERTY()
		TArray<double> StepsTime;

	UPROPERTY()
		TArray<FString> StepsNames;

	GENERATED_USTRUCT_BODY()
};

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 - - - - - CLASS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

UCLASS()
class DYNAMICGROWTH_API ADG_Base : public AActor {

	GENERATED_BODY()

		// Construction Script in C++
		virtual void OnConstruction(const FTransform& transform) override;

public:
	// Sets default values for this actor's properties
	ADG_Base();


	/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	 - - - - - VARIABLES
	--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

	// - - - -		General Settings	- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	// Percentage of trunk growth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|General", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float GrowProgress = 0.0f;

	// - - - -		Unsorted			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	// Number of trunks that should grow 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Unsorted")
		int32 NumOfTrunks = 1;

	//SlineComponents for trunks (Trunks grow the full length from RootBae to TargetLocation)
	UPROPERTY(VisibleDefaultsOnly, AdvancedDisplay, Category = "Grow Settings|Unsorted")
		TArray<USplineComponent*> TrunkSplines = {};

	// - - - -		Grow Target			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	//Whether collision should be created for this section.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation")
		TEnumAsByte<EGrowTarget> GrowTarget = EGrowTarget::GrowDirection;

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Grow in Direction")
		FVector GrowDirection = FVector(0, 0, 1);

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Grow in Direction")
		float GrowSize = 1000.0f;

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Grow to Target Location")
		FVector GrowTargetLocation = FVector(0, 0, 1000);

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Grow to Target Location")
		float TargetGrowPercision = 100.0f;

	// - - - -		Spline			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	//Whether collision should be created for this section.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		TEnumAsByte<ETraceType> TracesType = ETraceType::UseLineTrace;

	// Inital Radius of Trunk
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		float InitalTrunkRadius = 20.0f;

	// Percentage of trunk growth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		float SegmentSize = 100.0f;

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float InfluenceOfPreviousSegment = 0.5f;

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float InfluenceOfRandomVector = 0.5f;

	/*Merges "newly added point" with "previous point" if the distance between them is smaller than [MergeDistance]
	Tipp: nice looking results for ([TrunkRadius] * 3)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		float MergeDistance = 60.0f;

	// Aprocemate Location for Trunks to grow to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		bool MaualSeed = false;

	// Seed used for Randoms if [Maual Seed] is true
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		int32 RandomSeed = 42;

	/*	Wheater to draw Debug lines
	Black:      Points for Spline
	Green:       Grow Target
	White:       Lerped Vector between [Grow Target] and [Previous Segment Normal]
	Blue:         Random Vector
	Purple:     Merge Vector, IF [current point] and [prev-point] to close*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline")
		TEnumAsByte<EDebugType> DebugType = EDebugType::DebugNone;

	// Multiples the rest-Length of a segment that hit an obsticle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline|Collision")
		float SegmentMultiplierAfterCollision = 1.0f;

	// Max Iterations for "Collide and Slide" algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Spline|Collision")
		int32 MaxBounces = 4;

	// Max Iterations for "Collide and Slide" algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Circle of Trunks")
		int32 CircleOfTrunksNum = 4;

	// Max Iterations for "Collide and Slide" algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Trunk Generation|Circle of Trunks")
		float CircleOfTrunksRadius = 4;

	// - - - -		Collision			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	//Whether collision should be created
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Collision")
		bool CreateCollision;

	//Whether simple collision should be created for character to walk apon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Collision")
		bool CreateWalkableCollision;

	// - - - -		Materials			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Material for Trunks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "")
		UMaterialInterface* TrunkMaterial = nullptr;

	// Material for Roots
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|Materials")
		UMaterialInterface* RootMaterial = nullptr;

	// - - - -		StaticMeshes		- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Static Meshes for Leaves
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|StaticMeshes")
		TArray<UStaticMesh*> Leaves = {};

	// Static Meshes for Twigs
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation Settings|StaticMeshes")
		TArray<UStaticMesh*> Twigs = {};












	UPROPERTY(VisibleDefaultsOnly, AdvancedDisplay, Category = "Generation Settings|Advanced")
		UWorld* World = nullptr;

	UPROPERTY()
		FString FunctionName = "";

	UPROPERTY(VisibleDefaultsOnly, AdvancedDisplay, Category = "Generation Settings|Advanced")
		FString AbbortingNotice = "=> ABORTING FUNCTION";

	/*
	bool NeedsSunToGrow = false;
	float SunEnergyAtLocation = 0.0f;
	*/


protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable,
		meta = (DisplayName = "Create Trunk Spline (Instant)"),
		Category = "Ceate|Trunk|Instant")
		void CreateTrunkSplineInstant(FVector StartLoc, bool OverrideInitalDirection = false, FVector InitalGrowDirection = FVector(0, 0, 1));

private:

	/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		- - - - - FUNCTIONS			(PRIVATE)
	--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

	void SpawnCircleOfTrunks(FVector Direction, int32 number = 6, float Radius = 100.0f);

	// get brightness in level at specific location
	void GetBrightnessAtLocation(FVector TargetLocation);

	// "Collide and Slide" algorithm
	FVector ColideAndSlide(FHitResult& HitResult, int32 Iteration, FCollisionQueryParams TraceParams, float TraceRadius = 20.0f);

	// get brightness in level at specific location
	void DrawDebugForSphereTraceAuto(const FHitResult& HitResult, bool Hit, float Radius, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Green, FColor HitColor = FColor::Red);

	// Simple Ange for Vectorws
	void DrawDebugForLineTraceAuto(const FHitResult& HitResult, bool Hit, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Green, FColor HitColor = FColor::Red, float Size = 10);

	// Draw a capsule to represent [Sphere Trace]
	void DrawDebugCapuleForSphereTrace(const UWorld* InWorld, FVector const& Start, FVector const& End, float Radius, FColor const& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority = 0);

	/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		- - - - - FUNCTIONS			(FORCEINLINE)
	--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

	// prints the start of measuring proccess
	FORCEINLINE FTimeMeasurement StartTimeMeasuring(FString MainProccessName);

	// Prints middle measurment of execution Proccess
	FORCEINLINE void MiddleTimeMeasuring(FTimeMeasurement* MeasurementData, FString SubProccessName);

	// Prints the measurements of executing procceses
	FORCEINLINE void MeasureExecutionTime(FTimeMeasurement* MeasurementData);

	// Fast Normalization of Vector
	FORCEINLINE FVector FastNormalize(FVector Vector);

	// Fast Normalization of Vector
	FORCEINLINE FString BoolToString(bool value);

	// Simple Ange for Vectorws
	FORCEINLINE float AngleVectorsRad(const FVector Vector1, const FVector Vector2);

	// Simple Ange for Vectorws
	FORCEINLINE void DrawDebugPointAuto(const FVector Location, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Blue, float Size = 10);

	// Simple Ange for Vectorws
	FORCEINLINE void DrawDebugLineAuto(const FVector& Start, const FVector& End, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Green, float Size = 10);

	// Simple Ange for Vectorws
	FORCEINLINE void DrawDebugSphereAuto(const FVector& Loc, const float Size = 50.0f, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Green);

	// Simple Ange for Vectorws
	FORCEINLINE void DrawDebugArrowAuto(const FVector& Start, const FVector& End, TEnumAsByte<EDebugType> DebugLevel = EDebugType::DebugAllInfo, FColor Color = FColor::Green);

	// Random Vector of defined size
	FORCEINLINE FVector RandomVector();

	// Random Vector of defined size
	FORCEINLINE FVector MiddleOfTwoVetors(const FVector& Start, const FVector& End);

	// Visualize LineTrace
	FORCEINLINE void VisualizeLinetrace(bool LineTraceHit, FVector StartLocation, FVector EndLocation, FVector MiddleLocation = FVector(0));


};
