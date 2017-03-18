{ Parsed from Intents.framework INSpeakable.h }

{$ifdef TYPES}
type
  INSpeakableProtocolPtr = ^INSpeakableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  INSpeakableProtocol = objcprotocol external name 'INSpeakable' (NSObjectProtocol)
    function spokenPhrase: NSString; message 'spokenPhrase';
    function pronunciationHint: NSString; message 'pronunciationHint';
    function identifier: NSString; message 'identifier';
  end;
{$endif}

