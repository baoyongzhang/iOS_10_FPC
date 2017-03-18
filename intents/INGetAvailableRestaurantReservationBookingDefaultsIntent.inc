{ Parsed from Intents.framework INGetAvailableRestaurantReservationBookingDefaultsIntent.h }

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingDefaultsIntentPtr = ^INGetAvailableRestaurantReservationBookingDefaultsIntent;
  INGetAvailableRestaurantReservationBookingDefaultsIntentHandlingProtocolPtr = ^INGetAvailableRestaurantReservationBookingDefaultsIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INGetAvailableRestaurantReservationBookingDefaultsIntent = objcclass external (INIntent)
  public
    procedure setRestaurant(newValue: INRestaurant); message 'setRestaurant:';
    function restaurant: INRestaurant; message 'restaurant';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INGetAvailableRestaurantReservationBookingDefaultsIntentHandlingProtocol = objcprotocol external name 'INGetAvailableRestaurantReservationBookingDefaultsIntentHandling' (NSObjectProtocol)
    procedure handleGetAvailableRestaurantReservationBookingDefaults_completion_getAvailableRestaurantReservationBookingDefaults (intent: INGetAvailableRestaurantReservationBookingDefaultsIntent; completion: OpaqueCBlock; completion3: id); message 'handleGetAvailableRestaurantReservationBookingDefaults:completion:getAvailableRestaurantReservationBookingDefaults:';
  optional
    procedure confirmGetAvailableRestaurantReservationBookingDefaults_completion_getAvailableRestaurantReservationBookingDefaults (intent: INGetAvailableRestaurantReservationBookingDefaultsIntent; completion: OpaqueCBlock; completion3: id); message 'confirmGetAvailableRestaurantReservationBookingDefaults:completion:getAvailableRestaurantReservationBookingDefaults:';
    procedure resolveRestaurantForGetAvailableRestaurantReservationBookingDefaults_withCompletion_for (intent: INGetAvailableRestaurantReservationBookingDefaultsIntent; completion: OpaqueCBlock; completion3: id); message 'resolveRestaurantForGetAvailableRestaurantReservationBookingDefaults:withCompletion:for:';
  end;
{$endif}

