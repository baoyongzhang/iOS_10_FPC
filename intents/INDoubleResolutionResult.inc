{ Parsed from Intents.framework INDoubleResolutionResult.h }

{$ifdef TYPES}
type
  INDoubleResolutionResultPtr = ^INDoubleResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INDoubleResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: double): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: nullable NSNumberPtr): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

