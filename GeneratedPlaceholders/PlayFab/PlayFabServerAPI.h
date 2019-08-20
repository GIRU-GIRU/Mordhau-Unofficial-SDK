#pragma once

#include "CoreMinimal.h"
#include "PlayFabServerAPI.generated.h"

UCLASS()
class UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
	class UPlayFabServerAPI* STATIC_WriteTitleEvent(const struct FServerWriteTitleEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_WritePlayerEvent(const struct FServerWriteServerPlayerEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_WriteCharacterEvent(const struct FServerWriteServerCharacterEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserPublisherReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserPublisherInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserPublisherData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserInventoryItemCustomData(const struct FServerUpdateUserInventoryItemDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateUserData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateSharedGroupData(const struct FServerUpdateSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdatePlayerStatistics(const struct FServerUpdatePlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateCharacterStatistics(const struct FServerUpdateCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateCharacterReadOnlyData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateCharacterInternalData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateCharacterData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateBans(const struct FServerUpdateBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UpdateAvatarUrl(const struct FServerUpdateAvatarUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UnlockContainerItem(const struct FServerUnlockContainerItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UnlockContainerInstance(const struct FServerUnlockContainerInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UnlinkXboxAccount(const struct FServerUnlinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_UnlinkServerCustomId(const struct FServerUnlinkServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SubtractUserVirtualCurrency(const struct FServerSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SubtractCharacterVirtualCurrency(const struct FServerSubtractCharacterVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetTitleInternalData(const struct FServerSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetTitleData(const struct FServerSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetPublisherData(const struct FServerSetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetPlayerSecret(const struct FServerSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetGameServerInstanceTags(const struct FServerSetGameServerInstanceTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetGameServerInstanceState(const struct FServerSetGameServerInstanceStateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetGameServerInstanceData(const struct FServerSetGameServerInstanceDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SetFriendTags(const struct FServerSetFriendTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SendPushNotificationFromTemplate(const struct FServerSendPushNotificationFromTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SendPushNotification(const struct FServerSendPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SendEmailFromTemplate(const struct FServerSendEmailFromTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SendCustomAccountRecoveryEmail(const struct FServerSendCustomAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_SavePushNotificationTemplate(const struct FServerSavePushNotificationTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RevokeInventoryItems(const struct FServerRevokeInventoryItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RevokeInventoryItem(const struct FServerRevokeInventoryItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RevokeBans(const struct FServerRevokeBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RevokeAllBansForUser(const struct FServerRevokeAllBansForUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_ReportPlayer(const struct FServerReportPlayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RemoveSharedGroupMembers(const struct FServerRemoveSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RemovePlayerTag(const struct FServerRemovePlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RemoveGenericID(const struct FServerRemoveGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RemoveFriend(const struct FServerRemoveFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RegisterGame(const struct FServerRegisterGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RefreshGameServerInstanceHeartbeat(const struct FServerRefreshGameServerInstanceHeartbeatRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RedeemMatchmakerTicket(const struct FServerRedeemMatchmakerTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_RedeemCoupon(const struct FServerRedeemCouponRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_NotifyMatchmakerPlayerLeft(const struct FServerNotifyMatchmakerPlayerLeftRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_MoveItemToUserFromCharacter(const struct FServerMoveItemToUserFromCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromUser(const struct FServerMoveItemToCharacterFromUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromCharacter(const struct FServerMoveItemToCharacterFromCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_ModifyItemUses(const struct FServerModifyItemUsesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_LoginWithXbox(const struct FServerLoginWithXboxRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_LoginWithServerCustomId(const struct FServerLoginWithServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_LinkXboxAccount(const struct FServerLinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_LinkServerCustomId(const struct FServerLinkServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserInventoryItemCustomData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperUnlinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSubtractCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetGameServerInstanceTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetGameServerInstanceState(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetGameServerInstanceData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSendPushNotificationFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSendPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSendEmailFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSendCustomAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperSavePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRegisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRefreshGameServerInstanceHeartbeat(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRedeemMatchmakerTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperNotifyMatchmakerPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperMoveItemToUserFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperMoveItemToCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperMoveItemToCharacterFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperModifyItemUses(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperLoginWithServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperLinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGrantItemsToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGrantItemsToCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetServerCustomIDsFromPlayFabIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetLeaderboardAroundUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperEvaluateRandomResultTable(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperDeregisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperDeleteSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperDeletePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperDeleteCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAwardSteamAchievement(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAuthenticateSessionTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void HelperAddCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GrantItemsToUsers(const struct FServerGrantItemsToUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GrantItemsToUser(const struct FServerGrantItemsToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GrantItemsToCharacter(const struct FServerGrantItemsToCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GrantCharacterToUser(const struct FServerGrantCharacterToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserReadOnlyData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserPublisherReadOnlyData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserPublisherInternalData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserPublisherData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserInventory(const struct FServerGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserInternalData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserBans(const struct FServerGetUserBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetUserAccountInfo(const struct FServerGetUserAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetTitleNews(const struct FServerGetTitleNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetTitleInternalData(const struct FServerGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetTitleData(const struct FServerGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetTime(const struct FServerGetTimeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetSharedGroupData(const struct FServerGetSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetServerCustomIDsFromPlayFabIDs(const struct FServerGetServerCustomIDsFromPlayFabIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetRandomResultTables(const struct FServerGetRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPublisherData(const struct FServerGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(const struct FServerGetPlayFabIDsFromXboxLiveIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromSteamIDs(const struct FServerGetPlayFabIDsFromSteamIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(const struct FServerGetPlayFabIDsFromPSNAccountIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromGenericIDs(const struct FServerGetPlayFabIDsFromGenericIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookIDs(const struct FServerGetPlayFabIDsFromFacebookIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerTags(const struct FServerGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerStatisticVersions(const struct FServerGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerStatistics(const struct FServerGetPlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayersInSegment(const struct FServerGetPlayersInSegmentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerSegments(const struct FServerGetPlayersSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerProfile(const struct FServerGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetPlayerCombinedInfo(const struct FServerGetPlayerCombinedInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetLeaderboardForUserCharacters(const struct FServerGetLeaderboardForUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetLeaderboardAroundUser(const struct FServerGetLeaderboardAroundUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetLeaderboardAroundCharacter(const struct FServerGetLeaderboardAroundCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetLeaderboard(const struct FServerGetLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetFriendsList(const struct FServerGetFriendsListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetFriendLeaderboard(const struct FServerGetFriendLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetContentDownloadUrl(const struct FServerGetContentDownloadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterStatistics(const struct FServerGetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterReadOnlyData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterLeaderboard(const struct FServerGetCharacterLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterInventory(const struct FServerGetCharacterInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterInternalData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCharacterData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetCatalogItems(const struct FServerGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetAllUsersCharacters(const struct FServerListUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_GetAllSegments(const struct FServerGetAllSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_ExecuteCloudScript(const struct FServerExecuteCloudScriptServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_EvaluateRandomResultTable(const struct FServerEvaluateRandomResultTableRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_DeregisterGame(const struct FServerDeregisterGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_DeleteSharedGroup(const struct FServerDeleteSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_DeletePushNotificationTemplate(const struct FServerDeletePushNotificationTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_DeletePlayer(const struct FServerDeletePlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_DeleteCharacterFromUser(const struct FServerDeleteCharacterFromUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserInventoryItemCustomData__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FServerUpdateSharedGroupDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FServerUpdatePlayerStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FServerUpdateCharacterStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateCharacterReadOnlyData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateCharacterInternalData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FServerUpdateBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FServerUnlinkXboxAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessUnlinkServerCustomId__DelegateSignature(const struct FServerUnlinkServerCustomIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSubtractCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FServerSetPublisherDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FServerSetPlayerSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetGameServerInstanceTags__DelegateSignature(const struct FServerSetGameServerInstanceTagsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetGameServerInstanceState__DelegateSignature(const struct FServerSetGameServerInstanceStateResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetGameServerInstanceData__DelegateSignature(const struct FServerSetGameServerInstanceDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSendPushNotificationFromTemplate__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSendPushNotification__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSendEmailFromTemplate__DelegateSignature(const struct FServerSendEmailFromTemplateResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSendCustomAccountRecoveryEmail__DelegateSignature(const struct FServerSendCustomAccountRecoveryEmailResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessSavePushNotificationTemplate__DelegateSignature(const struct FServerSavePushNotificationTemplateResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FServerRevokeInventoryItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FServerRevokeInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FServerRevokeBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FServerRevokeAllBansForUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FServerReportPlayerServerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FServerRemoveSharedGroupMembersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FServerRemovePlayerTagResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRegisterGame__DelegateSignature(const struct FServerRegisterGameResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRefreshGameServerInstanceHeartbeat__DelegateSignature(const struct FServerRefreshGameServerInstanceHeartbeatResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRedeemMatchmakerTicket__DelegateSignature(const struct FServerRedeemMatchmakerTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FServerRedeemCouponResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessNotifyMatchmakerPlayerLeft__DelegateSignature(const struct FServerNotifyMatchmakerPlayerLeftResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessMoveItemToUserFromCharacter__DelegateSignature(const struct FServerMoveItemToUserFromCharacterResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessMoveItemToCharacterFromUser__DelegateSignature(const struct FServerMoveItemToCharacterFromUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessMoveItemToCharacterFromCharacter__DelegateSignature(const struct FServerMoveItemToCharacterFromCharacterResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessModifyItemUses__DelegateSignature(const struct FServerModifyItemUsesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessLoginWithServerCustomId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FServerLinkXboxAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessLinkServerCustomId__DelegateSignature(const struct FServerLinkServerCustomIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FServerGrantItemsToUsersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGrantItemsToUser__DelegateSignature(const struct FServerGrantItemsToUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGrantItemsToCharacter__DelegateSignature(const struct FServerGrantItemsToCharacterResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FServerGrantCharacterToUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FServerGetUserInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FServerGetUserBansResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FServerGetUserAccountInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FServerGetTitleNewsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetTime__DelegateSignature(const struct FServerGetTimeResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FServerGetSharedGroupDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs__DelegateSignature(const struct FServerGetServerCustomIDsFromPlayFabIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FServerGetRandomResultTablesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FServerGetPublisherDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FServerGetPlayerTagsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FServerGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FServerGetPlayerStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FServerGetPlayersInSegmentResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FServerGetPlayerSegmentsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FServerGetPlayerProfileResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FServerGetPlayerCombinedInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FServerGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetLeaderboardAroundUser__DelegateSignature(const struct FServerGetLeaderboardAroundUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FServerGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FServerGetFriendsListResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FServerGetContentDownloadUrlResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FServerGetCharacterStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FServerGetCharacterLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FServerGetCharacterInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterInternalData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FServerGetCatalogItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FServerListUsersCharactersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FServerGetAllSegmentsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FServerExecuteCloudScriptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessEvaluateRandomResultTable__DelegateSignature(const struct FServerEvaluateRandomResultTableResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessDeregisterGame__DelegateSignature(const struct FServerDeregisterGameResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessDeleteSharedGroup__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessDeletePushNotificationTemplate__DelegateSignature(const struct FServerDeletePushNotificationTemplateResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FServerDeletePlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessDeleteCharacterFromUser__DelegateSignature(const struct FServerDeleteCharacterFromUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FServerCreateSharedGroupResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FServerConsumeItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessBanUsers__DelegateSignature(const struct FServerBanUsersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAwardSteamAchievement__DelegateSignature(const struct FServerAwardSteamAchievementResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAuthenticateSessionTicket__DelegateSignature(const struct FServerAuthenticateSessionTicketResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FServerAddSharedGroupMembersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FServerAddPlayerTagResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnSuccessAddCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_CreateSharedGroup(const struct FServerCreateSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_ConsumeItem(const struct FServerConsumeItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_BanUsers(const struct FServerBanUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AwardSteamAchievement(const struct FServerAwardSteamAchievementRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AuthenticateSessionTicket(const struct FServerAuthenticateSessionTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddUserVirtualCurrency(const struct FServerAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddSharedGroupMembers(const struct FServerAddSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddPlayerTag(const struct FServerAddPlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddGenericID(const struct FServerAddGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddFriend(const struct FServerAddFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerAPI")
		class UPlayFabServerAPI* STATIC_AddCharacterVirtualCurrency(const struct FServerAddCharacterVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};