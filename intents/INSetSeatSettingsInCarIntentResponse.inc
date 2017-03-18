{ Parsed from Intents.framework INSetSeatSettingsInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSetSeatSettingsInCarIntentResponsePtr = ^INSetSeatSettingsInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetSeatSettingsInCarIntentResponseCode = NSInteger;
  INSetSeatSettingsInCarIntentResponseCodePtr = ^INSetSeatSettingsInCarIntentResponseCode;

const
  INSetSeatSettingsInCarIntentResponseCodeUnspecified = 0;
  INSetSeatSettingsInCarIntentResponseCodeReady = 1;
  INSetSeatSettingsInCarIntentResponseCodeInProgress = 2;
  INSetSeatSettingsInCarIntentResponseCodeSuccess = 3;
  INSetSeatSettingsInCarIntentResponseCodeFailure = 4;
  INSetSeatSettingsInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSetSeatSettingsInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetSeatSettingsInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetSeatSettingsInCarIntentResponseCode; message 'code';
  end;
{$endif}

