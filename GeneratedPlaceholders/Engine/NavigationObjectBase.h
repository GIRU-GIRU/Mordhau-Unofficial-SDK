#pragma once

#include "CoreMinimal.h"
#include "NavigationObjectBase.generated.h"

UCLASS()
class ANavigationObjectBase : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBillboardComponent* GoodSprite;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBillboardComponent* BadSprite;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsPIEPlayerStart : 1;


};