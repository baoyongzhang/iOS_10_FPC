{ Parsed from Intents.framework INResumeWorkoutIntent.h }

{$ifdef TYPES}
type
  INResumeWorkoutIntentPtr = ^INResumeWorkoutIntent;
  INResumeWorkoutIntentHandlingProtocolPtr = ^INResumeWorkoutIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INResumeWorkoutIntent = objcclass external (INIntent)
  public
    function initWithWorkoutName (workoutName: nullable INSpeakableStringPtr): instancetype; message 'initWithWorkoutName:'; { NS_DESIGNATED_INITIALIZER }
    function workoutName: INSpeakableString; message 'workoutName';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INResumeWorkoutIntentHandlingProtocol = objcprotocol external name 'INResumeWorkoutIntentHandling' (NSObjectProtocol)
  required
    procedure handleResumeWorkout_completion_resumeWorkout (intent: INResumeWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'handleResumeWorkout:completion:resumeWorkout:';
  optional
    procedure confirmResumeWorkout_completion_resumeWorkout (intent: INResumeWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'confirmResumeWorkout:completion:resumeWorkout:';
    procedure resolveWorkoutNameForResumeWorkout_withCompletion_forResumeWorkout (intent: INResumeWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutNameForResumeWorkout:withCompletion:forResumeWorkout:';
  end;
{$endif}

