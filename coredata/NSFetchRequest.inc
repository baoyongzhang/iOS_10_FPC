{ Parsed from CoreData.framework NSFetchRequest.h }

{$ifdef TYPES}
type
  NSFetchRequestPtr = ^NSFetchRequest;
  NSAsynchronousFetchRequestPtr = ^NSAsynchronousFetchRequest;
  NSFetchRequestResultProtocolPtr = ^NSFetchRequestResultProtocol;
{$endif}

{$ifdef TYPES}
type
  NSFetchRequestResultType = NSUInteger;
  NSFetchRequestResultTypePtr = ^NSFetchRequestResultType;

const
  NSManagedObjectResultType = $00;
  NSManagedObjectIDResultType = $01;
  NSDictionaryResultType = 0 { available in macosx(10.6 };
  ios = 1 { available in macosx(10.6 };
  3 = 2 { available in macosx(10.6 };
  0 = 3 { available in macosx(10.6 };
  0x02 = 4 { available in macosx(10.6 };
  NSCountResultType = 5 { available in macosx(10.6 };
  ios = 6 { available in macosx(10.6 };
  3 = 7 { available in macosx(10.6 };
  0 = 8 { available in macosx(10.6 };
  0x04 = 9 { available in macosx(10.6 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchRequestResultProtocol = objcprotocol external name 'NSFetchRequestResult' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  NSNumber_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSNumber)
  end;

type
  NSDictionary_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSDictionary)
  end;

type
  NSManagedObject_NSFetchedResultSupport = objccategory external name 'NSFetchedResultSupport' (NSManagedObject)
  end;

type
  NSFetchedResultSupport = objccategory external (NSManagedObjectID)
  end;


type
  NSFetchRequest = objcclass external (NSObject, __covariant ResultType:id<NSFetchRequestResultProtocol)
  public
    class function fetchRequestWithEntityName (entityName: NSString): instancetype; message 'fetchRequestWithEntityName:'; { available in macosx(10.7 }
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntityName (entityName: NSString): instancetype; message 'initWithEntityName:'; { available in macosx(10.7 }
    function execute (error: NSErrorPtr): nullable ResultTypeProtocolPtr; message 'execute:'; { available in macosx(10.12 }
    procedure setEntity(newValue: NSEntityDescription); message 'setEntity:';
    function entity: NSEntityDescription; message 'entity';
    function entityName: NSString; message 'entityName';
    function ios(4.0)): NSString; message 'ios(4.0))';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSSortDescriptor *ProtocolPtr); message 'setSortDescriptors:';
    function sortDescriptors: NSSortDescriptor *ProtocolPtr; message 'sortDescriptors';
    procedure setFetchLimit(newValue: NSUInteger); message 'setFetchLimit:';
    function fetchLimit: NSUInteger; message 'fetchLimit';
    procedure setAffectedStores(newValue: NSPersistentStore *ProtocolPtr); message 'setAffectedStores:';
    function affectedStores: NSPersistentStore *ProtocolPtr; message 'affectedStores';
    procedure setResultType(newValue: NSFetchRequestResultType); message 'setResultType:';
    function resultType: NSFetchRequestResultType; message 'resultType';
    procedure setIos(3.0))(newValue: NSFetchRequestResultType); message 'setIos(3.0)):';
    function ios(3.0)): NSFetchRequestResultType; message 'ios(3.0))';
    procedure setIncludesSubentities(newValue: boolean); message 'setIncludesSubentities:';
    function includesSubentities: boolean; message 'includesSubentities';
    procedure setIos(3.0))_(newValue: boolean); message 'setIos(3.0)):';
    function ios(3.0))_: boolean; message 'ios(3.0))';
    procedure setIncludesPropertyValues(newValue: boolean); message 'setIncludesPropertyValues:';
    function includesPropertyValues: boolean; message 'includesPropertyValues';
    procedure setIos(3.0))__(newValue: boolean); message 'setIos(3.0)):';
    function ios(3.0))__: boolean; message 'ios(3.0))';
    procedure setReturnsObjectsAsFaults(newValue: boolean); message 'setReturnsObjectsAsFaults:';
    function returnsObjectsAsFaults: boolean; message 'returnsObjectsAsFaults';
    procedure setIos(3.0))___(newValue: boolean); message 'setIos(3.0)):';
    function ios(3.0))___: boolean; message 'ios(3.0))';
    procedure setRelationshipKeyPathsForPrefetching(newValue: NSString *ProtocolPtr); message 'setRelationshipKeyPathsForPrefetching:';
    function relationshipKeyPathsForPrefetching: NSString *ProtocolPtr; message 'relationshipKeyPathsForPrefetching';
    procedure setIos(3.0))____(newValue: NSString *ProtocolPtr); message 'setIos(3.0)):';
    function ios(3.0))____: NSString *ProtocolPtr; message 'ios(3.0))';
    procedure setIncludesPendingChanges(newValue: boolean); message 'setIncludesPendingChanges:';
    function includesPendingChanges: boolean; message 'includesPendingChanges';
    procedure setIos(3.0))_____(newValue: boolean); message 'setIos(3.0)):';
    function ios(3.0))_____: boolean; message 'ios(3.0))';
    procedure setReturnsDistinctResults(newValue: boolean); message 'setReturnsDistinctResults:';
    function returnsDistinctResults: boolean; message 'returnsDistinctResults';
    procedure setIos(3.0))______(newValue: boolean); message 'setIos(3.0)):';
    function ios(3.0))______: boolean; message 'ios(3.0))';
    procedure setPropertiesToFetch(newValue: NSArray); message 'setPropertiesToFetch:';
    function propertiesToFetch: NSArray; message 'propertiesToFetch';
    procedure setIos(3.0))_______(newValue: NSArray); message 'setIos(3.0)):';
    function ios(3.0))_______: NSArray; message 'ios(3.0))';
    procedure setFetchOffset(newValue: NSUInteger); message 'setFetchOffset:';
    function fetchOffset: NSUInteger; message 'fetchOffset';
    procedure setIos(3.0))________(newValue: NSUInteger); message 'setIos(3.0)):';
    function ios(3.0))________: NSUInteger; message 'ios(3.0))';
    procedure setFetchBatchSize(newValue: NSUInteger); message 'setFetchBatchSize:';
    function fetchBatchSize: NSUInteger; message 'fetchBatchSize';
    procedure setIos(3.0))_________(newValue: NSUInteger); message 'setIos(3.0)):';
    function ios(3.0))_________: NSUInteger; message 'ios(3.0))';
    procedure setShouldRefreshRefetchedObjects(newValue: boolean); message 'setShouldRefreshRefetchedObjects:';
    function shouldRefreshRefetchedObjects: boolean; message 'shouldRefreshRefetchedObjects';
    procedure setIos(5.0))(newValue: boolean); message 'setIos(5.0)):';
    function ios(5.0)): boolean; message 'ios(5.0))';
    procedure setPropertiesToGroupBy(newValue: NSArray); message 'setPropertiesToGroupBy:';
    function propertiesToGroupBy: NSArray; message 'propertiesToGroupBy';
    procedure setIos(5.0))_(newValue: NSArray); message 'setIos(5.0)):';
    function ios(5.0))_: NSArray; message 'ios(5.0))';
    procedure setHavingPredicate(newValue: NSPredicate); message 'setHavingPredicate:';
    function havingPredicate: NSPredicate; message 'havingPredicate';
    procedure setIos(5.0))__(newValue: NSPredicate); message 'setIos(5.0)):';
    function ios(5.0))__: NSPredicate; message 'ios(5.0))';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreAsynchronousFetchResultCompletionBlock = OpaqueCBlock { available in macosx(10.10 };
{$endif}

{$ifdef CLASSES}

type
  NSAsynchronousFetchRequest = objcclass external (NSObject, ResultType:id<NSFetchRequestResultProtocol)
  public
    function fetchRequest: ResultTypeProtocolPtr; message 'fetchRequest';
    function completionBlock: NSPersistentStoreAsynchronousFetchResultCompletionBlock; message 'completionBlock';
    procedure setEstimatedResultCount(newValue: NSInteger); message 'setEstimatedResultCount:';
    function estimatedResultCount: NSInteger; message 'estimatedResultCount';
    function initWithFetchRequest_completionBlock (request: ResultTypeProtocolPtr; blk: OpaqueCBlock): instancetype; message 'initWithFetchRequest:completionBlock:';
  end;
{$endif}

