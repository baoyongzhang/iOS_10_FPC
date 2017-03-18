{ Parsed from CoreData.framework NSSaveChangesRequest.h }

{$ifdef TYPES}
type
  NSSaveChangesRequestPtr = ^NSSaveChangesRequest;
{$endif}

{$ifdef CLASSES}

type
  NSSaveChangesRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    function initWithInsertedObjects_updatedObjects_deletedObjects_lockedObjects (insertedObjects: nullable NSManagedObject *ProtocolPtr; updatedObjects: nullable NSManagedObject *ProtocolPtr; deletedObjects: nullable NSManagedObject *ProtocolPtr; lockedObjects: nullable NSManagedObject *ProtocolPtr): instancetype; message 'initWithInsertedObjects:updatedObjects:deletedObjects:lockedObjects:';
    function insertedObjects: __kindof NSManagedObject *ProtocolPtr; message 'insertedObjects';
    function updatedObjects: __kindof NSManagedObject *ProtocolPtr; message 'updatedObjects';
    function deletedObjects: __kindof NSManagedObject *ProtocolPtr; message 'deletedObjects';
    function lockedObjects: __kindof NSManagedObject *ProtocolPtr; message 'lockedObjects';
  end;
{$endif}

