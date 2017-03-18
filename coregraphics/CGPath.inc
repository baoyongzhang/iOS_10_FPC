{ Parsed from CoreGraphics.framework CGPath.h }

{$ifndef CGPATH_H_}
{$ifdef TYPES}
type
  CGMutablePathRef = OpaqueType;
  CGPathRef = OpaqueType;
  CGLineJoin = cint32;
  CGLineJoinPtr = ^CGLineJoin;

const
  kCGLineJoinMiter = 0;
  kCGLineJoinRound = 1;
  kCGLineJoinBevel = 2;

type
  CGLineCap = cint32;
  CGLineCapPtr = ^CGLineCap;

const
  kCGLineCapButt = 0;
  kCGLineCapRound = 1;
  kCGLineCapSquare = 2;
{$endif}

{$ifdef FUNCTIONS}
function CGPathGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateMutable: CGMutablePathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateCopy(path: CGPathRef cg_nullable): CGPathRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateCopyByTransformingPath(path: CGPathRef cg_nullable; transform: CGAffineTransform* __nullable): CGPathRef __nullable; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateMutableCopy(path: CGPathRef cg_nullable): CGMutablePathRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateMutableCopyByTransformingPath(path: CGPathRef cg_nullable; transform: CGAffineTransform* __nullable): CGMutablePathRef __nullable; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateWithRect(rect: CGRect; transform: CGAffineTransform* __nullable): CGPathRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_4_0 }
function CGPathCreateWithEllipseInRect(rect: CGRect; transform: CGAffineTransform* __nullable): CGPathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateWithRoundedRect(rect: CGRect; cornerWidth: CGFloat; cornerHeight: CGFloat; transform: CGAffineTransform* __nullable): CGPathRef; cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure CGPathAddRoundedRect(path: CGMutablePathRef cg_nullable; transform: CGAffineTransform* __nullable; rect: CGRect; cornerWidth: CGFloat; cornerHeight: CGFloat); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function CGPathCreateCopyByDashingPath(path: CGPathRef cg_nullable; transform: CGAffineTransform* __nullable; phase: CGFloat; lengths: CGFloat* __nullable; count: size_t): CGPathRef __nullable; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateCopyByStrokingPath(path: CGPathRef cg_nullable; transform: CGAffineTransform* __nullable; lineWidth: CGFloat; lineCap: CGLineCap; lineJoin: CGLineJoin; miterLimit: CGFloat): CGPathRef __nullable; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathRetain(path: CGPathRef cg_nullable): CGPathRef cg_nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathRelease(path: CGPathRef cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathEqualToPath(path1: CGPathRef cg_nullable; path2: CGPathRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathMoveToPoint(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddLineToPoint(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddQuadCurveToPoint(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; cpx: CGFloat; cpy: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddCurveToPoint(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; cp1x: CGFloat; cp1y: CGFloat; cp2x: CGFloat; cp2y: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathCloseSubpath(path: CGMutablePathRef cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddRect(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddRects(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; rects: CGRect* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddLines(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; points: CGPoint* __nullable; count: size_t); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddEllipseInRect(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPathAddRelativeArc(path: CGMutablePathRef cg_nullable; matrix: CGAffineTransform* __nullable; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; delta: CGFloat); cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
procedure CGPathAddArc(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddArcToPoint(path: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; x1: CGFloat; y1: CGFloat; x2: CGFloat; y2: CGFloat; radius: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddPath(path1: CGMutablePathRef cg_nullable; m: CGAffineTransform* __nullable; path2: CGPathRef cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathIsEmpty(path: CGPathRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathIsRect(path: CGPathRef cg_nullable; var rect: CGRect* __nullable): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetCurrentPoint(path: CGPathRef cg_nullable): CGPoint; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetBoundingBox(path: CGPathRef cg_nullable): CGRect; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetPathBoundingBox(path: CGPathRef cg_nullable): CGRect; cdecl; external; { available starting in __MAC_10_6, __IPHONE_4_0 }
function CGPathContainsPoint(path: CGPathRef cg_nullable; m: CGAffineTransform* __nullable; point: CGPoint; eoFill: cbool): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  CGPathElementType = cint32;
  CGPathElementTypePtr = ^CGPathElementType;

const
  kCGPathElementMoveToPoint = 0;
  kCGPathElementAddLineToPoint = 1;
  kCGPathElementAddQuadCurveToPoint = 2;
  kCGPathElementAddCurveToPoint = 3;
  kCGPathElementCloseSubpath = 4;

type
  CGPathElement = record
    type_: CGPathElementType;
    points: CGPointPtr;
  end;
type
  CGPathElementPtr = ^CGPathElement;

type
  CGPathApplierFunction = procedure (info: pointer; element: CGPathElementPtr); cdecl;
{$endif}

{$ifdef FUNCTIONS}
procedure CGPathApply(path: CGPathRef cg_nullable; info: void* __nullable; function_: CGPathApplierFunction cg_nullable); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
{$endif}

{$endif}
