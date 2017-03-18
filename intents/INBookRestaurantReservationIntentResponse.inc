{ Parsed from Intents.framework INBookRestaurantReservationIntentResponse.h }

{$ifdef TYPES}
type
  INBookRestaurantReservationIntentResponsePtr = ^INBookRestaurantReservationIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INBookRestaurantReservationIntentCode = NSInteger;
  INBookRestaurantReservationIntentCodePtr = ^INBookRestaurantReservationIntentCode;

const
  INBookRestaurantReservationIntentCodeSuccess = 0;
  INBookRestaurantReservationIntentCodeDenied = 1;
  INBookRestaurantReservationIntentCodeFailure = 2;
  INBookRestaurantReservationIntentCodeFailureRequiringAppLaunch = 3;
  INBookRestaurantReservationIntentCodeFailureRequiringAppLaunchMustVerifyCredentials = 4;
  INBookRestaurantReservationIntentCodeFailureRequiringAppLaunchServiceTemporarilyUnavailable = 5;
{$endif}

{$ifdef CLASSES}

type
  INBookRestaurantReservationIntentResponse = objcclass external (INIntentResponse)
  public
    function initWithCode_userActivity (code: INBookRestaurantReservationIntentCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:';
    function code: INBookRestaurantReservationIntentCode; message 'code';
    procedure setUserBooking(newValue: INRestaurantReservationUserBooking); message 'setUserBooking:';
    function userBooking: INRestaurantReservationUserBooking; message 'userBooking';
  end;
{$endif}

