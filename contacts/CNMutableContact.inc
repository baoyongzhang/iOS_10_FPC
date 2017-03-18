{ Parsed from Contacts.framework CNMutableContact.h }

{$ifdef TYPES}
type
  CNMutableContactPtr = ^CNMutableContact;
{$endif}

{$ifdef CLASSES}

type
  CNMutableContact = objcclass external (CNContact)
  public
    procedure setContactType(newValue: CNContactType); message 'setContactType:';
    function contactType: CNContactType; message 'contactType';
    procedure setNamePrefix(newValue: NSString); message 'setNamePrefix:';
    function namePrefix: NSString; message 'namePrefix';
    procedure setGivenName(newValue: NSString); message 'setGivenName:';
    function givenName: NSString; message 'givenName';
    procedure setMiddleName(newValue: NSString); message 'setMiddleName:';
    function middleName: NSString; message 'middleName';
    procedure setFamilyName(newValue: NSString); message 'setFamilyName:';
    function familyName: NSString; message 'familyName';
    procedure setPreviousFamilyName(newValue: NSString); message 'setPreviousFamilyName:';
    function previousFamilyName: NSString; message 'previousFamilyName';
    procedure setNameSuffix(newValue: NSString); message 'setNameSuffix:';
    function nameSuffix: NSString; message 'nameSuffix';
    procedure setNickname(newValue: NSString); message 'setNickname:';
    function nickname: NSString; message 'nickname';
    procedure setOrganizationName(newValue: NSString); message 'setOrganizationName:';
    function organizationName: NSString; message 'organizationName';
    procedure setDepartmentName(newValue: NSString); message 'setDepartmentName:';
    function departmentName: NSString; message 'departmentName';
    procedure setJobTitle(newValue: NSString); message 'setJobTitle:';
    function jobTitle: NSString; message 'jobTitle';
    procedure setPhoneticGivenName(newValue: NSString); message 'setPhoneticGivenName:';
    function phoneticGivenName: NSString; message 'phoneticGivenName';
    procedure setPhoneticMiddleName(newValue: NSString); message 'setPhoneticMiddleName:';
    function phoneticMiddleName: NSString; message 'phoneticMiddleName';
    procedure setPhoneticFamilyName(newValue: NSString); message 'setPhoneticFamilyName:';
    function phoneticFamilyName: NSString; message 'phoneticFamilyName';
    procedure setPhoneticOrganizationName(newValue: NSString); message 'setPhoneticOrganizationName:';
    function phoneticOrganizationName: NSString; message 'phoneticOrganizationName';
    procedure setNote(newValue: NSString); message 'setNote:';
    function note: NSString; message 'note';
    procedure setImageData(newValue: NSData); message 'setImageData:';
    function imageData: NSData; message 'imageData';
    procedure setPhoneNumbers(newValue: CNPhoneNumber *Protocol*ProtocolPtr); message 'setPhoneNumbers:';
    function phoneNumbers: CNPhoneNumber *Protocol*ProtocolPtr; message 'phoneNumbers';
    procedure setEmailAddresses(newValue: NSString *Protocol*ProtocolPtr); message 'setEmailAddresses:';
    function emailAddresses: NSString *Protocol*ProtocolPtr; message 'emailAddresses';
    procedure setPostalAddresses(newValue: CNPostalAddress *Protocol*ProtocolPtr); message 'setPostalAddresses:';
    function postalAddresses: CNPostalAddress *Protocol*ProtocolPtr; message 'postalAddresses';
    procedure setUrlAddresses(newValue: NSString *Protocol*ProtocolPtr); message 'setUrlAddresses:';
    function urlAddresses: NSString *Protocol*ProtocolPtr; message 'urlAddresses';
    procedure setContactRelations(newValue: CNContactRelation *Protocol*ProtocolPtr); message 'setContactRelations:';
    function contactRelations: CNContactRelation *Protocol*ProtocolPtr; message 'contactRelations';
    procedure setSocialProfiles(newValue: CNSocialProfile *Protocol*ProtocolPtr); message 'setSocialProfiles:';
    function socialProfiles: CNSocialProfile *Protocol*ProtocolPtr; message 'socialProfiles';
    procedure setInstantMessageAddresses(newValue: CNInstantMessageAddress *Protocol*ProtocolPtr); message 'setInstantMessageAddresses:';
    function instantMessageAddresses: CNInstantMessageAddress *Protocol*ProtocolPtr; message 'instantMessageAddresses';
    procedure setBirthday(newValue: NSDateComponents); message 'setBirthday:';
    function birthday: NSDateComponents; message 'birthday';
    procedure setNonGregorianBirthday(newValue: NSDateComponents); message 'setNonGregorianBirthday:';
    function nonGregorianBirthday: NSDateComponents; message 'nonGregorianBirthday';
    procedure setDates(newValue: NSDateComponents *Protocol*ProtocolPtr); message 'setDates:';
    function dates: NSDateComponents *Protocol*ProtocolPtr; message 'dates';
  end;
{$endif}

