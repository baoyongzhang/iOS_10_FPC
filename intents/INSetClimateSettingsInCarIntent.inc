{ Parsed from Intents.framework INSetClimateSettingsInCarIntent.h }

{$ifdef TYPES}
type
  INSetClimateSettingsInCarIntentPtr = ^INSetClimateSettingsInCarIntent;
  INSetClimateSettingsInCarIntentHandlingProtocolPtr = ^INSetClimateSettingsInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetClimateSettingsInCarIntent = objcclass external (INIntent)
  public
    function initWithEnableFan_enableAirConditioner_enableClimateControl_enableAutoMode_airCirculationMode_fanSpeedIndex_fanSpeedPercentage_relativeFanSpeedSetting_temperature_relativeTemperatureSetting_climateZone (enableFan: nullable NSNumberPtr; enableAirConditioner: nullable NSNumberPtr; enableClimateControl: nullable NSNumberPtr; enableAutoMode: nullable NSNumberPtr; airCirculationMode: INCarAirCirculationMode; fanSpeedIndex: nullable NSNumberPtr; fanSpeedPercentage: nullable NSNumberPtr; relativeFanSpeedSetting: INRelativeSetting; temperature: nullable NSUnitTemperature *ProtocolPtr; relativeTemperatureSetting: INRelativeSetting; climateZone: INCarSeat): instancetype; message 'initWithEnableFan:enableAirConditioner:enableClimateControl:enableAutoMode:airCirculationMode:fanSpeedIndex:fanSpeedPercentage:relativeFanSpeedSetting:temperature:relativeTemperatureSetting:climateZone:'; { NS_DESIGNATED_INITIALIZER }
    function NS_REFINED_FOR_SWIFT_: NSNumber *enableFan; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT_: NSNumber *enableAirConditioner; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT__: NSNumber *enableClimateControl; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT___: NSNumber *enableAutoMode; message 'NS_REFINED_FOR_SWIFT';
    function airCirculationMode: INCarAirCirculationMode; message 'airCirculationMode';
    function NS_REFINED_FOR_SWIFT____: NSNumber *fanSpeedIndex; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT_____: NSNumber *fanSpeedPercentage; message 'NS_REFINED_FOR_SWIFT';
    function relativeFanSpeedSetting: INRelativeSetting; message 'relativeFanSpeedSetting';
    function temperature: NSUnitTemperature *ProtocolPtr; message 'temperature';
    function relativeTemperatureSetting: INRelativeSetting; message 'relativeTemperatureSetting';
    function climateZone: INCarSeat; message 'climateZone';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetClimateSettingsInCarIntentHandlingProtocol = objcprotocol external name 'INSetClimateSettingsInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetClimateSettingsInCar_completion_setClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetClimateSettingsInCar:completion:setClimateSettingsInCar:';
  optional
    procedure confirmSetClimateSettingsInCar_completion_setClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetClimateSettingsInCar:completion:setClimateSettingsInCar:';
    procedure resolveEnableFanForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableFanForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveEnableAirConditionerForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableAirConditionerForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveEnableClimateControlForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableClimateControlForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveEnableAutoModeForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableAutoModeForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveAirCirculationModeForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveAirCirculationModeForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveFanSpeedIndexForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveFanSpeedIndexForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveFanSpeedPercentageForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveFanSpeedPercentageForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveRelativeFanSpeedSettingForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveRelativeFanSpeedSettingForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveTemperatureForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveTemperatureForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveRelativeTemperatureSettingForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveRelativeTemperatureSettingForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
    procedure resolveClimateZoneForSetClimateSettingsInCar_withCompletion_forSetClimateSettingsInCar (intent: INSetClimateSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveClimateZoneForSetClimateSettingsInCar:withCompletion:forSetClimateSettingsInCar:';
  end;
{$endif}

