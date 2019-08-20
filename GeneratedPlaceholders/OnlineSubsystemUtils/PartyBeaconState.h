#pragma once

#include "CoreMinimal.h"
#include "PartyBeaconState.generated.h"

UCLASS()
class UPartyBeaconState : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SessionName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumConsumedReservations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxReservations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumTeams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumPlayersPerTeam;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TeamAssignmentMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ReservedHostTeamNum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ForceTeamNum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRestrictCrossConsole;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPartyReservation> Reservations;


};