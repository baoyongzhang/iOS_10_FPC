{ Parsed from Messages.framework MSSession.h }

{$ifdef TYPES}
type
  MSSessionPtr = ^MSSession;
{$endif}

{$ifdef CLASSES}

type
  MSSession = objcclass external (NSObject, NSSecureCodingProtocol)

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

