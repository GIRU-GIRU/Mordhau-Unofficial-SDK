// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MordhauInventoryItem.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UMordhauInventoryItem : public UObject
{
	GENERATED_BODY()
	
public:
	class UTexture2D*                                  ItemIcon;
	int                                                ItemDefID;
	//struct FText                                       ItemName;
	//EItemRarity                                        ItemRarity;
	
	
};
