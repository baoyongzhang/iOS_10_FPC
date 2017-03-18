{ Parsed from Intents.framework INRelativeReferenceResolutionResult.h }

{$ifdef TYPES}
type
  INRelativeReferenceResolutionResultPtr = ^INRelativeReferenceResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INRelativeReferenceResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INRelativeReference): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INRelativeReference): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

