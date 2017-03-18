{ Parsed from AddressBookUI.framework ABUnknownPersonViewController.h }

{$ifdef TYPES}
type
  ABUnknownPersonViewControllerPtr = ^ABUnknownPersonViewController;
  ABUnknownPersonViewControllerDelegateProtocolPtr = ^ABUnknownPersonViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ABUnknownPersonViewController = objcclass external (UIViewController)
  public
    procedure setUnknownPersonViewDelegate(newValue: ABUnknownPersonViewControllerDelegateProtocol); message 'setUnknownPersonViewDelegate:';
    function unknownPersonViewDelegate: ABUnknownPersonViewControllerDelegateProtocol; message 'unknownPersonViewDelegate';
    procedure setAddressBook(newValue: ABAddressBookRef); message 'setAddressBook:';
    function addressBook: ABAddressBookRef; message 'addressBook';
    procedure setDisplayedPerson(newValue: ABRecordRef); message 'setDisplayedPerson:';
    function displayedPerson: ABRecordRef; message 'displayedPerson';
    procedure setAlternateName(newValue: NSString); message 'setAlternateName:';
    function alternateName: NSString; message 'alternateName';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    procedure setAllowsActions(newValue: boolean); message 'setAllowsActions:';
    function allowsActions: boolean; message 'allowsActions';
    procedure setAllowsAddingToAddressBook(newValue: boolean); message 'setAllowsAddingToAddressBook:';
    function allowsAddingToAddressBook: boolean; message 'allowsAddingToAddressBook';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ABUnknownPersonViewControllerDelegateProtocol = objcprotocol external name 'ABUnknownPersonViewControllerDelegate' (NSObjectProtocol)
    procedure unknownPersonViewController_didResolveToPerson (unknownCardViewController: ABUnknownPersonViewController; person: nullable ABRecordRef); message 'unknownPersonViewController:didResolveToPerson:';
  optional
    function unknownPersonViewController_shouldPerformDefaultActionForPerson_property_identifier (personViewController: ABUnknownPersonViewController; person: ABRecordRef; property_: ABPropertyID; identifier: ABMultiValueIdentifier): boolean; message 'unknownPersonViewController:shouldPerformDefaultActionForPerson:property:identifier:'; { available starting in __MAC_NA, __IPHONE_3_0 }
  end;
{$endif}

