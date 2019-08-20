#pragma once

#include "CoreMinimal.h"
#include "PlayFabAdminAPI.generated.h"

UCLASS()
class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
	class UPlayFabAdminAPI* STATIC_UpdateUserTitleDisplayName(const struct FAdminUpdateUserTitleDisplayNameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserPublisherReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserPublisherInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserPublisherData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateUserData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateTask(const struct FAdminUpdateTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateRandomResultTables(const struct FAdminUpdateRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdatePolicy(const struct FAdminUpdatePolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdatePlayerStatisticDefinition(const struct FAdminUpdatePlayerStatisticDefinitionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdatePlayerSharedSecret(const struct FAdminUpdatePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateOpenIdConnection(const struct FAdminUpdateOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateCloudScript(const struct FAdminUpdateCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_UpdateBans(const struct FAdminUpdateBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SubtractUserVirtualCurrency(const struct FAdminSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetupPushNotification(const struct FAdminSetupPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetTitleInternalData(const struct FAdminSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetTitleData(const struct FAdminSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetPublisherData(const struct FAdminSetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetPublishedRevision(const struct FAdminSetPublishedRevisionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetPlayerSecret(const struct FAdminSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SetCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_SendAccountRecoveryEmail(const struct FAdminSendAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RunTask(const struct FAdminRunTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RevokeInventoryItems(const struct FAdminRevokeInventoryItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RevokeInventoryItem(const struct FAdminRevokeInventoryItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RevokeBans(const struct FAdminRevokeBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RevokeAllBansForUser(const struct FAdminRevokeAllBansForUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ResolvePurchaseDispute(const struct FAdminResolvePurchaseDisputeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ResetUserStatistics(const struct FAdminResetUserStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ResetPassword(const struct FAdminResetPasswordRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ResetCharacterStatistics(const struct FAdminResetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RemoveVirtualCurrencyTypes(const struct FAdminRemoveVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RemoveServerBuild(const struct FAdminRemoveServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RemovePlayerTag(const struct FAdminRemovePlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_RefundPurchase(const struct FAdminRefundPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ModifyServerBuild(const struct FAdminModifyServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ModifyMatchmakerGameModes(const struct FAdminModifyMatchmakerGameModesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ListVirtualCurrencyTypes(const struct FAdminListVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ListServerBuilds(const struct FAdminListBuildsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ListOpenIdConnection(const struct FAdminListOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_IncrementPlayerStatisticVersion(const struct FAdminIncrementPlayerStatisticVersionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_IncrementLimitedEditionItemAvailability(const struct FAdminIncrementLimitedEditionItemAvailabilityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdatePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetupPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetPublishedRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRunTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperResolvePurchaseDispute(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperResetUserStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperResetPassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperResetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRemoveVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRemoveServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperRefundPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperModifyServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperModifyMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperListVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperListServerBuilds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperListOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperIncrementPlayerStatisticVersion(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperIncrementLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetTasks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetTaskInstances(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetServerBuildUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetServerBuildInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerStatisticDefinitions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerSharedSecrets(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayerIdFromAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetPlayedTitleList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetMatchmakerGameInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetDataReport(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetContentUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetContentList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetCloudScriptVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetCloudScriptTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetCloudScriptRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperGetActionsOnPlayersInSegmentTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperExportMasterPlayerData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteStore(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeletePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteMasterPlayerAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperDeleteContent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCreatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCreatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCreateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCreateCloudScriptTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCreateActionsOnPlayersInSegmentTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperCheckLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAddLocalizedNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void HelperAbortTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GrantItemsToUsers(const struct FAdminGrantItemsToUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserReadOnlyData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserPublisherReadOnlyData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserPublisherInternalData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserPublisherData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserInventory(const struct FAdminGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserInternalData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserBans(const struct FAdminGetUserBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetUserAccountInfo(const struct FAdminLookupUserAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetTitleInternalData(const struct FAdminGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetTitleData(const struct FAdminGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetTasks(const struct FAdminGetTasksRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetTaskInstances(const struct FAdminGetTaskInstancesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetStoreItems(const struct FAdminGetStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetServerBuildUploadUrl(const struct FAdminGetServerBuildUploadURLRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetServerBuildInfo(const struct FAdminGetServerBuildInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetRandomResultTables(const struct FAdminGetRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPublisherData(const struct FAdminGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPolicy(const struct FAdminGetPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerTags(const struct FAdminGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerStatisticVersions(const struct FAdminGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerStatisticDefinitions(const struct FAdminGetPlayerStatisticDefinitionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayersInSegment(const struct FAdminGetPlayersInSegmentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerSharedSecrets(const struct FAdminGetPlayerSharedSecretsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerSegments(const struct FAdminGetPlayersSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerProfile(const struct FAdminGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayerIdFromAuthToken(const struct FAdminGetPlayerIdFromAuthTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetPlayedTitleList(const struct FAdminGetPlayedTitleListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetMatchmakerGameModes(const struct FAdminGetMatchmakerGameModesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetMatchmakerGameInfo(const struct FAdminGetMatchmakerGameInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetDataReport(const struct FAdminGetDataReportRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetContentUploadUrl(const struct FAdminGetContentUploadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetContentList(const struct FAdminGetContentListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetCloudScriptVersions(const struct FAdminGetCloudScriptVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetCloudScriptTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetCloudScriptRevision(const struct FAdminGetCloudScriptRevisionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetCatalogItems(const struct FAdminGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetAllSegments(const struct FAdminGetAllSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_GetActionsOnPlayersInSegmentTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_ExportMasterPlayerData(const struct FAdminExportMasterPlayerDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteTitle(const struct FAdminDeleteTitleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteTask(const struct FAdminDeleteTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteStore(const struct FAdminDeleteStoreRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeletePlayerSharedSecret(const struct FAdminDeletePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeletePlayer(const struct FAdminDeletePlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteOpenIdConnection(const struct FAdminDeleteOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteMasterPlayerAccount(const struct FAdminDeleteMasterPlayerAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_DeleteContent(const struct FAdminDeleteContentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FAdminUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateRandomResultTables__DelegateSignature(const struct FAdminUpdateRandomResultTablesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdatePolicy__DelegateSignature(const struct FAdminUpdatePolicyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdatePlayerStatisticDefinition__DelegateSignature(const struct FAdminUpdatePlayerStatisticDefinitionResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdatePlayerSharedSecret__DelegateSignature(const struct FAdminUpdatePlayerSharedSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateCloudScript__DelegateSignature(const struct FAdminUpdateCloudScriptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FAdminUpdateBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetupPushNotification__DelegateSignature(const struct FAdminSetupPushNotificationResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FAdminSetPublisherDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetPublishedRevision__DelegateSignature(const struct FAdminSetPublishedRevisionResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FAdminSetPlayerSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSetCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FAdminSendAccountRecoveryEmailResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRunTask__DelegateSignature(const struct FAdminRunTaskResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FAdminRevokeInventoryItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FAdminRevokeInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FAdminRevokeBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FAdminRevokeAllBansForUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessResolvePurchaseDispute__DelegateSignature(const struct FAdminResolvePurchaseDisputeResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessResetUserStatistics__DelegateSignature(const struct FAdminResetUserStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessResetPassword__DelegateSignature(const struct FAdminResetPasswordResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessResetCharacterStatistics__DelegateSignature(const struct FAdminResetCharacterStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRemoveVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRemoveServerBuild__DelegateSignature(const struct FAdminRemoveServerBuildResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FAdminRemovePlayerTagResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessRefundPurchase__DelegateSignature(const struct FAdminRefundPurchaseResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessModifyServerBuild__DelegateSignature(const struct FAdminModifyServerBuildResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessModifyMatchmakerGameModes__DelegateSignature(const struct FAdminModifyMatchmakerGameModesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessListVirtualCurrencyTypes__DelegateSignature(const struct FAdminListVirtualCurrencyTypesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessListServerBuilds__DelegateSignature(const struct FAdminListBuildsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessListOpenIdConnection__DelegateSignature(const struct FAdminListOpenIdConnectionResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessIncrementPlayerStatisticVersion__DelegateSignature(const struct FAdminIncrementPlayerStatisticVersionResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessIncrementLimitedEditionItemAvailability__DelegateSignature(const struct FAdminIncrementLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FAdminGrantItemsToUsersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FAdminGetUserInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FAdminGetUserBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FAdminLookupUserAccountInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetTasks__DelegateSignature(const struct FAdminGetTasksResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetTaskInstances__DelegateSignature(const struct FAdminGetTaskInstancesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FAdminGetStoreItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetServerBuildUploadUrl__DelegateSignature(const struct FAdminGetServerBuildUploadURLResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetServerBuildInfo__DelegateSignature(const struct FAdminGetServerBuildInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FAdminGetRandomResultTablesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FAdminGetPublisherDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPolicy__DelegateSignature(const struct FAdminGetPolicyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FAdminGetPlayerTagsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FAdminGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerStatisticDefinitions__DelegateSignature(const struct FAdminGetPlayerStatisticDefinitionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FAdminGetPlayersInSegmentResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerSharedSecrets__DelegateSignature(const struct FAdminGetPlayerSharedSecretsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FAdminGetPlayerSegmentsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FAdminGetPlayerProfileResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayerIdFromAuthToken__DelegateSignature(const struct FAdminGetPlayerIdFromAuthTokenResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetPlayedTitleList__DelegateSignature(const struct FAdminGetPlayedTitleListResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetMatchmakerGameModes__DelegateSignature(const struct FAdminGetMatchmakerGameModesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetMatchmakerGameInfo__DelegateSignature(const struct FAdminGetMatchmakerGameInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetDataReport__DelegateSignature(const struct FAdminGetDataReportResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetContentUploadUrl__DelegateSignature(const struct FAdminGetContentUploadUrlResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetContentList__DelegateSignature(const struct FAdminGetContentListResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetCloudScriptVersions__DelegateSignature(const struct FAdminGetCloudScriptVersionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetCloudScriptTaskInstance__DelegateSignature(const struct FAdminGetCloudScriptTaskInstanceResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetCloudScriptRevision__DelegateSignature(const struct FAdminGetCloudScriptRevisionResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FAdminGetCatalogItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FAdminGetAllSegmentsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance__DelegateSignature(const struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessExportMasterPlayerData__DelegateSignature(const struct FAdminExportMasterPlayerDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteTitle__DelegateSignature(const struct FAdminDeleteTitleResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteStore__DelegateSignature(const struct FAdminDeleteStoreResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeletePlayerSharedSecret__DelegateSignature(const struct FAdminDeletePlayerSharedSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FAdminDeletePlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteMasterPlayerAccount__DelegateSignature(const struct FAdminDeleteMasterPlayerAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessDeleteContent__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCreatePlayerStatisticDefinition__DelegateSignature(const struct FAdminCreatePlayerStatisticDefinitionResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCreatePlayerSharedSecret__DelegateSignature(const struct FAdminCreatePlayerSharedSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCreateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCreateCloudScriptTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCreateActionsOnPlayersInSegmentTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessCheckLimitedEditionItemAvailability__DelegateSignature(const struct FAdminCheckLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessBanUsers__DelegateSignature(const struct FAdminBanUsersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddServerBuild__DelegateSignature(const struct FAdminAddServerBuildResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FAdminAddPlayerTagResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddNews__DelegateSignature(const struct FAdminAddNewsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAddLocalizedNews__DelegateSignature(const struct FAdminAddLocalizedNewsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnSuccessAbortTaskInstance__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CreatePlayerStatisticDefinition(const struct FAdminCreatePlayerStatisticDefinitionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CreatePlayerSharedSecret(const struct FAdminCreatePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CreateOpenIdConnection(const struct FAdminCreateOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CreateCloudScriptTask(const struct FAdminCreateCloudScriptTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CreateActionsOnPlayersInSegmentTask(const struct FAdminCreateActionsOnPlayerSegmentTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_CheckLimitedEditionItemAvailability(const struct FAdminCheckLimitedEditionItemAvailabilityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_BanUsers(const struct FAdminBanUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddVirtualCurrencyTypes(const struct FAdminAddVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddUserVirtualCurrency(const struct FAdminAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddServerBuild(const struct FAdminAddServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddPlayerTag(const struct FAdminAddPlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddNews(const struct FAdminAddNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AddLocalizedNews(const struct FAdminAddLocalizedNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAdminAPI")
		class UPlayFabAdminAPI* STATIC_AbortTaskInstance(const struct FAdminAbortTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};