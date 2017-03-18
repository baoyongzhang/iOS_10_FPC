{ Parsed from Intents.framework INGetRideStatusIntentResponse.h }

{$ifdef TYPES}
type
  INGetRideStatusIntentResponsePtr = ^INGetRideStatusIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INGetRideStatusIntentResponseCode = NSInteger;
  INGetRideStatusIntentResponseCodePtr = ^INGetRideStatusIntentResponseCode;

const
  INGetRideStatusIntentResponseCodeUnspecified = 0;
  INGetRideStatusIntentResponseCodeReady = 1;
  INGetRideStatusIntentResponseCodeInProgress = 2;
  INGetRideStatusIntentResponseCodeSuccess = 3;
  INGetRideStatusIntentResponseCodeFailure = 4;
  INGetRideStatusIntentResponseCodeFailureRequiringAppLaunch = 5;
  INGetRideStatusIntentResponseCodeFailureRequiringAppLaunchMustVerifyCredentials = 6;
  INGetRideStatusIntentResponseCodeFailureRequiringAppLaunchServiceTemporarilyUnavailable = 7;
{$endif}

{$ifdef CLASSES}

type
  INGetRideStatusIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INGetRideStatusIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INGetRideStatusIntentResponseCode; message 'code';
    procedure setRideStatus(newValue: INRideStatus); message 'setRideStatus:';
    function rideStatus: INRideStatus; message 'rideStatus';
  end;
{$endif}

