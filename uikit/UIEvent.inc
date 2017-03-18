{ Parsed from UIKit.framework UIEvent.h }

{ Types from UIEvent }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIEventPtr = ^UIEvent;
{$endif}

{$ifdef TYPES}
type
  UIEventType = NSInteger;
  UIEventTypePtr = ^UIEventType;

const
  UIEventTypeTouches = 0;
  UIEventTypeMotion = 1;
  UIEventTypeRemoteControl = 2;
  UIEventTypePresses = 3 { available in 9_0 };

type
  UIEventSubtype = NSInteger;
  UIEventSubtypePtr = ^UIEventSubtype;

const
  UIEventSubtypeNone = 0;
  UIEventSubtypeMotionShake = 1;
  UIEventSubtypeRemoteControlPlay = 100;
  UIEventSubtypeRemoteControlPause = 101;
  UIEventSubtypeRemoteControlStop = 102;
  UIEventSubtypeRemoteControlTogglePlayPause = 103;
  UIEventSubtypeRemoteControlNextTrack = 104;
  UIEventSubtypeRemoteControlPreviousTrack = 105;
  UIEventSubtypeRemoteControlBeginSeekingBackward = 106;
  UIEventSubtypeRemoteControlEndSeekingBackward = 107;
  UIEventSubtypeRemoteControlBeginSeekingForward = 108;
  UIEventSubtypeRemoteControlEndSeekingForward = 109;
{$endif}

{$ifdef CLASSES}

type
  UIEvent = objcclass external (NSObject)
  public
    function type_: UIEventType; message 'type';
    function subtype: UIEventSubtype; message 'subtype';
    function timestamp_: NSTimeInterval; message 'timestamp';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function allTouches: UITouch *ProtocolPtr; message 'allTouches';
    {$else}
    function allTouches: nullable UITouch *ProtocolPtr; message 'allTouches';
    {$endif}
    function touchesForWindow (window: UIWindow): nullable UITouch *ProtocolPtr; message 'touchesForWindow:';
    function touchesForView (view: UIView): nullable UITouch *ProtocolPtr; message 'touchesForView:';
    function touchesForGestureRecognizer (gesture: UIGestureRecognizer): nullable UITouch *ProtocolPtr; message 'touchesForGestureRecognizer:'; { available in 3_2 }
    function coalescedTouchesForTouch (touch: UITouch): nullable UITouch *ProtocolPtr; message 'coalescedTouchesForTouch:'; { available in 9_0 }
    function predictedTouchesForTouch (touch: UITouch): nullable UITouch *ProtocolPtr; message 'predictedTouchesForTouch:'; { available in 9_0 }
  end;
{$endif}

