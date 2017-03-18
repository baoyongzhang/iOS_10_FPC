{ Parsed from CoreData.framework NSManagedObject.h }

{$ifdef TYPES}
type
  NSManagedObjectPtr = ^NSManagedObject;
{$endif}

{$ifdef TYPES}
type
  NSSnapshotEventType = NSUInteger;
  NSSnapshotEventTypePtr = ^NSSnapshotEventType;

const
  NSSnapshotEventUndoInsertion = 1 shl 1;
  NSSnapshotEventUndoDeletion = 1 shl 2;
  NSSnapshotEventUndoUpdate = 1 shl 3;
  NSSnapshotEventRollback = 1 shl 4;
  NSSnapshotEventRefresh = 1 shl 5;
  NSSnapshotEventMergePolicy = 1 shl 6;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObject = objcclass external (NSObject)
  private
  public
    function contextShouldIgnoreUnmodeledPropertyChanges: boolean; message 'contextShouldIgnoreUnmodeledPropertyChanges';
    function ios(3.0)): boolean; message 'ios(3.0))';
    class function entity                            ,ios(10.0),tvos(10.0),watchos(3.0)): NSEntityDescription; message 'entity                            ,ios(10.0),tvos(10.0),watchos(3.0))'; { available in macosx(10.12 }
    class function fetchRequest                            ,ios(10.0),tvos(10.0),watchos(3.0)): NSFetchRequest; message 'fetchRequest                            ,ios(10.0),tvos(10.0),watchos(3.0))'; { available in macosx(10.12 }
    function initWithEntity_insertIntoManagedObjectContext (entity: NSEntityDescription; context: nullable NSManagedObjectContextPtr): __kindof NSManagedObjectPtr; message 'initWithEntity:insertIntoManagedObjectContext:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContext (moc: NSManagedObjectContext): instancetype; message 'initWithContext:'; { available in macosx(10.12 }
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function entity: NSEntityDescription; message 'entity';
    function objectID: NSManagedObjectID; message 'objectID';
    function isInserted: boolean; message 'isInserted';
    function isUpdated: boolean; message 'isUpdated';
    function isDeleted: boolean; message 'isDeleted';
    function hasChanges: boolean; message 'hasChanges';
    function ios(5.0)): boolean; message 'ios(5.0))';
    function hasPersistentChangedValues: boolean; message 'hasPersistentChangedValues';
    function ios(7.0)): boolean; message 'ios(7.0))';
    function isFault: boolean; message 'isFault';
    function hasFaultForRelationshipNamed (key: NSString): boolean; message 'hasFaultForRelationshipNamed:'; { available in macosx(10.5 }
    function objectIDsForRelationshipNamed (key: NSString): NSManagedObjectID *ProtocolPtr; message 'objectIDsForRelationshipNamed:'; { available in macosx(10.11 }
    function faultingState: NSUInteger; message 'faultingState';
    function ios(3.0))_: NSUInteger; message 'ios(3.0))';
    procedure willAccessValueForKey (key: nullable NSStringPtr); message 'willAccessValueForKey:';
    procedure didAccessValueForKey (key: nullable NSStringPtr); message 'didAccessValueForKey:';
    procedure willChangeValueForKey (key: NSString); message 'willChangeValueForKey:';
    procedure didChangeValueForKey (key: NSString); message 'didChangeValueForKey:';
    procedure willChangeValueForKey_withSetMutation_usingObjects (inKey: NSString; inMutationKind: NSKeyValueSetMutationKind; inObjects: NSSet); message 'willChangeValueForKey:withSetMutation:usingObjects:';
    procedure didChangeValueForKey_withSetMutation_usingObjects (inKey: NSString; inMutationKind: NSKeyValueSetMutationKind; inObjects: NSSet); message 'didChangeValueForKey:withSetMutation:usingObjects:';
    procedure awakeFromFetch; message 'awakeFromFetch';
    procedure awakeFromInsert; message 'awakeFromInsert';
    procedure awakeFromSnapshotEvents (flags: NSSnapshotEventType); message 'awakeFromSnapshotEvents:'; { available in macosx(10.6 }
    procedure prepareForDeletion                           ,ios(3.0)); message 'prepareForDeletion                           ,ios(3.0))'; { available in macosx(10.6 }
    procedure willSave; message 'willSave';
    procedure didSave; message 'didSave';
    procedure willTurnIntoFault                           ,ios(3.0)); message 'willTurnIntoFault                           ,ios(3.0))'; { available in macosx(10.5 }
    procedure didTurnIntoFault; message 'didTurnIntoFault';
    function valueForKey (key: NSString): nullable id; message 'valueForKey:';
    procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:';
    function primitiveValueForKey (key: NSString): nullable id; message 'primitiveValueForKey:';
    procedure setPrimitiveValue_forKey (value: nullable id; key: NSString); message 'setPrimitiveValue:forKey:';
    function committedValuesForKeys (keys: nullable NSString *ProtocolPtr): NSDictionary; message 'committedValuesForKeys:';
    function changedValues: NSDictionary; message 'changedValues';
    function changedValuesForCurrentEvent                           ,ios(5.0)): NSDictionary; message 'changedValuesForCurrentEvent                           ,ios(5.0))'; { available in macosx(10.7 }
    function validateValue_forKey_error (value: id _Nullable * _Nonnull; key: NSString; error: NSErrorPtr): boolean; message 'validateValue:forKey:error:';
    function validateForDelete (error: NSErrorPtr): boolean; message 'validateForDelete:';
    function validateForInsert (error: NSErrorPtr): boolean; message 'validateForInsert:';
    function validateForUpdate (error: NSErrorPtr): boolean; message 'validateForUpdate:';
  end;
{$endif}

