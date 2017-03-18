{ Parsed from Intents.framework INCarDefrosterResolutionResult.h }

{$ifdef TYPES}
type
  INCarDefrosterResolutionResultPtr = ^INCarDefrosterResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCarDefrosterResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INCarDefroster): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INCarDefroster): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

