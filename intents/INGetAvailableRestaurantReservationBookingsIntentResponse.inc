{ Parsed from Intents.framework INGetAvailableRestaurantReservationBookingsIntentResponse.h }

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingsIntentResponsePtr = ^INGetAvailableRestaurantReservationBookingsIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingsIntentCode = NSInteger;
  INGetAvailableRestaurantReservationBookingsIntentCodePtr = ^INGetAvailableRestaurantReservationBookingsIntentCode;

const
  INGetAvailableRestaurantReservationBookingsIntentCodeSuccess = 0;
  INGetAvailableRestaurantReservationBookingsIntentCodeFailure = 1;
  INGetAvailableRestaurantReservationBookingsIntentCodeFailureRequestUnsatisfiable = 2;
  INGetAvailableRestaurantReservationBookingsIntentCodeFailureRequestUnspecified = 3;
{$endif}

{$ifdef CLASSES}

type
  INGetAvailableRestaurantReservationBookingsIntentResponse = objcclass external (INIntentResponse)
  public
    function initWithAvailableBookings_code_userActivity (availableBookings: INRestaurantReservationBooking *ProtocolPtr; code: INGetAvailableRestaurantReservationBookingsIntentCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithAvailableBookings:code:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INGetAvailableRestaurantReservationBookingsIntentCode; message 'code';
    procedure setLocalizedRestaurantDescriptionText(newValue: NSString); message 'setLocalizedRestaurantDescriptionText:';
    function localizedRestaurantDescriptionText: NSString; message 'localizedRestaurantDescriptionText';
    procedure setLocalizedBookingAdvisementText(newValue: NSString); message 'setLocalizedBookingAdvisementText:';
    function localizedBookingAdvisementText: NSString; message 'localizedBookingAdvisementText';
    procedure setTermsAndConditions(newValue: INTermsAndConditions); message 'setTermsAndConditions:';
    function termsAndConditions: INTermsAndConditions; message 'termsAndConditions';
    function availableBookings: INRestaurantReservationBooking *ProtocolPtr; message 'availableBookings';
  end;
{$endif}

