#pragma once

#include "CoreMinimal.h"
#include "CharacterProfileBPWrapper.generated.h"

UCLASS()
class UCharacterProfileBPWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile Profile;

	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
	void TogglePerk(unsigned char Perk);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetWearablePattern(unsigned char Slot, unsigned char NewPattern);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetWearableId(unsigned char Slot, unsigned char NewId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetWearableColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetVoicePitch(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetVoice(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetStrong(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetSkinny(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetSkinColor(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetProfileName(const struct FText& NewName);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetMetalTint(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetMetalRoughnessScale(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetIsFemale(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetHairColor(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetHair(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetFat(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetFacialHair(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetFace(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEyeColor(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEyebrows(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentSkin(unsigned char Slot, unsigned char NewSkin);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentPattern(unsigned char Slot, unsigned char NewPattern);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentPartId(unsigned char Slot, unsigned char PartIdx, unsigned char NewPartId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentId(unsigned char Slot, unsigned char NewId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentCustomizationDirect(unsigned char Slot, const struct FEquipmentCustomization& NewCustomization);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEquipmentColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEmblemColor(unsigned char ColorIdx, unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetEmblem(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void SetAge(unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void RemoveAllEquipment();
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		bool HasPerk(unsigned char Perk);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfileBPWrapper")
		void ForceValidate();

};