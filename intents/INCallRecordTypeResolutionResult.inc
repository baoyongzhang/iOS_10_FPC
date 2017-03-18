{ Parsed from Intents.framework INCallRecordTypeResolutionResult.h }

{$ifdef TYPES}
type
  INCallRecordTypeResolutionResultPtr = ^INCallRecordTypeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INCallRecordTypeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INCallRecordType): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INCallRecordType): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

