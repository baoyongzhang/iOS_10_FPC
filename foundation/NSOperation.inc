{ Parsed from Foundation.framework NSOperation.h }

{ Types from NSOperation }
{$ifdef TYPES}

type
  NSOperationQueuePriority = NSInteger;
type
  NSOperationQueuePriorityPtr = ^NSOperationQueuePriority;

const
  NSOperationQueuePriorityVeryLow = -8;
  NSOperationQueuePriorityLow = -4;
  NSOperationQueuePriorityNormal = 0;
  NSOperationQueuePriorityHigh = 4;
  NSOperationQueuePriorityVeryHigh = 8;
{$endif}


{ Types from NSOperationQueue }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSOperationPtr = ^NSOperation;
  NSBlockOperationPtr = ^NSBlockOperation;
  NSInvocationOperationPtr = ^NSInvocationOperation;
  NSOperationQueuePtr = ^NSOperationQueue;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSOperation = objcclass external (NSObject)
  private
    _private: id;
    _private1: cint32;
    {$if defined(__LP64__)}
    _private1b: cint32;
    {$endif}
  public
    procedure start; message 'start';
    procedure main; message 'main';
    function isCancelled: boolean; message 'isCancelled';
    procedure cancel; message 'cancel';
    function isExecuting: boolean; message 'isExecuting';
    function isFinished: boolean; message 'isFinished';
    function isConcurrent: boolean; message 'isConcurrent';
    function isAsynchronous: boolean; message 'isAsynchronous';
    function isReady: boolean; message 'isReady';
    procedure addDependency (op: NSOperation); message 'addDependency:';
    procedure removeDependency (op: NSOperation); message 'removeDependency:';
    function dependencies: NSOperation *ProtocolPtr; message 'dependencies';
    procedure setQueuePriority(newValue: NSOperationQueuePriority); message 'setQueuePriority:';
    function queuePriority: NSOperationQueuePriority; message 'queuePriority';
    procedure setCompletionBlock(newValue: OpaqueCBlock); message 'setCompletionBlock:';
    function completionBlock: OpaqueCBlock; message 'completionBlock';
    procedure waitUntilFinished; message 'waitUntilFinished'; { available in 10_6, 4_0 }
    procedure setThreadPriority(newValue: double); message 'setThreadPriority:';
    function threadPriority: double; message 'threadPriority';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:';
    function qualityOfService: NSQualityOfService; message 'qualityOfService';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  NSBlockOperation = objcclass external (NSOperation)
  private
    _private2: id;
    _reserved2: pointer;
  public
    class function blockOperationWithBlock (block: OpaqueCBlock): instancetype; message 'blockOperationWithBlock:';
    procedure addExecutionBlock (block: OpaqueCBlock); message 'addExecutionBlock:';
    function executionBlocks: void (^)(void)ProtocolPtr; message 'executionBlocks';
  end;

type
  NSInvocationOperation = objcclass external (NSOperation)
  private
    _inv: id;
    _exception: id;
    _reserved2: pointer;
  public
    function initWithTarget_selector_object (target: id; sel_: SEL; arg: nullable id): nullable instancetype; message 'initWithTarget:selector:object:';
    function initWithInvocation (inv: NSInvocation): instancetype; message 'initWithInvocation:'; { NS_DESIGNATED_INITIALIZER }
    function invocation: NSInvocation; message 'invocation';
    function result_: id; message 'result';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSInvocationOperationVoidResultException: NSExceptionName { available in 10_5, 2_0 }; cvar; external;
  NSInvocationOperationCancelledException: NSExceptionName { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSOperationQueue = objcclass external (NSObject)
  private
    _private: id;
    _reserved: pointer;
  public
    procedure addOperation (op: NSOperation); message 'addOperation:';
    procedure addOperations_waitUntilFinished (ops: NSOperation *ProtocolPtr; wait: boolean); message 'addOperations:waitUntilFinished:'; { available in 10_6, 4_0 }
    procedure addOperationWithBlock (block: OpaqueCBlock); message 'addOperationWithBlock:'; { available in 10_6, 4_0 }
    function operations: __kindof NSOperation *ProtocolPtr; message 'operations';
    function operationCount: NSUInteger; message 'operationCount';
    procedure setMaxConcurrentOperationCount(newValue: NSInteger); message 'setMaxConcurrentOperationCount:';
    function maxConcurrentOperationCount: NSInteger; message 'maxConcurrentOperationCount';
    procedure setSuspended(newValue: boolean); message 'setSuspended:';
    function isSuspended: boolean; message 'isSuspended';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:';
    function qualityOfService: NSQualityOfService; message 'qualityOfService';
    procedure setUnderlyingQueue(newValue: dispatch_queue_t); message 'setUnderlyingQueue:';
    function underlyingQueue: dispatch_queue_t; message 'underlyingQueue';
    procedure cancelAllOperations; message 'cancelAllOperations';
    procedure waitUntilAllOperationsAreFinished; message 'waitUntilAllOperationsAreFinished';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function currentQueue: NSOperationQueue; message 'currentQueue';
    function mainQueue: NSOperationQueue; message 'mainQueue';
    {$endif}
  end;
{$endif}

