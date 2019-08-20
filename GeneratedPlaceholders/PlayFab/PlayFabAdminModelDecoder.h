#pragma once

#include "CoreMinimal.h"
#include "PlayFabAdminModelDecoder.generated.h"

UCLASS()
class UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
	struct FAdminUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateStoreItemsResult STATIC_decodeUpdateStoreItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateRandomResultTablesResult STATIC_decodeUpdateRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdatePolicyResponse STATIC_decodeUpdatePolicyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdatePlayerStatisticDefinitionResult STATIC_decodeUpdatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdatePlayerSharedSecretResult STATIC_decodeUpdatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateCloudScriptResult STATIC_decodeUpdateCloudScriptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateCatalogItemsResult STATIC_decodeUpdateCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSetupPushNotificationResult STATIC_decodeSetupPushNotificationResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSetPublishedRevisionResult STATIC_decodeSetPublishedRevisionResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRunTaskResult STATIC_decodeRunTaskResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminResolvePurchaseDisputeResponse STATIC_decodeResolvePurchaseDisputeResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminResetUserStatisticsResult STATIC_decodeResetUserStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminResetPasswordResult STATIC_decodeResetPasswordResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminResetCharacterStatisticsResult STATIC_decodeResetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRemoveServerBuildResult STATIC_decodeRemoveServerBuildResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminRefundPurchaseResponse STATIC_decodeRefundPurchaseResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminModifyServerBuildResult STATIC_decodeModifyServerBuildResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminModifyMatchmakerGameModesResult STATIC_decodeModifyMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminLookupUserAccountInfoResult STATIC_decodeLookupUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminListVirtualCurrencyTypesResult STATIC_decodeListVirtualCurrencyTypesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminListOpenIdConnectionResponse STATIC_decodeListOpenIdConnectionResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminListBuildsResult STATIC_decodeListBuildsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminIncrementPlayerStatisticVersionResult STATIC_decodeIncrementPlayerStatisticVersionResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminIncrementLimitedEditionItemAvailabilityResult STATIC_decodeIncrementLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetTasksResult STATIC_decodeGetTasksResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetTaskInstancesResult STATIC_decodeGetTaskInstancesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetServerBuildUploadURLResult STATIC_decodeGetServerBuildUploadURLResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetServerBuildInfoResult STATIC_decodeGetServerBuildInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPolicyResponse STATIC_decodeGetPolicyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerStatisticDefinitionsResult STATIC_decodeGetPlayerStatisticDefinitionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerSharedSecretsResult STATIC_decodeGetPlayerSharedSecretsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayerIdFromAuthTokenResult STATIC_decodeGetPlayerIdFromAuthTokenResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetPlayedTitleListResult STATIC_decodeGetPlayedTitleListResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetMatchmakerGameModesResult STATIC_decodeGetMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetMatchmakerGameInfoResult STATIC_decodeGetMatchmakerGameInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetDataReportResult STATIC_decodeGetDataReportResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetContentUploadUrlResult STATIC_decodeGetContentUploadUrlResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetContentListResult STATIC_decodeGetContentListResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetCloudScriptVersionsResult STATIC_decodeGetCloudScriptVersionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetCloudScriptTaskInstanceResult STATIC_decodeGetCloudScriptTaskInstanceResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetCloudScriptRevisionResult STATIC_decodeGetCloudScriptRevisionResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult STATIC_decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminExportMasterPlayerDataResult STATIC_decodeExportMasterPlayerDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminDeleteTitleResult STATIC_decodeDeleteTitleResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminDeleteStoreResult STATIC_decodeDeleteStoreResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminDeletePlayerSharedSecretResult STATIC_decodeDeletePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminDeleteMasterPlayerAccountResult STATIC_decodeDeleteMasterPlayerAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminCreateTaskResult STATIC_decodeCreateTaskResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminCreatePlayerStatisticDefinitionResult STATIC_decodeCreatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminCreatePlayerSharedSecretResult STATIC_decodeCreatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminCheckLimitedEditionItemAvailabilityResult STATIC_decodeCheckLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminBlankResult STATIC_decodeBlankResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminAddServerBuildResult STATIC_decodeAddServerBuildResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminAddNewsResult STATIC_decodeAddNewsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminModelDecoder")
		struct FAdminAddLocalizedNewsResult STATIC_decodeAddLocalizedNewsResultResponse(class UPlayFabJsonObject* response);

};