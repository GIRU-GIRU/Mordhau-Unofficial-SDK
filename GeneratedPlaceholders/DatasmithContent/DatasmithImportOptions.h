#pragma once

#include "CoreMinimal.h"
#include "DatasmithImportOptions.generated.h"

UCLASS()
class UDatasmithImportOptions : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportActorPolicy LightImportPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportActorPolicy CameraImportPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportActorPolicy OtherActorImportPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithImportMaterialQuality MaterialQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithImportBaseOptions BaseOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithTessellationOptions TessellationOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithReimportOptions ReimportOptions;


};