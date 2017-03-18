{ Parsed from CoreData.framework NSPersistentStoreCoordinator.h }

{$ifdef TYPES}
type
  NSPersistentStoreCoordinatorPtr = ^NSPersistentStoreCoordinator;
{$endif}

{$ifdef FUNCTIONS}
function API_UNAVAILABLE(param1: ios): NSString *  NSXMLStoreType                           ); cdecl; external; { available in macosx(10.4 }
function API_UNAVAILABLE_(param1: ios): NSString *  NSValidateXMLStoreOption                           ); cdecl; external; { available in macosx(10.4 }
function API_UNAVAILABLE__(param1: macosx): NSString *  NSPersistentStoreFileProtectionKey                       ); cdecl; external; { available in ios(5.0 }
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreCoordinator = objcclass external (NSObject, NSLockingProtocol)
  private
  public
    function initWithManagedObjectModel (model: NSManagedObjectModel): instancetype; message 'initWithManagedObjectModel:'; { NS_DESIGNATED_INITIALIZER }
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function persistentStores: __kindof NSPersistentStore *ProtocolPtr; message 'persistentStores';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setIos(8.0))(newValue: NSString); message 'setIos(8.0)):';
    function ios(8.0)): NSString; message 'ios(8.0))';
    function persistentStoreForURL (URL: NSURL): nullable __kindof NSPersistentStorePtr; message 'persistentStoreForURL:';
    function URLForPersistentStore (store: NSPersistentStore): NSURL; message 'URLForPersistentStore:';
    function setURL_forPersistentStore (url: NSURL; store: NSPersistentStore): boolean; message 'setURL:forPersistentStore:'; { available in macosx(10.5 }
    function addPersistentStoreWithType_configuration_URL_options_error (storeType: NSString; configuration: nullable NSStringPtr; storeURL: nullable NSURLPtr; options: nullable NSDictionaryPtr; error: NSErrorPtr): nullable __kindof NSPersistentStorePtr; message 'addPersistentStoreWithType:configuration:URL:options:error:';
    procedure addPersistentStoreWithDescription_completionHandler (storeDescription: NSPersistentStoreDescription; block: OpaqueCBlock); message 'addPersistentStoreWithDescription:completionHandler:'; { available in macosx(10.12 }
    function removePersistentStore_error (store: NSPersistentStore; error: NSErrorPtr): boolean; message 'removePersistentStore:error:';
    procedure setMetadata_forPersistentStore (metadata: nullable NSDictionaryPtr; store: NSPersistentStore); message 'setMetadata:forPersistentStore:';
    function metadataForPersistentStore (store: NSPersistentStore): NSDictionary; message 'metadataForPersistentStore:';
    function managedObjectIDForURIRepresentation (url: NSURL): nullable NSManagedObjectIDPtr; message 'managedObjectIDForURIRepresentation:';
    function executeRequest_withContext_error (request: NSPersistentStoreRequest; context: NSManagedObjectContext; error: NSErrorPtr): nullable id; message 'executeRequest:withContext:error:'; { available in macosx(10.7 }
    function registeredStoreTypes: NSDictionary; message 'registeredStoreTypes';
    function ios(3.0)): NSDictionary; message 'ios(3.0))';
    class procedure registerStoreClass_forStoreType (storeClass: pobjc_class; storeType: NSString); message 'registerStoreClass:forStoreType:'; { available in macosx(10.5 }
    class function metadataForPersistentStoreOfType_URL_options_error (storeType: NSString; url: NSURL; options: nullable NSDictionaryPtr; error: NSErrorPtr): nullable NSDictionaryPtr; message 'metadataForPersistentStoreOfType:URL:options:error:'; { available in macosx(10.9 }
    class function setMetadata_forPersistentStoreOfType_URL_options_error (metadata: nullable NSDictionaryPtr; storeType: NSString; url: NSURL; options: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'setMetadata:forPersistentStoreOfType:URL:options:error:'; { available in macosx(10.9 }
    function migratePersistentStore_toURL_options_withType_error (store: NSPersistentStore; URL: NSURL; options: nullable NSDictionaryPtr; storeType: NSString; error: NSErrorPtr): nullable NSPersistentStorePtr; message 'migratePersistentStore:toURL:options:withType:error:';
    function destroyPersistentStoreAtURL_withType_options_error (url: NSURL; storeType: NSString; options: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'destroyPersistentStoreAtURL:withType:options:error:'; { available in macosx(10.11 }
    function replacePersistentStoreAtURL_destinationOptions_withPersistentStoreFromURL_sourceOptions_storeType_error (destinationURL: NSURL; destinationOptions: nullable NSDictionaryPtr; sourceURL: NSURL; sourceOptions: nullable NSDictionaryPtr; storeType: NSString; error: NSErrorPtr): boolean; message 'replacePersistentStoreAtURL:destinationOptions:withPersistentStoreFromURL:sourceOptions:storeType:error:'; { available in macosx(10.11 }
    procedure performBlock (block: OpaqueCBlock); message 'performBlock:'; { available in macosx(10.10 }
    procedure performBlockAndWait (block: OpaqueCBlock); message 'performBlockAndWait:'; { available in macosx(10.10 }
    procedure lock                                                                        , ios(3.0,8.0)); message 'lock                                                                        , ios(3.0,8.0))'; deprecated 'in  "Use -performBlockAndWait: instead", macosx(10.4,10.10';
    procedure unlock                                                                        , ios(3.0,8.0)); message 'unlock                                                                        , ios(3.0,8.0))'; deprecated 'in  "Use -performBlockAndWait: instead", macosx(10.4,10.10';
    function tryLock                                                                 , ios(3.0,8.0)): boolean; message 'tryLock                                                                 , ios(3.0,8.0))'; deprecated 'in  "Use -performBlock: instead", macosx(10.4,10.10';
    class function metadataForPersistentStoreOfType_URL_error (storeType: nullable NSStringPtr; url: NSURL; error: NSErrorPtr): nullable NSDictionaryPtr; message 'metadataForPersistentStoreOfType:URL:error:'; deprecated 'in "Use -metadataForPersistentStoreOfType:URL:options:error: and pass in an options dictionary matching addPersistentStoreWithType", macosx(10.5,10.11';
    class function setMetadata_forPersistentStoreOfType_URL_error (metadata: nullable NSDictionaryPtr; storeType: nullable NSStringPtr; url: NSURL; error: NSErrorPtr): boolean; message 'setMetadata:forPersistentStoreOfType:URL:error:'; deprecated 'in "Use  -setMetadata:forPersistentStoreOfType:URL:options:error: and pass in an options dictionary matching addPersistentStoreWithType", macosx(10.5,10.11';
    class function removeUbiquitousContentAndPersistentStoreAtURL_options_error (storeURL: NSURL; options: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'removeUbiquitousContentAndPersistentStoreAtURL:options:error:'; deprecated 'in "Please see the release notes and Core Data documentation.", macosx(10.7,10.12';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreUbiquitousTransitionType = NSUInteger;
  NSPersistentStoreUbiquitousTransitionTypePtr = ^NSPersistentStoreUbiquitousTransitionType;

const
  NSPersistentStoreUbiquitousTransitionTypeAccountAdded = 1;
  NSPersistentStoreUbiquitousTransitionTypeAccountRemoved = 2;
  NSPersistentStoreUbiquitousTransitionTypeContentRemoved = 3;
  NSPersistentStoreUbiquitousTransitionTypeInitialImportCompleted = 4;
{$endif}

