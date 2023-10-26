#include "LockConstraint.h"

// Sets default values
ALockConstraint::ALockConstraint()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create a MeshComponent
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
   

    // Set the MeshComponent as the root component
    RootComponent = MeshComponent;
}

// Function to lock or unlock rotation
void ALockConstraint::LockRotation(bool bShouldLockRotation)
{
    if (MeshComponent)
    {

        if (bShouldLockRotation)
        {
            MeshComponent->BodyInstance.bLockXRotation = true;
            MeshComponent->BodyInstance.bLockYRotation = true;
            MeshComponent->BodyInstance.bLockZRotation = true;
            MeshComponent->BodyInstance.SetDOFLock(EDOFMode::SixDOF);
        }
        else
        {
            MeshComponent->BodyInstance.bLockXRotation = true;
            MeshComponent->BodyInstance.bLockYRotation = false;
            MeshComponent->BodyInstance.bLockZRotation = true;
            MeshComponent->BodyInstance.SetDOFLock(EDOFMode::SixDOF);

        }
    }
}

