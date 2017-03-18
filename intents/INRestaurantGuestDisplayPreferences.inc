{ Parsed from Intents.framework INRestaurantGuestDisplayPreferences.h }

{$ifdef TYPES}
type
  INRestaurantGuestDisplayPreferencesPtr = ^INRestaurantGuestDisplayPreferences;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantGuestDisplayPreferences = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setNameFieldFirstNameOptional(newValue: boolean); message 'setNameFieldFirstNameOptional:';
    function nameFieldFirstNameOptional: boolean; message 'nameFieldFirstNameOptional';
    procedure setNameFieldLastNameOptional(newValue: boolean); message 'setNameFieldLastNameOptional:';
    function nameFieldLastNameOptional: boolean; message 'nameFieldLastNameOptional';
    procedure setNameFieldShouldBeDisplayed(newValue: boolean); message 'setNameFieldShouldBeDisplayed:';
    function nameFieldShouldBeDisplayed: boolean; message 'nameFieldShouldBeDisplayed';
    procedure setEmailAddressFieldShouldBeDisplayed(newValue: boolean); message 'setEmailAddressFieldShouldBeDisplayed:';
    function emailAddressFieldShouldBeDisplayed: boolean; message 'emailAddressFieldShouldBeDisplayed';
    procedure setPhoneNumberFieldShouldBeDisplayed(newValue: boolean); message 'setPhoneNumberFieldShouldBeDisplayed:';
    function phoneNumberFieldShouldBeDisplayed: boolean; message 'phoneNumberFieldShouldBeDisplayed';
    procedure setNameEditable(newValue: boolean); message 'setNameEditable:';
    function nameEditable: boolean; message 'nameEditable';
    procedure setEmailAddressEditable(newValue: boolean); message 'setEmailAddressEditable:';
    function emailAddressEditable: boolean; message 'emailAddressEditable';
    procedure setPhoneNumberEditable(newValue: boolean); message 'setPhoneNumberEditable:';
    function phoneNumberEditable: boolean; message 'phoneNumberEditable';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

