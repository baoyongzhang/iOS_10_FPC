{ Parsed from CoreData.framework NSPersistentContainer.h }

{$ifdef TYPES}
type
  NSPersistentContainerPtr = ^NSPersistentContainer;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentContainer = objcclass external (NSObject)
  private
    {$if (not defined(__OBJC2__))}
    _name: id;
    _viewContext: NSManagedObjectContext;
    _storeCoordinator: id;
    _storeDescriptions: id;
    {$endif}
  public
    class function persistentContainerWithName (name: NSString): instancetype; message 'persistentContainerWithName:';
    class function persistentContainerWithName_managedObjectModel (name: NSString; model: NSManagedObjectModel): instancetype; message 'persistentContainerWithName:managedObjectModel:';
    class function defaultDirectoryURL: NSURL; message 'defaultDirectoryURL';
    function name: NSString; message 'name';
    function viewContext: NSManagedObjectContext; message 'viewContext';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    procedure setPersistentStoreDescriptions(newValue: NSPersistentStoreDescription *ProtocolPtr); message 'setPersistentStoreDescriptions:';
    function persistentStoreDescriptions: NSPersistentStoreDescription *ProtocolPtr; message 'persistentStoreDescriptions';
    function initWithName (name_: NSString): instancetype; message 'initWithName:';
    function initWithName_managedObjectModel (name_: NSString; model: NSManagedObjectModel): instancetype; message 'initWithName:managedObjectModel:'; { NS_DESIGNATED_INITIALIZER }
    procedure loadPersistentStoresWithCompletionHandler (block: OpaqueCBlock); message 'loadPersistentStoresWithCompletionHandler:';
    function newBackgroundContext: NSManagedObjectContext; message 'newBackgroundContext';
    procedure performBackgroundTask (block: OpaqueCBlock); message 'performBackgroundTask:';
  end;
{$endif}

