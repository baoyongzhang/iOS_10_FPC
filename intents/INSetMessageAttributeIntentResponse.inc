{ Parsed from Intents.framework INSetMessageAttributeIntentResponse.h }

{$ifdef TYPES}
type
  INSetMessageAttributeIntentResponsePtr = ^INSetMessageAttributeIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetMessageAttributeIntentResponseCode = NSInteger;
  INSetMessageAttributeIntentResponseCodePtr = ^INSetMessageAttributeIntentResponseCode;

const
  INSetMessageAttributeIntentResponseCodeUnspecified = 0;
  INSetMessageAttributeIntentResponseCodeReady = 1;
  INSetMessageAttributeIntentResponseCodeInProgress = 2;
  INSetMessageAttributeIntentResponseCodeSuccess = 3;
  INSetMessageAttributeIntentResponseCodeFailure = 4;
  INSetMessageAttributeIntentResponseCodeFailureRequiringAppLaunch = 5;
  INSetMessageAttributeIntentResponseCodeFailureMessageNotFound = 6;
  INSetMessageAttributeIntentResponseCodeFailureMessageAttributeNotSet = 7;
{$endif}

{$ifdef CLASSES}

type
  INSetMessageAttributeIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetMessageAttributeIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetMessageAttributeIntentResponseCode; message 'code';
  end;
{$endif}

