{ Parsed from Intents.framework INCarSeatResolutionResult.h }

{$ifdef TYPES}
type
  INCarSeatResolutionResultPtr = ^INCarSeatResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCarSeatResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INCarSeat): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INCarSeat): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

