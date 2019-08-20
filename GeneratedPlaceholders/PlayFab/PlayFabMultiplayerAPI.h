#pragma once

#include "CoreMinimal.h"
#include "PlayFabMultiplayerAPI.generated.h"

UCLASS()
class UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlayFabResponse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabAuthenticationContext* CallAuthenticationContext;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabJsonObject* RequestJsonObj;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabJsonObject* ResponseJsonObj;

	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
	class UPlayFabMultiplayerAPI* STATIC_UploadCertificate(const struct FMultiplayerUploadCertificateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_UpdateBuildRegions(const struct FMultiplayerUpdateBuildRegionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ShutdownMultiplayerServer(const struct FMultiplayerShutdownMultiplayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_RolloverContainerRegistryCredentials(const struct FMultiplayerRolloverContainerRegistryCredentialsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_RequestMultiplayerServer(const struct FMultiplayerRequestMultiplayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListVirtualMachineSummaries(const struct FMultiplayerListVirtualMachineSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListQosServers(const struct FMultiplayerListQosServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListMatchmakingTicketsForPlayer(const struct FMultiplayerListMatchmakingTicketsForPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListContainerImageTags(const struct FMultiplayerListContainerImageTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListContainerImages(const struct FMultiplayerListContainerImagesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListCertificateSummaries(const struct FMultiplayerListCertificateSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListBuildSummaries(const struct FMultiplayerListBuildSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListAssetSummaries(const struct FMultiplayerListAssetSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_ListArchivedMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_JoinMatchmakingTicket(const struct FMultiplayerJoinMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperUploadCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperUpdateBuildRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperShutdownMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperRolloverContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperRequestMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListVirtualMachineSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListQosServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListContainerImageTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListContainerImages(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListCertificateSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListBuildSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListAssetSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperListArchivedMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperJoinMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetTitleMultiplayerServersQuotas(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetTitleEnabledForMultiplayerServersStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetRemoteLoginEndpoint(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetQueueStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetMultiplayerServerDetails(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetMatch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperGetAssetUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperEnableMultiplayerServersForTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperDeleteRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperDeleteCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperDeleteBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperDeleteAsset(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCreateServerMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCreateRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCreateMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCreateBuildWithManagedContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCreateBuildWithCustomContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCancelMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void HelperCancelAllMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetTitleMultiplayerServersQuotas(const struct FMultiplayerGetTitleMultiplayerServersQuotasRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetTitleEnabledForMultiplayerServersStatus(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetRemoteLoginEndpoint(const struct FMultiplayerGetRemoteLoginEndpointRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetQueueStatistics(const struct FMultiplayerGetQueueStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetMultiplayerServerDetails(const struct FMultiplayerGetMultiplayerServerDetailsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetMatchmakingTicket(const struct FMultiplayerGetMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetMatch(const struct FMultiplayerGetMatchRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetContainerRegistryCredentials(const struct FMultiplayerGetContainerRegistryCredentialsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetBuild(const struct FMultiplayerGetBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_GetAssetUploadUrl(const struct FMultiplayerGetAssetUploadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_EnableMultiplayerServersForTitle(const struct FMultiplayerEnableMultiplayerServersForTitleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_DeleteRemoteUser(const struct FMultiplayerDeleteRemoteUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_DeleteCertificate(const struct FMultiplayerDeleteCertificateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_DeleteBuild(const struct FMultiplayerDeleteBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_DeleteAsset(const struct FMultiplayerDeleteAssetRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessUploadCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessUpdateBuildRegions__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessShutdownMultiplayerServer__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessRolloverContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerRolloverContainerRegistryCredentialsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessRequestMultiplayerServer__DelegateSignature(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListVirtualMachineSummaries__DelegateSignature(const struct FMultiplayerListVirtualMachineSummariesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListQosServers__DelegateSignature(const struct FMultiplayerListQosServersResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerListMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListContainerImageTags__DelegateSignature(const struct FMultiplayerListContainerImageTagsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListContainerImages__DelegateSignature(const struct FMultiplayerListContainerImagesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListCertificateSummaries__DelegateSignature(const struct FMultiplayerListCertificateSummariesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListBuildSummaries__DelegateSignature(const struct FMultiplayerListBuildSummariesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListAssetSummaries__DelegateSignature(const struct FMultiplayerListAssetSummariesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessListArchivedMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessJoinMatchmakingTicket__DelegateSignature(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetTitleMultiplayerServersQuotas__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotasResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus__DelegateSignature(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetRemoteLoginEndpoint__DelegateSignature(const struct FMultiplayerGetRemoteLoginEndpointResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetQueueStatistics__DelegateSignature(const struct FMultiplayerGetQueueStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetMultiplayerServerDetails__DelegateSignature(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetMatchmakingTicket__DelegateSignature(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetMatch__DelegateSignature(const struct FMultiplayerGetMatchResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerGetContainerRegistryCredentialsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetBuild__DelegateSignature(const struct FMultiplayerGetBuildResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessGetAssetUploadUrl__DelegateSignature(const struct FMultiplayerGetAssetUploadUrlResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessEnableMultiplayerServersForTitle__DelegateSignature(const struct FMultiplayerEnableMultiplayerServersForTitleResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessDeleteRemoteUser__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessDeleteCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessDeleteBuild__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessDeleteAsset__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCreateServerMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCreateRemoteUser__DelegateSignature(const struct FMultiplayerCreateRemoteUserResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCreateMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCreateBuildWithManagedContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithManagedContainerResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCreateBuildWithCustomContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithCustomContainerResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCancelMatchmakingTicket__DelegateSignature(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CreateServerMatchmakingTicket(const struct FMultiplayerCreateServerMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CreateRemoteUser(const struct FMultiplayerCreateRemoteUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CreateMatchmakingTicket(const struct FMultiplayerCreateMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithManagedContainer(const struct FMultiplayerCreateBuildWithManagedContainerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithCustomContainer(const struct FMultiplayerCreateBuildWithCustomContainerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CancelMatchmakingTicket(const struct FMultiplayerCancelMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMultiplayerAPI")
		class UPlayFabMultiplayerAPI* STATIC_CancelAllMatchmakingTicketsForPlayer(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};