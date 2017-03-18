{ Parsed from Intents.framework INSearchCallHistoryIntentResponse.h }

{$ifdef TYPES}
type
  INSearchCallHistoryIntentResponsePtr = ^INSearchCallHistoryIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSearchCallHistoryIntentResponseCode = NSInteger;
  INSearchCallHistoryIntentResponseCodePtr = ^INSearchCallHistoryIntentResponseCode;

const
  INSearchCallHistoryIntentResponseCodeUnspecified = 0;
  INSearchCallHistoryIntentResponseCodeReady = 1;
  INSearchCallHistoryIntentResponseCodeContinueInApp = 2;
  INSearchCallHistoryIntentResponseCodeFailure = 3;
  INSearchCallHistoryIntentResponseCodeFailureRequiringAppLaunch = 4;
  INSearchCallHistoryIntentResponseCodeFailureAppConfigurationRequired = 5;
{$endif}

{$ifdef CLASSES}

type
  INSearchCallHistoryIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSearchCallHistoryIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSearchCallHistoryIntentResponseCode; message 'code';
  end;
{$endif}

