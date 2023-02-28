/*
 * ░▒▓ APPARATIST ▓▒░
 * 
 * File: BubbleCageCell.h
 * Created: 2022-05-11
 * Author: Vladislav Dmitrievich Turbanov (vladislav@turbanov.ru)
 * ───────────────────────────────────────────────────────────────────
 * 
 * Community forums: https://talk.turbanov.ru
 * 
 * Copyright 2019 - 2023, SP Vladislav Dmitrievich Turbanov
 * Made in Russia, Moscow City, Chekhov City ♡
 */

#pragma once

#include "CoreMinimal.h"
#include "Math/Rotator.h"

#include "Rotated.generated.h"


/**
 * Struct representing actor/projectile that have an Rotation in the world.
 */
USTRUCT(BlueprintType, Category = "Basic")
struct APPARATISTRUNTIME_API FRotated
{
	GENERATED_BODY()

  public:

	/* Look forward Rotation of the object. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FQuat Rotation = FQuat{FQuat::Identity};

	/* Default constructor. */
	FRotated()
	{}

	/* Construct the trait by 2D-location. */
	FORCEINLINE
	FRotated(const FQuat& InRotation)
	  : Rotation(InRotation)
	{}

	/* Simple get Rotation pure function. */
	FORCEINLINE const FQuat&
	GetRotation() const
	{
		return Rotation;
	}

	/* Simple get Rotation pure function. */
	FORCEINLINE FRotator
	GetRotator() const
	{
		return Rotation.Rotator();
	}

	/* Simple set Rotation pure function. */
	FORCEINLINE void
	SetRotation(const FQuat& InRotation)
	{
		Rotation = InRotation;
	}
};
