#pragma once

#include "CoreMinimal.h"
#include "InterpData.generated.h"

UCLASS()
class UInterpData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InterpLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathBuildTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UInterpGroup*> InterpGroups;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpCurveEdSetup* CurveEdSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EdSectionStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EdSectionEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBakeAndPrune : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpGroupDirector* CachedDirectorGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> AllEventNames;


};