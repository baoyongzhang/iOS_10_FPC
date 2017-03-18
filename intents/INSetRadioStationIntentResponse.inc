{ Parsed from Intents.framework INSetRadioStationIntentResponse.h }

{$ifdef TYPES}
type
  INSetRadioStationIntentResponsePtr = ^INSetRadioStationIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSetRadioStationIntentResponseCode = NSInteger;
  INSetRadioStationIntentResponseCodePtr = ^INSetRadioStationIntentResponseCode;

const
  INSetRadioStationIntentResponseCodeUnspecified = 0;
  INSetRadioStationIntentResponseCodeReady = 1;
  INSetRadioStationIntentResponseCodeInProgress = 2;
  INSetRadioStationIntentResponseCodeSuccess = 3;
  INSetRadioStationIntentResponseCodeFailure = 4;
  INSetRadioStationIntentResponseCodeFailureRequiringAppLaunch = 5;
  INSetRadioStationIntentResponseCodeFailureNotSubscribed = 6;
{$endif}

{$ifdef CLASSES}

type
  INSetRadioStationIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSetRadioStationIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSetRadioStationIntentResponseCode; message 'code';
  end;
{$endif}

