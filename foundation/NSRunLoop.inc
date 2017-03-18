{ Parsed from Foundation.framework NSRunLoop.h }

{ Types from NSRunLoop }
{$ifdef TYPES}

{$endif}


{ Types from NSRunLoopConveniences }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSRunLoopPtr = ^NSRunLoop;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefaultRunLoopMode: NSRunLoopMode; cvar; external;
  NSRunLoopCommonModes: NSRunLoopMode { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSRunLoop = objcclass external (NSObject)
  private
    _rl: id;
    _dperf: id;
    _perft: id;
    _info: id;
    _ports: id;
    _reserved:array[0..5] of pointer;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function currentRunLoop: NSRunLoop; message 'currentRunLoop';
    function mainRunLoop: NSRunLoop; message 'mainRunLoop';
    {$endif}
    function currentMode: NSRunLoopMode; message 'currentMode';
    function getCFRunLoop: CFRunLoopRef; message 'getCFRunLoop'; { CF_RETURNS_NOT_RETAINED }
    procedure addTimer_forMode (timer: NSTimer; mode: NSRunLoopMode); message 'addTimer:forMode:';
    procedure addPort_forMode (aPort: NSPort; mode: NSRunLoopMode); message 'addPort:forMode:';
    procedure removePort_forMode (aPort: NSPort; mode: NSRunLoopMode); message 'removePort:forMode:';
    function limitDateForMode (mode: NSRunLoopMode): nullable NSDatePtr; message 'limitDateForMode:';
    procedure acceptInputForMode_beforeDate (mode: NSRunLoopMode; limitDate: NSDate); message 'acceptInputForMode:beforeDate:';
  end;


type
  NSRunLoopConveniences = objccategory external (NSRunLoop)
    procedure run; message 'run';
    procedure runUntilDate (limitDate: NSDate); message 'runUntilDate:';
    function runMode_beforeDate (mode: NSRunLoopMode; limitDate: NSDate): boolean; message 'runMode:beforeDate:';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure configureAsServer; message 'configureAsServer'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    {$endif}
    procedure performInModes_block (modes: NSRunLoopModeProtocolPtr; block: OpaqueCBlock); message 'performInModes:block:'; { available in macosx(10.12 }
    procedure performBlock (block: OpaqueCBlock); message 'performBlock:'; { available in macosx(10.12 }
  end;

type
  NSDelayedPerforming = objccategory external (NSObject)
    procedure performSelector_withObject_afterDelay_inModes (aSelector: SEL; anArgument: nullable id; delay: NSTimeInterval; modes: NSRunLoopModeProtocolPtr); message 'performSelector:withObject:afterDelay:inModes:';
    procedure performSelector_withObject_afterDelay (aSelector: SEL; anArgument: nullable id; delay: NSTimeInterval); message 'performSelector:withObject:afterDelay:';
    class procedure cancelPreviousPerformRequestsWithTarget_selector_object (aTarget: id; aSelector: SEL; anArgument: nullable id); message 'cancelPreviousPerformRequestsWithTarget:selector:object:';
    class procedure cancelPreviousPerformRequestsWithTarget (aTarget: id); message 'cancelPreviousPerformRequestsWithTarget:';
  end;

type
  NSOrderedPerform = objccategory external (NSRunLoop)
    procedure performSelector_target_argument_order_modes (aSelector: SEL; target: id; arg: nullable id; order: NSUInteger; modes: NSRunLoopModeProtocolPtr); message 'performSelector:target:argument:order:modes:';
    procedure cancelPerformSelector_target_argument (aSelector: SEL; target: id; arg: nullable id); message 'cancelPerformSelector:target:argument:';
    procedure cancelPerformSelectorsWithTarget (target: id); message 'cancelPerformSelectorsWithTarget:';
  end;
{$endif}

