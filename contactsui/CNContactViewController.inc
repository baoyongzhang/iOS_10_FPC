{ Parsed from ContactsUI.framework CNContactViewController.h }

{$ifdef TYPES}
type
  CNContactViewControllerPtr = ^CNContactViewController;
  CNContactViewControllerDelegateProtocolPtr = ^CNContactViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  CNContactViewController = objcclass external (UIViewController)
  public
    class function descriptorForRequiredKeys: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeys';
    class function viewControllerForContact (contact: CNContact): instancetype; message 'viewControllerForContact:';
    class function viewControllerForUnknownContact (contact: CNContact): instancetype; message 'viewControllerForUnknownContact:';
    class function viewControllerForNewContact (contact: nullable CNContactPtr): instancetype; message 'viewControllerForNewContact:';
    function contact: CNContact; message 'contact';
    procedure setDisplayedPropertyKeys(newValue: NSArray); message 'setDisplayedPropertyKeys:';
    function displayedPropertyKeys: NSArray; message 'displayedPropertyKeys';
    procedure setDelegate(newValue: CNContactViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: CNContactViewControllerDelegateProtocol; message 'delegate';
    procedure setContactStore(newValue: CNContactStore); message 'setContactStore:';
    function contactStore: CNContactStore; message 'contactStore';
    procedure setParentGroup(newValue: CNGroup); message 'setParentGroup:';
    function parentGroup: CNGroup; message 'parentGroup';
    procedure setParentContainer(newValue: CNContainer); message 'setParentContainer:';
    function parentContainer: CNContainer; message 'parentContainer';
    procedure setAlternateName(newValue: NSString); message 'setAlternateName:';
    function alternateName: NSString; message 'alternateName';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    procedure setAllowsEditing(newValue: boolean); message 'setAllowsEditing:';
    function allowsEditing: boolean; message 'allowsEditing';
    procedure setAllowsActions(newValue: boolean); message 'setAllowsActions:';
    function allowsActions: boolean; message 'allowsActions';
    procedure setShouldShowLinkedContacts(newValue: boolean); message 'setShouldShowLinkedContacts:';
    function shouldShowLinkedContacts: boolean; message 'shouldShowLinkedContacts';
    procedure highlightPropertyWithKey_identifier (key: NSString; identifier: nullable NSStringPtr); message 'highlightPropertyWithKey:identifier:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CNContactViewControllerDelegateProtocol = objcprotocol external name 'CNContactViewControllerDelegate' (NSObjectProtocol)
  optional
    function contactViewController_shouldPerformDefaultActionForContactProperty (viewController: CNContactViewController; property_: CNContactProperty): boolean; message 'contactViewController:shouldPerformDefaultActionForContactProperty:';
    procedure contactViewController_didCompleteWithContact (viewController: CNContactViewController; contact: nullable CNContactPtr); message 'contactViewController:didCompleteWithContact:';
  end;
{$endif}

