{ Parsed from Intents.framework INSpeakableString.h }

{$ifdef TYPES}
type
  INSpeakableStringPtr = ^INSpeakableString;
{$endif}

{$ifdef CLASSES}

type
  INSpeakableString = objcclass external (NSObject, INSpeakableProtocol)
  public
    function init: instancetype; message 'init';
    function initWithIdentifier_spokenPhrase_pronunciationHint (identifier: NSString; spokenPhrase: NSString; pronunciationHint: nullable NSStringPtr): instancetype; message 'initWithIdentifier:spokenPhrase:pronunciationHint:'; { NS_DESIGNATED_INITIALIZER }
    function initWithSpokenPhrase (spokenPhrase: NSString): instancetype; message 'initWithSpokenPhrase:'; { available in ios(10.2 }

    { Adopted protocols }
    function identifier: NSString; message 'identifier';
    function pronunciationHint: NSString; message 'pronunciationHint';
    function spokenPhrase: NSString; message 'spokenPhrase';
  end;
{$endif}

