{ Parsed from CoreData.framework NSMergePolicy.h }

{$ifdef TYPES}
type
  NSMergeConflictPtr = ^NSMergeConflict;
  NSConstraintConflictPtr = ^NSConstraintConflict;
  NSMergePolicyPtr = ^NSMergePolicy;
{$endif}

{$ifdef TYPES}
type
  NSMergePolicyType = NSUInteger;
  NSMergePolicyTypePtr = ^NSMergePolicyType;

const
  NSErrorMergePolicyType = $00;
  NSMergeByPropertyStoreTrumpMergePolicyType = $01;
  NSMergeByPropertyObjectTrumpMergePolicyType = $02;
  NSOverwriteMergePolicyType = $03;
  NSRollbackMergePolicyType = $04;
{$endif}

{$ifdef CLASSES}

type
  NSMergeConflict = objcclass external (NSObject)
  private
  public
    function sourceObject: NSManagedObject; message 'sourceObject';
    function objectSnapshot: NSDictionary; message 'objectSnapshot';
    function cachedSnapshot: NSDictionary; message 'cachedSnapshot';
    function persistedSnapshot: NSDictionary; message 'persistedSnapshot';
    function newVersionNumber: NSUInteger; message 'newVersionNumber';
    function oldVersionNumber: NSUInteger; message 'oldVersionNumber';
    function initWithSource_newVersion_oldVersion_cachedSnapshot_persistedSnapshot (srcObject: NSManagedObject; newvers: NSUInteger; oldvers: NSUInteger; cachesnap: nullable NSDictionaryPtr; persnap: nullable NSDictionaryPtr): instancetype; message 'initWithSource:newVersion:oldVersion:cachedSnapshot:persistedSnapshot:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
  end;

type
  NSConstraintConflict = objcclass external (NSObject)
  private
  public
    function constraint: NSString *ProtocolPtr; message 'constraint';
    function constraintValues: NSDictionary; message 'constraintValues';
    function databaseObject: NSManagedObject; message 'databaseObject';
    function databaseSnapshot: NSDictionary; message 'databaseSnapshot';
    function conflictingObjects: NSManagedObject *ProtocolPtr; message 'conflictingObjects';
    function conflictingSnapshots: NSDictionary *ProtocolPtr; message 'conflictingSnapshots';
    function initWithConstraint_databaseObject_databaseSnapshot_conflictingObjects_conflictingSnapshots (contraint: NSString *ProtocolPtr; databaseObject_: nullable NSManagedObjectPtr; databaseSnapshot_: nullable NSDictionaryPtr; conflictingObjects_: NSManagedObject *ProtocolPtr; conflictingSnapshots_: NSArray): instancetype; message 'initWithConstraint:databaseObject:databaseSnapshot:conflictingObjects:conflictingSnapshots:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMergePolicy = objcclass external (NSObject)
  private
  public
    function errorMergePolicy: NSMergePolicy; message 'errorMergePolicy';
    function ios(10.0),tvos(10.0),watchos(3.0)): NSMergePolicy; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function rollbackMergePolicy: NSMergePolicy; message 'rollbackMergePolicy';
    function ios(10.0),tvos(10.0),watchos(3.0))_: NSMergePolicy; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function overwriteMergePolicy: NSMergePolicy; message 'overwriteMergePolicy';
    function ios(10.0),tvos(10.0),watchos(3.0))__: NSMergePolicy; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function mergeByPropertyObjectTrumpMergePolicy: NSMergePolicy; message 'mergeByPropertyObjectTrumpMergePolicy';
    function ios(10.0),tvos(10.0),watchos(3.0))___: NSMergePolicy; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function mergeByPropertyStoreTrumpMergePolicy: NSMergePolicy; message 'mergeByPropertyStoreTrumpMergePolicy';
    function ios(10.0),tvos(10.0),watchos(3.0))____: NSMergePolicy; message 'ios(10.0),tvos(10.0),watchos(3.0))';
    function mergeType: NSMergePolicyType; message 'mergeType';
    function initWithMergeType (ty: NSMergePolicyType): id; message 'initWithMergeType:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function resolveConflicts_error (list: NSArray; error: NSErrorPtr): boolean; message 'resolveConflicts:error:';
    function resolveOptimisticLockingVersionConflicts_error (list: NSMergeConflict *ProtocolPtr; error: NSErrorPtr): boolean; message 'resolveOptimisticLockingVersionConflicts:error:'; { available in macosx(10.11 }
    function resolveConstraintConflicts_error (list: NSConstraintConflict *ProtocolPtr; error: NSErrorPtr): boolean; message 'resolveConstraintConflicts:error:'; { available in macosx(10.11 }
  end;
{$endif}

