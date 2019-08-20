#pragma once

#include "CoreMinimal.h"
#include "PlayFabDataModelDecoder.generated.h"

UCLASS()
class UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
	struct FDataSetObjectsResponse STATIC_decodeSetObjectsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataInitiateFileUploadsResponse STATIC_decodeInitiateFileUploadsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataGetObjectsResponse STATIC_decodeGetObjectsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataGetFilesResponse STATIC_decodeGetFilesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataFinalizeFileUploadsResponse STATIC_decodeFinalizeFileUploadsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataDeleteFilesResponse STATIC_decodeDeleteFilesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataModelDecoder")
		struct FDataAbortFileUploadsResponse STATIC_decodeAbortFileUploadsResponseResponse(class UPlayFabJsonObject* response);

};