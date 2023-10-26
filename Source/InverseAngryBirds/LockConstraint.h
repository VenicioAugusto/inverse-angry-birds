#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockConstraint.generated.h"

UCLASS()
class INVERSEANGRYBIRDS_API ALockConstraint : public AActor
{
    GENERATED_BODY()

public:
    // Constructor declaration
    ALockConstraint();

private:
    UPROPERTY(VisibleAnywhere)
        UStaticMeshComponent* MeshComponent;

    // Function to lock or unlock rotation
    UFUNCTION(BlueprintCallable, Category = "Custom Constraints")
        void LockRotation(bool bShouldLockRotation);

    UFUNCTION(BlueprintCallable, Category = "Custom Constraints")
        void LockTranslation(bool bShouldLockTranslation);
};
