{ Parsed from CloudKit.framework CKServerChangeToken.h }

{$ifdef TYPES}
type
  CKServerChangeTokenPtr = ^CKServerChangeToken;
{$endif}

{$ifdef CLASSES}

type
  CKServerChangeToken = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

