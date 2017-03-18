{ Parsed from CoreData.framework NSPersistentStoreResult.h }

{$ifdef TYPES}
type
  NSPersistentStoreResultPtr = ^NSPersistentStoreResult;
  NSPersistentStoreAsynchronousResultPtr = ^NSPersistentStoreAsynchronousResult;
  NSAsynchronousFetchResultPtr = ^NSAsynchronousFetchResult;
  NSBatchUpdateResultPtr = ^NSBatchUpdateResult;
  NSBatchDeleteResultPtr = ^NSBatchDeleteResult;
{$endif}

{$ifdef TYPES}
type
  NSBatchUpdateRequestResultType = NSUInteger;
  NSBatchUpdateRequestResultTypePtr = ^NSBatchUpdateRequestResultType;

const
  NSStatusOnlyResultType = $0;
  NSUpdatedObjectIDsResultType = $1;
  NSUpdatedObjectsCountResultType = $2;

type
  NSBatchDeleteRequestResultType = NSUInteger;
  NSBatchDeleteRequestResultTypePtr = ^NSBatchDeleteRequestResultType;

const
  NSBatchDeleteResultTypeStatusOnly = $0;
  NSBatchDeleteResultTypeObjectIDs = $1;
  NSBatchDeleteResultTypeCount = $2;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreResult = objcclass external (NSObject)
  end;

type
  NSPersistentStoreAsynchronousResult = objcclass external (NSPersistentStoreResult)
  private
    {$if (not defined(__OBJC2__))}
    _requestProgress: NSProgress;
    _requestError: NSError;
    _requestContext: NSManagedObjectContext;
    _requestCompletionBlock: id;
    _flags: cint32;
    {$endif}
  public
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function operationError: NSError; message 'operationError';
    function progress: NSProgress; message 'progress';
    procedure cancel; message 'cancel';
  end;

type
  NSAsynchronousFetchResult = objcclass external (NSObject, ResultType:id<NSFetchRequestResultProtocol)
  private
    {$if (not defined(__OBJC2__))}
    _fetchRequest: NSAsynchronousFetchRequest;
    _finalResult: NSArray;
    _intermediateResultCallback: id;
    {$endif}
  public
    function fetchRequest: ResultTypeProtocolPtr; message 'fetchRequest';
    function finalResult: ResultTypeProtocolPtr; message 'finalResult';
  end;

type
  NSBatchUpdateResult = objcclass external (NSPersistentStoreResult)
  private
    {$if (not defined(__OBJC2__))}
    _aggregatedResult: id;
    _resultType: NSBatchUpdateRequestResultType;
    {$endif}
  public
    function result_: id; message 'result';
    function resultType: NSBatchUpdateRequestResultType; message 'resultType';
  end;

type
  NSBatchDeleteResult = objcclass external (NSPersistentStoreResult)
  private
    {$if (not defined(__OBJC2__))}
    _aggregatedResult: id;
    _resultType: NSBatchDeleteRequestResultType;
    {$endif}
  public
    function result_: id; message 'result';
    function resultType: NSBatchDeleteRequestResultType; message 'resultType';
  end;
{$endif}

