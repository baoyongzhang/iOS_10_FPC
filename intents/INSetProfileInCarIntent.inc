{ Parsed from Intents.framework INSetProfileInCarIntent.h }

{$ifdef TYPES}
type
  INSetProfileInCarIntentPtr = ^INSetProfileInCarIntent;
  INSetProfileInCarIntentHandlingProtocolPtr = ^INSetProfileInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetProfileInCarIntent = objcclass external (INIntent)
  public
    function initWithProfileNumber_profileName_defaultProfile (profileNumber: nullable NSNumberPtr; profileName: nullable NSStringPtr; defaultProfile: nullable NSNumberPtr): instancetype; message 'initWithProfileNumber:profileName:defaultProfile:'; { available in ios(10.2 }
    function NS_REFINED_FOR_SWIFT_: NSNumber *profileNumber; message 'NS_REFINED_FOR_SWIFT';
    function ): NSString *profileName; message ')';
    function NS_REFINED_FOR_SWIFT_: NSNumber *defaultProfile; message 'NS_REFINED_FOR_SWIFT';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetProfileInCarIntentHandlingProtocol = objcprotocol external name 'INSetProfileInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetProfileInCar_completion_setProfileInCar (intent: INSetProfileInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetProfileInCar:completion:setProfileInCar:';
  optional
    procedure confirmSetProfileInCar_completion_setProfileInCar (intent: INSetProfileInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetProfileInCar:completion:setProfileInCar:';
    procedure resolveProfileNumberForSetProfileInCar_withCompletion_forSetProfileInCar (intent: INSetProfileInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveProfileNumberForSetProfileInCar:withCompletion:forSetProfileInCar:';
    procedure resolveProfileNameForSetProfileInCar_withCompletion_forSetProfileInCar (intent: INSetProfileInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveProfileNameForSetProfileInCar:withCompletion:forSetProfileInCar:'; { available in ios(10.2 }
    procedure resolveDefaultProfileForSetProfileInCar_withCompletion_forSetProfileInCar (intent: INSetProfileInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveDefaultProfileForSetProfileInCar:withCompletion:forSetProfileInCar:';
  end;
{$endif}

