{ Parsed from Intents.framework INResumeWorkoutIntentResponse.h }

{$ifdef TYPES}
type
  INResumeWorkoutIntentResponsePtr = ^INResumeWorkoutIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INResumeWorkoutIntentResponseCode = NSInteger;
  INResumeWorkoutIntentResponseCodePtr = ^INResumeWorkoutIntentResponseCode;

const
  INResumeWorkoutIntentResponseCodeUnspecified = 0;
  INResumeWorkoutIntentResponseCodeReady = 1;
  INResumeWorkoutIntentResponseCodeContinueInApp = 2;
  INResumeWorkoutIntentResponseCodeFailure = 3;
  INResumeWorkoutIntentResponseCodeFailureRequiringAppLaunch = 4;
  INResumeWorkoutIntentResponseCodeFailureNoMatchingWorkout = 5;
{$endif}

{$ifdef CLASSES}

type
  INResumeWorkoutIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INResumeWorkoutIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INResumeWorkoutIntentResponseCode; message 'code';
  end;
{$endif}

