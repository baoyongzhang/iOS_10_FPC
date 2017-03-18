{ Parsed from Foundation.framework NSNull.h }

{$ifdef TYPES}
type
  NSNullPtr = ^NSNull;
{$endif}

{$ifdef CLASSES}

type
  NSNull = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function null: NSNull; message 'null';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

