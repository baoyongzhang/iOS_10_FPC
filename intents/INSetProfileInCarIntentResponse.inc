{ Parsed from Intents.framework INSetProfileInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSetProfileInCarIntentResponsePtr = ^INSetProfileInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetProfileInCarIntentResponseCode = NSInteger;
  INSetProfileInCarIntentResponseCodePtr = ^INSetProfileInCarIntentResponseCode;

const
  INSetProfileInCarIntentResponseCodeUnspecified = 0;
  INSetProfileInCarIntentResponseCodeReady = 1;
  INSetProfileInCarIntentResponseCodeInProgress = 2;
  INSetProfileInCarIntentResponseCodeSuccess = 3;
  INSetProfileInCarIntentResponseCodeFailure = 4;
  INSetProfileInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSetProfileInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetProfileInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetProfileInCarIntentResponseCode; message 'code';
  end;
{$endif}

