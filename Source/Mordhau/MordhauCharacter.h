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
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              FallingTimeToRagdoll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              FallingTime;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              JumpStaminaCost;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              StaminaRegenTickRate;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			int                                                HealthOnKill;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			bool                                               bIsUnflinchable;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MeleeMissRecoveryModifier;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			int                                                DodgeStaminaCost;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasScaryFace;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
				float                                              DodgeCooldown;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
				float                                              DodgeDuration;
				UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
					float                                              EasyParryUntilTime;
				UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
				bool                                               bDestroyEquipmentOnDeath;
				UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
				float                                              MeleeReleaseModifier;
				UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
				float                                              StaminaCostModifier;
				UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
					float                                              MeleeWindupModifier;
				//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
					//TArray<TWeakObjectPtr<class AActor>>               ActorsThatDestroyWithUs;
					UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
						bool                                               bDoNotUseGrounding;
					UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
						bool                                               bIsRightArmDisabled;
						UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
							bool                                               bIsRightLegDisabled;
						UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
						bool                                               bIsLeftLegDisabled;
						UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
							bool                                               bIsLeftArmDisabled;
							UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
								bool                                               bIsHoldingBlock;
							UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
								bool                                               bDoNotAnimateBreathing;
							UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
								float                                              ReceivedFireDamageModifierWithFireproofPerk;
								UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              ReceivedDamageModifierWithFriendlyPerk;
								UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									int StaminaRegenPerTick;
								UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									int stamina;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
										float StaminaRegenDelay;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									int                                                StaminaOnKill;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              MovementBoostDurationWithRushPerk;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              MinDelayBetweenBattlecries;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              MinDelayBetweenVoiceCommands;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									bool                                               bIsWrithingInPain;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              MaxThirdPersonFOV;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              CurrentFOVOffset;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									struct FVector                                     CameraLocation1P;
									UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
									float                                              UseHoldTime;
//		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
//			class AMordhauEquipment*                           RightHandEquipment;

	//	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
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
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void UseReleased();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void UsePressed();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		bool ValidateInteractionTarget(class AActor* TargetActor);
};
