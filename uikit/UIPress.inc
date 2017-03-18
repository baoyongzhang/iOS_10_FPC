{ Parsed from UIKit.framework UIPress.h }

{$ifdef TYPES}
type
  UIPressPtr = ^UIPress;
{$endif}

{$ifdef TYPES}
const
  UIPressPhaseBegan = 0;
  UIPressPhaseChanged = 1;
  UIPressPhaseStationary = 2;
  UIPressPhaseEnded = 3;
  UIPressPhaseCancelled = 4;

type
  UIPressType = NSInteger;
  UIPressTypePtr = ^UIPressType;

const
  UIPressTypeUpArrow = 0;
  UIPressTypeDownArrow = 1;
  UIPressTypeLeftArrow = 2;
  UIPressTypeRightArrow = 3;
  UIPressTypeSelect = 4;
  UIPressTypeMenu = 5;
  UIPressTypePlayPause = 6;
{$endif}

{$ifdef CLASSES}

type
  UIPress = objcclass external (NSObject)
  public
    function timestamp_: NSTimeInterval; message 'timestamp';
    function phase: UIPressPhase; message 'phase';
    function type_: UIPressType; message 'type';
    function window: UIWindow; message 'window';
    function responder: UIResponder; message 'responder';
    function gestureRecognizers: UIGestureRecognizer *ProtocolPtr; message 'gestureRecognizers';
    function force: CGFloat; message 'force';
  end;
{$endif}

