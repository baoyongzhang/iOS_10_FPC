{ Parsed from Intents.framework INRequestRideIntentResponse.h }

{$ifdef TYPES}
type
  INRequestRideIntentResponsePtr = ^INRequestRideIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INRequestRideIntentResponseCode = NSInteger;
  INRequestRideIntentResponseCodePtr = ^INRequestRideIntentResponseCode;

const
  INRequestRideIntentResponseCodeUnspecified = 0;
  INRequestRideIntentResponseCodeReady = 1;
  INRequestRideIntentResponseCodeInProgress = 2;
  INRequestRideIntentResponseCodeSuccess = 3;
  INRequestRideIntentResponseCodeFailure = 4;
  INRequestRideIntentResponseCodeFailureRequiringAppLaunch = 5;
  INRequestRideIntentResponseCodeFailureRequiringAppLaunchMustVerifyCredentials = 6;
  INRequestRideIntentResponseCodeFailureRequiringAppLaunchNoServiceInArea = 7;
  INRequestRideIntentResponseCodeFailureRequiringAppLaunchServiceTemporarilyUnavailable = 8;
  INRequestRideIntentResponseCodeFailureRequiringAppLaunchPreviousRideNeedsCompletion = 9;
{$endif}

{$ifdef CLASSES}

type
  INRequestRideIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INRequestRideIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INRequestRideIntentResponseCode; message 'code';
    procedure setRideStatus(newValue: INRideStatus); message 'setRideStatus:';
    function rideStatus: INRideStatus; message 'rideStatus';
  end;
{$endif}

