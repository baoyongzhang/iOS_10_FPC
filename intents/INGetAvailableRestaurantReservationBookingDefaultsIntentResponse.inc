{ Parsed from Intents.framework INGetAvailableRestaurantReservationBookingDefaultsIntentResponse.h }

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponsePtr = ^INGetAvailableRestaurantReservationBookingDefaultsIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCode = NSInteger;
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCodePtr = ^INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCode;

const
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCodeSuccess = 0;
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCodeFailure = 1;
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCodeUnspecified = 2;
{$endif}

{$ifdef CLASSES}

type
  INGetAvailableRestaurantReservationBookingDefaultsIntentResponse = objcclass external (INIntentResponse)
  public
    function defaultPartySize: NSUInteger; message 'defaultPartySize';
    function defaultBookingDate: NSDate; message 'defaultBookingDate';
    procedure setMaximumPartySize(newValue: NSNumber); message 'setMaximumPartySize:';
    function maximumPartySize: NSNumber; message 'maximumPartySize';
    procedure setMinimumPartySize(newValue: NSNumber); message 'setMinimumPartySize:';
    function minimumPartySize: NSNumber; message 'minimumPartySize';
    procedure setProviderImage(newValue: INImage); message 'setProviderImage:';
    function providerImage: INImage; message 'providerImage';
    function initWithDefaultPartySize_defaultBookingDate_code_userActivity (defaultPartySize_: NSUInteger; defaultBookingDate_: NSDate; code: INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithDefaultPartySize:defaultBookingDate:code:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INGetAvailableRestaurantReservationBookingDefaultsIntentResponseCode; message 'code';
  end;
{$endif}

