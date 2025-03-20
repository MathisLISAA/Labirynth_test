// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_Labirynth.h"

// Sets default values
AMyActor_Labirynth::AMyActor_Labirynth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize default values
	L_Index = 0;
	L_Index_X = 0;
	L_Index_Y = 0;
	L_LocationX = FVector::ZeroVector;
	L_LocationY = FVector::ZeroVector;
	L_Index_Current = 0;
	L_Index_Next = 0;
	L_ExitCellIndexDeadEnd = 0;
	bool RndSeed = false
	bool ResetLabyrinth = false
	int Seed = 0
	int Seed_Random = 0
	FRandomStream Stream = 0

	
}

// Called when the game starts or when spawned
void AMyActor_Labirynth::BeginPlay()
{
	Super::BeginPlay();

	K2Node_Event_2();
	K2Node_ExecutionSequence_1();
}

// Called every frame
void AMyActor_Labirynth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABP_Labirynth_V00::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // Blueprint Construction Script logic:
    ResetLabyrinth = false; // Set node equivalent

    Tags.Empty(); // Clear Tags
    Tags.AddUnique(FName("Labirynth")); // AddUnique tag
}

void ABP_Labirynth_V00::K2Node_Event_2()
{
    // Blueprint BeginPlay logic placeholder
}

void ABP_Labirynth_V00::K2Node_ExecutionSequence_1()
{
    // Follow blueprint execution order
    K2Node_CallFunction_42();
    K2Node_CallFunction_43();
}

void ABP_Labirynth_V00::K2Node_CallFunction_42()
{
    // Translate logic from this node
}

void ABP_Labirynth_V00::K2Node_CallFunction_43()
{
    // Translate logic from this node
	void ABP_Labirynth_V00::ClearStoneLocationArrays()
	{
		L_StoneLocationsX_Array.Empty();
		L_StoneLocationsY_Array.Empty();
	}

	// Add a unique tag to the actor
	void ABP_Labirynth_V00::AddUniqueTag(FName NewTag)
	{
		if (!Tags.Contains(NewTag))
		{
			Tags.Add(NewTag);
		}
	}

	// Reset labyrinth (placeholder logic)
	void ABP_Labirynth_V00::ResetLabyrinth()
	{
		// Reset labyrinth functionality (implement actual reset logic)
	}

	// Clear all arrays to avoid memory buildup
	void ALabirynth_V00::F_ClearArrays()
	{
		// Clear the stone locations arrays
		Array_Clear(L_StoneLocationsX_Array);
		Array_Clear(L_StoneLocationsY_Array);
	}

	// Clears the given array
	void ALabirynth_V00::Array_Clear(TArray<FVector>& ArrayToClear)
	{
		ArrayToClear.Empty();
	}
	{
		// Initialize variables
		X = 0;
		Y = 0;
	}
	{
		// This represents the IfThenElse logic in the Blueprint
		bool Condition = true; // Simulating the condition pin, you can set this dynamically
		if (X > 0, and Y > 0,)
		{
			if (RndSeed = true)
			{
				int randomNum = rand() % 2147483647%;

				cout << randomNum;
				return 0;

				Seed_Random = return
				Stream = Seed_Random
			}
			else
			{
				Stream = Seed

			}
		}
		else
			
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("At Least 1x1 Please..."));
		}

		//When know how to change statis mesh into ISM, CHANGE HERE 

		IStaticMeshComponent; = mesh->SetStaticMesh(MeshObj.Object);
		{

		}
		for (; ; ; )

			//Statement 1 is executed (one time) before the execution of the code block.

			//Statement 2 defines the condition for executing the code block.

			//Statement 3 is executed(every time) after the code block has been executed.

			// third statement is for TEAMMATES

			L_index_X = L_location_X = FVector(L_Index_X * CellSizeXY + (CellSizeXY / 2)f, 0.0f, 0.0f);

		VectorAdd L_StoneLocationsX_Array[1] = { L_LocationX };

		for (; ; ; )

			//Statement 1 is executed (one time) before the execution of the code block.

			//Statement 2 defines the condition for executing the code block.

			//Statement 3 is executed(every time) after the code block has been executed.

			L_index_Y = L_location_Y = 0.0f, FVector(L_Index_Y * CellSizeXY + (CellSizeXY / 2)f, 0.0f);

		VectorAdd L_StoneLocationsY_Array[1] = { L_LocationX };

		UFUNCTION(BlueprintCallable, Category = "Components|InstancedStaticMeshComp")
		virtual int32 AddInstance
		(
			const FTransform& L_LocationY& InstanceTranformScale = FVector((Cell_Size_XY / 102.5)f, (Cell_Size_XY / 102.5)f, 0.0f, )
			bool bWorldSpace
		)

			void changecolor();
	}




