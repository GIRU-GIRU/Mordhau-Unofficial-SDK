#pragma once

#include "CoreMinimal.h"
#include "PlayFabProfilesModelDecoder.generated.h"

UCLASS()
class UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
	struct FProfilesSetProfileLanguageResponse STATIC_decodeSetProfileLanguageResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
		struct FProfilesSetGlobalPolicyResponse STATIC_decodeSetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
		struct FProfilesSetEntityProfilePolicyResponse STATIC_decodeSetEntityProfilePolicyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
		struct FProfilesGetGlobalPolicyResponse STATIC_decodeGetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
		struct FProfilesGetEntityProfilesResponse STATIC_decodeGetEntityProfilesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesModelDecoder")
		struct FProfilesGetEntityProfileResponse STATIC_decodeGetEntityProfileResponseResponse(class UPlayFabJsonObject* response);

};