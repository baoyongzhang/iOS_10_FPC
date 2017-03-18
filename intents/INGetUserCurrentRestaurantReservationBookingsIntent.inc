{ Parsed from Intents.framework INGetUserCurrentRestaurantReservationBookingsIntent.h }

{$ifdef TYPES}
type
  INGetUserCurrentRestaurantReservationBookingsIntentPtr = ^INGetUserCurrentRestaurantReservationBookingsIntent;
  INGetUserCurrentRestaurantReservationBookingsIntentHandlingProtocolPtr = ^INGetUserCurrentRestaurantReservationBookingsIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INGetUserCurrentRestaurantReservationBookingsIntent = objcclass external (INIntent, NSCopyingProtocol)
  public
    procedure setRestaurant(newValue: INRestaurant); message 'setRestaurant:';
    function restaurant: INRestaurant; message 'restaurant';
    procedure setReservationIdentifier(newValue: NSString); message 'setReservationIdentifier:';
    function reservationIdentifier: NSString; message 'reservationIdentifier';
    procedure setMaximumNumberOfResults(newValue: NSNumber); message 'setMaximumNumberOfResults:';
    function maximumNumberOfResults: NSNumber; message 'maximumNumberOfResults';
    procedure setEarliestBookingDateForResults(newValue: NSDate); message 'setEarliestBookingDateForResults:';
    function earliestBookingDateForResults: NSDate; message 'earliestBookingDateForResults';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INGetUserCurrentRestaurantReservationBookingsIntentHandlingProtocol = objcprotocol external name 'INGetUserCurrentRestaurantReservationBookingsIntentHandling' (NSObjectProtocol)
    procedure handleGetUserCurrentRestaurantReservationBookings_completion_getUserCurrentRestaurantReservationBookings (intent: INGetUserCurrentRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'handleGetUserCurrentRestaurantReservationBookings:completion:getUserCurrentRestaurantReservationBookings:';
  optional
    procedure confirmGetUserCurrentRestaurantReservationBookings_completion_getUserCurrentRestaurantReservationBookings (intent: INGetUserCurrentRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'confirmGetUserCurrentRestaurantReservationBookings:completion:getUserCurrentRestaurantReservationBookings:';
    procedure resolveRestaurantForGetUserCurrentRestaurantReservationBookings_withCompletion_for (intent: INGetUserCurrentRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'resolveRestaurantForGetUserCurrentRestaurantReservationBookings:withCompletion:for:';
  end;
{$endif}

