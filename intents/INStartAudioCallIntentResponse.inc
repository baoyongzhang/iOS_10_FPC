{ Parsed from Intents.framework INStartAudioCallIntentResponse.h }

{$ifdef TYPES}
type
  INStartAudioCallIntentResponsePtr = ^INStartAudioCallIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INStartAudioCallIntentResponseCode = NSInteger;
  INStartAudioCallIntentResponseCodePtr = ^INStartAudioCallIntentResponseCode;

const
  INStartAudioCallIntentResponseCodeUnspecified = 0;
  INStartAudioCallIntentResponseCodeReady = 1;
  INStartAudioCallIntentResponseCodeContinueInApp = 2;
  INStartAudioCallIntentResponseCodeFailure = 3;
  INStartAudioCallIntentResponseCodeFailureRequiringAppLaunch = 4;
  INStartAudioCallIntentResponseCodeFailureAppConfigurationRequired = 5;
  INStartAudioCallIntentResponseCodeFailureCallingServiceNotAvailable = 6;
{$endif}

{$ifdef CLASSES}

type
  INStartAudioCallIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INStartAudioCallIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INStartAudioCallIntentResponseCode; message 'code';
  end;
{$endif}

