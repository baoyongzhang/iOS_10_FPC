{ Parsed from Contacts.framework CNContainer.h }

{$ifdef TYPES}
type
  CNContainerPtr = ^CNContainer;
{$endif}

{$ifdef TYPES}
type
  CNContainerType = NSInteger;
  CNContainerTypePtr = ^CNContainerType;

const
  CNContainerTypeUnassigned = 0;
  CNContainerTypeLocal = 1;
  CNContainerTypeExchange = 2;
  CNContainerTypeCardDAV = 3;
{$endif}

{$ifdef CLASSES}

type
  CNContainer = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function name: NSString; message 'name';
    function type_: CNContainerType; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContainerIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContainerNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContainerTypeKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

