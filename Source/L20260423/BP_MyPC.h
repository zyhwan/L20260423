// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BP_MyPC.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class L20260423_API ABP_MyPC : public APlayerController
{
	GENERATED_BODY()
public:
	ABP_MyPC();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TSoftObjectPtr<UInputMappingContext> IMC_Basic;

protected:
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;


};
