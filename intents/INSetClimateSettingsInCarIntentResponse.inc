{ Parsed from Intents.framework INSetClimateSettingsInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSetClimateSettingsInCarIntentResponsePtr = ^INSetClimateSettingsInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetClimateSettingsInCarIntentResponseCode = NSInteger;
  INSetClimateSettingsInCarIntentResponseCodePtr = ^INSetClimateSettingsInCarIntentResponseCode;

const
  INSetClimateSettingsInCarIntentResponseCodeUnspecified = 0;
  INSetClimateSettingsInCarIntentResponseCodeReady = 1;
  INSetClimateSettingsInCarIntentResponseCodeInProgress = 2;
  INSetClimateSettingsInCarIntentResponseCodeSuccess = 3;
  INSetClimateSettingsInCarIntentResponseCodeFailure = 4;
  INSetClimateSettingsInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSetClimateSettingsInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetClimateSettingsInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetClimateSettingsInCarIntentResponseCode; message 'code';
  end;
{$endif}

