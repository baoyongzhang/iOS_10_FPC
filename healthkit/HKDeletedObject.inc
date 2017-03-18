{ Parsed from HealthKit.framework HKDeletedObject.h }

{$ifdef TYPES}
type
  HKDeletedObjectPtr = ^HKDeletedObject;
{$endif}

{$ifdef CLASSES}

type
  HKDeletedObject = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

