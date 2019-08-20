#pragma once

#include "CoreMinimal.h"
#include "PlayFabAuthenticationContext.generated.h"

UCLASS()
class UPlayFabAuthenticationContext : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ClientSessionTicket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString EntityToken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DeveloperSecretKey;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString PlayFabId;

	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
	void SetPlayFabId(const struct FString& InKey);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		void SetEntityToken(const struct FString& InToken);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		void SetDeveloperSecretKey(const struct FString& InKey);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		void SetClientSessionTicket(const struct FString& InTicket);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		struct FString GetPlayFabId();
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		struct FString GetEntityToken();
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		struct FString GetDeveloperSecretKey();
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		struct FString GetClientSessionTicket();
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationContext")
		void ForgetAllCredentials();

};