{ Parsed from Intents.framework INSaveProfileInCarIntent.h }

{$ifdef TYPES}
type
  INSaveProfileInCarIntentPtr = ^INSaveProfileInCarIntent;
  INSaveProfileInCarIntentHandlingProtocolPtr = ^INSaveProfileInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSaveProfileInCarIntent = objcclass external (INIntent)
  public
    function initWithProfileNumber_profileName (profileNumber: nullable NSNumberPtr; profileName: nullable NSStringPtr): instancetype; message 'initWithProfileNumber:profileName:'; { available in ios(10.2 }
    function NS_REFINED_FOR_SWIFT_: NSNumber *profileNumber; message 'NS_REFINED_FOR_SWIFT';
    function ): NSString *profileName; message ')';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSaveProfileInCarIntentHandlingProtocol = objcprotocol external name 'INSaveProfileInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSaveProfileInCar_completion_saveProfileInCar (intent: INSaveProfileInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSaveProfileInCar:completion:saveProfileInCar:';
  optional
    procedure confirmSaveProfileInCar_completion_saveProfileInCar (intent: INSaveProfileInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSaveProfileInCar:completion:saveProfileInCar:';
    procedure resolveProfileNumberForSaveProfileInCar_withCompletion_forSaveProfileInCar (intent: INSaveProfileInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveProfileNumberForSaveProfileInCar:withCompletion:forSaveProfileInCar:';
    procedure resolveProfileNameForSaveProfileInCar_withCompletion_forSaveProfileInCar (intent: INSaveProfileInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveProfileNameForSaveProfileInCar:withCompletion:forSaveProfileInCar:'; { available in ios(10.2 }
  end;
{$endif}

