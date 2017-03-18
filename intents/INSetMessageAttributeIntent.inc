{ Parsed from Intents.framework INSetMessageAttributeIntent.h }

{$ifdef TYPES}
type
  INSetMessageAttributeIntentPtr = ^INSetMessageAttributeIntent;
  INSetMessageAttributeIntentHandlingProtocolPtr = ^INSetMessageAttributeIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSetMessageAttributeIntent = objcclass external (INIntent)
  public
    function initWithIdentifiers_attribute (identifiers: nullable NSString *ProtocolPtr; attribute: INMessageAttribute): instancetype; message 'initWithIdentifiers:attribute:'; { NS_DESIGNATED_INITIALIZER }
    function identifiers: NSString *ProtocolPtr; message 'identifiers';
    function attribute: INMessageAttribute; message 'attribute';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSetMessageAttributeIntentHandlingProtocol = objcprotocol external name 'INSetMessageAttributeIntentHandling' (NSObjectProtocol)
  required
    procedure handleSetMessageAttribute_completion_setMessageAttribute (intent: INSetMessageAttributeIntent; completion: OpaqueCBlock; completion3: id); message 'handleSetMessageAttribute:completion:setMessageAttribute:';
  optional
    procedure confirmSetMessageAttribute_completion_setMessageAttribute (intent: INSetMessageAttributeIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSetMessageAttribute:completion:setMessageAttribute:';
    procedure resolveAttributeForSetMessageAttribute_withCompletion_forSetMessageAttribute (intent: INSetMessageAttributeIntent; completion: OpaqueCBlock; with_: id); message 'resolveAttributeForSetMessageAttribute:withCompletion:forSetMessageAttribute:';
  end;
{$endif}

