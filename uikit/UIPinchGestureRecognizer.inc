{ Parsed from UIKit.framework UIPinchGestureRecognizer.h }

{$ifdef TYPES}
type
  UIPinchGestureRecognizerPtr = ^UIPinchGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIPinchGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure setScale(newValue: CGFloat); message 'setScale:';
    function scale: CGFloat; message 'scale';
    function velocity: CGFloat; message 'velocity';
  end;
{$endif}

