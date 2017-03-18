{ Parsed from Intents.framework INPersonHandle.h }

{$ifdef TYPES}
type
  INPersonHandlePtr = ^INPersonHandle;
{$endif}

{$ifdef TYPES}
type
  INPersonHandleType = NSInteger;
  INPersonHandleTypePtr = ^INPersonHandleType;

const
  INPersonHandleTypeUnknown = 0;
  INPersonHandleTypeEmailAddress = 1;
  INPersonHandleTypePhoneNumber = 2;
{$endif}

{$ifdef CLASSES}

type
  INPersonHandle = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function value: NSString; message 'value';
    function type_: INPersonHandleType; message 'type';
    function label_: INPersonHandleLabel; message 'label';
    function macosx(10.12.2)): INPersonHandleLabel; message 'macosx(10.12.2))';
    function init: instancetype; message 'init';
    function initWithValue_type_label (value_: NSString; type_: INPersonHandleType; label_: nullable INPersonHandleLabel): instancetype; message 'initWithValue:type:label:'; { NS_DESIGNATED_INITIALIZER }
    function initWithValue_type (value_: NSString; type_: INPersonHandleType): instancetype; message 'initWithValue:type:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

