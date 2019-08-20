#pragma once

#include "CoreMinimal.h"
#include "NavLinkProxy.generated.h"

UCLASS()
class ANavLinkProxy : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationLink> PointLinks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationSegmentLink> SegmentLinks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavLinkCustomComponent* SmartLinkComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSmartLinkIsRelevant;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSmartLinkReached;

	UFUNCTION(BlueprintCallable, Category = "NavLinkProxy")
	void SetSmartLinkEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "NavLinkProxy")
		void ResumePathFollowing(class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "NavLinkProxy")
		void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	UFUNCTION(BlueprintCallable, Category = "NavLinkProxy")
		bool IsSmartLinkEnabled();
	UFUNCTION(BlueprintCallable, Category = "NavLinkProxy")
		bool HasMovingAgents();

};