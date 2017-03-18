{ Parsed from Intents.framework INGetRestaurantGuestIntentResponse.h }

{$ifdef TYPES}
type
  INGetRestaurantGuestIntentResponsePtr = ^INGetRestaurantGuestIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INGetRestaurantGuestIntentResponseCode = NSInteger;
  INGetRestaurantGuestIntentResponseCodePtr = ^INGetRestaurantGuestIntentResponseCode;

const
  INGetRestaurantGuestIntentResponseCodeSuccess = 0;
  INGetRestaurantGuestIntentResponseCodeFailure = 1;
{$endif}

{$ifdef CLASSES}

type
  INGetRestaurantGuestIntentResponse = objcclass external (INIntentResponse)
  public
    function initWithCode_userActivity (code: INGetRestaurantGuestIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    procedure setGuest(newValue: INRestaurantGuest); message 'setGuest:';
    function guest: INRestaurantGuest; message 'guest';
    procedure setGuestDisplayPreferences(newValue: INRestaurantGuestDisplayPreferences); message 'setGuestDisplayPreferences:';
    function guestDisplayPreferences: INRestaurantGuestDisplayPreferences; message 'guestDisplayPreferences';
    function code: INGetRestaurantGuestIntentResponseCode; message 'code';
  end;
{$endif}

