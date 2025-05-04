#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UCLASS()
class UEPROJECT_API AEnemy : public AActor
{
	GENERATED_BODY()

public:
	AEnemy();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveDistance = 600.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 200.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	// move along y axis
	FVector MoveDirection = FVector(0.f, 1.f, 0.f);

	// checks so it doesn't move forever
	FVector StartLocation;
	bool bMovingForward = true;
};
