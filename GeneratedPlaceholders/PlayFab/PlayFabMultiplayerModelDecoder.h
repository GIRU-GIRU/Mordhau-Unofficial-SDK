#pragma once

#include "CoreMinimal.h"
#include "PlayFabMultiplayerModelDecoder.generated.h"

UCLASS()
class UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
	struct FMultiplayerRolloverContainerRegistryCredentialsResponse STATIC_decodeRolloverContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerRequestMultiplayerServerResponse STATIC_decodeRequestMultiplayerServerResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListVirtualMachineSummariesResponse STATIC_decodeListVirtualMachineSummariesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListQosServersResponse STATIC_decodeListQosServersResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListMultiplayerServersResponse STATIC_decodeListMultiplayerServersResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListMatchmakingTicketsForPlayerResult STATIC_decodeListMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListContainerImageTagsResponse STATIC_decodeListContainerImageTagsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListContainerImagesResponse STATIC_decodeListContainerImagesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListCertificateSummariesResponse STATIC_decodeListCertificateSummariesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListBuildSummariesResponse STATIC_decodeListBuildSummariesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerListAssetSummariesResponse STATIC_decodeListAssetSummariesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerJoinMatchmakingTicketResult STATIC_decodeJoinMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetTitleMultiplayerServersQuotasResponse STATIC_decodeGetTitleMultiplayerServersQuotasResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse STATIC_decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetRemoteLoginEndpointResponse STATIC_decodeGetRemoteLoginEndpointResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetQueueStatisticsResult STATIC_decodeGetQueueStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetMultiplayerServerDetailsResponse STATIC_decodeGetMultiplayerServerDetailsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetMatchResult STATIC_decodeGetMatchResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetMatchmakingTicketResult STATIC_decodeGetMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetContainerRegistryCredentialsResponse STATIC_decodeGetContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetBuildResponse STATIC_decodeGetBuildResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerGetAssetUploadUrlResponse STATIC_decodeGetAssetUploadUrlResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerEnableMultiplayerServersForTitleResponse STATIC_decodeEnableMultiplayerServersForTitleResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCreateRemoteUserResponse STATIC_decodeCreateRemoteUserResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCreateMatchmakingTicketResult STATIC_decodeCreateMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCreateBuildWithManagedContainerResponse STATIC_decodeCreateBuildWithManagedContainerResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCreateBuildWithCustomContainerResponse STATIC_decodeCreateBuildWithCustomContainerResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCancelMatchmakingTicketResult STATIC_decodeCancelMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerModelDecoder")
		struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult STATIC_decodeCancelAllMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);

};