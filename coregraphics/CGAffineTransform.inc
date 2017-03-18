{ Parsed from CoreGraphics.framework CGAffineTransform.h }

{$ifndef CGAFFINETRANSFORM_H_}
{$ifdef TYPES}
type
  CGAffineTransform = record
    a, b, c, d: CGFloat;
    tx, ty: CGFloat;
  end;
type
  CGAffineTransformPtr = ^CGAffineTransform;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CGAffineTransformIdentity: CGAffineTransform { available starting in __MAC_10_0, __IPHONE_2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGAffineTransformMake(a: CGFloat; b: CGFloat; c: CGFloat; d: CGFloat; tx: CGFloat; ty: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformMakeTranslation(tx: CGFloat; ty: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformMakeScale(sx: CGFloat; sy: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformMakeRotation(angle: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformIsIdentity(t: CGAffineTransform): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGAffineTransformTranslate(t: CGAffineTransform; tx: CGFloat; ty: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformScale(t: CGAffineTransform; sx: CGFloat; sy: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformRotate(t: CGAffineTransform; angle: CGFloat): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformInvert(t: CGAffineTransform): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformConcat(t1: CGAffineTransform; t2: CGAffineTransform): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGAffineTransformEqualToTransform(t1: CGAffineTransform; t2: CGAffineTransform): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPointApplyAffineTransform(point: CGPoint; t: CGAffineTransform): CGPoint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGSizeApplyAffineTransform(size: CGSize; t: CGAffineTransform): CGSize; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectApplyAffineTransform(rect: CGRect; t: CGAffineTransform): CGRect; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
