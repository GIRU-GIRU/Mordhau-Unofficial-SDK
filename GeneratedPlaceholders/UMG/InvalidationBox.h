#pragma once

#include "CoreMinimal.h"
#include "InvalidationBox.generated.h"

UCLASS()
class UInvalidationBox : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool CacheRelativeTransforms;

	UFUNCTION(BlueprintCallable, Category = "InvalidationBox")
	void SetCanCache(bool CanCache);
	UFUNCTION(BlueprintCallable, Category = "InvalidationBox")
		void InvalidateCache();
	UFUNCTION(BlueprintCallable, Category = "InvalidationBox")
		bool GetCanCache();

};