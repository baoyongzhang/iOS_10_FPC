{ Parsed from Intents.framework INPauseWorkoutIntentResponse.h }

{$ifdef TYPES}
type
  INPauseWorkoutIntentResponsePtr = ^INPauseWorkoutIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INPauseWorkoutIntentResponseCode = NSInteger;
  INPauseWorkoutIntentResponseCodePtr = ^INPauseWorkoutIntentResponseCode;

const
  INPauseWorkoutIntentResponseCodeUnspecified = 0;
  INPauseWorkoutIntentResponseCodeReady = 1;
  INPauseWorkoutIntentResponseCodeContinueInApp = 2;
  INPauseWorkoutIntentResponseCodeFailure = 3;
  INPauseWorkoutIntentResponseCodeFailureRequiringAppLaunch = 4;
  INPauseWorkoutIntentResponseCodeFailureNoMatchingWorkout = 5;
{$endif}

{$ifdef CLASSES}

type
  INPauseWorkoutIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INPauseWorkoutIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INPauseWorkoutIntentResponseCode; message 'code';
  end;
{$endif}

