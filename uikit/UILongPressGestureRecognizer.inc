{ Parsed from UIKit.framework UILongPressGestureRecognizer.h }

{$ifdef TYPES}
type
  UILongPressGestureRecognizerPtr = ^UILongPressGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UILongPressGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
    procedure set__TVOS_PROHIBITED(newValue: NSUInteger numberOfTouchesRequired); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUInteger numberOfTouchesRequired; message 'TVOS_PROHIBITED';
    procedure setMinimumPressDuration(newValue: CFTimeInterval); message 'setMinimumPressDuration:';
    function minimumPressDuration: CFTimeInterval; message 'minimumPressDuration';
    procedure setAllowableMovement(newValue: CGFloat); message 'setAllowableMovement:';
    function allowableMovement: CGFloat; message 'allowableMovement';
  end;
{$endif}

