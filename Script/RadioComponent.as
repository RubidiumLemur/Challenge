class URadioComponent : UActorComponent
{
    UPROPERTY()
    TArray<TSoftObjectPtr<USoundBase>> Soundtracks;
    UPROPERTY()
    uint8 CurrentSong;

    UAudioComponent ActiveAudioComponent;
    FTimerHandle NextSongTimer;

    UFUNCTION()
    void PlaySong()
    {
        if (Soundtracks.Num() == 0) return;
        Soundtracks[CurrentSong].LoadAsync(FOnSoftObjectLoaded(this, n"OnSongLoaded"));
    }

    UFUNCTION()
    void OnSongLoaded(UObject LoadedAsset)
    {
        USoundBase Song = Cast<USoundBase>(LoadedAsset);
        if (Song == nullptr) return;

        if (ActiveAudioComponent != nullptr)
        {
            ActiveAudioComponent.Stop();
            ActiveAudioComponent = nullptr;
        }

        System::ClearAndInvalidateTimerHandle(NextSongTimer);

        ActiveAudioComponent = Gameplay::SpawnSound2D(Song, 0.3f);
        NextSongTimer = System::SetTimer(this, n"NextSong", Song.Duration + 3.f, false);
    }

    UFUNCTION()
    void NextSong()
    {
        CurrentSong = uint8((CurrentSong + 1) % uint8(Soundtracks.Num()));
        PlaySong();
    }
};