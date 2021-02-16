// Fill out your copyright notice in the Description page of Project Settings.


#include "Floater.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFloater::AFloater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomStaticMesh"));

	PlacedLocation = FVector(0.0f);
	WorldOrigin = FVector(0.0f, 0.0f, 0.0f);
	InitialLocation = FVector(0.0f);
	NewLocation = FVector(0.0f);
	InitialDirection = FVector(0.0f, 0.0f, 0.0f);
	Rotation = FRotator(0.0f, 0.0f, 0.0f);
	InitialForce = FVector(0.0f, 0.0f, 0.0f);
	InitialTorque = FVector(0.0f, 0.0f, 0.0f);

	bInitializeFloaterLocations = false;
	bShouldFloat = false;

	RunningTime = 0.f;
	Amplitude = 1.f;
	TimeStretch = 1.f;
}

// Called when the game starts or when spawned
void AFloater::BeginPlay()
{
	Super::BeginPlay();
	
/**	float InitialX = FMath::FRand();
	float InitialY = FMath::FRand();
	float InitialZ = FMath::FRand(); 
*/

/**	float InitialX = FMath::FRandRange(-500.f, 500.f);
	float InitialY = FMath::FRandRange(-500.f, 500.f);
	float InitialZ = FMath::FRandRange(0.f, 500.f); 
*/

/**	InitialLocation.X = InitialX;
	InitialLocation.Y = InitialY;
	InitialLocation.Z = InitialZ; 
*/

//	InitialLocation *= 500.f;

	PlacedLocation = GetActorLocation();

	if (bInitializeFloaterLocations)
	{
		SetActorLocation(InitialLocation);

		//	FHitResult HitResult;
		//	AddActorLocalOffset(InitialDirection, true, &HitResult);
		//	AddActorWorldOffset(InitialDirection, true, &HitResult);

		//	FVector HitLocation = HitResult.Location;
		//	UE_LOG(LogTemp, Warning, TEXT("Hit Location: X = %f, Y = %f, Z = %f"), HitLocation.X, HitLocation.Y, HitLocation.Z);

		//	AddActorLocalRotation(Rotation);
		//	AddActorWorldRotation(Rotation);

	}

	//	StaticMesh->AddForce(InitialForce);
	//	StaticMesh->AddTorque(InitialTorque);

}

// Called every frame
void AFloater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bShouldFloat)
	{
		//	FHitResult HitResult;
		//	AddActorLocalOffset(InitialDirection, true, &HitResult);
		//	AddActorWorldOffset(InitialDirection, true, &HitResult);

		//	FVector HitLocation = HitResult.Location;
		//	UE_LOG(LogTemp, Warning, TEXT("Hit Location: X = %f, Y = %f, Z = %f"), HitLocation.X, HitLocation.Y, HitLocation.Z);

		//	AddActorLocalRotation(Rotation);
		//	AddActorWorldRotation(Rotation);

		//	NewLocation = GetActorLocation();
		//	RunningTime += DeltaTime;

		//	NewLocation.X = NewLocation.X + Amplitude * FMath::Sin(TimeStretch * RunningTime);
		//	NewLocation.Y = NewLocation.Y + Amplitude * FMath::Cos( TimeStretch * RunningTime );
		//	SetActorLocation(NewLocation);


	}

}

