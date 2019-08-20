#pragma once

#include "CoreMinimal.h"
#include "PlatformInterfaceWebResponse.generated.h"

UCLASS()
class UPlatformInterfaceWebResponse : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString OriginalURL;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ResponseCode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Tag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString StringResponse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> BinaryResponse;

	UFUNCTION(BlueprintCallable, Category = "PlatformInterfaceWebResponse")
	int GetNumHeaders();
	UFUNCTION(BlueprintCallable, Category = "PlatformInterfaceWebResponse")
		struct FString GetHeaderValue(const struct FString& HeaderName);
	UFUNCTION(BlueprintCallable, Category = "PlatformInterfaceWebResponse")
		void GetHeader(int HeaderIndex, struct FString* Header, struct FString* Value);

};