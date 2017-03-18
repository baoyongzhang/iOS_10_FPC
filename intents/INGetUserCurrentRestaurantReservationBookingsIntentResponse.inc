{ Parsed from Intents.framework INGetUserCurrentRestaurantReservationBookingsIntentResponse.h }

{$ifdef TYPES}
type
  INGetUserCurrentRestaurantReservationBookingsIntentResponsePtr = ^INGetUserCurrentRestaurantReservationBookingsIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCode = NSInteger;
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCodePtr = ^INGetUserCurrentRestaurantReservationBookingsIntentResponseCode;

const
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeSuccess = 0;
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeFailure = 1;
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeFailureRequestUnsatisfiable = 2;
  INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeUnspecified = 3;
{$endif}

{$ifdef CLASSES}

type
  INGetUserCurrentRestaurantReservationBookingsIntentResponse = objcclass external (INIntentResponse)
  public
    function initWithUserCurrentBookings_code_userActivity (userCurrentBookings: INRestaurantReservationUserBooking *ProtocolPtr; code: INGetUserCurrentRestaurantReservationBookingsIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithUserCurrentBookings:code:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INGetUserCurrentRestaurantReservationBookingsIntentResponseCode; message 'code';
    procedure setUserCurrentBookings(newValue: INRestaurantReservationUserBooking *ProtocolPtr); message 'setUserCurrentBookings:';
    function userCurrentBookings: INRestaurantReservationUserBooking *ProtocolPtr; message 'userCurrentBookings';
  end;
{$endif}

