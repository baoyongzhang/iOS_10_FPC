{ Parsed from Intents.framework INIntegerResolutionResult.h }

{$ifdef TYPES}
type
  INIntegerResolutionResultPtr = ^INIntegerResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INIntegerResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: NSInteger): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: nullable NSNumberPtr): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

