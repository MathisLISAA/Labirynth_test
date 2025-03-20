// Fill out your copyright notice in the Description page of Project Settings.


#include "True_Labyrinth.h"

True_Labyrinth::True_Labyrinth()
{
#include "BP_Labirynth_V00.h"

    ABP_Labirynth_V00::ABP_Labirynth_V00()
    {
        // Enable ticking if your blueprint uses Tick events.
        PrimaryActorTick.bCanEverTick = true;
    }

    void ABP_Labirynth_V00::BeginPlay()
    {
        Super::BeginPlay();

        // Simulate the blueprint BeginPlay event (K2Node_Event_2)
        K2Node_Event_2();

        // Execute the blueprint execution sequence node
        K2Node_ExecutionSequence_1();
    }

    void ABP_Labirynth_V00::Tick(float DeltaSeconds)
    {
        Super::Tick(DeltaSeconds);

        // Insert any Tick-related blueprint logic here (if applicable)
    }

    // --- Blueprint Node Implementations ---

    void ABP_Labirynth_V00::K2Node_Event_2()
    {
        // This function is the translation of your blueprint's BeginPlay event node.
        // Insert the blueprint logic that was tied to this event.
    }

    void ABP_Labirynth_V00::K2Node_ExecutionSequence_1()
    {
        // This function mirrors the execution sequence in your blueprint.
        // The order of function calls reflects the node order in your event graph.
        K2Node_CallFunction_42();
        K2Node_CallFunction_43();
    }

    void ABP_Labirynth_V00::K2Node_CallFunction_42()
    {
        // Insert the exact logic from your blueprint's "CallFunction_42" node.
    }

    void ABP_Labirynth_V00::K2Node_CallFunction_43()
    {
        // Insert the exact logic from your blueprint's "CallFunction_43" node.
    }

}

True_Labyrinth::~True_Labyrinth()
{
}
