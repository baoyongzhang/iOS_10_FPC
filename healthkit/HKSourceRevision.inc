{ Parsed from HealthKit.framework HKSourceRevision.h }

{$ifdef TYPES}
type
  HKSourceRevisionPtr = ^HKSourceRevision;
{$endif}

{$ifdef CLASSES}

type
  HKSourceRevision = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function source: HKSource; message 'source';
    function version: NSString; message 'version';
    function initWithSource_version (source_: HKSource; version_: nullable NSStringPtr): instancetype; message 'initWithSource:version:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

