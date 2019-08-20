#pragma once

#include "CoreMinimal.h"
#include "InterpGroup.generated.h"

UCLASS()
class UInterpGroup : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UInterpTrack*> InterpTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName GroupName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor GroupColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollapsed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsFolder : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsParented : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSelected : 1;


};