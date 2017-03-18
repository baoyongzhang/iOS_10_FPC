{ Parsed from Intents.framework INSetDefrosterSettingsInCarIntent.h }

{$ifdef TYPES}
type
  INSetDefrosterSettingsInCarIntentPtr = ^INSetDefrosterSettingsInCarIntent;
  INSetDefrosterSettingsInCarIntentHandlingProtocolPtr = ^INSetDefrosterSettingsInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetDefrosterSettingsInCarIntent = objcclass external (INIntent)
  public
    function initWithEnable_defroster (enable: nullable NSNumberPtr; defroster: INCarDefroster): instancetype; message 'initWithEnable:defroster:'; { NS_DESIGNATED_INITIALIZER }
    function NS_REFINED_FOR_SWIFT_: NSNumber *enable; message 'NS_REFINED_FOR_SWIFT';
    function defroster: INCarDefroster; message 'defroster';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetDefrosterSettingsInCarIntentHandlingProtocol = objcprotocol external name 'INSetDefrosterSettingsInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetDefrosterSettingsInCar_completion_setDefrosterSettingsInCar (intent: INSetDefrosterSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetDefrosterSettingsInCar:completion:setDefrosterSettingsInCar:';
  optional
    procedure confirmSetDefrosterSettingsInCar_completion_setDefrosterSettingsInCar (intent: INSetDefrosterSettingsInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetDefrosterSettingsInCar:completion:setDefrosterSettingsInCar:';
    procedure resolveEnableForSetDefrosterSettingsInCar_withCompletion_forSetDefrosterSettingsInCar (intent: INSetDefrosterSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveEnableForSetDefrosterSettingsInCar:withCompletion:forSetDefrosterSettingsInCar:';
    procedure resolveDefrosterForSetDefrosterSettingsInCar_withCompletion_forSetDefrosterSettingsInCar (intent: INSetDefrosterSettingsInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveDefrosterForSetDefrosterSettingsInCar:withCompletion:forSetDefrosterSettingsInCar:';
  end;
{$endif}

