#pragma once

#include "CoreMinimal.h"
#include "PlayFabMatchmakerModelDecoder.generated.h"

UCLASS()
class UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerModelDecoder")
	struct FMatchmakerUserInfoResponse STATIC_decodeUserInfoResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerModelDecoder")
		struct FMatchmakerStartGameResponse STATIC_decodeStartGameResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerModelDecoder")
		struct FMatchmakerPlayerLeftResponse STATIC_decodePlayerLeftResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerModelDecoder")
		struct FMatchmakerPlayerJoinedResponse STATIC_decodePlayerJoinedResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerModelDecoder")
		struct FMatchmakerAuthUserResponse STATIC_decodeAuthUserResponseResponse(class UPlayFabJsonObject* response);

};