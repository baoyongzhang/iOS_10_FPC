{ Parsed from Foundation.framework NSThread.h }

{ Types from NSThread }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  NSThreadPtr = ^NSThread;
{$endif}

{$ifdef CLASSES}

type
  NSThread = objcclass external (NSObject)
  private
    _private: id;
    _bytes:array[0..43] of cuint8;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function currentThread: NSThread; message 'currentThread';
    {$endif}
    class procedure detachNewThreadWithBlock (block: OpaqueCBlock); message 'detachNewThreadWithBlock:'; { available in macosx(10.12 }
    class procedure detachNewThreadSelector_toTarget_withObject (selector: SEL; target: id; argument: nullable id); message 'detachNewThreadSelector:toTarget:withObject:';
    class function isMultiThreaded: boolean; message 'isMultiThreaded';
    function threadDictionary: NSMutableDictionary; message 'threadDictionary';
    class procedure sleepUntilDate (date: NSDate); message 'sleepUntilDate:';
    class procedure sleepForTimeInterval (ti: NSTimeInterval); message 'sleepForTimeInterval:';
    class procedure exit; message 'exit';
    class function classThreadPriority: double; message 'threadPriority';
    class function setThreadPriority (p: double): boolean; message 'setThreadPriority:';
    procedure setThreadPriority_(newValue: double); message 'setThreadPriority:';
    function threadPriority: double; message 'threadPriority';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:';
    function qualityOfService: NSQualityOfService; message 'qualityOfService';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function callStackReturnAddresses: NSNumber *ProtocolPtr; message 'callStackReturnAddresses';
    function callStackSymbols: NSString *ProtocolPtr; message 'callStackSymbols';
    {$endif}
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setStackSize(newValue: NSUInteger); message 'setStackSize:';
    function stackSize: NSUInteger; message 'stackSize';
    function isMainThread: boolean; message 'isMainThread';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function isMainThread_: boolean; message 'isMainThread';
    function mainThread: NSThread; message 'mainThread';
    {$endif}
    function init: instancetype; message 'init'; { available in 10_5, 2_0 }
    function initWithTarget_selector_object (target: id; selector: SEL; argument: nullable id): instancetype; message 'initWithTarget:selector:object:'; { available in 10_5, 2_0 }
    function initWithBlock (block: OpaqueCBlock): instancetype; message 'initWithBlock:'; { available in macosx(10.12 }
    function isExecuting: boolean; message 'isExecuting';
    function isFinished: boolean; message 'isFinished';
    function isCancelled: boolean; message 'isCancelled';
    procedure cancel; message 'cancel'; { available in 10_5, 2_0 }
    procedure start; message 'start'; { available in 10_5, 2_0 }
    procedure main; message 'main'; { available in 10_5, 2_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWillBecomeMultiThreadedNotification: NSNotificationName; cvar; external;
  NSDidBecomeSingleThreadedNotification: NSNotificationName; cvar; external;
  NSThreadWillExitNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSThreadPerformAdditions = objccategory external (NSObject)
    procedure performSelectorOnMainThread_withObject_waitUntilDone_modes (aSelector: SEL; arg: nullable id; wait: boolean; array_: nullable NSString *ProtocolPtr); message 'performSelectorOnMainThread:withObject:waitUntilDone:modes:';
    procedure performSelectorOnMainThread_withObject_waitUntilDone (aSelector: SEL; arg: nullable id; wait: boolean); message 'performSelectorOnMainThread:withObject:waitUntilDone:';
    procedure performSelector_onThread_withObject_waitUntilDone_modes (aSelector: SEL; thr: NSThread; arg: nullable id; wait: boolean; array_: nullable NSString *ProtocolPtr); message 'performSelector:onThread:withObject:waitUntilDone:modes:'; { available in 10_5, 2_0 }
    procedure performSelector_onThread_withObject_waitUntilDone (aSelector: SEL; thr: NSThread; arg: nullable id; wait: boolean); message 'performSelector:onThread:withObject:waitUntilDone:'; { available in 10_5, 2_0 }
    procedure performSelectorInBackground_withObject (aSelector: SEL; arg: nullable id); message 'performSelectorInBackground:withObject:'; { available in 10_5, 2_0 }
  end;
{$endif}

