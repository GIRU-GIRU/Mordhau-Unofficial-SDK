#pragma once

#include "CoreMinimal.h"
#include "BlackboardComponent.generated.h"

UCLASS()
class UBlackboardComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBrainComponent* BrainComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlackboardData* BlackboardAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBlackboardKeyType*> KeyInstances;

	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsInt(const struct FName& KeyName, int IntValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		bool IsVectorValueSet(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		struct FVector GetValueAsVector(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		struct FString GetValueAsString(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		struct FRotator GetValueAsRotator(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		class UObject* GetValueAsObject(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		struct FName GetValueAsName(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		int GetValueAsInt(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		float GetValueAsFloat(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		unsigned char GetValueAsEnum(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		class UClass* GetValueAsClass(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		bool GetValueAsBool(const struct FName& KeyName);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	UFUNCTION(BlueprintCallable, Category = "BlackboardComponent")
		void ClearValue(const struct FName& KeyName);

};