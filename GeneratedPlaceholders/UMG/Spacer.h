#pragma once

#include "CoreMinimal.h"
#include "Spacer.generated.h"

UCLASS()
class USpacer : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Size;

	UFUNCTION(BlueprintCallable, Category = "Spacer")
	void SetSize(const struct FVector2D& InSize);

};