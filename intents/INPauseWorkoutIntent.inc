{ Parsed from Intents.framework INPauseWorkoutIntent.h }

{$ifdef TYPES}
type
  INPauseWorkoutIntentPtr = ^INPauseWorkoutIntent;
  INPauseWorkoutIntentHandlingProtocolPtr = ^INPauseWorkoutIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INPauseWorkoutIntent = objcclass external (INIntent)
  public
    function initWithWorkoutName (workoutName: nullable INSpeakableStringPtr): instancetype; message 'initWithWorkoutName:'; { NS_DESIGNATED_INITIALIZER }
    function workoutName: INSpeakableString; message 'workoutName';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INPauseWorkoutIntentHandlingProtocol = objcprotocol external name 'INPauseWorkoutIntentHandling' (NSObjectProtocol)
  required
    procedure handlePauseWorkout_completion_pauseWorkout (intent: INPauseWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'handlePauseWorkout:completion:pauseWorkout:';
  optional
    procedure confirmPauseWorkout_completion_pauseWorkout (intent: INPauseWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'confirmPauseWorkout:completion:pauseWorkout:';
    procedure resolveWorkoutNameForPauseWorkout_withCompletion_forPauseWorkout (intent: INPauseWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutNameForPauseWorkout:withCompletion:forPauseWorkout:';
  end;
{$endif}

