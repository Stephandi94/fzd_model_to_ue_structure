// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPtester.h"
#include <string>

// Sets default values
ACPPtester::ACPPtester() : selected_profile(generate())
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ACPPtester::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Instance of CPPTester started."));

	

	OModel fzd_model(selected_profile);
	//model_test.doTest();
}

// Called every frame
void ACPPtester::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

