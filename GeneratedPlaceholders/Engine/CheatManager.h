#pragma once

#include "CoreMinimal.h"
#include "CheatManager.generated.h"

UCLASS()
class UCheatManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ADebugCameraController* DebugCameraControllerRef;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DebugCameraControllerClass;

	UFUNCTION(BlueprintCallable, Category = "CheatManager")
	void Walk();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ViewSelf();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ViewPlayer(const struct FString& S);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ViewClass(class UClass* DesiredClass);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ViewActor(const struct FName& ActorName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void UpdateSafeArea();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ToggleServerStatReplicatorUpdateStatNet();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ToggleServerStatReplicatorClientOverwrite();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ToggleDebugCamera();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ToggleAILogging();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void TestCollisionDistance();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void Teleport();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void Summon(const struct FString& ClassName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void StreamLevelOut(const struct FName& PackageName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void StreamLevelIn(const struct FName& PackageName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void SpawnServerStatReplicator();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void Slomo(float NewTimeDilation);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void SetWorldOrigin();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void SetMouseSensitivityToDefault();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ServerToggleAILogging();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ReceiveInitCheatManager();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ReceiveEndPlay();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void PlayersOnly();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void OnlyLoadLevel(const struct FName& PackageName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void LogLoc();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void InvertMouse();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void God();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void Ghost();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void FreezeFrame(float Delay);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void Fly();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void FlushLog();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void EnableDebugCamera();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DumpVoiceMutingState();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DumpPartyState();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DumpOnlineSessionState();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DumpChatState();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DisableDebugCamera();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DestroyTarget();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DestroyServerStatReplicator();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DestroyPawns(class UClass* aClass);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DestroyAllPawnsExceptTarget();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DestroyAll(class UClass* aClass);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepSize(float HalfHeight, float Radius);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepPawn();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepComplex(bool bTraceComplex);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepClear();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweepCapture();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DebugCapsuleSweep();
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void DamageTarget(float DamageAmount);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void CheatScript(const struct FString& ScriptName);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void ChangeSize(float F);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, struct FString* GoString, struct FString* LocString);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	UFUNCTION(BlueprintCallable, Category = "CheatManager")
		void BugIt(const struct FString& ScreenShotDescription);

};