{ Parsed from Intents.framework INDateComponentsResolutionResult.h }

{$ifdef TYPES}
type
  INDateComponentsResolutionResultPtr = ^INDateComponentsResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INDateComponentsResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedDateComponents (resolvedDateComponents: NSDateComponents): instancetype; message 'successWithResolvedDateComponents:';
    class function disambiguationWithDateComponentsToDisambiguate (dateComponentsToDisambiguate: NSDateComponents *ProtocolPtr): instancetype; message 'disambiguationWithDateComponentsToDisambiguate:';
    class function confirmationRequiredWithDateComponentsToConfirm (dateComponentsToConfirm: nullable NSDateComponentsPtr): instancetype; message 'confirmationRequiredWithDateComponentsToConfirm:';
  end;
{$endif}

