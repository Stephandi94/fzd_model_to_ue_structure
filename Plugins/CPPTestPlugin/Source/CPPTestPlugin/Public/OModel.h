// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ThirdParty/model/include/sequence.hpp"
#include "CoreMinimal.h"

/**
	*
	*/
class CPPTESTPLUGIN_API OModel
{
public:

	/**
	*	valid constructor
	*/
	OModel(const model::profile::Profile& _profile);

	void doTest();

	model::profile::Profile getProfile();

	~OModel();

private:
	const model::profile::Profile& selected_profile;
	model::Sequence sequence_of_strategies;

};

