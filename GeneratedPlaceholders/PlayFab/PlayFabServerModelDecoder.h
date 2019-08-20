#pragma once

#include "CoreMinimal.h"
#include "PlayFabServerModelDecoder.generated.h"

UCLASS()
class UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
	struct FServerWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerUnlinkServerCustomIdResult STATIC_decodeUnlinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetGameServerInstanceTagsResult STATIC_decodeSetGameServerInstanceTagsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetGameServerInstanceStateResult STATIC_decodeSetGameServerInstanceStateResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSetGameServerInstanceDataResult STATIC_decodeSetGameServerInstanceDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerServerLoginResult STATIC_decodeServerLoginResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSendPushNotificationResult STATIC_decodeSendPushNotificationResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSendEmailFromTemplateResult STATIC_decodeSendEmailFromTemplateResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSendCustomAccountRecoveryEmailResult STATIC_decodeSendCustomAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerSavePushNotificationTemplateResult STATIC_decodeSavePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerReportPlayerServerResult STATIC_decodeReportPlayerServerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRegisterGameResponse STATIC_decodeRegisterGameResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRefreshGameServerInstanceHeartbeatResult STATIC_decodeRefreshGameServerInstanceHeartbeatResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRedeemMatchmakerTicketResult STATIC_decodeRedeemMatchmakerTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerNotifyMatchmakerPlayerLeftResult STATIC_decodeNotifyMatchmakerPlayerLeftResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerMoveItemToUserFromCharacterResult STATIC_decodeMoveItemToUserFromCharacterResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerMoveItemToCharacterFromUserResult STATIC_decodeMoveItemToCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerMoveItemToCharacterFromCharacterResult STATIC_decodeMoveItemToCharacterFromCharacterResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerModifyItemUsesResult STATIC_decodeModifyItemUsesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerModifyCharacterVirtualCurrencyResult STATIC_decodeModifyCharacterVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerLinkServerCustomIdResult STATIC_decodeLinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGrantItemsToUserResult STATIC_decodeGrantItemsToUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGrantItemsToCharacterResult STATIC_decodeGrantItemsToCharacterResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetUserAccountInfoResult STATIC_decodeGetUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetServerCustomIDsFromPlayFabIDsResult STATIC_decodeGetServerCustomIDsFromPlayFabIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetLeaderboardAroundUserResult STATIC_decodeGetLeaderboardAroundUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerEvaluateRandomResultTableResult STATIC_decodeEvaluateRandomResultTableResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerDeregisterGameResponse STATIC_decodeDeregisterGameResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerDeletePushNotificationTemplateResult STATIC_decodeDeletePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerDeleteCharacterFromUserResult STATIC_decodeDeleteCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerAwardSteamAchievementResult STATIC_decodeAwardSteamAchievementResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerAuthenticateSessionTicketResult STATIC_decodeAuthenticateSessionTicketResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabServerModelDecoder")
		struct FServerAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);

};