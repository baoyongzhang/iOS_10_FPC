{ Parsed from HealthKit.framework HKSource.h }

{$ifdef TYPES}
type
  HKSourcePtr = ^HKSource;
{$endif}

{$ifdef CLASSES}

type
  HKSource = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function name: NSString; message 'name';
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    class function defaultSource: HKSource; message 'defaultSource';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

