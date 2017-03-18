{ Parsed from CoreData.framework NSManagedObjectContext.h }

{$ifdef TYPES}
type
  NSManagedObjectContextPtr = ^NSManagedObjectContext;
{$endif}

{$ifdef TYPES}
type
  NSManagedObjectContextConcurrencyType = NSUInteger;
  NSManagedObjectContextConcurrencyTypePtr = ^NSManagedObjectContextConcurrencyType;

const
  NSConfinementConcurrencyType = 0 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  ios = 1 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  3 = 2 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  0 = 3 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  9 = 4 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  0 = 5 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  0x00 = 6 deprecated 'in  "Use another NSManagedObjectContextConcurrencyType", macosx(10.4,10.11';
  NSPrivateQueueConcurrencyType = $01;
  NSMainQueueConcurrencyType = $02;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectContext = objcclass external (NSObject, NSCodingProtocol, NSLockingProtocol)
  private
  public
    class function new                                                                            , ios(3.0,9.0)): instancetype; message 'new                                                                            , ios(3.0,9.0))'; deprecated 'in  "Use -initWithConcurrencyType: instead", macosx(10.4,10.11';
    function init                                                                            , ios(3.0,9.0)): instancetype; message 'init                                                                            , ios(3.0,9.0))'; deprecated 'in  "Use -initWithConcurrencyType: instead", macosx(10.4,10.11';
    function initWithConcurrencyType (ct: NSManagedObjectContextConcurrencyType): instancetype; message 'initWithConcurrencyType:'; { available in macosx(10.7 }
    procedure performBlock (block: OpaqueCBlock); message 'performBlock:'; { available in macosx(10.7 }
    procedure performBlockAndWait (block: OpaqueCBlock); message 'performBlockAndWait:'; { available in macosx(10.7 }
    procedure setPersistentStoreCoordinator(newValue: NSPersistentStoreCoordinator); message 'setPersistentStoreCoordinator:';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    procedure setParentContext(newValue: NSManagedObjectContext); message 'setParentContext:';
    function parentContext: NSManagedObjectContext; message 'parentContext';
    procedure setIos(5.0))(newValue: NSManagedObjectContext); message 'setIos(5.0)):';
    function ios(5.0)): NSManagedObjectContext; message 'ios(5.0))';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setIos(8.0))(newValue: NSString); message 'setIos(8.0)):';
    function ios(8.0)): NSString; message 'ios(8.0))';
    procedure setUndoManager(newValue: NSUndoManager); message 'setUndoManager:';
    function undoManager: NSUndoManager; message 'undoManager';
    function hasChanges: boolean; message 'hasChanges';
    function userInfo: NSMutableDictionary; message 'userInfo';
    function ios(5.0))_: NSMutableDictionary; message 'ios(5.0))';
    function concurrencyType: NSManagedObjectContextConcurrencyType; message 'concurrencyType';
    function ios(5.0))__: NSManagedObjectContextConcurrencyType; message 'ios(5.0))';
    function objectRegisteredForID (objectID: NSManagedObjectID): nullable __kindof NSManagedObjectPtr; message 'objectRegisteredForID:';
    function objectWithID (objectID: NSManagedObjectID): __kindof NSManagedObjectPtr; message 'objectWithID:';
    function existingObjectWithID_error (objectID: NSManagedObjectID; error: NSErrorPtr): nullable __kindof NSManagedObjectPtr; message 'existingObjectWithID:error:'; { available in macosx(10.6 }
    function executeFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): nullable NSArrayPtr; message 'executeFetchRequest:error:';
    function countForFetchRequest_error (request: NSFetchRequest; error: NSErrorPtr): NSUInteger; message 'countForFetchRequest:error:'; { available in macosx(10.5 }
    function executeRequest_error (request: NSPersistentStoreRequest; error: NSErrorPtr): nullable __kindof NSPersistentStoreResultPtr; message 'executeRequest:error:'; { available in macosx(10.10 }
    procedure insertObject (object_: NSManagedObject); message 'insertObject:';
    procedure deleteObject (object_: NSManagedObject); message 'deleteObject:';
    procedure refreshObject_mergeChanges (object_: NSManagedObject; flag: boolean); message 'refreshObject:mergeChanges:';
    procedure detectConflictsForObject (object_: NSManagedObject); message 'detectConflictsForObject:';
    procedure observeValueForKeyPath_ofObject_change_context (keyPath: nullable NSStringPtr; object_: nullable id; change: nullable NSDictionaryPtr; context: nullable voidPtr); message 'observeValueForKeyPath:ofObject:change:context:';
    procedure processPendingChanges; message 'processPendingChanges';
    procedure assignObject_toPersistentStore (object_: id; store: NSPersistentStore); message 'assignObject:toPersistentStore:';
    function insertedObjects: __kindof NSManagedObject *ProtocolPtr; message 'insertedObjects';
    function updatedObjects: __kindof NSManagedObject *ProtocolPtr; message 'updatedObjects';
    function deletedObjects: __kindof NSManagedObject *ProtocolPtr; message 'deletedObjects';
    function registeredObjects: __kindof NSManagedObject *ProtocolPtr; message 'registeredObjects';
    procedure undo; message 'undo';
    procedure redo; message 'redo';
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function save (error: NSErrorPtr): boolean; message 'save:';
    procedure refreshAllObjects                            ,ios(8.3)); message 'refreshAllObjects                            ,ios(8.3))'; { available in macosx(10.11 }
    procedure lock                                                                                                  , ios(3.0,8.0)); message 'lock                                                                                                  , ios(3.0,8.0))'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", macosx(10.4,10.10';
    procedure unlock                                                                                                  , ios(3.0,8.0)); message 'unlock                                                                                                  , ios(3.0,8.0))'; deprecated 'in  "Use a queue style context and -performBlockAndWait: instead", macosx(10.4,10.10';
    function tryLock                                                                                           , ios(3.0,8.0)): boolean; message 'tryLock                                                                                           , ios(3.0,8.0))'; deprecated 'in  "Use a queue style context and -performBlock: instead", macosx(10.4,10.10';
    procedure setPropagatesDeletesAtEndOfEvent(newValue: boolean); message 'setPropagatesDeletesAtEndOfEvent:';
    function propagatesDeletesAtEndOfEvent: boolean; message 'propagatesDeletesAtEndOfEvent';
    procedure setRetainsRegisteredObjects(newValue: boolean); message 'setRetainsRegisteredObjects:';
    function retainsRegisteredObjects: boolean; message 'retainsRegisteredObjects';
    procedure setShouldDeleteInaccessibleFaults(newValue: boolean); message 'setShouldDeleteInaccessibleFaults:';
    function shouldDeleteInaccessibleFaults: boolean; message 'shouldDeleteInaccessibleFaults';
    procedure setIos(9.0))(newValue: boolean); message 'setIos(9.0)):';
    function ios(9.0)): boolean; message 'ios(9.0))';
    function shouldHandleInaccessibleFault_forObjectID_triggeredByProperty (fault: NSManagedObject; oid: NSManagedObjectID; property_: nullable NSPropertyDescriptionPtr): boolean; message 'shouldHandleInaccessibleFault:forObjectID:triggeredByProperty:'; { available in macosx(10.11 }
    procedure setStalenessInterval(newValue: NSTimeInterval); message 'setStalenessInterval:';
    function stalenessInterval: NSTimeInterval; message 'stalenessInterval';
    procedure setMergePolicy(newValue: id); message 'setMergePolicy:';
    function mergePolicy: id; message 'mergePolicy';
    function obtainPermanentIDsForObjects_error (objects: NSManagedObject *ProtocolPtr; error: NSErrorPtr): boolean; message 'obtainPermanentIDsForObjects:error:'; { available in macosx(10.5 }
    procedure mergeChangesFromContextDidSaveNotification (notification: NSNotification); message 'mergeChangesFromContextDidSaveNotification:'; { available in macosx(10.5 }
    class procedure mergeChangesFromRemoteContextSave_intoContexts (changeNotificationData: NSDictionary; contexts: NSManagedObjectContext*ProtocolPtr); message 'mergeChangesFromRemoteContextSave:intoContexts:'; { available in macosx(10.11 }
    function queryGenerationToken: NSQueryGenerationToken; message 'queryGenerationToken';
    function ios(10.0),tvos(10.0),watchos(3.0)): NSQueryGenerationToken; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function setQueryGenerationFromToken_error (generation: nullable NSQueryGenerationTokenPtr; error: NSErrorPtr): boolean; message 'setQueryGenerationFromToken:error:'; { available in macosx(10.12 }
    procedure setAutomaticallyMergesChangesFromParent(newValue: boolean); message 'setAutomaticallyMergesChangesFromParent:';
    function automaticallyMergesChangesFromParent: boolean; message 'automaticallyMergesChangesFromParent';
    procedure setIos(10.0),tvos(10.0),watchos(3.0))(newValue: boolean); message 'setIos(10.0),tvos(10.0),watchos(3.0)):';
    function ios(10.0),tvos(10.0),watchos(3.0))_: boolean; message 'ios(10.0),tvos(10.0),watchos(3.0))';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;
{$endif}

