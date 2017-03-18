{ Parsed from AddressBookUI.framework ABPeoplePickerNavigationController.h }

{$ifdef TYPES}
type
  ABPeoplePickerNavigationControllerPtr = ^ABPeoplePickerNavigationController;
  ABPeoplePickerNavigationControllerDelegateProtocolPtr = ^ABPeoplePickerNavigationControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ABPeoplePickerNavigationController = objcclass external (UINavigationController)
  public
    procedure setPeoplePickerDelegate(newValue: ABPeoplePickerNavigationControllerDelegateProtocol); message 'setPeoplePickerDelegate:';
    function peoplePickerDelegate: ABPeoplePickerNavigationControllerDelegateProtocol; message 'peoplePickerDelegate';
    procedure setDisplayedProperties(newValue: NSNumber *ProtocolPtr); message 'setDisplayedProperties:';
    function displayedProperties: NSNumber *ProtocolPtr; message 'displayedProperties';
    procedure setAddressBook(newValue: ABAddressBookRef); message 'setAddressBook:';
    function addressBook: ABAddressBookRef; message 'addressBook';
    procedure setPredicateForEnablingPerson(newValue: NSPredicate); message 'setPredicateForEnablingPerson:';
    function predicateForEnablingPerson: NSPredicate; message 'predicateForEnablingPerson';
    procedure setPredicateForSelectionOfPerson(newValue: NSPredicate); message 'setPredicateForSelectionOfPerson:';
    function predicateForSelectionOfPerson: NSPredicate; message 'predicateForSelectionOfPerson';
    procedure setPredicateForSelectionOfProperty(newValue: NSPredicate); message 'setPredicateForSelectionOfProperty:';
    function predicateForSelectionOfProperty: NSPredicate; message 'predicateForSelectionOfProperty';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ABPersonNamePrefixProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonGivenNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonMiddleNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonFamilyNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonNameSuffixProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPreviousFamilyNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonNicknameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPhoneticGivenNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPhoneticMiddleNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPhoneticFamilyNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonOrganizationNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonDepartmentNameProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonJobTitleProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonBirthdayProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonNoteProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPhoneNumbersProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonEmailAddressesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonUrlAddressesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonDatesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonInstantMessageAddressesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonRelatedNamesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonSocialProfilesProperty: NSString { available in 8_0 }; cvar; external;
  ABPersonPostalAddressesProperty: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  ABPeoplePickerNavigationControllerDelegateProtocol = objcprotocol external name 'ABPeoplePickerNavigationControllerDelegate' (NSObjectProtocol)
  optional
    procedure peoplePickerNavigationController_didSelectPerson (peoplePicker: ABPeoplePickerNavigationController; person: ABRecordRef); message 'peoplePickerNavigationController:didSelectPerson:'; { available in 8_0 }
    procedure peoplePickerNavigationController_didSelectPerson_property_identifier (peoplePicker: ABPeoplePickerNavigationController; person: ABRecordRef; property_: ABPropertyID; identifier: ABMultiValueIdentifier); message 'peoplePickerNavigationController:didSelectPerson:property:identifier:'; { available in 8_0 }
    procedure peoplePickerNavigationControllerDidCancel (peoplePicker: ABPeoplePickerNavigationController); message 'peoplePickerNavigationControllerDidCancel:';
    function peoplePickerNavigationController_shouldContinueAfterSelectingPerson (peoplePicker: ABPeoplePickerNavigationController; person: ABRecordRef): boolean; message 'peoplePickerNavigationController:shouldContinueAfterSelectingPerson:'; deprecated 'in 2_0, 8_0';
    function peoplePickerNavigationController_shouldContinueAfterSelectingPerson_property_identifier (peoplePicker: ABPeoplePickerNavigationController; person: ABRecordRef; property_: ABPropertyID; identifier: ABMultiValueIdentifier): boolean; message 'peoplePickerNavigationController:shouldContinueAfterSelectingPerson:property:identifier:'; deprecated 'in 2_0, 8_0';
  end;
{$endif}

