#pragma once

#include "CoreMinimal.h"
#include "Object.generated.h"

UCLASS()
class UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	static FUObjectArray* GObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	void* Vtable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t ObjectFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t InternalIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Class;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	FName Name;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Outer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return GObjects->ObjObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	std::string GetName() const;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	std::string GetFullName() const;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	for (int i = 0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	auto object = GetGlobalObjects().GetByIndex(i);
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	continue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return static_cast<T*>(object);
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return nullptr;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return FindObject<UClass>(name);
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsA(UClass* cmp) const;

	UFUNCTION(BlueprintCallable, Category = "Object")
			return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 65)(this, function, parms);
	UFUNCTION(BlueprintCallable, Category = "Object")
		void ExecuteUbergraph(int EntryPoint);

};