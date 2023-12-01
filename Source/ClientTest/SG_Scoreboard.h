// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include <Containers/Array.h>
#include "SG_Scoreboard.generated.h"

USTRUCT(BlueprintType)
struct FScoreboardEntry
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
	FString PlayerName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
	int32 Score;
};

/**
 * 排行榜数据存储
 */
UCLASS(BlueprintType)
class CLIENTTEST_API USG_Scoreboard : public USaveGame
{
	GENERATED_BODY()

public:
	/* 存储文件名 */
	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString SaveSlotName;

	/* 存储槽位 */
	UPROPERTY(VisibleAnywhere, Category = Basic) 
	uint32 UserIndex;

	/* 排行榜列表 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<struct FScoreboardEntry> Entries;

	USG_Scoreboard();
};