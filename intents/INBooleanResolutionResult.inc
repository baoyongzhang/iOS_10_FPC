{ Parsed from Intents.framework INBooleanResolutionResult.h }

{$ifdef TYPES}
type
  INBooleanResolutionResultPtr = ^INBooleanResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INBooleanResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: boolean): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: nullable NSNumberPtr): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

