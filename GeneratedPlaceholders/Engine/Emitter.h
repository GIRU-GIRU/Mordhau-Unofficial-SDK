#pragma once

#include "CoreMinimal.h"
#include "Emitter.generated.h"

UCLASS()
class AEmitter : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleSystemComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDestroyOnSystemFinish : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPostUpdateTickGroup : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCurrentlyActive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleSpawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleBurst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleCollide;

	UFUNCTION(BlueprintCallable, Category = "Emitter")
	void ToggleActive();
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetTemplate(class UParticleSystem* NewTemplate);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetFloatParameter(const struct FName& ParameterName, float Param);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void OnRep_bCurrentlyActive();
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		bool IsActive();
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void Deactivate();
	UFUNCTION(BlueprintCallable, Category = "Emitter")
		void Activate();

};