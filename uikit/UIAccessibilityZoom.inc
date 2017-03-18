{ Parsed from UIKit.framework UIAccessibilityZoom.h }
{$ifdef TYPES}
type
  UIAccessibilityZoomType = NSInteger;
  UIAccessibilityZoomTypePtr = ^UIAccessibilityZoomType;

const
  UIAccessibilityZoomTypeInsertionPoint = 0;
{$endif}

{$ifdef FUNCTIONS}
procedure UIAccessibilityZoomFocusChanged(type_: UIAccessibilityZoomType; frame: CGRect; view: UIView* __nonnull); cdecl; external; { available in 5_0 }
procedure UIAccessibilityRegisterGestureConflictWithZoom; cdecl; external; { available in 5_0 }
{$endif}

