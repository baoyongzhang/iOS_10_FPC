{ Parsed from CoreGraphics.framework CGColor.h }

{$ifndef CGCOLOR_H_}
{$ifdef TYPES}
type
  CGColorRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGColorCreate(space: CGColorSpaceRef cg_nullable; components: CGFloat* cg_nullable): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateGenericGray(gray: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateGenericRGB(red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateGenericCMYK(cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorGetConstantColor(colorName: CFStringRef cg_nullable): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateWithPattern(space: CGColorSpaceRef cg_nullable; pattern: CGPatternRef cg_nullable; components: CGFloat* cg_nullable): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateCopy(color: CGColorRef cg_nullable): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateCopyWithAlpha(color: CGColorRef cg_nullable; alpha: CGFloat): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateCopyByMatchingToColorSpace(CGColorSpaceRef: cg_nullable; intent: CGColorRenderingIntent; color: CGColorRef cg_nullable; options: __nullable CFDictionaryRef): CGColorRef __nullable; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
function CGColorRetain(color: CGColorRef cg_nullable): CGColorRef cg_nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGColorRelease(color: CGColorRef cg_nullable); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorEqualToColor(color1: CGColorRef cg_nullable; color2: CGColorRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetNumberOfComponents(color: CGColorRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetComponents(color: CGColorRef cg_nullable): CGFloat * __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetAlpha(color: CGColorRef cg_nullable): CGFloat; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetColorSpace(color: CGColorRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetPattern(color: CGColorRef cg_nullable): CGPatternRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGColorWhite: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorBlack: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorClear: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
{$endif}

{$endif}
