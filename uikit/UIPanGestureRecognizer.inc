{ Parsed from UIKit.framework UIPanGestureRecognizer.h }

{$ifdef TYPES}
type
  UIPanGestureRecognizerPtr = ^UIPanGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIPanGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure set__TVOS_PROHIBITED(newValue: NSUInteger minimumNumberOfTouches); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUInteger minimumNumberOfTouches; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: NSUInteger maximumNumberOfTouches); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUInteger maximumNumberOfTouches; message 'TVOS_PROHIBITED';
    function translationInView (view_: nullable UIViewPtr): CGPoint; message 'translationInView:';
    procedure setTranslation_inView (translation: CGPoint; view_: nullable UIViewPtr); message 'setTranslation:inView:';
    function velocityInView (view_: nullable UIViewPtr): CGPoint; message 'velocityInView:';
  end;
{$endif}

