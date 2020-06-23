// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine.h"


// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
int APickup::HealthPickup(float DeltaTime, int health)
{
	if (health == 100) {
		return 100;
	}
	else if (health<100 && health>75) {
		return 100;
	}
	else {
		return health + 25;
	}
	
}

int APickup::AmmoPickup(float DeltaTime, int ammo)
{
	if (ammo == 30) {
		return 30;
	}
	else if (ammo < 30 && ammo>20) {
		return 30;
	}
	else {
		return ammo + 10;
	}
}



