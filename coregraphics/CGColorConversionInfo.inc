{ Parsed from CoreGraphics.framework CGColorConversionInfo.h }

{$ifndef CGCOLORCONVERSIONINFO_H_}
{$ifdef TYPES}
type
  CGColorConversionInfoRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGColorConversionInfoGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CGColorConversionInfoTransformType = cuint32;
  CGColorConversionInfoTransformTypePtr = ^CGColorConversionInfoTransformType;

const
  kCGColorConversionTransformFromSpace = 0;
  kCGColorConversionTransformToSpace = 1;
  kCGColorConversionTransformApplySpace = 2;
{$endif}

{$ifdef FUNCTIONS}
function CGColorConversionInfoCreate(src: cg_nullable CGColorSpaceRef; dst: cg_nullable CGColorSpaceRef): CGColorConversionInfoRef __nullable; cdecl; external; { available starting in __MAC_10_12, __IPHONE_10_0 }
function CGColorConversionInfoCreateFromList(options: CFDictionaryRef __nullable; CGColorSpaceRef: cg_nullable; param3: CGColorConversionInfoTransformType; param4: CGColorRenderingIntent): CGColorConversionInfoRef __nullable; varargs; cdecl; external; { available starting in __MAC_10_12, __IPHONE_10_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGColorConversionBlackPointCompensation: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
{$endif}

{$endif}
