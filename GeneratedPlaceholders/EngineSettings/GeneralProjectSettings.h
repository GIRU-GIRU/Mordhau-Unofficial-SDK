#pragma once

#include "CoreMinimal.h"
#include "GeneralProjectSettings.generated.h"

UCLASS()
class UGeneralProjectSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CompanyName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CompanyDistinguishedName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CopyrightNotice;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Homepage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LicensingTerms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString PrivacyPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ProjectID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ProjectName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ProjectVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SupportContact;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText ProjectDisplayedTitle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText ProjectDebugTitleInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldWindowPreserveAspectRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseBorderlessWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStartInVR;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStartInAR;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSupportAR;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowWindowResize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowClose;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowMaximize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowMinimize;


};