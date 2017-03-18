{ Parsed from Intents.framework INEndWorkoutIntent.h }

{$ifdef TYPES}
type
  INEndWorkoutIntentPtr = ^INEndWorkoutIntent;
  INEndWorkoutIntentHandlingProtocolPtr = ^INEndWorkoutIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INEndWorkoutIntent = objcclass external (INIntent)
  public
    function initWithWorkoutName (workoutName: nullable INSpeakableStringPtr): instancetype; message 'initWithWorkoutName:'; { NS_DESIGNATED_INITIALIZER }
    function workoutName: INSpeakableString; message 'workoutName';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INEndWorkoutIntentHandlingProtocol = objcprotocol external name 'INEndWorkoutIntentHandling' (NSObjectProtocol)
  required
    procedure handleEndWorkout_completion_endWorkout (intent: INEndWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'handleEndWorkout:completion:endWorkout:';
  optional
    procedure confirmEndWorkout_completion_endWorkout (intent: INEndWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'confirmEndWorkout:completion:endWorkout:';
    procedure resolveWorkoutNameForEndWorkout_withCompletion_forEndWorkout (intent: INEndWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutNameForEndWorkout:withCompletion:forEndWorkout:';
  end;
{$endif}

