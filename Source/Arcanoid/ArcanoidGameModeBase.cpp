// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArcanoidGameModeBase.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Brick.h"


void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//brick01 = World->SpawnActor<ABrick>(FVector(-120.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f));
		GetWorldTimerManager().SetTimer(MemberTimer, this, &AArcanoidGameModeBase::spwaneer, 3.f, true, 2.f);
	}
}

void AArcanoidGameModeBase::spwaneer()
{
	UWorld* const World = GetWorld();
	switch (FMath::RandRange(0,4))
	{
	case 0:World->SpawnActor<ABrick>(FVector(-120.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f)); break;
	case 1:World->SpawnActor<ABrick>(FVector(-60.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f)); break;
	case 2:World->SpawnActor<ABrick>(FVector(0.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f)); break;
	case 3:World->SpawnActor<ABrick>(FVector(60.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f)); break;
	case 4:World->SpawnActor<ABrick>(FVector(120.f, 0.f, 350.f), FRotator(0.f, 0.f, 0.f)); break;
	default:break;
	}
}
