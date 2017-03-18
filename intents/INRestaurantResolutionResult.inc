{ Parsed from Intents.framework INRestaurantResolutionResult.h }

{$ifdef TYPES}
type
  INRestaurantResolutionResultPtr = ^INRestaurantResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedRestaurant (resolvedRestaurant: INRestaurant): instancetype; message 'successWithResolvedRestaurant:';
    class function disambiguationWithRestaurantsToDisambiguate (restaurantsToDisambiguate: INRestaurant *ProtocolPtr): instancetype; message 'disambiguationWithRestaurantsToDisambiguate:';
    class function confirmationRequiredWithRestaurantToConfirm (restaurantToConfirm: nullable INRestaurantPtr): instancetype; message 'confirmationRequiredWithRestaurantToConfirm:';
  end;
{$endif}

