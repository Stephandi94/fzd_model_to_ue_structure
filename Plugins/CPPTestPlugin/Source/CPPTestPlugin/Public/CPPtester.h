// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ThirdParty/model/profiles/profile_includes.hpp"
#include "OModel.h"

#include "CPPtester.generated.h"

using namespace model::profile::test1;

UCLASS()
class CPPTESTPLUGIN_API ACPPtester : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPPtester();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	model::profile::Profile selected_profile;

};
