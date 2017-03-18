{ Parsed from Intents.framework INSpeakableStringResolutionResult.h }

{$ifdef TYPES}
type
  INSpeakableStringResolutionResultPtr = ^INSpeakableStringResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INSpeakableStringResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedString (resolvedString: INSpeakableString): instancetype; message 'successWithResolvedString:';
    class function disambiguationWithStringsToDisambiguate (stringsToDisambiguate: INSpeakableString *ProtocolPtr): instancetype; message 'disambiguationWithStringsToDisambiguate:';
    class function confirmationRequiredWithStringToConfirm (stringToConfirm: nullable INSpeakableStringPtr): instancetype; message 'confirmationRequiredWithStringToConfirm:';
  end;
{$endif}

