{ Parsed from CoreMotion.framework CMLogItem.h }

{$ifdef TYPES}
type
  CMLogItemPtr = ^CMLogItem;
{$endif}

{$ifdef CLASSES}

type
  CMLogItem = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internalLogItem: id;
  public
    function timestamp_: NSTimeInterval; message 'timestamp';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

