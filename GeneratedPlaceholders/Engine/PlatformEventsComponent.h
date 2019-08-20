#pragma once

#include "CoreMinimal.h"
#include "PlatformEventsComponent.generated.h"

UCLASS()
class UPlatformEventsComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate PlatformChangedToLaptopModeDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate PlatformChangedToTabletModeDelegate;

	UFUNCTION(BlueprintCallable, Category = "PlatformEventsComponent")
	bool SupportsConvertibleLaptops();
	UFUNCTION(BlueprintCallable, Category = "PlatformEventsComponent")
		void PlatformEventDelegate__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "PlatformEventsComponent")
		bool IsInTabletMode();
	UFUNCTION(BlueprintCallable, Category = "PlatformEventsComponent")
		bool IsInLaptopMode();

};