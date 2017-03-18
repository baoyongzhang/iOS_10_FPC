{ Parsed from Intents.framework INSetDefrosterSettingsInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSetDefrosterSettingsInCarIntentResponsePtr = ^INSetDefrosterSettingsInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetDefrosterSettingsInCarIntentResponseCode = NSInteger;
  INSetDefrosterSettingsInCarIntentResponseCodePtr = ^INSetDefrosterSettingsInCarIntentResponseCode;

const
  INSetDefrosterSettingsInCarIntentResponseCodeUnspecified = 0;
  INSetDefrosterSettingsInCarIntentResponseCodeReady = 1;
  INSetDefrosterSettingsInCarIntentResponseCodeInProgress = 2;
  INSetDefrosterSettingsInCarIntentResponseCodeSuccess = 3;
  INSetDefrosterSettingsInCarIntentResponseCodeFailure = 4;
  INSetDefrosterSettingsInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSetDefrosterSettingsInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetDefrosterSettingsInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetDefrosterSettingsInCarIntentResponseCode; message 'code';
  end;
{$endif}

