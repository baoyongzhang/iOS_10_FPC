{ Parsed from Intents.framework INRadioTypeResolutionResult.h }

{$ifdef TYPES}
type
  INRadioTypeResolutionResultPtr = ^INRadioTypeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INRadioTypeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INRadioType): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INRadioType): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

