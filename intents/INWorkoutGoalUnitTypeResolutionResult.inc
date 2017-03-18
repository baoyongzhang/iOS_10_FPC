{ Parsed from Intents.framework INWorkoutGoalUnitTypeResolutionResult.h }

{$ifdef TYPES}
type
  INWorkoutGoalUnitTypeResolutionResultPtr = ^INWorkoutGoalUnitTypeResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INWorkoutGoalUnitTypeResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INWorkoutGoalUnitType): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INWorkoutGoalUnitType): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

