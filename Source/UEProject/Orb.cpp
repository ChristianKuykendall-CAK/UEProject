 // Fill out your copyright notice in the Description page of Project Settings.


#include "Orb.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
AOrb::AOrb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOrb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOrb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AOrb::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	// Overlap detected
}
