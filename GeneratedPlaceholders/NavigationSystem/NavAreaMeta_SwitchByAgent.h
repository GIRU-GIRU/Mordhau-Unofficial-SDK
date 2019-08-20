#pragma once

#include "CoreMinimal.h"
#include "NavAreaMeta_SwitchByAgent.generated.h"

UCLASS()
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent0Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent1Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent2Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent3Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent4Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent5Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent6Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent7Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent8Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent9Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent10Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent11Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent12Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent13Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent14Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Agent15Area;


};