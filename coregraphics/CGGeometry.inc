{ Parsed from CoreGraphics.framework CGGeometry.h }

{$ifndef CGGEOMETRY_H_}
{$ifdef TYPES}
type
  CGPoint = record
    x: CGFloat;
    y: CGFloat;
  end;
type
  CGPointPtr = ^CGPoint;
type
  CGSize = record
    width: CGFloat;
    height: CGFloat;
  end;
type
  CGSizePtr = ^CGSize;

const
  CGVECTOR_DEFINED = 1;

type
  CGVector = record
    dx: CGFloat;
    dy: CGFloat;
  end;
type
  CGVectorPtr = ^CGVector;
type
  CGRect = record
    origin: CGPoint;
    size: CGSize;
  end;
type
  CGRectPtr = ^CGRect;

type
  CGRectEdge = cuint32;
  CGRectEdgePtr = ^CGRectEdge;

const
  CGRectMinXEdge = 0;
  CGRectMinYEdge = 1;
  CGRectMaxXEdge = 2;
  CGRectMaxYEdge = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CGPointZero: CGPoint { available starting in __MAC_10_0, __IPHONE_2_0 }; cvar; external;
  CGSizeZero: CGSize { available starting in __MAC_10_0, __IPHONE_2_0 }; cvar; external;
  CGRectZero: CGRect { available starting in __MAC_10_0, __IPHONE_2_0 }; cvar; external;
  CGRectNull: CGRect { available starting in __MAC_10_0, __IPHONE_2_0 }; cvar; external;
  CGRectInfinite: CGRect { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGRectGetMinX(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetMidX(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetMaxX(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetMinY(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetMidY(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetMaxY(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetWidth(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectGetHeight(rect: CGRect): CGFloat; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPointEqualToPoint(point1: CGPoint; point2: CGPoint): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGSizeEqualToSize(size1: CGSize; size2: CGSize): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectEqualToRect(rect1: CGRect; rect2: CGRect): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectStandardize(rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIsEmpty(rect: CGRect): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIsNull(rect: CGRect): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIsInfinite(rect: CGRect): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGRectInset(rect: CGRect; dx: CGFloat; dy: CGFloat): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIntegral(rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectUnion(r1: CGRect; r2: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIntersection(r1: CGRect; r2: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectOffset(rect: CGRect; dx: CGFloat; dy: CGFloat): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGRectDivide(rect: CGRect; var slice: CGRect; var remainder: CGRect; amount: CGFloat; edge: CGRectEdge); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectContainsPoint(rect: CGRect; point: CGPoint): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectContainsRect(rect1: CGRect; rect2: CGRect): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGRectIntersectsRect(rect1: CGRect; rect2: CGRect): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPointCreateDictionaryRepresentation(point: CGPoint): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGPointMakeWithDictionaryRepresentation(dict: CFDictionaryRef cg_nullable; var point: CGPoint* cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGSizeCreateDictionaryRepresentation(size: CGSize): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGSizeMakeWithDictionaryRepresentation(dict: CFDictionaryRef cg_nullable; var size: CGSize* cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGRectCreateDictionaryRepresentation(param1: CGRect): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGRectMakeWithDictionaryRepresentation(dict: CFDictionaryRef cg_nullable; var rect: CGRect* cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$endif}
