{ Parsed from UIKit.framework UIRotationGestureRecognizer.h }

{$ifdef TYPES}
type
  UIRotationGestureRecognizerPtr = ^UIRotationGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIRotationGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure setRotation(newValue: CGFloat); message 'setRotation:';
    function rotation: CGFloat; message 'rotation';
    function velocity: CGFloat; message 'velocity';
  end;
{$endif}

