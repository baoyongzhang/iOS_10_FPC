{ Parsed from Intents.framework INWorkoutLocationTypeResolutionResult.h }

{$ifdef TYPES}
type
  INWorkoutLocationTypeResolutionResultPtr = ^INWorkoutLocationTypeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INWorkoutLocationTypeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INWorkoutLocationType): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INWorkoutLocationType): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

