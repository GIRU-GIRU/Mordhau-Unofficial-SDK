#pragma once

#include "CoreMinimal.h"
#include "EdGraphNode.generated.h"

UCLASS()
class UEdGraphNode : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEdGraphPin_Deprecated*> DeprecatedPins;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NodePosX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NodePosY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NodeWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NodeHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENodeAdvancedPins> AdvancedPinDisplay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ENodeEnabledState EnabledState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUserSetEnabledState : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsNodeEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData03 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasCompilerMessage : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCommentBubblePinned : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCommentBubbleVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCommentBubbleMakeVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString NodeComment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ErrorType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ErrorMsg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid NodeGuid;


};