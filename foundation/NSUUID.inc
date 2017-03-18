{ Parsed from Foundation.framework NSUUID.h }

{$ifdef TYPES}
type
  NSUUIDPtr = ^NSUUID;
{$endif}

{$ifdef CLASSES}

type
  NSUUID = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function UUID: instancetype; message 'UUID';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUUIDString (string_: NSString): nullable instancetype; message 'initWithUUIDString:';
    function initWithUUIDBytes (bytes: uuid_t): instancetype; message 'initWithUUIDBytes:';
    procedure getUUIDBytes (uuid_: uuid_t); message 'getUUIDBytes:';
    function UUIDString: NSString; message 'UUIDString';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

