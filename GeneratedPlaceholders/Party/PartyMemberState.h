#pragma once

#include "CoreMinimal.h"
#include "PartyMemberState.generated.h"

UCLASS()
class UPartyMemberState : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl UniqueId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText DisplayName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UScriptStruct* MemberStateRefDef;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasAnnouncedJoin;

	UFUNCTION(BlueprintCallable, Category = "PartyMemberState")
	bool IsPartyLeader();
	UFUNCTION(BlueprintCallable, Category = "PartyMemberState")
		bool IsLocalPlayer();

};