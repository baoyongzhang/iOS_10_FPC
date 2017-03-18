{ Parsed from Intents.framework INCarAudioSourceResolutionResult.h }

{$ifdef TYPES}
type
  INCarAudioSourceResolutionResultPtr = ^INCarAudioSourceResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCarAudioSourceResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INCarAudioSource): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INCarAudioSource): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

