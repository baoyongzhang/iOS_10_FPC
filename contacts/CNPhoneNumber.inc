{ Parsed from Contacts.framework CNPhoneNumber.h }

{$ifdef TYPES}
type
  CNPhoneNumberPtr = ^CNPhoneNumber;
{$endif}

{$ifdef CLASSES}

type
  CNPhoneNumber = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function phoneNumberWithStringValue (stringValue: NSString): instancetype; message 'phoneNumberWithStringValue:';
    function initWithStringValue (string_: NSString): instancetype; message 'initWithStringValue:';
    function stringValue: NSString; message 'stringValue';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNLabelPhoneNumberiPhone: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberMobile: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberMain: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberHomeFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberWorkFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberOtherFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberPager: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

