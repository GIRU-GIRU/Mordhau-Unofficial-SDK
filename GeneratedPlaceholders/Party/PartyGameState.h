#pragma once

#include "CoreMinimal.h"
#include "PartyGameState.generated.h"

UCLASS()
class UPartyGameState : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UScriptStruct* PartyStateRefDef;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl OwningUserId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDebugAcceptingMembers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStayWithPartyOnDisconnect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PartyMemberStateClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ReservationBeaconClientClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APartyBeaconClient* ReservationBeaconClient;


};