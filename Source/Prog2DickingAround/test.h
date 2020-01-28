// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "test.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROG2DICKINGAROUND_API Utest : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Utest();
	template <class MY_INT>
	MY_INT sum_Number(MY_INT Num1, MY_INT Num2)
	{
		return Num1 + Num2;
	}
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	struct player
	{
		int32 health = 100;
		int32 kills;
	};
	player player1;
	player player2;
};
