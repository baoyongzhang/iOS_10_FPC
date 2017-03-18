{ Parsed from Intents.framework INStringResolutionResult.h }

{$ifdef TYPES}
type
  INStringResolutionResultPtr = ^INStringResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INStringResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedString (resolvedString: NSString): instancetype; message 'successWithResolvedString:';
    class function disambiguationWithStringsToDisambiguate (stringsToDisambiguate: NSString *ProtocolPtr): instancetype; message 'disambiguationWithStringsToDisambiguate:';
    class function confirmationRequiredWithStringToConfirm (stringToConfirm: nullable NSStringPtr): instancetype; message 'confirmationRequiredWithStringToConfirm:';
  end;
{$endif}

