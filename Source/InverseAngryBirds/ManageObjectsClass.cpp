//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "ManageObjectsClass.h"
//
//// Sets default values
//AManageObjectsClass::AManageObjectsClass()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
//
//	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
//    CubeMesh->SetupAttachment(RootComponent);
//
//}
//
//// Called when the game starts or when spawned
//void AManageObjectsClass::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AManageObjectsClass::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//void AManageObjectsClass::SetRotationConstraints(bool bShouldLockRotation)
//{
//    if (CubeMesh)
//    {
//        if (bShouldLockRotation)
//        {
//            CubeMesh->BodyInstance.bLockXRotation = true;
//            CubeMesh->BodyInstance.bLockYRotation = true;
//            CubeMesh->BodyInstance.bLockZRotation = true;
//        }
//        else
//        {
//            CubeMesh->BodyInstance.bLockXRotation = true;
//            CubeMesh->BodyInstance.bLockYRotation = false;
//            CubeMesh->BodyInstance.bLockZRotation = true;
//        }
//    }
//}
