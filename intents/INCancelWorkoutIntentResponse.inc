{ Parsed from Intents.framework INCancelWorkoutIntentResponse.h }

{$ifdef TYPES}
type
  INCancelWorkoutIntentResponsePtr = ^INCancelWorkoutIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INCancelWorkoutIntentResponseCode = NSInteger;
  INCancelWorkoutIntentResponseCodePtr = ^INCancelWorkoutIntentResponseCode;

const
  INCancelWorkoutIntentResponseCodeUnspecified = 0;
  INCancelWorkoutIntentResponseCodeReady = 1;
  INCancelWorkoutIntentResponseCodeContinueInApp = 2;
  INCancelWorkoutIntentResponseCodeFailure = 3;
  INCancelWorkoutIntentResponseCodeFailureRequiringAppLaunch = 4;
  INCancelWorkoutIntentResponseCodeFailureNoMatchingWorkout = 5;
{$endif}

{$ifdef CLASSES}

type
  INCancelWorkoutIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INCancelWorkoutIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INCancelWorkoutIntentResponseCode; message 'code';
  end;
{$endif}

