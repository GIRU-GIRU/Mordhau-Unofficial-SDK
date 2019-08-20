#pragma once

#include "CoreMinimal.h"
#include "PlayFabClientAPI.generated.h"

UCLASS()
class UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
	class UPlayFabClientAPI* STATIC_WriteTitleEvent(const struct FClientWriteTitleEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_WritePlayerEvent(const struct FClientWriteClientPlayerEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_WriteCharacterEvent(const struct FClientWriteClientCharacterEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ValidateWindowsStoreReceipt(const struct FClientValidateWindowsReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ValidateIOSReceipt(const struct FClientValidateIOSReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ValidateGooglePlayPurchase(const struct FClientValidateGooglePlayPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ValidateAmazonIAPReceipt(const struct FClientValidateAmazonReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateUserTitleDisplayName(const struct FClientUpdateUserTitleDisplayNameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateUserPublisherData(const struct FClientUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateUserData(const struct FClientUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateSharedGroupData(const struct FClientUpdateSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdatePlayerStatistics(const struct FClientUpdatePlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateCharacterStatistics(const struct FClientUpdateCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateCharacterData(const struct FClientUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UpdateAvatarUrl(const struct FClientUpdateAvatarUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlockContainerItem(const struct FClientUnlockContainerItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlockContainerInstance(const struct FClientUnlockContainerInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkXboxAccount(const struct FClientUnlinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkWindowsHello(const struct FClientUnlinkWindowsHelloAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkTwitch(const struct FClientUnlinkTwitchAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkSteamAccount(const struct FClientUnlinkSteamAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkPSNAccount(const struct FClientUnlinkPSNAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkOpenIdConnect(const struct FClientUninkOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkNintendoSwitchDeviceId(const struct FClientUnlinkNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkKongregate(const struct FClientUnlinkKongregateAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkIOSDeviceID(const struct FClientUnlinkIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkGoogleAccount(const struct FClientUnlinkGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkGameCenterAccount(const struct FClientUnlinkGameCenterAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkFacebookInstantGamesId(const struct FClientUnlinkFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkFacebookAccount(const struct FClientUnlinkFacebookAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkCustomID(const struct FClientUnlinkCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_UnlinkAndroidDeviceID(const struct FClientUnlinkAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_SubtractUserVirtualCurrency(const struct FClientSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_StartPurchase(const struct FClientStartPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_StartGame(const struct FClientStartGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_SetPlayerSecret(const struct FClientSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_SetFriendTags(const struct FClientSetFriendTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_SendAccountRecoveryEmail(const struct FClientSendAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RestoreIOSPurchases(const struct FClientRestoreIOSPurchasesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ReportPlayer(const struct FClientReportPlayerClientRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ReportDeviceInfo(const struct FClientDeviceInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RemoveSharedGroupMembers(const struct FClientRemoveSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RemoveGenericID(const struct FClientRemoveGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RemoveFriend(const struct FClientRemoveFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RemoveContactEmail(const struct FClientRemoveContactEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RegisterWithWindowsHello(const struct FClientRegisterWithWindowsHelloRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RegisterPlayFabUser(const struct FClientRegisterPlayFabUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RegisterForIOSPushNotification(const struct FClientRegisterForIOSPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RefreshPSNAuthToken(const struct FClientRefreshPSNAuthTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_RedeemCoupon(const struct FClientRedeemCouponRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_PurchaseItem(const struct FClientPurchaseItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_PayForPurchase(const struct FClientPayForPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_OpenTrade(const struct FClientOpenTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_Matchmake(const struct FClientMatchmakeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithXbox(const struct FClientLoginWithXboxRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithWindowsHello(const struct FClientLoginWithWindowsHelloRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithTwitch(const struct FClientLoginWithTwitchRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithSteam(const struct FClientLoginWithSteamRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithPSN(const struct FClientLoginWithPSNRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithPlayFab(const struct FClientLoginWithPlayFabRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithOpenIdConnect(const struct FClientLoginWithOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithNintendoSwitchDeviceId(const struct FClientLoginWithNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithKongregate(const struct FClientLoginWithKongregateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithIOSDeviceID(const struct FClientLoginWithIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithGoogleAccount(const struct FClientLoginWithGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithGameCenter(const struct FClientLoginWithGameCenterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithFacebookInstantGamesId(const struct FClientLoginWithFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithFacebook(const struct FClientLoginWithFacebookRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithEmailAddress(const struct FClientLoginWithEmailAddressRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithCustomID(const struct FClientLoginWithCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LoginWithAndroidDeviceID(const struct FClientLoginWithAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkXboxAccount(const struct FClientLinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkWindowsHello(const struct FClientLinkWindowsHelloAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkTwitch(const struct FClientLinkTwitchAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkSteamAccount(const struct FClientLinkSteamAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkPSNAccount(const struct FClientLinkPSNAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkOpenIdConnect(const struct FClientLinkOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkNintendoSwitchDeviceId(const struct FClientLinkNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkKongregate(const struct FClientLinkKongregateAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkIOSDeviceID(const struct FClientLinkIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkGoogleAccount(const struct FClientLinkGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkGameCenterAccount(const struct FClientLinkGameCenterAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkFacebookInstantGamesId(const struct FClientLinkFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkFacebookAccount(const struct FClientLinkFacebookAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkCustomID(const struct FClientLinkCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_LinkAndroidDeviceID(const struct FClientLinkAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperValidateWindowsStoreReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperValidateIOSReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperValidateGooglePlayPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperValidateAmazonIAPReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperUnlinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperStartPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRestoreIOSPurchases(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperReportDeviceInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRemoveContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRegisterWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRegisterPlayFabUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRegisterForIOSPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRefreshPSNAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperPurchaseItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperPayForPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperOpenTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperMatchmake(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithSteam(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithPSN(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithPlayFab(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithGameCenter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithFacebook(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithEmailAddress(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLoginWithAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperLinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetWindowsHelloChallenge(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetTradeStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetTitlePublicKey(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromTwitchIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromKongregateIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromGoogleIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromGameCenterIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerTrades(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPhotonAuthenticationToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetPaymentToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetGameServerRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetFriendLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCurrentGames(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperGetAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperConsumeXboxEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperConsumePSNEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperConfirmPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperCancelTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAttributeInstall(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAndroidDevicePushNotificationRegistration(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddUsernamePassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddOrUpdateContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void HelperAcceptTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GrantCharacterToUser(const struct FClientGrantCharacterToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetWindowsHelloChallenge(const struct FClientGetWindowsHelloChallengeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetUserReadOnlyData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetUserPublisherReadOnlyData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetUserPublisherData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetUserInventory(const struct FClientGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetUserData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetTradeStatus(const struct FClientGetTradeStatusRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetTitlePublicKey(const struct FClientGetTitlePublicKeyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetTitleNews(const struct FClientGetTitleNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetTitleData(const struct FClientGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetTime(const struct FClientGetTimeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetStoreItems(const struct FClientGetStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetSharedGroupData(const struct FClientGetSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPurchase(const struct FClientGetPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPublisherData(const struct FClientGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(const struct FClientGetPlayFabIDsFromXboxLiveIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromTwitchIDs(const struct FClientGetPlayFabIDsFromTwitchIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromSteamIDs(const struct FClientGetPlayFabIDsFromSteamIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(const struct FClientGetPlayFabIDsFromPSNAccountIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromKongregateIDs(const struct FClientGetPlayFabIDsFromKongregateIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGoogleIDs(const struct FClientGetPlayFabIDsFromGoogleIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGenericIDs(const struct FClientGetPlayFabIDsFromGenericIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGameCenterIDs(const struct FClientGetPlayFabIDsFromGameCenterIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookIDs(const struct FClientGetPlayFabIDsFromFacebookIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerTrades(const struct FClientGetPlayerTradesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerTags(const struct FClientGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerStatisticVersions(const struct FClientGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerStatistics(const struct FClientGetPlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerSegments(const struct FClientGetPlayerSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerProfile(const struct FClientGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPlayerCombinedInfo(const struct FClientGetPlayerCombinedInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPhotonAuthenticationToken(const struct FClientGetPhotonAuthenticationTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetPaymentToken(const struct FClientGetPaymentTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetLeaderboardForUserCharacters(const struct FClientGetLeaderboardForUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetLeaderboardAroundPlayer(const struct FClientGetLeaderboardAroundPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetLeaderboardAroundCharacter(const struct FClientGetLeaderboardAroundCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetLeaderboard(const struct FClientGetLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetGameServerRegions(const struct FClientGameServerRegionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetFriendsList(const struct FClientGetFriendsListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetFriendLeaderboardAroundPlayer(const struct FClientGetFriendLeaderboardAroundPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetFriendLeaderboard(const struct FClientGetFriendLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCurrentGames(const struct FClientCurrentGamesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetContentDownloadUrl(const struct FClientGetContentDownloadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCharacterStatistics(const struct FClientGetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCharacterReadOnlyData(const struct FClientGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCharacterLeaderboard(const struct FClientGetCharacterLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCharacterInventory(const struct FClientGetCharacterInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCharacterData(const struct FClientGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetCatalogItems(const struct FClientGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetAllUsersCharacters(const struct FClientListUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_GetAccountInfo(const struct FClientGetAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ExecuteCloudScript(const struct FClientExecuteCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessValidateWindowsStoreReceipt__DelegateSignature(const struct FClientValidateWindowsReceiptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessValidateIOSReceipt__DelegateSignature(const struct FClientValidateIOSReceiptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessValidateGooglePlayPurchase__DelegateSignature(const struct FClientValidateGooglePlayPurchaseResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessValidateAmazonIAPReceipt__DelegateSignature(const struct FClientValidateAmazonReceiptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FClientUpdateSharedGroupDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FClientUpdatePlayerStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FClientUpdateCharacterStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FClientUpdateCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FClientUnlinkXboxAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkWindowsHello__DelegateSignature(const struct FClientUnlinkWindowsHelloAccountResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkTwitch__DelegateSignature(const struct FClientUnlinkTwitchAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkSteamAccount__DelegateSignature(const struct FClientUnlinkSteamAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FClientUnlinkPSNAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientUnlinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkKongregate__DelegateSignature(const struct FClientUnlinkKongregateAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkIOSDeviceID__DelegateSignature(const struct FClientUnlinkIOSDeviceIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkGoogleAccount__DelegateSignature(const struct FClientUnlinkGoogleAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkGameCenterAccount__DelegateSignature(const struct FClientUnlinkGameCenterAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkFacebookInstantGamesId__DelegateSignature(const struct FClientUnlinkFacebookInstantGamesIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkFacebookAccount__DelegateSignature(const struct FClientUnlinkFacebookAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkCustomID__DelegateSignature(const struct FClientUnlinkCustomIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessUnlinkAndroidDeviceID__DelegateSignature(const struct FClientUnlinkAndroidDeviceIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessStartPurchase__DelegateSignature(const struct FClientStartPurchaseResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessStartGame__DelegateSignature(const struct FClientStartGameResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FClientSetPlayerSecretResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FClientSetFriendTagsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FClientSendAccountRecoveryEmailResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRestoreIOSPurchases__DelegateSignature(const struct FClientRestoreIOSPurchasesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FClientReportPlayerClientResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessReportDeviceInfo__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FClientRemoveSharedGroupMembersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FClientRemoveGenericIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FClientRemoveFriendResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRemoveContactEmail__DelegateSignature(const struct FClientRemoveContactEmailResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRegisterWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRegisterPlayFabUser__DelegateSignature(const struct FClientRegisterPlayFabUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRegisterForIOSPushNotification__DelegateSignature(const struct FClientRegisterForIOSPushNotificationResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRefreshPSNAuthToken__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FClientRedeemCouponResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessPurchaseItem__DelegateSignature(const struct FClientPurchaseItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessPayForPurchase__DelegateSignature(const struct FClientPayForPurchaseResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessOpenTrade__DelegateSignature(const struct FClientOpenTradeResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessMatchmake__DelegateSignature(const struct FClientMatchmakeResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithTwitch__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithSteam__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithPSN__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithPlayFab__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithOpenIdConnect__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithNintendoSwitchDeviceId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithKongregate__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithIOSDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithGoogleAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithGameCenter__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithFacebookInstantGamesId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithFacebook__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithEmailAddress__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithCustomID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLoginWithAndroidDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FClientLinkXboxAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkWindowsHello__DelegateSignature(const struct FClientLinkWindowsHelloAccountResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkTwitch__DelegateSignature(const struct FClientLinkTwitchAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkSteamAccount__DelegateSignature(const struct FClientLinkSteamAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FClientLinkPSNAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientLinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkKongregate__DelegateSignature(const struct FClientLinkKongregateAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkIOSDeviceID__DelegateSignature(const struct FClientLinkIOSDeviceIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkGoogleAccount__DelegateSignature(const struct FClientLinkGoogleAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkGameCenterAccount__DelegateSignature(const struct FClientLinkGameCenterAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkFacebookInstantGamesId__DelegateSignature(const struct FClientLinkFacebookInstantGamesIdResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkFacebookAccount__DelegateSignature(const struct FClientLinkFacebookAccountResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkCustomID__DelegateSignature(const struct FClientLinkCustomIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessLinkAndroidDeviceID__DelegateSignature(const struct FClientLinkAndroidDeviceIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FClientGrantCharacterToUserResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetWindowsHelloChallenge__DelegateSignature(const struct FClientGetWindowsHelloChallengeResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FClientGetUserInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetUserData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetTradeStatus__DelegateSignature(const struct FClientGetTradeStatusResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetTitlePublicKey__DelegateSignature(const struct FClientGetTitlePublicKeyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FClientGetTitleNewsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FClientGetTitleDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetTime__DelegateSignature(const struct FClientGetTimeResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FClientGetStoreItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FClientGetSharedGroupDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPurchase__DelegateSignature(const struct FClientGetPurchaseResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FClientGetPublisherDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromTwitchIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromKongregateIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromKongregateIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromGoogleIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGoogleIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromGameCenterIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGameCenterIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerTrades__DelegateSignature(const struct FClientGetPlayerTradesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FClientGetPlayerTagsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FClientGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FClientGetPlayerStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FClientGetPlayerSegmentsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FClientGetPlayerProfileResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPhotonAuthenticationToken__DelegateSignature(const struct FClientGetPhotonAuthenticationTokenResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetPaymentToken__DelegateSignature(const struct FClientGetPaymentTokenResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FClientGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetLeaderboardAroundPlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FClientGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetGameServerRegions__DelegateSignature(const struct FClientGameServerRegionsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FClientGetFriendsListResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetFriendLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetFriendLeaderboardAroundPlayerResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCurrentGames__DelegateSignature(const struct FClientCurrentGamesResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FClientGetContentDownloadUrlResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FClientGetCharacterStatisticsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FClientGetCharacterLeaderboardResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FClientGetCharacterInventoryResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FClientGetCatalogItemsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FClientListUsersCharactersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessGetAccountInfo__DelegateSignature(const struct FClientGetAccountInfoResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FClientCreateSharedGroupResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessConsumeXboxEntitlements__DelegateSignature(const struct FClientConsumeXboxEntitlementsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessConsumePSNEntitlements__DelegateSignature(const struct FClientConsumePSNEntitlementsResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FClientConsumeItemResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessConfirmPurchase__DelegateSignature(const struct FClientConfirmPurchaseResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessCancelTrade__DelegateSignature(const struct FClientCancelTradeResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAttributeInstall__DelegateSignature(const struct FClientAttributeInstallResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAndroidDevicePushNotificationRegistration__DelegateSignature(const struct FClientAndroidDevicePushNotificationRegistrationResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddUsernamePassword__DelegateSignature(const struct FClientAddUsernamePasswordResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FClientAddSharedGroupMembersResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddOrUpdateContactEmail__DelegateSignature(const struct FClientAddOrUpdateContactEmailResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FClientAddGenericIDResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAddFriend__DelegateSignature(const struct FClientAddFriendResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnSuccessAcceptTrade__DelegateSignature(const struct FClientAcceptTradeResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_CreateSharedGroup(const struct FClientCreateSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ConsumeXboxEntitlements(const struct FClientConsumeXboxEntitlementsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ConsumePSNEntitlements(const struct FClientConsumePSNEntitlementsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ConsumeItem(const struct FClientConsumeItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_ConfirmPurchase(const struct FClientConfirmPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_CancelTrade(const struct FClientCancelTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AttributeInstall(const struct FClientAttributeInstallRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AndroidDevicePushNotificationRegistration(const struct FClientAndroidDevicePushNotificationRegistrationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddUserVirtualCurrency(const struct FClientAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddUsernamePassword(const struct FClientAddUsernamePasswordRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddSharedGroupMembers(const struct FClientAddSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddOrUpdateContactEmail(const struct FClientAddOrUpdateContactEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddGenericID(const struct FClientAddGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AddFriend(const struct FClientAddFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabClientAPI")
		class UPlayFabClientAPI* STATIC_AcceptTrade(const struct FClientAcceptTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};