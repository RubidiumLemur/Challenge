#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AppOpener.generated.h"

UCLASS()
class CHALLENGE_API AAppOpener : public AActor
{
    GENERATED_BODY()

public:
    AAppOpener();

    UFUNCTION(BlueprintCallable, Category = "MiniApps")
    void OpenMiniApp(const FString& AppName);
};