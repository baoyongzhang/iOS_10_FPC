{ Parsed from CoreSpotlight.framework CSPerson.h }

{$ifdef TYPES}
type
  CSPersonPtr = ^CSPerson;
{$endif}

{$ifdef CLASSES}

type
  CSPerson = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithDisplayName_handles_handleIdentifier (displayName: nullable NSStringPtr; handles: NSString*ProtocolPtr; handleIdentifier: NSString): instancetype; message 'initWithDisplayName:handles:handleIdentifier:';
    function displayName: NSString; message 'displayName';
    function handles: NSString *ProtocolPtr; message 'handles';
    function handleIdentifier: NSString; message 'handleIdentifier';
    procedure setContactIdentifier(newValue: NSString); message 'setContactIdentifier:';
    function contactIdentifier: NSString; message 'contactIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

