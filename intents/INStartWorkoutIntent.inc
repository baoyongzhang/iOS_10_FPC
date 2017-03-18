{ Parsed from Intents.framework INStartWorkoutIntent.h }

{$ifdef TYPES}
type
  INStartWorkoutIntentPtr = ^INStartWorkoutIntent;
  INStartWorkoutIntentHandlingProtocolPtr = ^INStartWorkoutIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INStartWorkoutIntent = objcclass external (INIntent)
  public
    function initWithWorkoutName_goalValue_workoutGoalUnitType_workoutLocationType_isOpenEnded (workoutName: nullable INSpeakableStringPtr; goalValue: nullable NSNumberPtr; workoutGoalUnitType: INWorkoutGoalUnitType; workoutLocationType: INWorkoutLocationType; isOpenEnded: nullable NSNumberPtr): instancetype; message 'initWithWorkoutName:goalValue:workoutGoalUnitType:workoutLocationType:isOpenEnded:'; { NS_DESIGNATED_INITIALIZER }
    function workoutName: INSpeakableString; message 'workoutName';
    function NS_REFINED_FOR_SWIFT_: NSNumber *goalValue; message 'NS_REFINED_FOR_SWIFT';
    function workoutGoalUnitType: INWorkoutGoalUnitType; message 'workoutGoalUnitType';
    function workoutLocationType: INWorkoutLocationType; message 'workoutLocationType';
    function NS_REFINED_FOR_SWIFT_: NSNumber *isOpenEnded; message 'NS_REFINED_FOR_SWIFT';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INStartWorkoutIntentHandlingProtocol = objcprotocol external name 'INStartWorkoutIntentHandling' (NSObjectProtocol)
  required
    procedure handleStartWorkout_completion_startWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'handleStartWorkout:completion:startWorkout:';
  optional
    procedure confirmStartWorkout_completion_startWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; completion3: id); message 'confirmStartWorkout:completion:startWorkout:';
    procedure resolveWorkoutNameForStartWorkout_withCompletion_forStartWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutNameForStartWorkout:withCompletion:forStartWorkout:';
    procedure resolveGoalValueForStartWorkout_withCompletion_forStartWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveGoalValueForStartWorkout:withCompletion:forStartWorkout:';
    procedure resolveWorkoutGoalUnitTypeForStartWorkout_withCompletion_forStartWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutGoalUnitTypeForStartWorkout:withCompletion:forStartWorkout:';
    procedure resolveWorkoutLocationTypeForStartWorkout_withCompletion_forStartWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveWorkoutLocationTypeForStartWorkout:withCompletion:forStartWorkout:';
    procedure resolveIsOpenEndedForStartWorkout_withCompletion_forStartWorkout (intent: INStartWorkoutIntent; completion: OpaqueCBlock; with_: id); message 'resolveIsOpenEndedForStartWorkout:withCompletion:forStartWorkout:';
  end;
{$endif}

