{ Parsed from Intents.framework INGetRestaurantGuestIntent.h }

{$ifdef TYPES}
type
  INGetRestaurantGuestIntentPtr = ^INGetRestaurantGuestIntent;
  INGetRestaurantGuestIntentHandlingProtocolPtr = ^INGetRestaurantGuestIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INGetRestaurantGuestIntent = objcclass external (INIntent)
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INGetRestaurantGuestIntentHandlingProtocol = objcprotocol external name 'INGetRestaurantGuestIntentHandling' (NSObjectProtocol)
    procedure handleGetRestaurantGuest_completion_getRestaurantGuest (intent: INGetRestaurantGuestIntent; completion: OpaqueCBlock; completion3: id); message 'handleGetRestaurantGuest:completion:getRestaurantGuest:';
  optional
    procedure confirmGetRestaurantGuest_completion_getRestaurantGuest (guestIntent: INGetRestaurantGuestIntent; completion: OpaqueCBlock; completion3: id); message 'confirmGetRestaurantGuest:completion:getRestaurantGuest:';
  end;
{$endif}

