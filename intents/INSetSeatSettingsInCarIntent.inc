{ Parsed from Intents.framework INSetSeatSettingsInCarIntent.h }

{$ifdef TYPES}
type
  INSetSeatSettingsInCarIntentPtr = ^INSetSeatSettingsInCarIntent;
  INSetSeatSettingsInCarIntentHandlingProtocolPtr = ^INSetSeatSettingsInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetSeatSettingsInCarIntent = objcclass external (INIntent)
  public
    function initWithEnableHeating_enableCooling_enableMassage_seat_level_relativeLevelSetting (enableHeating: nullable NSNumberPtr; enableCooling: nullable NSNumberPtr; enableMassage: nullable NSNumberPtr; seat: INCarSeat; level: nullable NSNumberPtr; relativeLevelSetting: INRelativeSetting): instancetype; message 'initWithEnableHeating:enableCooling:enableMassage:seat:level:relativeLevelSetting:'; { NS_DESIGNATED_INITIALIZER }
    function NS_REFINED_FOR_SWIFT_: NSNumber *enableHeating; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT_: NSNumber *enableCooling; message 'NS_REFINED_FOR_SWIFT';
    function NS_REFINED_FOR_SWIFT__: NSNumber *enableMassage; message 'NS_REFINED_FOR_SWIFT';
    function seat: INCarSeat; message 'seat';
    function NS_REFINED_FOR_SWIFT___: NSNumber *level; message 'NS_REFINED_FOR_SWIFT';
    function relativeLevelSetting: INRelativeSetting; message 'relativeLevelSetting';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetSeatSettingsInCarIntentHandlingProtocol = objcprotocol external name 'INSetSeatSettingsInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetSeatSettingsInCar_completion_setSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetSeatSettingsInCar:completion:setSeatSettingsInCar:';
  optional
    procedure confirmSetSeatSettingsInCar_completion_setSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetSeatSettingsInCar:completion:setSeatSettingsInCar:';
    procedure resolveEnableHeatingForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableHeatingForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
    procedure resolveEnableCoolingForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableCoolingForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
    procedure resolveEnableMassageForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableMassageForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
    procedure resolveSeatForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveSeatForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
    procedure resolveLevelForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveLevelForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
    procedure resolveRelativeLevelSettingForSetSeatSettingsInCar_withCompletion_forSetSeatSettingsInCar (intent: INSetSeatSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveRelativeLevelSettingForSetSeatSettingsInCar:withCompletion:forSetSeatSettingsInCar:';
  end;
{$endif}

