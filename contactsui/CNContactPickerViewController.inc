{ Parsed from ContactsUI.framework CNContactPickerViewController.h }

{$ifdef TYPES}
type
  CNContactPickerViewControllerPtr = ^CNContactPickerViewController;
  CNContactPickerDelegateProtocolPtr = ^CNContactPickerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  CNContactPickerViewController = objcclass external (UIViewController)
  public
    procedure setDisplayedPropertyKeys(newValue: NSString *ProtocolPtr); message 'setDisplayedPropertyKeys:';
    function displayedPropertyKeys: NSString *ProtocolPtr; message 'displayedPropertyKeys';
    procedure setDelegate(newValue: CNContactPickerDelegateProtocol); message 'setDelegate:';
    function delegate: CNContactPickerDelegateProtocol; message 'delegate';
    procedure setPredicateForEnablingContact(newValue: NSPredicate); message 'setPredicateForEnablingContact:';
    function predicateForEnablingContact: NSPredicate; message 'predicateForEnablingContact';
    procedure setPredicateForSelectionOfContact(newValue: NSPredicate); message 'setPredicateForSelectionOfContact:';
    function predicateForSelectionOfContact: NSPredicate; message 'predicateForSelectionOfContact';
    procedure setPredicateForSelectionOfProperty(newValue: NSPredicate); message 'setPredicateForSelectionOfProperty:';
    function predicateForSelectionOfProperty: NSPredicate; message 'predicateForSelectionOfProperty';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CNContactPickerDelegateProtocol = objcprotocol external name 'CNContactPickerDelegate' (NSObjectProtocol)
  optional
    procedure contactPickerDidCancel (picker: CNContactPickerViewController); message 'contactPickerDidCancel:';
    procedure contactPicker_didSelectContact (picker: CNContactPickerViewController; contact: CNContact); message 'contactPicker:didSelectContact:';
    procedure contactPicker_didSelectContactProperty (picker: CNContactPickerViewController; contactProperty: CNContactProperty); message 'contactPicker:didSelectContactProperty:';
    procedure contactPicker_didSelectContacts (picker: CNContactPickerViewController; contacts: CNContact*ProtocolPtr); message 'contactPicker:didSelectContacts:';
    procedure contactPicker_didSelectContactProperties (picker: CNContactPickerViewController; contactProperties: CNContactProperty*ProtocolPtr); message 'contactPicker:didSelectContactProperties:';
  end;
{$endif}

