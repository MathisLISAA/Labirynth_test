// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor_Labirynth.generated.h"
#include "Components/SceneComponent.h"
#include <Components/TextRenderComponent.h>
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/GameEngine.h"
#include "MyActor_Labirynth.h"




UCLASS(Blueprintable)
class MyActor_Labirynth : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    void MyActor_Labirynth();

    // --- Blueprint Variables ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth")
    bool ResetLabyrinth = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
    TArray<FName> Tags;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    // Called during Construction Script
    virtual void OnConstruction(const FTransform& Transform) override;

    // Blueprint logic functions
    UFUNCTION()
    void K2Node_Event_2();

    UFUNCTION()
    void K2Node_ExecutionSequence_1();

    UFUNCTION()
    void K2Node_CallFunction_42();

    UFUNCTION()
    void K2Node_CallFunction_43();

    // Custom construction script variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_Index;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_Index_X;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_Index_Y;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    FVector L_LocationX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    FVector L_LocationY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    TArray<FVector> L_StoneLocationsX_Array;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    TArray<FVector> L_StoneLocationsY_Array;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_Index_Current;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_Index_Next;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Labyrinth Variables")
    int L_ExitCellIndexDeadEnd;

    // Tag array for the Actor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
    TArray<FName> Tags;

    // Custom functions for the Blueprint graph operations
    void ClearStoneLocationArrays();
    void AddUniqueTag(FName NewTag);
    void ResetLabyrinth();

    // Called in the construction script
    UFUNCTION(BlueprintCallable)
    void UserConstructionScript();

    void MyActor_Labirynth::BeginPlay()
{
	Super::BeginPlay();

	// Example usage of clearing arrays (this would happen within gameplay logic)
	F_ClearArrays();
}

// Called every frame
void MyActor_Labirynth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Clear all arrays to avoid memory buildup
void MyActor_Labirynth::F_ClearArrays()
{
	// Clear the stone locations arrays
	Array_Clear(L_StoneLocationsX_Array);
	Array_Clear(L_StoneLocationsY_Array);
}

// Clears the given array
void MyActor_Labirynth::Array_Clear(TArray<FVector>& ArrayToClear)
{
	ArrayToClear.Empty();
}
};

mesh->SetupAttachment(HInstancedStaticMeshInstance);

UPROPERTY(EditAnywhere, Category = "Default");
bool ResetLabyrinth = false;

UPROPERTY(EditAnywhere, Category = "Default");
uint8 Setup_Labyrinth;

UPROPERTY(EditAnywhere, Category = "Default");
uint8 Cell_SpawnOption;

UPROPERTY(EditAnywhere, Category = "Default");
uint8 Wall_SpawnOption;

UPROPERTY(EditAnywhere, Category = "Default");
uint8 Kolumms_SpawnOption;

UPROPERTY(EditAnywhere, Category = "Default");
int x;

UPROPERTY(EditAnywhere, Category = "Default");
int y;

UPROPERTY(EditAnywhere, Category = "Default");
int CellSizeXY;

UPROPERTY(EditAnywhere, Category = "Default");
bool RNDSeed = false;

UPROPERTY(EditAnywhere, Category = "Default");
int Seed_Random;

UPROPERTY(EditAnywhere, Category = "Default");
int Seed;

UPROPERTY(EditAnywhere, Category = "Default");
int L_Index_X;

UPROPERTY(EditAnywhere, Category = "Default");
FVector L_location_X;

UPROPERTY(EditAnywhere, Category = "Default");
int L_Index_Y;

UPROPERTY(EditAnywhere, Category = "Default");
FVector L_location_Y;

UPROPERTY(EditAnywhere, Category = "Default");
bool RemoveRNDCell = false;

UPROPERTY(EditAnywhere, Category = "Default");
float WeightRemoveCell = 0.15;

UPROPERTY(EditAnywhere, Category = "Default");
bool ThreePointPerSpline = false;

UPROPERTY(EditAnywhere, Category = "Default");
bool Show_InstanceGreed = false;

UPROPERTY(EditAnywhere, Category = "Default");
FRandomStream Stream;

UPROPERTY(EditAnywhere, Category = "Default");
TArray<StructCellV00> Cells_All;

UPROPERTY(EditAnywhere, Category = "Default");
int SolveStep;

UPROPERTY(EditAnywhere, Category = "Default");
bool KeepSolving = true;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<FStruct_Cell> Cells_All;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<FStruct_Cell> Cells_DeadEnd;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<FStruct_Cell> Cells_Removed;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<FStruct_Cell> Cells_NoDeadEnd;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<FStruct_Cell> Cells_NoDeadEndNoRemoves;

UPROPERTY(BlueprintReadWrite, Category = "Default")
TArray<int> Stack_IDCell;

UPROPERTY(BlueprintReadWrite, Category = "Default")
FStruct_Cell StartCell;

UPROPERTY(BlueprintReadWrite, Category = "Default")
FStruct_Cell ExitCell;

UPROPERTY(BlueprintReadWrite, Category = "Default")
int index_StartCell;

UPROPERTY(BlueprintReadWrite, Category = "Default")
int index_ExitCell;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
UHierarchicalInstancedStaticMeshComponent* ISM;

UPROPERTY(EditAnywhere, Category = "Default")
UStaticMesh* HISM_SM = nullptr;

void ChangeColor(int InInstanceIndex, FLinearColor InColor);