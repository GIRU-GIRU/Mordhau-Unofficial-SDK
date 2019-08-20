#pragma once

#include "CoreMinimal.h"
#include "PlayFabClientModelDecoder.generated.h"

UCLASS()
class UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
	struct FClientWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientValidateWindowsReceiptResult STATIC_decodeValidateWindowsReceiptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientValidateIOSReceiptResult STATIC_decodeValidateIOSReceiptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientValidateGooglePlayPurchaseResult STATIC_decodeValidateGooglePlayPurchaseResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientValidateAmazonReceiptResult STATIC_decodeValidateAmazonReceiptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkWindowsHelloAccountResponse STATIC_decodeUnlinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkTwitchAccountResult STATIC_decodeUnlinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkSteamAccountResult STATIC_decodeUnlinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkPSNAccountResult STATIC_decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkNintendoSwitchDeviceIdResult STATIC_decodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkKongregateAccountResult STATIC_decodeUnlinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkIOSDeviceIDResult STATIC_decodeUnlinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkGoogleAccountResult STATIC_decodeUnlinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkGameCenterAccountResult STATIC_decodeUnlinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkFacebookInstantGamesIdResult STATIC_decodeUnlinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkFacebookAccountResult STATIC_decodeUnlinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkCustomIDResult STATIC_decodeUnlinkCustomIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientUnlinkAndroidDeviceIDResult STATIC_decodeUnlinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientStartPurchaseResult STATIC_decodeStartPurchaseResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientStartGameResult STATIC_decodeStartGameResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientSetFriendTagsResult STATIC_decodeSetFriendTagsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRestoreIOSPurchasesResult STATIC_decodeRestoreIOSPurchasesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientReportPlayerClientResult STATIC_decodeReportPlayerClientResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRemoveGenericIDResult STATIC_decodeRemoveGenericIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRemoveFriendResult STATIC_decodeRemoveFriendResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRemoveContactEmailResult STATIC_decodeRemoveContactEmailResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRegisterPlayFabUserResult STATIC_decodeRegisterPlayFabUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRegisterForIOSPushNotificationResult STATIC_decodeRegisterForIOSPushNotificationResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientPurchaseItemResult STATIC_decodePurchaseItemResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientPayForPurchaseResult STATIC_decodePayForPurchaseResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientOpenTradeResponse STATIC_decodeOpenTradeResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientMatchmakeResult STATIC_decodeMatchmakeResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLoginResult STATIC_decodeLoginResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkWindowsHelloAccountResponse STATIC_decodeLinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkTwitchAccountResult STATIC_decodeLinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkSteamAccountResult STATIC_decodeLinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkPSNAccountResult STATIC_decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkNintendoSwitchDeviceIdResult STATIC_decodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkKongregateAccountResult STATIC_decodeLinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkIOSDeviceIDResult STATIC_decodeLinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkGoogleAccountResult STATIC_decodeLinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkGameCenterAccountResult STATIC_decodeLinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkFacebookInstantGamesIdResult STATIC_decodeLinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkFacebookAccountResult STATIC_decodeLinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkCustomIDResult STATIC_decodeLinkCustomIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientLinkAndroidDeviceIDResult STATIC_decodeLinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetWindowsHelloChallengeResponse STATIC_decodeGetWindowsHelloChallengeResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetTradeStatusResponse STATIC_decodeGetTradeStatusResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetTitlePublicKeyResult STATIC_decodeGetTitlePublicKeyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPurchaseResult STATIC_decodeGetPurchaseResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromTwitchIDsResult STATIC_decodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromKongregateIDsResult STATIC_decodeGetPlayFabIDsFromKongregateIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromGoogleIDsResult STATIC_decodeGetPlayFabIDsFromGoogleIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromGameCenterIDsResult STATIC_decodeGetPlayFabIDsFromGameCenterIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerTradesResponse STATIC_decodeGetPlayerTradesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPhotonAuthenticationTokenResult STATIC_decodeGetPhotonAuthenticationTokenResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetPaymentTokenResult STATIC_decodeGetPaymentTokenResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetLeaderboardAroundPlayerResult STATIC_decodeGetLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetFriendLeaderboardAroundPlayerResult STATIC_decodeGetFriendLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGetAccountInfoResult STATIC_decodeGetAccountInfoResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientGameServerRegionsResult STATIC_decodeGameServerRegionsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientCurrentGamesResult STATIC_decodeCurrentGamesResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientConsumeXboxEntitlementsResult STATIC_decodeConsumeXboxEntitlementsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientConsumePSNEntitlementsResult STATIC_decodeConsumePSNEntitlementsResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientConfirmPurchaseResult STATIC_decodeConfirmPurchaseResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientCancelTradeResponse STATIC_decodeCancelTradeResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAttributeInstallResult STATIC_decodeAttributeInstallResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAndroidDevicePushNotificationRegistrationResult STATIC_decodeAndroidDevicePushNotificationRegistrationResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAddUsernamePasswordResult STATIC_decodeAddUsernamePasswordResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAddOrUpdateContactEmailResult STATIC_decodeAddOrUpdateContactEmailResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAddGenericIDResult STATIC_decodeAddGenericIDResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAddFriendResult STATIC_decodeAddFriendResultResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientModelDecoder")
		struct FClientAcceptTradeResponse STATIC_decodeAcceptTradeResponseResponse(class UPlayFabJsonObject* response);

};