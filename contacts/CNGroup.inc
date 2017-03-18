{ Parsed from Contacts.framework CNGroup.h }

{$ifdef TYPES}
type
  CNGroupPtr = ^CNGroup;
{$endif}

{$ifdef CLASSES}

type
  CNGroup = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function name: NSString; message 'name';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNGroupIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNGroupNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

