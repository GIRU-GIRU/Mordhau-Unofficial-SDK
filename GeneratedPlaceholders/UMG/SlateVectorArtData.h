#pragma once

#include "CoreMinimal.h"
#include "SlateVectorArtData.generated.h"

UCLASS()
class USlateVectorArtData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSlateMeshVertex> VertexData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<uint32_t> IndexData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Material;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ExtentMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ExtentMax;


};