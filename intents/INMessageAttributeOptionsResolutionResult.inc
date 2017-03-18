{ Parsed from Intents.framework INMessageAttributeOptionsResolutionResult.h }

{$ifdef TYPES}
type
  INMessageAttributeOptionsResolutionResultPtr = ^INMessageAttributeOptionsResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INMessageAttributeOptionsResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INMessageAttributeOptions): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INMessageAttributeOptions): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

