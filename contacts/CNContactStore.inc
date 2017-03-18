{ Parsed from Contacts.framework CNContactStore.h }

{$ifdef TYPES}
type
  CNContactStorePtr = ^CNContactStore;
{$endif}

{$ifdef TYPES}
type
  CNEntityType = NSInteger;
  CNEntityTypePtr = ^CNEntityType;

const
  CNEntityTypeContacts = 0;

type
  CNAuthorizationStatus = NSInteger;
  CNAuthorizationStatusPtr = ^CNAuthorizationStatus;

const
  CNAuthorizationStatusNotDetermined = 0;
  CNAuthorizationStatusRestricted = 1;
  CNAuthorizationStatusDenied = 2;
  CNAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  CNContactStore = objcclass external (NSObject)
  public
    class function authorizationStatusForEntityType (entityType: CNEntityType): CNAuthorizationStatus; message 'authorizationStatusForEntityType:';
    procedure requestAccessForEntityType_completionHandler (entityType: CNEntityType; completionHandler: OpaqueCBlock); message 'requestAccessForEntityType:completionHandler:';
    function unifiedContactsMatchingPredicate_keysToFetch_error (predicate: NSPredicate; keys: id<CNKeyDescriptorProtocol>Ptr; error: NSError *__nullable *__nullable): nullable CNContact*ProtocolPtr; message 'unifiedContactsMatchingPredicate:keysToFetch:error:';
    function unifiedContactWithIdentifier_keysToFetch_error (identifier: NSString; keys: id<CNKeyDescriptorProtocol>Ptr; error: NSError *__nullable *__nullable): nullable CNContactPtr; message 'unifiedContactWithIdentifier:keysToFetch:error:';
    function unifiedMeContactWithKeysToFetch_error (keys: id<CNKeyDescriptorProtocol>Ptr; error: NSError *__nullable *__nullable): nullable CNContactPtr; message 'unifiedMeContactWithKeysToFetch:error:'; { available in 10_11, NA }
    function enumerateContactsWithFetchRequest_error_usingBlock (fetchRequest: CNContactFetchRequest; error: NSError *__nullable *__nullable; block: OpaqueCBlock): boolean; message 'enumerateContactsWithFetchRequest:error:usingBlock:';
    function groupsMatchingPredicate_error (predicate: nullable NSPredicatePtr; error: NSError *__nullable *__nullable): nullable CNGroup*ProtocolPtr; message 'groupsMatchingPredicate:error:';
    function containersMatchingPredicate_error (predicate: nullable NSPredicatePtr; error: NSError *__nullable *__nullable): nullable CNContainer*ProtocolPtr; message 'containersMatchingPredicate:error:';
    function executeSaveRequest_error (saveRequest: CNSaveRequest; error: NSError *__nullable *__nullable): boolean; message 'executeSaveRequest:error:';
    function defaultContainerIdentifier: NSString; message 'defaultContainerIdentifier';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContactStoreDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

