{ Parsed from Intents.framework INTemperatureResolutionResult.h }

{$ifdef TYPES}
type
  INTemperatureResolutionResultPtr = ^INTemperatureResolutionResult;
{$endif}

{$ifdef CLASSES}

type
  INTemperatureResolutionResult = objcclass external (INIntentResolutionResult)
  public
    class function successWithResolvedTemperature (resolvedTemperature: NSUnitTemperature *ProtocolPtr): instancetype; message 'successWithResolvedTemperature:';
    class function disambiguationWithTemperaturesToDisambiguate (temperaturesToDisambiguate: NSMeasurement<NSUnitTemperature *Protocol *>Ptr): instancetype; message 'disambiguationWithTemperaturesToDisambiguate:';
    class function confirmationRequiredWithTemperatureToConfirm (temperatureToConfirm: nullable NSUnitTemperature *ProtocolPtr): instancetype; message 'confirmationRequiredWithTemperatureToConfirm:';
  end;
{$endif}

