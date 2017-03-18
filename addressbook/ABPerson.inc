{ Parsed from AddressBook.framework ABPerson.h }

{$ifndef __ABPerson__}
{$ifdef FUNCTIONS}
function ABPersonCreate: ABRecordRef; cdecl; external; deprecated 'in "use [[CNMutableContact alloc] init]"';
function ABPersonCreateInSource(source: ABRecordRef): ABRecordRef; cdecl; external; deprecated 'in "use [[CNMutableContact alloc] init] and [CNSaveRequest addContact:toContainerWithIdentifier:]"';
function ABPersonCopySource(person: ABRecordRef): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore containersMatchingPredicate:[CNContainer predicateForContainerOfContactWithIdentifier:] error:]"';
function ABPersonCopyArrayOfAllLinkedPeople(person: ABRecordRef): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = [CNContact predicateForContactsLinkedToContact:] and unifyResults = NO"';
function ABPersonGetTypeOfProperty(property_: ABPropertyID): ABPropertyType; cdecl; external; deprecated 'in ""';
function ABPersonCopyLocalizedPropertyName(property_: ABPropertyID): CFStringRef; cdecl; external; deprecated 'in "use [CNContact localizedStringForKey:]"';
{$endif}

{$ifdef TYPES}
type
  ABPersonSortOrdering = cuint32 deprecated 'in "use CNContactSortOrder"';
  ABPersonSortOrderingPtr = ^ABPersonSortOrdering deprecated 'in "use CNContactSortOrder"';

const
  kABPersonSortByFirstName = 0;
  kABPersonSortByLastName = 1;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonGetSortOrdering: ABPersonSortOrdering; cdecl; external; deprecated 'in "use [[CNContactsUserDefaults sharedDefaults] sortOrder]"';
{$endif}

{$ifdef TYPES}
type
  ABPersonCompositeNameFormat = cuint32 deprecated 'in ""';
  ABPersonCompositeNameFormatPtr = ^ABPersonCompositeNameFormat deprecated 'in ""';

const
  kABPersonCompositeNameFormatFirstNameFirst = 0;
  kABPersonCompositeNameFormatLastNameFirst = 1;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonGetCompositeNameFormat: ABPersonCompositeNameFormat; cdecl; external; deprecated 'in ""';
function ABPersonGetCompositeNameFormatForRecord(record_: ABRecordRef): ABPersonCompositeNameFormat; cdecl; external; deprecated 'in ""';
function ABPersonCopyCompositeNameDelimiterForRecord(record_: ABRecordRef): CFStringRef; cdecl; external; deprecated 'in ""';
{$endif}

{$ifdef TYPES}
const
  kABPersonImageFormatThumbnail = 0;
  kABPersonImageFormatOriginalSize = 2;
type
  ABPersonImageFormat = clong;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonSetImageData(person: ABRecordRef; imageData: CFDataRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CNMutableContact.imageData"';
function ABPersonCopyImageData(person: ABRecordRef): CFDataRef; cdecl; external; deprecated 'in "use CNContact.imageData"';
function ABPersonCopyImageDataWithFormat(person: ABRecordRef; format: ABPersonImageFormat): CFDataRef; cdecl; external; deprecated 'in "use CNContact.imageData or CNContact.thumbnailImageData"';
function ABPersonHasImageData(person: ABRecordRef): cbool; cdecl; external; deprecated 'in ""';
function ABPersonRemoveImageData(person: ABRecordRef; error: CFErrorRefPtr): cbool; cdecl; external; deprecated 'in "use CNMutableContact.imageData = nil"';
function ABPersonComparePeopleByName(person1: ABRecordRef; person2: ABRecordRef; ordering: ABPersonSortOrdering): CFComparisonResult; cdecl; external; deprecated 'in "use [CNContact comparatorForNameSortOrder:]"';
function ABAddressBookGetPersonCount(addressBook: ABAddressBookRef): CFIndex; cdecl; external; deprecated 'in "use count of fetch results for CNContactFetchRequest with predicate = nil"';
function ABAddressBookGetPersonWithRecordID(addressBook: ABAddressBookRef; recordID: ABRecordID): ABRecordRef; cdecl; external; deprecated 'in "use [CNContactStore unifiedContactWithIdentifier:keysToFetch:error:]"';
function ABAddressBookCopyArrayOfAllPeople(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = nil"';
function ABAddressBookCopyArrayOfAllPeopleInSource(addressBook: ABAddressBookRef; source: ABRecordRef): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = [CNContact predicateForContactsInContainerWithIdentifier:] and unifyResults = NO"';
function ABAddressBookCopyArrayOfAllPeopleInSourceWithSortOrdering(addressBook: ABAddressBookRef; source: ABRecordRef; sortOrdering: ABPersonSortOrdering): CFArrayRef; cdecl; external; deprecated 'in "use CNContactFetchRequest with predicate = [CNContact predicateForContactsInContainerWithIdentifier:] and unifyResults = NO and sortOrder"';
function ABAddressBookCopyPeopleWithName(addressBook: ABAddressBookRef; name: CFStringRef): CFArrayRef; cdecl; external; deprecated 'in "use [CNContactStore unifiedContactsMatchingPredicate:[CNContact predicateForContactsMatchingName:] keysToFetch: error:]"';
function ABPersonCreatePeopleInSourceWithVCardRepresentation(source: ABRecordRef; vCardData: CFDataRef): CFArrayRef; cdecl; external; deprecated 'in "use [CNContactVCardSerialization contactsWithData:error:]"';
function ABPersonCreateVCardRepresentationWithPeople(people: CFArrayRef): CFDataRef; cdecl; external; deprecated 'in "use [CNContactVCardSerialization dataWithContacts:error:]"';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kABWorkLabel: CFStringRef deprecated 'in "use CNLabelWork"'; cvar; external;
  kABHomeLabel: CFStringRef deprecated 'in "use CNLabelHome"'; cvar; external;
  kABOtherLabel: CFStringRef deprecated 'in "use CNLabelOther"'; cvar; external;
  kABPersonFirstNameProperty: ABPropertyID deprecated 'in "use CNContact.givenName"'; cvar; external;
  kABPersonLastNameProperty: ABPropertyID deprecated 'in "use CNContact.familyName"'; cvar; external;
  kABPersonMiddleNameProperty: ABPropertyID deprecated 'in "use CNContact.middleName"'; cvar; external;
  kABPersonPrefixProperty: ABPropertyID deprecated 'in "use CNContact.namePrefix"'; cvar; external;
  kABPersonSuffixProperty: ABPropertyID deprecated 'in "use CNContact.nameSuffix"'; cvar; external;
  kABPersonNicknameProperty: ABPropertyID deprecated 'in "use CNContact.nickname"'; cvar; external;
  kABPersonFirstNamePhoneticProperty: ABPropertyID deprecated 'in "use CNContact.phoneticGivenName"'; cvar; external;
  kABPersonLastNamePhoneticProperty: ABPropertyID deprecated 'in "use CNContact.phoneticFamilyName"'; cvar; external;
  kABPersonMiddleNamePhoneticProperty: ABPropertyID deprecated 'in "use CNContact.phoneticMiddleName"'; cvar; external;
  kABPersonOrganizationProperty: ABPropertyID deprecated 'in "use CNContact.organizationName"'; cvar; external;
  kABPersonDepartmentProperty: ABPropertyID deprecated 'in "use CNContact.departmentName"'; cvar; external;
  kABPersonJobTitleProperty: ABPropertyID deprecated 'in "use CNContact.jobTitle"'; cvar; external;
  kABPersonEmailProperty: ABPropertyID deprecated 'in "use CNContact.emailAddresses"'; cvar; external;
  kABPersonBirthdayProperty: ABPropertyID deprecated 'in "use CNContact.birthday"'; cvar; external;
  kABPersonNoteProperty: ABPropertyID deprecated 'in "use CNContact.note"'; cvar; external;
  kABPersonCreationDateProperty: ABPropertyID deprecated 'in ""'; cvar; external;
  kABPersonModificationDateProperty: ABPropertyID deprecated 'in ""'; cvar; external;
  kABPersonAddressProperty: ABPropertyID deprecated 'in "use CNContact.postalAddresses"'; cvar; external;
  kABPersonAddressStreetKey: CFStringRef deprecated 'in "use CNPostalAddress.street"'; cvar; external;
  kABPersonAddressCityKey: CFStringRef deprecated 'in "use CNPostalAddress.city"'; cvar; external;
  kABPersonAddressStateKey: CFStringRef deprecated 'in "use CNPostalAddress.state"'; cvar; external;
  kABPersonAddressZIPKey: CFStringRef deprecated 'in "use CNPostalAddress.postalCode"'; cvar; external;
  kABPersonAddressCountryKey: CFStringRef deprecated 'in "use CNPostalAddress.country"'; cvar; external;
  kABPersonAddressCountryCodeKey: CFStringRef deprecated 'in "use CNPostalAddress.ISOCountryCode"'; cvar; external;
  kABPersonDateProperty: ABPropertyID deprecated 'in "use CNContact.dates"'; cvar; external;
  kABPersonAnniversaryLabel: CFStringRef deprecated 'in "use CNLabelDateAnniversary"'; cvar; external;
  kABPersonKindProperty: ABPropertyID deprecated 'in "use CNContact.contactType"'; cvar; external;
  kABPersonKindPerson: CFNumberRef deprecated 'in "use CNContactTypePerson"'; cvar; external;
  kABPersonKindOrganization: CFNumberRef deprecated 'in "use CNContactTypeOrganization"'; cvar; external;
  kABPersonPhoneProperty: ABPropertyID deprecated 'in "use CNContact.phoneNumbers"'; cvar; external;
  kABPersonPhoneMobileLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberMobile"'; cvar; external;
  kABPersonPhoneIPhoneLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberiPhone"'; cvar; external;
  kABPersonPhoneMainLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberMain"'; cvar; external;
  kABPersonPhoneHomeFAXLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberHomeFax"'; cvar; external;
  kABPersonPhoneWorkFAXLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberWorkFax"'; cvar; external;
  kABPersonPhoneOtherFAXLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberOtherFax"'; cvar; external;
  kABPersonPhonePagerLabel: CFStringRef deprecated 'in "use CNLabelPhoneNumberPager"'; cvar; external;
  kABPersonInstantMessageProperty: ABPropertyID deprecated 'in "use CNContact.instantMessageAddresses"'; cvar; external;
  kABPersonInstantMessageServiceKey: CFStringRef deprecated 'in "use CNInstantMessageAddress.service"'; cvar; external;
  kABPersonInstantMessageServiceYahoo: CFStringRef deprecated 'in "use CNInstantMessageServiceYahoo"'; cvar; external;
  kABPersonInstantMessageServiceJabber: CFStringRef deprecated 'in "use CNInstantMessageServiceJabber"'; cvar; external;
  kABPersonInstantMessageServiceMSN: CFStringRef deprecated 'in "use CNInstantMessageServiceMSN"'; cvar; external;
  kABPersonInstantMessageServiceICQ: CFStringRef deprecated 'in "use CNInstantMessageServiceICQ"'; cvar; external;
  kABPersonInstantMessageServiceAIM: CFStringRef deprecated 'in "use CNInstantMessageServiceAIM"'; cvar; external;
  kABPersonInstantMessageServiceQQ: CFStringRef deprecated 'in "use CNInstantMessageServiceQQ"'; cvar; external;
  kABPersonInstantMessageServiceGoogleTalk: CFStringRef deprecated 'in "use CNInstantMessageServiceGoogleTalk"'; cvar; external;
  kABPersonInstantMessageServiceSkype: CFStringRef deprecated 'in "use CNInstantMessageServiceSkype"'; cvar; external;
  kABPersonInstantMessageServiceFacebook: CFStringRef deprecated 'in "use CNInstantMessageServiceFacebook"'; cvar; external;
  kABPersonInstantMessageServiceGaduGadu: CFStringRef deprecated 'in "use CNInstantMessageServiceGaduGadu"'; cvar; external;
  kABPersonInstantMessageUsernameKey: CFStringRef deprecated 'in "use CNInstantMessageAddress.username"'; cvar; external;
  kABPersonURLProperty: ABPropertyID deprecated 'in "use CNContact.urlAddresses"'; cvar; external;
  kABPersonHomePageLabel: CFStringRef deprecated 'in "use CNLabelURLAddressHomePage"'; cvar; external;
  kABPersonRelatedNamesProperty: ABPropertyID deprecated 'in "use CNContact.contactRelations"'; cvar; external;
  kABPersonFatherLabel: CFStringRef deprecated 'in "use CNLabelContactRelationFather"'; cvar; external;
  kABPersonMotherLabel: CFStringRef deprecated 'in "use CNLabelContactRelationMother"'; cvar; external;
  kABPersonParentLabel: CFStringRef deprecated 'in "use CNLabelContactRelationParent"'; cvar; external;
  kABPersonBrotherLabel: CFStringRef deprecated 'in "use CNLabelContactRelationBrother"'; cvar; external;
  kABPersonSisterLabel: CFStringRef deprecated 'in "use CNLabelContactRelationSister"'; cvar; external;
  kABPersonChildLabel: CFStringRef deprecated 'in "use CNLabelContactRelationChild"'; cvar; external;
  kABPersonFriendLabel: CFStringRef deprecated 'in "use CNLabelContactRelationFriend"'; cvar; external;
  kABPersonSpouseLabel: CFStringRef deprecated 'in "use CNLabelContactRelationSpouse"'; cvar; external;
  kABPersonPartnerLabel: CFStringRef deprecated 'in "use CNLabelContactRelationPartner"'; cvar; external;
  kABPersonAssistantLabel: CFStringRef deprecated 'in "use CNLabelContactRelationAssistant"'; cvar; external;
  kABPersonManagerLabel: CFStringRef deprecated 'in "use CNLabelContactRelationManager"'; cvar; external;
  kABPersonSocialProfileProperty: ABPropertyID deprecated 'in "use CNContact.socialProfiles"'; cvar; external;
  kABPersonSocialProfileURLKey: CFStringRef deprecated 'in "use CNSocialProfile.urlString"'; cvar; external;
  kABPersonSocialProfileServiceKey: CFStringRef deprecated 'in "use CNSocialProfile.service"'; cvar; external;
  kABPersonSocialProfileUsernameKey: CFStringRef deprecated 'in "use CNSocialProfile.username"'; cvar; external;
  kABPersonSocialProfileUserIdentifierKey: CFStringRef deprecated 'in "use CNSocialProfile.userIdentifier"'; cvar; external;
  kABPersonSocialProfileServiceTwitter: CFStringRef deprecated 'in "use CNSocialProfileServiceTwitter"'; cvar; external;
  kABPersonSocialProfileServiceSinaWeibo: CFStringRef deprecated 'in "use CNSocialProfileServiceSinaWeibo"'; cvar; external;
  kABPersonSocialProfileServiceGameCenter: CFStringRef deprecated 'in "use CNSocialProfileServiceGameCenter"'; cvar; external;
  kABPersonSocialProfileServiceFacebook: CFStringRef deprecated 'in "use CNSocialProfileServiceFacebook"'; cvar; external;
  kABPersonSocialProfileServiceMyspace: CFStringRef deprecated 'in "use CNSocialProfileServiceMySpace"'; cvar; external;
  kABPersonSocialProfileServiceLinkedIn: CFStringRef deprecated 'in "use CNSocialProfileServiceLinkedIn"'; cvar; external;
  kABPersonSocialProfileServiceFlickr: CFStringRef deprecated 'in "use CNSocialProfileServiceFlickr"'; cvar; external;
  kABPersonAlternateBirthdayProperty: ABPropertyID deprecated 'in "use CNContact.nonGregorianBirthday"'; cvar; external;
  kABPersonAlternateBirthdayCalendarIdentifierKey: CFStringRef deprecated 'in "use NSDateComponents.calendar"'; cvar; external;
  kABPersonAlternateBirthdayEraKey: CFStringRef deprecated 'in "use NSDateComponents.era"'; cvar; external;
  kABPersonAlternateBirthdayYearKey: CFStringRef deprecated 'in "use NSDateComponents.year"'; cvar; external;
  kABPersonAlternateBirthdayMonthKey: CFStringRef deprecated 'in "use NSDateComponents.month"'; cvar; external;
  kABPersonAlternateBirthdayIsLeapMonthKey: CFStringRef deprecated 'in "use NSDateComponents.isLeapMonth"'; cvar; external;
  kABPersonAlternateBirthdayDayKey: CFStringRef deprecated 'in "use NSDateComponents.day"'; cvar; external;
{$endif}

{$endif}
