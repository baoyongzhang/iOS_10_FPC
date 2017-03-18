{ Parsed from Foundation.framework NSPersonNameComponents.h }

{$ifdef TYPES}
type
  NSPersonNameComponentsPtr = ^NSPersonNameComponents;
{$endif}

{$ifdef CLASSES}

type
  NSPersonNameComponents = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _private: id;
  public
    procedure setNamePrefix(newValue: NSString); message 'setNamePrefix:';
    function namePrefix: NSString; message 'namePrefix';
    procedure setGivenName(newValue: NSString); message 'setGivenName:';
    function givenName: NSString; message 'givenName';
    procedure setMiddleName(newValue: NSString); message 'setMiddleName:';
    function middleName: NSString; message 'middleName';
    procedure setFamilyName(newValue: NSString); message 'setFamilyName:';
    function familyName: NSString; message 'familyName';
    procedure setNameSuffix(newValue: NSString); message 'setNameSuffix:';
    function nameSuffix: NSString; message 'nameSuffix';
    procedure setNickname(newValue: NSString); message 'setNickname:';
    function nickname: NSString; message 'nickname';
    procedure setPhoneticRepresentation(newValue: NSPersonNameComponents); message 'setPhoneticRepresentation:';
    function phoneticRepresentation: NSPersonNameComponents; message 'phoneticRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

