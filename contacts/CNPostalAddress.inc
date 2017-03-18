{ Parsed from Contacts.framework CNPostalAddress.h }

{$ifdef TYPES}
type
  CNPostalAddressPtr = ^CNPostalAddress;
{$endif}

{$ifdef CLASSES}

type
  CNPostalAddress = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function street: NSString; message 'street';
    function city: NSString; message 'city';
    function state: NSString; message 'state';
    function postalCode: NSString; message 'postalCode';
    function country: NSString; message 'country';
    function ISOCountryCode: NSString; message 'ISOCountryCode';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNPostalAddressStreetKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNPostalAddressCityKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNPostalAddressStateKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNPostalAddressPostalCodeKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNPostalAddressCountryKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNPostalAddressISOCountryCodeKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

