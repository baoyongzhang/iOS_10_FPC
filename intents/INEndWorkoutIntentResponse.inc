{ Parsed from Intents.framework INEndWorkoutIntentResponse.h }

{$ifdef TYPES}
type
  INEndWorkoutIntentResponsePtr = ^INEndWorkoutIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INEndWorkoutIntentResponseCode = NSInteger;
  INEndWorkoutIntentResponseCodePtr = ^INEndWorkoutIntentResponseCode;

const
  INEndWorkoutIntentResponseCodeUnspecified = 0;
  INEndWorkoutIntentResponseCodeReady = 1;
  INEndWorkoutIntentResponseCodeContinueInApp = 2;
  INEndWorkoutIntentResponseCodeFailure = 3;
  INEndWorkoutIntentResponseCodeFailureRequiringAppLaunch = 4;
  INEndWorkoutIntentResponseCodeFailureNoMatchingWorkout = 5;
{$endif}

{$ifdef CLASSES}

type
  INEndWorkoutIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INEndWorkoutIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INEndWorkoutIntentResponseCode; message 'code';
  end;
{$endif}

