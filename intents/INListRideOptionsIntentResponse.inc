{ Parsed from Intents.framework INListRideOptionsIntentResponse.h }

{$ifdef TYPES}
type
  INListRideOptionsIntentResponsePtr = ^INListRideOptionsIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INListRideOptionsIntentResponseCode = NSInteger;
  INListRideOptionsIntentResponseCodePtr = ^INListRideOptionsIntentResponseCode;

const
  INListRideOptionsIntentResponseCodeUnspecified = 0;
  INListRideOptionsIntentResponseCodeReady = 1;
  INListRideOptionsIntentResponseCodeInProgress = 2;
  INListRideOptionsIntentResponseCodeSuccess = 3;
  INListRideOptionsIntentResponseCodeFailure = 4;
  INListRideOptionsIntentResponseCodeFailureRequiringAppLaunch = 5;
  INListRideOptionsIntentResponseCodeFailureRequiringAppLaunchMustVerifyCredentials = 6;
  INListRideOptionsIntentResponseCodeFailureRequiringAppLaunchNoServiceInArea = 7;
  INListRideOptionsIntentResponseCodeFailureRequiringAppLaunchServiceTemporarilyUnavailable = 8;
  INListRideOptionsIntentResponseCodeFailureRequiringAppLaunchPreviousRideNeedsCompletion = 9;
{$endif}

{$ifdef CLASSES}

type
  INListRideOptionsIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INListRideOptionsIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INListRideOptionsIntentResponseCode; message 'code';
    procedure setRideOptions(newValue: INRideOption *ProtocolPtr); message 'setRideOptions:';
    function rideOptions: INRideOption *ProtocolPtr; message 'rideOptions';
    procedure setPaymentMethods(newValue: INPaymentMethod *ProtocolPtr); message 'setPaymentMethods:';
    function paymentMethods: INPaymentMethod *ProtocolPtr; message 'paymentMethods';
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:';
    function expirationDate: NSDate; message 'expirationDate';
  end;
{$endif}

