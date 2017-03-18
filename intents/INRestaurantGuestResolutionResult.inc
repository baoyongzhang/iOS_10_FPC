{ Parsed from Intents.framework INRestaurantGuestResolutionResult.h }

{$ifdef TYPES}
type
  INRestaurantGuestResolutionResultPtr = ^INRestaurantGuestResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantGuestResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedRestaurantGuest (resolvedRestaurantGuest: INRestaurantGuest): instancetype; message 'successWithResolvedRestaurantGuest:';
    class function disambiguationWithRestaurantGuestsToDisambiguate (restaurantGuestsToDisambiguate: INRestaurantGuest *ProtocolPtr): instancetype; message 'disambiguationWithRestaurantGuestsToDisambiguate:';
    class function confirmationRequiredWithRestaurantGuestToConfirm (restaurantGuestToConfirm: nullable INRestaurantGuestPtr): instancetype; message 'confirmationRequiredWithRestaurantGuestToConfirm:';
  end;
{$endif}

