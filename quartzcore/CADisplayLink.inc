{ Parsed from QuartzCore.framework CADisplayLink.h }

{$ifdef TYPES}
type
  CADisplayLinkPtr = ^CADisplayLink;
{$endif}

{$ifdef CLASSES}

type
  CADisplayLink = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function displayLinkWithTarget_selector (target: id; sel_: SEL): CADisplayLink; message 'displayLinkWithTarget:selector:';
    procedure addToRunLoop_forMode (runloop: NSRunLoop; mode: NSRunLoopMode); message 'addToRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (runloop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    procedure invalidate; message 'invalidate';
    function timestamp_: CFTimeInterval; message 'timestamp';
    function duration: CFTimeInterval; message 'duration';
    function targetTimestamp: CFTimeInterval; message 'targetTimestamp';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:';
    function frameInterval: NSInteger; message 'frameInterval';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
  end;
{$endif}

