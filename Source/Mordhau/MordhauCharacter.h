// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Mordhau_classes.hpp"
#include "AdvancedCharacter.h"
//#include "MordhauEquipment.h"
//#include "GameFramework/Actor.h"
#include "MordhauCharacter.generated.h"

/**
 * 
 */

UCLASS()
class MORDHAU_API AMordhauCharacter : public AAdvancedCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FallingTimeToRagdoll;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FallingTime;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float                                              JumpStaminaCost;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float                                              StaminaRegenTickRate;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int                                                HealthOnKill;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool                                               bIsUnflinchable;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float                                              MeleeMissRecoveryModifier;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int                                                DodgeStaminaCost;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bHasScaryFace;
			UPROPERTY(EditAnywhere, BlueprintReadWrite)
				float                                              DodgeCooldown;
			UPROPERTY(EditAnywhere, BlueprintReadWrite)
				float                                              DodgeDuration;
				UPROPERTY(EditAnywhere, BlueprintReadWrite)
					float                                              EasyParryUntilTime;
				UPROPERTY(EditAnywhere, BlueprintReadWrite)
				bool                                               bDestroyEquipmentOnDeath;
				UPROPERTY(EditAnywhere, BlueprintReadWrite)
				float                                              MeleeReleaseModifier;
				UPROPERTY(EditAnywhere, BlueprintReadWrite)
				float                                              StaminaCostModifier;
				UPROPERTY(EditAnywhere, BlueprintReadWrite)
					float                                              MeleeWindupModifier;
				//UPROPERTY(EditAnywhere, BlueprintReadWrite)
					//TArray<TWeakObjectPtr<class AActor>>               ActorsThatDestroyWithUs;
					UPROPERTY(EditAnywhere, BlueprintReadWrite)
						bool                                               bDoNotUseGrounding;
					UPROPERTY(EditAnywhere, BlueprintReadWrite)
						bool                                               bIsRightArmDisabled;
						UPROPERTY(EditAnywhere, BlueprintReadWrite)
							bool                                               bIsRightLegDisabled;
						UPROPERTY(EditAnywhere, BlueprintReadWrite)
						bool                                               bIsLeftLegDisabled;
						UPROPERTY(EditAnywhere, BlueprintReadWrite)
							bool                                               bIsLeftArmDisabled;
							UPROPERTY(EditAnywhere, BlueprintReadWrite)
								bool                                               bIsHoldingBlock;
							UPROPERTY(EditAnywhere, BlueprintReadWrite)
								bool                                               bDoNotAnimateBreathing;
							UPROPERTY(EditAnywhere, BlueprintReadWrite)
								float                                              ReceivedFireDamageModifierWithFireproofPerk;
								UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              ReceivedDamageModifierWithFriendlyPerk;
								UPROPERTY(EditAnywhere, BlueprintReadWrite)
									int StaminaRegenPerTick;
								UPROPERTY(EditAnywhere, BlueprintReadWrite)
									int stamina;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
										float StaminaRegenDelay;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									int                                                StaminaOnKill;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              MovementBoostDurationWithRushPerk;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              MinDelayBetweenBattlecries;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              MinDelayBetweenVoiceCommands;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									bool                                               bIsWrithingInPain;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              MaxThirdPersonFOV;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              CurrentFOVOffset;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									struct FVector                                     CameraLocation1P;
									UPROPERTY(EditAnywhere, BlueprintReadWrite)
									float                                              UseHoldTime;
//		UPROPERTY(EditAnywhere, BlueprintReadWrite)
//			class AMordhauEquipment*                           RightHandEquipment;

	//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//			TArray<class AMordhauEquipment*>                   Equipment;
	//	UFUNCTION(BlueprintCallable)
	//			bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
public:
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 void LeftTeamArea(int OwningTeam);
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInKnockback();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInEnemyTeamArea();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInAnyTeamArea();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsHoldingBlock();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool HasPerk(uint8 PerkId);
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool CanEasyParry();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void EnteredTeamArea(int OwningTeam);
};
