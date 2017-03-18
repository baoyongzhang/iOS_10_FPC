{ Parsed from Intents.framework INStartVideoCallIntentResponse.h }

{$ifdef TYPES}
type
  INStartVideoCallIntentResponsePtr = ^INStartVideoCallIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INStartVideoCallIntentResponseCode = NSInteger;
  INStartVideoCallIntentResponseCodePtr = ^INStartVideoCallIntentResponseCode;

const
  INStartVideoCallIntentResponseCodeUnspecified = 0;
  INStartVideoCallIntentResponseCodeReady = 1;
  INStartVideoCallIntentResponseCodeContinueInApp = 2;
  INStartVideoCallIntentResponseCodeFailure = 3;
  INStartVideoCallIntentResponseCodeFailureRequiringAppLaunch = 4;
  INStartVideoCallIntentResponseCodeFailureAppConfigurationRequired = 5;
  INStartVideoCallIntentResponseCodeFailureCallingServiceNotAvailable = 6;
{$endif}

{$ifdef CLASSES}

type
  INStartVideoCallIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INStartVideoCallIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INStartVideoCallIntentResponseCode; message 'code';
  end;
{$endif}

