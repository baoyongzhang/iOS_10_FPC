{ Parsed from Contacts.framework CNContactProperty.h }

{$ifdef TYPES}
type
  CNContactPropertyPtr = ^CNContactProperty;
{$endif}

{$ifdef CLASSES}

type
  CNContactProperty = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function contact: CNContact; message 'contact';
    function key: NSString; message 'key';
    function value: id; message 'value';
    function identifier: NSString; message 'identifier';
    function label_: NSString; message 'label';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

