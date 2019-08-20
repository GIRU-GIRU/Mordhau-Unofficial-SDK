#pragma once

#include "CoreMinimal.h"
#include "ReserveMordhauServerSessionSlots.generated.h"

UCLASS()
class UReserveMordhauServerSessionSlots : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFull;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FServerSearchResult SearchResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSteamID> PartyMembers;

	UFUNCTION(BlueprintCallable, Category = "ReserveMordhauServerSessionSlots")
	class UReserveMordhauServerSessionSlots* STATIC_ReserveMordhauServerSessionSlots(class UObject* WorldContextObject, const struct FServerSearchResult& SearchResult, TArray<struct FSteamID> PartyMembers);

};