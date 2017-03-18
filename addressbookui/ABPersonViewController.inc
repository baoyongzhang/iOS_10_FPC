{ Parsed from AddressBookUI.framework ABPersonViewController.h }

{$ifdef TYPES}
type
  ABPersonViewControllerPtr = ^ABPersonViewController;
  ABPersonViewControllerDelegateProtocolPtr = ^ABPersonViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ABPersonViewController = objcclass external (UIViewController, UIViewControllerRestorationProtocol)
  public
    procedure setPersonViewDelegate(newValue: ABPersonViewControllerDelegateProtocol); message 'setPersonViewDelegate:';
    function personViewDelegate: ABPersonViewControllerDelegateProtocol; message 'personViewDelegate';
    procedure setAddressBook(newValue: ABAddressBookRef); message 'setAddressBook:';
    function addressBook: ABAddressBookRef; message 'addressBook';
    procedure setDisplayedPerson(newValue: ABRecordRef); message 'setDisplayedPerson:';
    function displayedPerson: ABRecordRef; message 'displayedPerson';
    procedure setDisplayedProperties(newValue: NSNumber *ProtocolPtr); message 'setDisplayedProperties:';
    function displayedProperties: NSNumber *ProtocolPtr; message 'displayedProperties';
    procedure setAllowsEditing(newValue: boolean); message 'setAllowsEditing:';
    function allowsEditing: boolean; message 'allowsEditing';
    procedure setAllowsActions(newValue: boolean); message 'setAllowsActions:';
    function allowsActions: boolean; message 'allowsActions';
    procedure setShouldShowLinkedPeople(newValue: boolean); message 'setShouldShowLinkedPeople:';
    function shouldShowLinkedPeople: boolean; message 'shouldShowLinkedPeople';
    procedure setHighlightedItemForProperty_withIdentifier (property_: ABPropertyID; identifier: ABMultiValueIdentifier); message 'setHighlightedItemForProperty:withIdentifier:';

    { Adopted protocols }
    class function viewControllerWithRestorationIdentifierPath_coder (identifierComponents: NSArray; coder: NSCoder): nullable UIViewControllerPtr; message 'viewControllerWithRestorationIdentifierPath:coder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ABPersonViewControllerDelegateProtocol = objcprotocol external name 'ABPersonViewControllerDelegate' (NSObjectProtocol)
    function personViewController_shouldPerformDefaultActionForPerson_property_identifier (personViewController: ABPersonViewController; person: ABRecordRef; property_: ABPropertyID; identifier: ABMultiValueIdentifier): boolean; message 'personViewController:shouldPerformDefaultActionForPerson:property:identifier:';
  end;
{$endif}

