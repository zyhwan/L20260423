// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_MyPC.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

ABP_MyPC::ABP_MyPC()
{

}

void ABP_MyPC::OnPossess(APawn* aPawn)
{
    Super::OnPossess(aPawn);

    if (IsLocalPlayerController())
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
        if (Subsystem)
        {
            Subsystem->ClearAllMappings();
            Subsystem->AddMappingContext(IMC_Basic.LoadSynchronous(), 0);
        }
    }
}

void ABP_MyPC::OnUnPossess()
{
    Super::OnUnPossess();
    if (IsLocalPlayerController())
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
        if (Subsystem)
        {
            Subsystem->ClearAllMappings();
        }
    }
}
