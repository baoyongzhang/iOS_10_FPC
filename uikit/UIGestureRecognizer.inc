{ Parsed from UIKit.framework UIGestureRecognizer.h }

{ Types from UIGestureRecognizer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIGestureRecognizerPtr = ^UIGestureRecognizer;
  UIGestureRecognizerDelegateProtocolPtr = ^UIGestureRecognizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIGestureRecognizerState = NSInteger;
  UIGestureRecognizerStatePtr = ^UIGestureRecognizerState;

const
  UIGestureRecognizerStatePossible = 0;
  UIGestureRecognizerStateBegan = 1;
  UIGestureRecognizerStateChanged = 2;
  UIGestureRecognizerStateEnded = 3;
  UIGestureRecognizerStateCancelled = 4;
  UIGestureRecognizerStateFailed = 5;
  UIGestureRecognizerStateRecognized = UIGestureRecognizerStateEnded;
{$endif}

{$ifdef CLASSES}

type
  UIGestureRecognizer = objcclass external (NSObject)
  public
    function initWithTarget_action (target: nullable id; action: nullable SEL): instancetype; message 'initWithTarget:action:'; { NS_DESIGNATED_INITIALIZER }
    procedure addTarget_action (target: id; action: SEL); message 'addTarget:action:';
    procedure removeTarget_action (target: nullable id; action: nullable SEL); message 'removeTarget:action:';
    function state: UIGestureRecognizerState; message 'state';
    procedure setDelegate(newValue: UIGestureRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: UIGestureRecognizerDelegateProtocol; message 'delegate';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function view: UIView; message 'view';
    procedure setCancelsTouchesInView(newValue: boolean); message 'setCancelsTouchesInView:';
    function cancelsTouchesInView: boolean; message 'cancelsTouchesInView';
    procedure setDelaysTouchesBegan(newValue: boolean); message 'setDelaysTouchesBegan:';
    function delaysTouchesBegan: boolean; message 'delaysTouchesBegan';
    procedure setDelaysTouchesEnded(newValue: boolean); message 'setDelaysTouchesEnded:';
    function delaysTouchesEnded: boolean; message 'delaysTouchesEnded';
    procedure setAllowedTouchTypes(newValue: NSNumber *ProtocolPtr); message 'setAllowedTouchTypes:';
    function allowedTouchTypes: NSNumber *ProtocolPtr; message 'allowedTouchTypes';
    procedure setAllowedPressTypes(newValue: NSNumber *ProtocolPtr); message 'setAllowedPressTypes:';
    function allowedPressTypes: NSNumber *ProtocolPtr; message 'allowedPressTypes';
    procedure setRequiresExclusiveTouchType(newValue: boolean); message 'setRequiresExclusiveTouchType:';
    function requiresExclusiveTouchType: boolean; message 'requiresExclusiveTouchType';
    procedure requireGestureRecognizerToFail (otherGestureRecognizer: UIGestureRecognizer); message 'requireGestureRecognizerToFail:';
    function locationInView (view_: nullable UIViewPtr): CGPoint; message 'locationInView:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function numberOfTouches: NSUInteger; message 'numberOfTouches';
    {$else}
    function numberOfTouches: NSUInteger; message 'numberOfTouches';
    {$endif}
    function locationOfTouch_inView (touchIndex: NSUInteger; view_: nullable UIViewPtr): CGPoint; message 'locationOfTouch:inView:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIGestureRecognizerDelegateProtocol = objcprotocol external name 'UIGestureRecognizerDelegate' (NSObjectProtocol)
  optional
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:';
    function gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:';
    function gestureRecognizer_shouldRequireFailureOfGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRequireFailureOfGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldReceiveTouch (gestureRecognizer: UIGestureRecognizer; touch: UITouch): boolean; message 'gestureRecognizer:shouldReceiveTouch:';
    function gestureRecognizer_shouldReceivePress (gestureRecognizer: UIGestureRecognizer; press: UIPress): boolean; message 'gestureRecognizer:shouldReceivePress:';
  end;
{$endif}

