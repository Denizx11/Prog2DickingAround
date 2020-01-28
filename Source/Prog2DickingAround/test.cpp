// Fill out your copyright notice in the Description page of Project Settings.


#include "test.h"

// Sets default values for this component's properties
Utest::Utest()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
   

    player1.kills = 1;
    player2.kills = 2;
	// ...
}


// Called when the game starts
void Utest::BeginPlay()
{
	Super::BeginPlay();


    UE_LOG(LogTemp, Warning, TEXT("Summing: %f"),sum_Number(20.1f,29.2f));
	// ...
	
}


// Called every frame
void Utest::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    

    
    /*
    try {
        if (player1.kills > player2.kills)
        {
            throw player1.kills;
        }
        else {
            throw player2.kills;
        }
    }
    catch (int e)
    {
        if (e == player1.kills)
        {
            player2.kills += 1;
            UE_LOG(LogTemp, Warning, TEXT("Player one wins with %d kills and your HP is %d"), player1.kills, player1.health);
            
        }
        if (e == player2.kills)
        {
            player1.kills += 1;
            UE_LOG(LogTemp, Warning, TEXT("Player two wins with %d kills and your HP is %d"), player2.kills, player2.health);
            
        }
    }
    */
	// ...
}

