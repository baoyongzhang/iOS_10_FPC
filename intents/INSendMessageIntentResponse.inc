{ Parsed from Intents.framework INSendMessageIntentResponse.h }

{$ifdef TYPES}
type
  INSendMessageIntentResponsePtr = ^INSendMessageIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSendMessageIntentResponseCode = NSInteger;
  INSendMessageIntentResponseCodePtr = ^INSendMessageIntentResponseCode;

const
  INSendMessageIntentResponseCodeUnspecified = 0;
  INSendMessageIntentResponseCodeReady = 1;
  INSendMessageIntentResponseCodeInProgress = 2;
  INSendMessageIntentResponseCodeSuccess = 3;
  INSendMessageIntentResponseCodeFailure = 4;
  INSendMessageIntentResponseCodeFailureRequiringAppLaunch = 5;
  INSendMessageIntentResponseCodeFailureMessageServiceNotAvailable = 6;
{$endif}

{$ifdef CLASSES}

type
  INSendMessageIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSendMessageIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSendMessageIntentResponseCode; message 'code';
  end;
{$endif}

