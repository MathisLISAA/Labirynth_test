// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CoreMinimal.h"

/**
 * 
 */
class LABYRINTH_TEST_API 
{
    GENERATED_BODY()

public:
    // Constructor
    ABP_Labirynth_V00();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    // --- Blueprint Node Translations ---

    // This function represents the blueprint's BeginPlay event node (e.g., K2Node_Event_2)
    UFUNCTION()
    void K2Node_Event_2();

    // This function represents an execution sequence node (e.g., K2Node_ExecutionSequence_1)
    UFUNCTION()
    void K2Node_ExecutionSequence_1();

    // These functions represent blueprint call-function nodes
    UFUNCTION()
    void K2Node_CallFunction_42();

    UFUNCTION()
    void K2Node_CallFunction_43();

    // (If there are additional nodes, variables, or custom events from your blueprint,
    // add corresponding UFUNCTIONs and UPROPERTYs here.)
};