{ Parsed from Intents.framework INCarAirCirculationModeResolutionResult.h }

{$ifdef TYPES}
type
  INCarAirCirculationModeResolutionResultPtr = ^INCarAirCirculationModeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCarAirCirculationModeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INCarAirCirculationMode): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INCarAirCirculationMode): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

