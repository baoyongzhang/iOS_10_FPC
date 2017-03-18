{ Parsed from Intents.framework INMessageAttributeResolutionResult.h }

{$ifdef TYPES}
type
  INMessageAttributeResolutionResultPtr = ^INMessageAttributeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INMessageAttributeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INMessageAttribute): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INMessageAttribute): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

