#include "AppOpener.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include "Logging/LogMacros.h"

AAppOpener::AAppOpener()
{
    // Disable ticking to save performance since this is a utility actor
    PrimaryActorTick.bCanEverTick = false;
}

void AAppOpener::OpenMiniApp(const FString& AppName)
{
    // 1. Get the absolute path to the Miniapps folder
    // FPaths::ProjectDir() returns a relative path; we need Full for the OS to find it reliably.
    const FString BaseDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Miniapps"));

    // 2. Build the script path
    const FString ScriptPath = BaseDir / (AppName + TEXT(".py"));

    // 3. Verify the file actually exists before trying to launch
    if (!FPaths::FileExists(ScriptPath))
    {
        UE_LOG(LogTemp, Error, TEXT("AppOpener: Script not found at %s"), *ScriptPath);
        return;
    }

    // 4. Construct the Command Line Argument
    // /K runs the command and keeps the CMD window open for log reading.
    // We wrap the paths in extra quotes to handle any spaces in your Windows usernames or project paths.
    FString CommandLineArgs = FString::Printf(TEXT("/K \"python \"%s\"\""), *ScriptPath);

    UE_LOG(LogTemp, Log, TEXT("AppOpener: Launching %s via CMD"), *AppName);

    // 5. Create the Process
    FPlatformProcess::CreateProc(
        TEXT("cmd.exe"),        // The executable
        *CommandLineArgs,       // The arguments (the script call)
        false,                  // bLaunchDetached (Set to false to ensure a window appears)
        false,                  // bLaunchHidden
        false,                  // bLaunchReallyHidden
        nullptr,                // OutProcessID
        0,                      // Priority
        *BaseDir,               // Working Directory (Crucial so Python finds local script assets)
        nullptr                 // PipeWrite
    );
}