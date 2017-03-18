{ Parsed from Intents.framework INRelativeSettingResolutionResult.h }

{$ifdef TYPES}
type
  INRelativeSettingResolutionResultPtr = ^INRelativeSettingResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INRelativeSettingResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedValue (resolvedValue: INRelativeSetting): instancetype; message 'successWithResolvedValue:';
    class function confirmationRequiredWithValueToConfirm (valueToConfirm: INRelativeSetting): instancetype; message 'confirmationRequiredWithValueToConfirm:';
  end;
{$endif}

