#include "Enemy.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();

	// Ensure direction is normalized
	MoveDirection = MoveDirection.GetSafeNormal();
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DeltaMove = MoveSpeed * DeltaTime;
	FVector Offset = MoveDirection * DeltaMove;
	FVector CurrentLocation = GetActorLocation();

	// Move in the chosen direction
	if (bMovingForward)
	{
		CurrentLocation += Offset;

		// Check if we've gone too far
		if (FVector::Dist(StartLocation, CurrentLocation) >= MoveDistance)
		{
			bMovingForward = false;
		}
	}
	else
	{
		CurrentLocation -= Offset;

		if (FVector::Dist(StartLocation, CurrentLocation) <= 1.f)
		{
			bMovingForward = true;
		}
	}

	SetActorLocation(CurrentLocation);
}
