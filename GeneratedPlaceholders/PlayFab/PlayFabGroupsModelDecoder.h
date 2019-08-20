#pragma once

#include "CoreMinimal.h"
#include "PlayFabGroupsModelDecoder.generated.h"

UCLASS()
class UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
	struct FGroupsUpdateGroupRoleResponse STATIC_decodeUpdateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsUpdateGroupResponse STATIC_decodeUpdateGroupResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListMembershipResponse STATIC_decodeListMembershipResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListMembershipOpportunitiesResponse STATIC_decodeListMembershipOpportunitiesResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListGroupMembersResponse STATIC_decodeListGroupMembersResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListGroupInvitationsResponse STATIC_decodeListGroupInvitationsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListGroupBlocksResponse STATIC_decodeListGroupBlocksResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsListGroupApplicationsResponse STATIC_decodeListGroupApplicationsResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsIsMemberResponse STATIC_decodeIsMemberResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsInviteToGroupResponse STATIC_decodeInviteToGroupResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsGetGroupResponse STATIC_decodeGetGroupResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsCreateGroupRoleResponse STATIC_decodeCreateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsCreateGroupResponse STATIC_decodeCreateGroupResponseResponse(class UPlayFabJsonObject* response);
	UFUNCTION(BlueprintCallable, Category = "PlayFabGroupsModelDecoder")
		struct FGroupsApplyToGroupResponse STATIC_decodeApplyToGroupResponseResponse(class UPlayFabJsonObject* response);

};