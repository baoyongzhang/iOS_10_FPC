{ Parsed from CoreGraphics.framework CGPattern.h }

{$ifndef CGPATTERN_H_}
{$ifdef TYPES}
type
  CGPatternRef = OpaqueType;
  CGPatternTiling = cint32;
  CGPatternTilingPtr = ^CGPatternTiling;
  CGContextRef = OpaqueType;

const
  kCGPatternTilingNoDistortion = 0;
  kCGPatternTilingConstantSpacingMinimalDistortion = 1;
  kCGPatternTilingConstantSpacing = 2;

type
  CGPatternDrawPatternCallback = procedure (info: pointer; context: CGContextRef); cdecl;
  CGPatternReleaseInfoCallback = procedure (info: pointer); cdecl;

type
  CGPatternCallbacks = record
    version: cuint;
    drawPattern: CGPatternDrawPatternCallback;
    releaseInfo: CGPatternReleaseInfoCallback;
  end;
type
  CGPatternCallbacksPtr = ^CGPatternCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function CGPatternGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPatternCreate(info: pointer; bounds: CGRect; matrix: CGAffineTransform; xStep: CGFloat; yStep: CGFloat; tiling: CGPatternTiling; isColored: cbool; callbacks: CGPatternCallbacks): CGPatternRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPatternRetain(pattern: CGPatternRef): CGPatternRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPatternRelease(pattern: CGPatternRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
{$endif}

{$endif}
