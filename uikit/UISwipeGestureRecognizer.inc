{ Parsed from UIKit.framework UISwipeGestureRecognizer.h }

{$ifdef TYPES}
type
  UISwipeGestureRecognizerPtr = ^UISwipeGestureRecognizer;
{$endif}

{$ifdef TYPES}
type
  UISwipeGestureRecognizerDirection = NSUInteger;
  UISwipeGestureRecognizerDirectionPtr = ^UISwipeGestureRecognizerDirection;

const
  UISwipeGestureRecognizerDirectionRight = 1 shl 0;
  UISwipeGestureRecognizerDirectionLeft = 1 shl 1;
  UISwipeGestureRecognizerDirectionUp = 1 shl 2;
  UISwipeGestureRecognizerDirectionDown = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  UISwipeGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure set__TVOS_PROHIBITED(newValue: NSUInteger numberOfTouchesRequired); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUInteger numberOfTouchesRequired; message 'TVOS_PROHIBITED';
    procedure setDirection(newValue: UISwipeGestureRecognizerDirection); message 'setDirection:';
    function direction: UISwipeGestureRecognizerDirection; message 'direction';
  end;
{$endif}

