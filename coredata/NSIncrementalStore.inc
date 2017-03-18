{ Parsed from CoreData.framework NSIncrementalStore.h }

{$ifdef TYPES}
type
  NSIncrementalStorePtr = ^NSIncrementalStore;
{$endif}

{$ifdef CLASSES}

type
  NSIncrementalStore = objcclass external (NSPersistentStore)
  private
  public
    function loadMetadata (error: NSErrorPtr): boolean; message 'loadMetadata:';
    function executeRequest_withContext_error (request: NSPersistentStoreRequest; context: nullable NSManagedObjectContextPtr; error: NSErrorPtr): nullable id; message 'executeRequest:withContext:error:';
    function newValuesForObjectWithID_withContext_error (objectID: NSManagedObjectID; context: NSManagedObjectContext; error: NSErrorPtr): nullable NSIncrementalStoreNodePtr; message 'newValuesForObjectWithID:withContext:error:';
    function newValueForRelationship_forObjectWithID_withContext_error (relationship: NSRelationshipDescription; objectID: NSManagedObjectID; context: nullable NSManagedObjectContextPtr; error: NSErrorPtr): nullable id; message 'newValueForRelationship:forObjectWithID:withContext:error:';
    class function identifierForNewStoreAtURL (storeURL: NSURL): id; message 'identifierForNewStoreAtURL:';
    function obtainPermanentIDsForObjects_error (array_: NSManagedObject *ProtocolPtr; error: NSErrorPtr): nullable NSManagedObjectID *ProtocolPtr; message 'obtainPermanentIDsForObjects:error:';
    procedure managedObjectContextDidRegisterObjectsWithIDs (objectIDs: NSManagedObjectID *ProtocolPtr); message 'managedObjectContextDidRegisterObjectsWithIDs:';
    procedure managedObjectContextDidUnregisterObjectsWithIDs (objectIDs: NSManagedObjectID *ProtocolPtr); message 'managedObjectContextDidUnregisterObjectsWithIDs:';
    function newObjectIDForEntity_referenceObject (entity: NSEntityDescription; data: id): NSManagedObjectID; message 'newObjectIDForEntity:referenceObject:';
    function referenceObjectForObjectID (objectID: NSManagedObjectID): id; message 'referenceObjectForObjectID:';
  end;
{$endif}

