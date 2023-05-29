// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"PlayerInput.generated.h"
#include "Spectator.generated.h"


UCLASS()
class LIBRARY_API ASpectator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpectator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//要在这里加一个控制输入的组件，但还不会，先在蓝图里加了
	
};
