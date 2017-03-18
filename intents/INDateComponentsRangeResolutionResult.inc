{ Parsed from Intents.framework INDateComponentsRangeResolutionResult.h }

{$ifdef TYPES}
type
  INDateComponentsRangeResolutionResultPtr = ^INDateComponentsRangeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INDateComponentsRangeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedDateComponentsRange (resolvedDateComponentsRange: INDateComponentsRange): instancetype; message 'successWithResolvedDateComponentsRange:';
    class function disambiguationWithDateComponentsRangesToDisambiguate (dateComponentsRangesToDisambiguate: INDateComponentsRange *ProtocolPtr): instancetype; message 'disambiguationWithDateComponentsRangesToDisambiguate:';
    class function confirmationRequiredWithDateComponentsRangeToConfirm (dateComponentsRangeToConfirm: nullable INDateComponentsRangePtr): instancetype; message 'confirmationRequiredWithDateComponentsRangeToConfirm:';
  end;
{$endif}

