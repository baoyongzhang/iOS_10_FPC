{ Parsed from Intents.framework INSetAudioSourceInCarIntent.h }

{$ifdef TYPES}
type
  INSetAudioSourceInCarIntentPtr = ^INSetAudioSourceInCarIntent;
  INSetAudioSourceInCarIntentHandlingProtocolPtr = ^INSetAudioSourceInCarIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetAudioSourceInCarIntent = objcclass external (INIntent)
  public
    function initWithAudioSource_relativeAudioSourceReference (audioSource: INCarAudioSource; relativeAudioSourceReference: INRelativeReference): instancetype; message 'initWithAudioSource:relativeAudioSourceReference:'; { NS_DESIGNATED_INITIALIZER }
    function audioSource: INCarAudioSource; message 'audioSource';
    function relativeAudioSourceReference: INRelativeReference; message 'relativeAudioSourceReference';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetAudioSourceInCarIntentHandlingProtocol = objcprotocol external name 'INSetAudioSourceInCarIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetAudioSourceInCar_completion_setAudioSourceInCar (intent: INSetAudioSourceInCarIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetAudioSourceInCar:completion:setAudioSourceInCar:';
  optional
    procedure confirmSetAudioSourceInCar_completion_setAudioSourceInCar (intent: INSetAudioSourceInCarIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetAudioSourceInCar:completion:setAudioSourceInCar:';
    procedure resolveAudioSourceForSetAudioSourceInCar_withCompletion_forSetAudioSourceInCar (intent: INSetAudioSourceInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveAudioSourceForSetAudioSourceInCar:withCompletion:forSetAudioSourceInCar:';
    procedure resolveRelativeAudioSourceReferenceForSetAudioSourceInCar_withCompletion_forSetAudioSourceInCar (intent: INSetAudioSourceInCarIntent; completion: OpaqueCBlock; with_: id); message 'resolveRelativeAudioSourceReferenceForSetAudioSourceInCar:withCompletion:forSetAudioSourceInCar:';
  end;
{$endif}

