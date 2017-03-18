{ Parsed from Intents.framework INPlacemarkResolutionResult.h }

{$ifdef TYPES}
type
  INPlacemarkResolutionResultPtr = ^INPlacemarkResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INPlacemarkResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedPlacemark (resolvedPlacemark: CLPlacemark): instancetype; message 'successWithResolvedPlacemark:';
    class function disambiguationWithPlacemarksToDisambiguate (placemarksToDisambiguate: CLPlacemark *ProtocolPtr): instancetype; message 'disambiguationWithPlacemarksToDisambiguate:';
    class function confirmationRequiredWithPlacemarkToConfirm (placemarkToConfirm: nullable CLPlacemarkPtr): instancetype; message 'confirmationRequiredWithPlacemarkToConfirm:';
  end;
{$endif}

