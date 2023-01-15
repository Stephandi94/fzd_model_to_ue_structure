// Fill out your copyright notice in the Description page of Project Settings.


#include "OModel.h"


OModel::OModel(const model::profile::Profile& _profile) : selected_profile(_profile), sequence_of_strategies(_profile)
{
	std::string name = selected_profile.name;

	FString testText(name.c_str());

	UE_LOG(LogTemp, Warning, TEXT("This is the struct %s with float %f and test_param %f"), *testText, selected_profile.test_float, selected_profile.parameters.test_param);

	/*prof = generate();

	*/

	/*prof = profile::test2::generate();

	name = prof.name;
	FString test2Text(name.c_str());

	UE_LOG(LogTemp, Warning, TEXT("This is the struct %s with float %f"), *test2Text, prof.test_float);*/
}

void OModel::doTest()
{
	UE_LOG(LogTemp, Warning, TEXT("executed 'doTest()', will execute apply() on sequence!"));
	//sequence_of_strategies.apply();
}

model::profile::Profile OModel::getProfile()
{
	return selected_profile;
}

OModel::~OModel() = default;

