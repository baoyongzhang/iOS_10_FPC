{ Parsed from Intents.framework INStartAudioCallIntent.h }

{$ifdef TYPES}
type
  INStartAudioCallIntentPtr = ^INStartAudioCallIntent;
  INStartAudioCallIntentHandlingProtocolPtr = ^INStartAudioCallIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INStartAudioCallIntent = objcclass external (INIntent)
  public
    function initWithContacts (contacts: nullable INPerson *ProtocolPtr): instancetype; message 'initWithContacts:'; { NS_DESIGNATED_INITIALIZER }
    function contacts: INPerson *ProtocolPtr; message 'contacts';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INStartAudioCallIntentHandlingProtocol = objcprotocol external name 'INStartAudioCallIntentHandling' (NSObjectProtocol)
  required
    procedure handleStartAudioCall_completion_startAudioCall (intent: INStartAudioCallIntent; completion: OpaqueCBlock; completion3: id); message 'handleStartAudioCall:completion:startAudioCall:';
  optional
    procedure confirmStartAudioCall_completion_startAudioCall (intent: INStartAudioCallIntent; completion: OpaqueCBlock; completion3: id); message 'confirmStartAudioCall:completion:startAudioCall:';
    procedure resolveContactsForStartAudioCall_withCompletion_forStartAudioCall (intent: INStartAudioCallIntent; completion: OpaqueCBlock; with_: id); message 'resolveContactsForStartAudioCall:withCompletion:forStartAudioCall:';
  end;
{$endif}

