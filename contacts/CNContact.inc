{ Parsed from Contacts.framework CNContact.h }

{$ifdef TYPES}
type
  CNContactPtr = ^CNContact;
  CNKeyDescriptorProtocolPtr = ^CNKeyDescriptorProtocol;
{$endif}

{$ifdef TYPES}
type
  CNContactType = NSInteger;
  CNContactTypePtr = ^CNContactType;

const
  CNContactTypePerson = 0;
  CNContactTypeOrganization = 1;

type
  CNContactSortOrder = NSInteger;
  CNContactSortOrderPtr = ^CNContactSortOrder;

const
  CNContactSortOrderNone = 0;
  CNContactSortOrderUserDefault = 1;
  CNContactSortOrderGivenName = 2;
  CNContactSortOrderFamilyName = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  CNKeyDescriptorProtocol = objcprotocol external name 'CNKeyDescriptor' (NSObjectProtocol, NSSecureCodingProtocol, NSCopyingProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  Contacts = objccategory external (NSString)
  end;


type
  CNContact = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function contactType: CNContactType; message 'contactType';
    function namePrefix: NSString; message 'namePrefix';
    function givenName: NSString; message 'givenName';
    function middleName: NSString; message 'middleName';
    function familyName: NSString; message 'familyName';
    function previousFamilyName: NSString; message 'previousFamilyName';
    function nameSuffix: NSString; message 'nameSuffix';
    function nickname: NSString; message 'nickname';
    function organizationName: NSString; message 'organizationName';
    function departmentName: NSString; message 'departmentName';
    function jobTitle: NSString; message 'jobTitle';
    function phoneticGivenName: NSString; message 'phoneticGivenName';
    function phoneticMiddleName: NSString; message 'phoneticMiddleName';
    function phoneticFamilyName: NSString; message 'phoneticFamilyName';
    function phoneticOrganizationName: NSString; message 'phoneticOrganizationName';
    function note: NSString; message 'note';
    function imageData: NSData; message 'imageData';
    function thumbnailImageData: NSData; message 'thumbnailImageData';
    function imageDataAvailable: boolean; message 'imageDataAvailable';
    function phoneNumbers: CNPhoneNumber *Protocol*ProtocolPtr; message 'phoneNumbers';
    function emailAddresses: NSString *Protocol*ProtocolPtr; message 'emailAddresses';
    function postalAddresses: CNPostalAddress *Protocol*ProtocolPtr; message 'postalAddresses';
    function urlAddresses: NSString *Protocol*ProtocolPtr; message 'urlAddresses';
    function contactRelations: CNContactRelation *Protocol*ProtocolPtr; message 'contactRelations';
    function socialProfiles: CNSocialProfile *Protocol*ProtocolPtr; message 'socialProfiles';
    function instantMessageAddresses: CNInstantMessageAddress *Protocol*ProtocolPtr; message 'instantMessageAddresses';
    function birthday: NSDateComponents; message 'birthday';
    function nonGregorianBirthday: NSDateComponents; message 'nonGregorianBirthday';
    function dates: NSDateComponents *Protocol*ProtocolPtr; message 'dates';
    function isKeyAvailable (key: NSString): boolean; message 'isKeyAvailable:';
    function areKeysAvailable (keyDescriptors: id<CNKeyDescriptorProtocol>Ptr): boolean; message 'areKeysAvailable:';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';
    class function comparatorForNameSortOrder (sortOrder: CNContactSortOrder): NSComparator; message 'comparatorForNameSortOrder:';
    class function descriptorForAllComparatorKeys: CNKeyDescriptorProtocol; message 'descriptorForAllComparatorKeys';
    function isUnifiedWithContactWithIdentifier (contactIdentifier: NSString): boolean; message 'isUnifiedWithContactWithIdentifier:';

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
  CNContactPropertyNotFetchedExceptionName: NSString; cvar; external;
  CNContactIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNamePrefixKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactGivenNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactMiddleNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPreviousFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNameSuffixKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNicknameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactOrganizationNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactDepartmentNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactJobTitleKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticGivenNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticMiddleNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticOrganizationNameKey: NSString { available in 10_12, 10_0 }; cvar; external;
  CNContactBirthdayKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNonGregorianBirthdayKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNoteKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactImageDataKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactThumbnailImageDataKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactImageDataAvailableKey: NSString { available in 10_12, 9_0 }; cvar; external;
  CNContactTypeKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneNumbersKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactEmailAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPostalAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactDatesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactUrlAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactRelationsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactSocialProfilesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactInstantMessageAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

