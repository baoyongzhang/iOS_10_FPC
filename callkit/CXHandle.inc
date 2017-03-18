{ Parsed from CallKit.framework CXHandle.h }

{$ifdef TYPES}
type
  CXHandlePtr = ^CXHandle;
{$endif}

{$ifdef TYPES}
type
  CXHandleType = NSInteger;
  CXHandleTypePtr = ^CXHandleType;

const
  CXHandleTypeGeneric = 1;
  CXHandleTypePhoneNumber = 2;
  CXHandleTypeEmailAddress = 3;
{$endif}

{$ifdef CLASSES}

type
  CXHandle = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function type_: CXHandleType; message 'type';
    function value: NSString; message 'value';
    function initWithType_value (type_: CXHandleType; value_: NSString): instancetype; message 'initWithType:value:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function isEqualToHandle (handle: CXHandle): boolean; message 'isEqualToHandle:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

