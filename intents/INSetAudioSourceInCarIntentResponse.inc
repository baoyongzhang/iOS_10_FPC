{ Parsed from Intents.framework INSetAudioSourceInCarIntentResponse.h }

{$ifdef TYPES}
type
  INSetAudioSourceInCarIntentResponsePtr = ^INSetAudioSourceInCarIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetAudioSourceInCarIntentResponseCode = NSInteger;
  INSetAudioSourceInCarIntentResponseCodePtr = ^INSetAudioSourceInCarIntentResponseCode;

const
  INSetAudioSourceInCarIntentResponseCodeUnspecified = 0;
  INSetAudioSourceInCarIntentResponseCodeReady = 1;
  INSetAudioSourceInCarIntentResponseCodeInProgress = 2;
  INSetAudioSourceInCarIntentResponseCodeSuccess = 3;
  INSetAudioSourceInCarIntentResponseCodeFailure = 4;
  INSetAudioSourceInCarIntentResponseCodeFailureRequiringAppLaunch = 5;
{$endif}

{$ifdef CLASSES}

type
  INSetAudioSourceInCarIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetAudioSourceInCarIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetAudioSourceInCarIntentResponseCode; message 'code';
  end;
{$endif}

