{ Parsed from Intents.framework INStartWorkoutIntentResponse.h }

{$ifdef TYPES}
type
  INStartWorkoutIntentResponsePtr = ^INStartWorkoutIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INStartWorkoutIntentResponseCode = NSInteger;
  INStartWorkoutIntentResponseCodePtr = ^INStartWorkoutIntentResponseCode;

const
  INStartWorkoutIntentResponseCodeUnspecified = 0;
  INStartWorkoutIntentResponseCodeReady = 1;
  INStartWorkoutIntentResponseCodeContinueInApp = 2;
  INStartWorkoutIntentResponseCodeFailure = 3;
  INStartWorkoutIntentResponseCodeFailureRequiringAppLaunch = 4;
  INStartWorkoutIntentResponseCodeFailureOngoingWorkout = 5;
  INStartWorkoutIntentResponseCodeFailureNoMatchingWorkout = 6;
{$endif}

{$ifdef CLASSES}

type
  INStartWorkoutIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INStartWorkoutIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INStartWorkoutIntentResponseCode; message 'code';
  end;
{$endif}

