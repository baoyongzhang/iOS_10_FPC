{ Parsed from Intents.framework INStartVideoCallIntent.h }

{$ifdef TYPES}
type
  INStartVideoCallIntentPtr = ^INStartVideoCallIntent;
  INStartVideoCallIntentHandlingProtocolPtr = ^INStartVideoCallIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INStartVideoCallIntent = objcclass external (INIntent)
  public
    function initWithContacts (contacts: nullable INPerson *ProtocolPtr): instancetype; message 'initWithContacts:'; { NS_DESIGNATED_INITIALIZER }
    function contacts: INPerson *ProtocolPtr; message 'contacts';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INStartVideoCallIntentHandlingProtocol = objcprotocol external name 'INStartVideoCallIntentHandling' (NSObjectProtocol)
  required
    procedure handleStartVideoCall_completion_startVideoCall (intent: INStartVideoCallIntent; completion: OpaqueCBlock; completion3: id); message 'handleStartVideoCall:completion:startVideoCall:';
  optional
    procedure confirmStartVideoCall_completion_startVideoCall (intent: INStartVideoCallIntent; completion: OpaqueCBlock; completion3: id); message 'confirmStartVideoCall:completion:startVideoCall:';
    procedure resolveContactsForStartVideoCall_withCompletion_forStartVideoCall (intent: INStartVideoCallIntent; completion: OpaqueCBlock; with_: id); message 'resolveContactsForStartVideoCall:withCompletion:forStartVideoCall:';
  end;
{$endif}

