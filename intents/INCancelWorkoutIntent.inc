{ Parsed from Intents.framework INCancelWorkoutIntent.h }

{$ifdef TYPES}
type
  INCancelWorkoutIntentPtr = ^INCancelWorkoutIntent;
  INCancelWorkoutIntentHandlingProtocolPtr = ^INCancelWorkoutIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INCancelWorkoutIntent = objcclass external (INIntent)
  public
    function initWithWorkoutName (workoutName: nullable INSpeakableStringPtr): instancetype; message 'initWithWorkoutName:'; { NS_DESIGNATED_INITIALIZER }
    function workoutName: INSpeakableString; message 'workoutName';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INCancelWorkoutIntentHandlingProtocol = objcprotocol external name 'INCancelWorkoutIntentHandling' (NSObjectProtocol)
  required
    procedure handleCancelWorkout_completion_cancelWorkout (intent: INCancelWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'handleCancelWorkout:completion:cancelWorkout:';
  optional
    procedure confirmCancelWorkout_completion_cancelWorkout (intent: INCancelWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'confirmCancelWorkout:completion:cancelWorkout:';
    procedure resolveWorkoutNameForCancelWorkout_withCompletion_forCancelWorkout (intent: INCancelWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutNameForCancelWorkout:withCompletion:forCancelWorkout:';
  end;
{$endif}

