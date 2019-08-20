#pragma once

#include "CoreMinimal.h"
#include "KismetGuidLibrary.generated.h"

UCLASS()
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
	void STATIC_Parse_StringToGuid(const struct FString& GuidString, struct FGuid* OutGuid, bool* Success);
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		bool STATIC_NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		struct FGuid STATIC_NewGuid();
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		bool STATIC_IsValid_Guid(const struct FGuid& InGuid);
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		void STATIC_Invalidate_Guid(struct FGuid* InGuid);
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		bool STATIC_EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	UFUNCTION(BlueprintCallable, Category = "KismetGuidLibrary")
		struct FString STATIC_Conv_GuidToString(const struct FGuid& InGuid);

};