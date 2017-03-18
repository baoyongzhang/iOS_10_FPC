{ Parsed from Intents.framework INSaveProfileInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSaveProfileInCarIntentResponsePtr = ^INSaveProfileInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSaveProfileInCarIntentResponseCode = NSInteger;
  INSaveProfileInCarIntentResponseCodePtr = ^INSaveProfileInCarIntentResponseCode;

const
  INSaveProfileInCarIntentResponseCodeUnspecified = 0;
  INSaveProfileInCarIntentResponseCodeReady = 1;
  INSaveProfileInCarIntentResponseCodeInProgress = 2;
  INSaveProfileInCarIntentResponseCodeSuccess = 3;
  INSaveProfileInCarIntentResponseCodeFailure = 4;
  INSaveProfileInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSaveProfileInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSaveProfileInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSaveProfileInCarIntentResponseCode; message 'code';
  end;
{$endif}

