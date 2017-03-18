{ Parsed from CoreData.framework NSAtomicStore.h }

{$ifdef TYPES}
type
  NSAtomicStorePtr = ^NSAtomicStore;
{$endif}

{$ifdef CLASSES}

type
  NSAtomicStore = objcclass external (NSPersistentStore)
  private
    {$if (not defined(__OBJC2__))}
    _nodeCache: NSMutableDictionary;
    _entityCache: NSMutableDictionary;
    _storeMetadata: NSMutableDictionary;
    _nextReference: NSInteger;
    _reserved4: pointer;
    _reserved5: pointer;
    {$endif}
  public
    function initWithPersistentStoreCoordinator_configurationName_URL_options (coordinator: nullable NSPersistentStoreCoordinatorPtr; configurationName_: nullable NSStringPtr; url_: NSURL; options_: nullable NSDictionaryPtr): instancetype; message 'initWithPersistentStoreCoordinator:configurationName:URL:options:';
    function load (error: NSErrorPtr): boolean; message 'load:';
    function save (error: NSErrorPtr): boolean; message 'save:';
    function newCacheNodeForManagedObject (managedObject: NSManagedObject): NSAtomicStoreCacheNode; message 'newCacheNodeForManagedObject:';
    procedure updateCacheNode_fromManagedObject (node: NSAtomicStoreCacheNode; managedObject: NSManagedObject); message 'updateCacheNode:fromManagedObject:';
    function cacheNodes: __kindof NSAtomicStoreCacheNode *ProtocolPtr; message 'cacheNodes';
    procedure addCacheNodes (cacheNodes_: __kindof NSAtomicStoreCacheNode *ProtocolPtr); message 'addCacheNodes:';
    procedure willRemoveCacheNodes (cacheNodes_: __kindof NSAtomicStoreCacheNode *ProtocolPtr); message 'willRemoveCacheNodes:';
    function cacheNodeForObjectID (objectID: NSManagedObjectID): nullable NSAtomicStoreCacheNodePtr; message 'cacheNodeForObjectID:';
    function objectIDForEntity_referenceObject (entity: NSEntityDescription; data: id): NSManagedObjectID; message 'objectIDForEntity:referenceObject:';
    function newReferenceObjectForManagedObject (managedObject: NSManagedObject): id; message 'newReferenceObjectForManagedObject:';
    function referenceObjectForObjectID (objectID: NSManagedObjectID): id; message 'referenceObjectForObjectID:';
  end;
{$endif}

