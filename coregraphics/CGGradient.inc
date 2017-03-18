{ Parsed from CoreGraphics.framework CGGradient.h }

{$ifndef CGGRADIENT_H_}
{$ifdef TYPES}
type
  CGGradientRef = OpaqueType;
  CGGradientDrawingOptions = cuint32;
  CGGradientDrawingOptionsPtr = ^CGGradientDrawingOptions;

const
  kCGGradientDrawsBeforeStartLocation = 1 shl 0;
  kCGGradientDrawsAfterEndLocation = 1 shl 1;
{$endif}

{$ifdef FUNCTIONS}
function CGGradientGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientCreateWithColorComponents(space: CGColorSpaceRef cg_nullable; components: CGFloat* cg_nullable; locations: CGFloat* __nullable; count: size_t): CGGradientRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientCreateWithColors(space: CGColorSpaceRef __nullable; colors: CFArrayRef cg_nullable; locations: CGFloat* __nullable): CGGradientRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientRetain(gradient: CGGradientRef cg_nullable): CGGradientRef cg_nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGGradientRelease(gradient: CGGradientRef cg_nullable); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$endif}
