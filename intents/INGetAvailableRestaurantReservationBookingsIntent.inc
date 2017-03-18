{ Parsed from Intents.framework INGetAvailableRestaurantReservationBookingsIntent.h }

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingsIntentPtr = ^INGetAvailableRestaurantReservationBookingsIntent;
  INGetAvailableRestaurantReservationBookingsIntentHandlingProtocolPtr = ^INGetAvailableRestaurantReservationBookingsIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INGetAvailableRestaurantReservationBookingsIntent = objcclass external (INIntent, NSCopyingProtocol)
  public
    procedure setRestaurant(newValue: INRestaurant); message 'setRestaurant:';
    function restaurant: INRestaurant; message 'restaurant';
    procedure setPartySize(newValue: NSUInteger); message 'setPartySize:';
    function partySize: NSUInteger; message 'partySize';
    procedure setPreferredBookingDateComponents(newValue: NSDateComponents); message 'setPreferredBookingDateComponents:';
    function preferredBookingDateComponents: NSDateComponents; message 'preferredBookingDateComponents';
    procedure setMaximumNumberOfResults(newValue: NSNumber); message 'setMaximumNumberOfResults:';
    function maximumNumberOfResults: NSNumber; message 'maximumNumberOfResults';
    procedure setEarliestBookingDateForResults(newValue: NSDate); message 'setEarliestBookingDateForResults:';
    function earliestBookingDateForResults: NSDate; message 'earliestBookingDateForResults';
    procedure setLatestBookingDateForResults(newValue: NSDate); message 'setLatestBookingDateForResults:';
    function latestBookingDateForResults: NSDate; message 'latestBookingDateForResults';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INGetAvailableRestaurantReservationBookingsIntentHandlingProtocol = objcprotocol external name 'INGetAvailableRestaurantReservationBookingsIntentHandling' (NSObjectProtocol)
    procedure handleGetAvailableRestaurantReservationBookings_completion_getAvailableRestaurantReservationBookings (intent: INGetAvailableRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'handleGetAvailableRestaurantReservationBookings:completion:getAvailableRestaurantReservationBookings:';
  optional
    procedure confirmGetAvailableRestaurantReservationBookings_completion_getAvailableRestaurantReservationBookings (intent: INGetAvailableRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'confirmGetAvailableRestaurantReservationBookings:completion:getAvailableRestaurantReservationBookings:';
    procedure resolveRestaurantForGetAvailableRestaurantReservationBookings_withCompletion_for (intent: INGetAvailableRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'resolveRestaurantForGetAvailableRestaurantReservationBookings:withCompletion:for:';
    procedure resolvePartySizeForGetAvailableRestaurantReservationBookings_withCompletion_for (intent: INGetAvailableRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'resolvePartySizeForGetAvailableRestaurantReservationBookings:withCompletion:for:';
    procedure resolvePreferredBookingDateComponentsForGetAvailableRestaurantReservationBookings_withCompletion_for (intent: INGetAvailableRestaurantReservationBookingsIntent; completion: OpaqueCBlock; completion3: id); message 'resolvePreferredBookingDateComponentsForGetAvailableRestaurantReservationBookings:withCompletion:for:';
  end;
{$endif}

