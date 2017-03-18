{ Parsed from AddressBookUI.framework ABNewPersonViewController.h }

{$ifdef TYPES}
type
  ABNewPersonViewControllerPtr = ^ABNewPersonViewController;
  ABNewPersonViewControllerDelegateProtocolPtr = ^ABNewPersonViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ABNewPersonViewController = objcclass external (UIViewController)
  public
    procedure setNewPersonViewDelegate(newValue: ABNewPersonViewControllerDelegateProtocol); message 'setNewPersonViewDelegate:';
    function newPersonViewDelegate: ABNewPersonViewControllerDelegateProtocol; message 'newPersonViewDelegate';
    function newPersonViewDelegate_: ABNewPersonViewControllerDelegateProtocol; message 'newPersonViewDelegate';
    procedure setAddressBook(newValue: ABAddressBookRef); message 'setAddressBook:';
    function addressBook: ABAddressBookRef; message 'addressBook';
    procedure setDisplayedPerson(newValue: ABRecordRef); message 'setDisplayedPerson:';
    function displayedPerson: ABRecordRef; message 'displayedPerson';
    procedure setParentGroup(newValue: ABRecordRef); message 'setParentGroup:';
    function parentGroup: ABRecordRef; message 'parentGroup';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ABNewPersonViewControllerDelegateProtocol = objcprotocol external name 'ABNewPersonViewControllerDelegate' (NSObjectProtocol)
    procedure newPersonViewController_didCompleteWithNewPerson (newPersonView: ABNewPersonViewController; person: nullable ABRecordRef); message 'newPersonViewController:didCompleteWithNewPerson:';
  end;
{$endif}

