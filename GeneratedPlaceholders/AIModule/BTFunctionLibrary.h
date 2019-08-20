#pragma once

#include "CoreMinimal.h"
#include "BTFunctionLibrary.generated.h"

UCLASS()
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	UFUNCTION(BlueprintCallable, Category = "BTFunctionLibrary")
		void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

};