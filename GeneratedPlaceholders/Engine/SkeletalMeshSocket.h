#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshSocket.generated.h"

UCLASS()
class USkeletalMeshSocket : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BoneName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RelativeRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceAlwaysAnimated;

	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshSocket")
	void InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, const struct FVector& WorldLocation, const struct FVector& WorldNormal);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshSocket")
		struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp);

};