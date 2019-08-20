#pragma once

#include "CoreMinimal.h"
#include "PlayFabGroupsAPI.generated.h"

UCLASS()
class UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
	class UPlayFabGroupsAPI* STATIC_UpdateRole(const struct FGroupsUpdateGroupRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_UpdateGroup(const struct FGroupsUpdateGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_UnblockEntity(const struct FGroupsUnblockEntityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_RemoveMembers(const struct FGroupsRemoveMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_RemoveGroupInvitation(const struct FGroupsRemoveGroupInvitationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_RemoveGroupApplication(const struct FGroupsRemoveGroupApplicationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListMembershipOpportunities(const struct FGroupsListMembershipOpportunitiesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListMembership(const struct FGroupsListMembershipRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListGroupMembers(const struct FGroupsListGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListGroupInvitations(const struct FGroupsListGroupInvitationsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListGroupBlocks(const struct FGroupsListGroupBlocksRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ListGroupApplications(const struct FGroupsListGroupApplicationsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_IsMember(const struct FGroupsIsMemberRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_InviteToGroup(const struct FGroupsInviteToGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperUpdateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperUpdateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperUnblockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperRemoveMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperRemoveGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperRemoveGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListMembershipOpportunities(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListMembership(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListGroupInvitations(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListGroupBlocks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperListGroupApplications(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperIsMember(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperInviteToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperGetGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperDeleteRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperDeleteGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperCreateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperCreateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperChangeMemberRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperBlockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperApplyToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperAddMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperAcceptGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void HelperAcceptGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_GetGroup(const struct FGroupsGetGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_DeleteRole(const struct FGroupsDeleteRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_DeleteGroup(const struct FGroupsDeleteGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessUpdateRole__DelegateSignature(const struct FGroupsUpdateGroupRoleResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessUpdateGroup__DelegateSignature(const struct FGroupsUpdateGroupResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessUnblockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessRemoveMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessRemoveGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessRemoveGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListMembershipOpportunities__DelegateSignature(const struct FGroupsListMembershipOpportunitiesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListMembership__DelegateSignature(const struct FGroupsListMembershipResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListGroupMembers__DelegateSignature(const struct FGroupsListGroupMembersResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListGroupInvitations__DelegateSignature(const struct FGroupsListGroupInvitationsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListGroupBlocks__DelegateSignature(const struct FGroupsListGroupBlocksResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessListGroupApplications__DelegateSignature(const struct FGroupsListGroupApplicationsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessIsMember__DelegateSignature(const struct FGroupsIsMemberResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessInviteToGroup__DelegateSignature(const struct FGroupsInviteToGroupResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessGetGroup__DelegateSignature(const struct FGroupsGetGroupResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessDeleteRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessDeleteGroup__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessCreateRole__DelegateSignature(const struct FGroupsCreateGroupRoleResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessCreateGroup__DelegateSignature(const struct FGroupsCreateGroupResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessChangeMemberRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessBlockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessApplyToGroup__DelegateSignature(const struct FGroupsApplyToGroupResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessAddMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessAcceptGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnSuccessAcceptGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_CreateRole(const struct FGroupsCreateGroupRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_CreateGroup(const struct FGroupsCreateGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ChangeMemberRole(const struct FGroupsChangeMemberRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_BlockEntity(const struct FGroupsBlockEntityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_ApplyToGroup(const struct FGroupsApplyToGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_AddMembers(const struct FGroupsAddMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_AcceptGroupInvitation(const struct FGroupsAcceptGroupInvitationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsAPI")
		class UPlayFabGroupsAPI* STATIC_AcceptGroupApplication(const struct FGroupsAcceptGroupApplicationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};