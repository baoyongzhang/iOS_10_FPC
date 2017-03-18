{ Parsed from CoreGraphics.framework CGColorSpace.h }

{$ifndef CGCOLORSPACE_H_}
{$ifdef TYPES}
type
  CGColorSpaceRef = OpaqueType;
  CGColorRenderingIntent = cint32;
  CGColorRenderingIntentPtr = ^CGColorRenderingIntent;

const
  kCGRenderingIntentDefault = 0;
  kCGRenderingIntentAbsoluteColorimetric = 1;
  kCGRenderingIntentRelativeColorimetric = 2;
  kCGRenderingIntentPerceptual = 3;
  kCGRenderingIntentSaturation = 4;

type
  CGColorSpaceModel = cint32;
  CGColorSpaceModelPtr = ^CGColorSpaceModel;

const
  kCGColorSpaceModelUnknown = -1;
  kCGColorSpaceModelMonochrome = 0;
  kCGColorSpaceModelRGB = 1;
  kCGColorSpaceModelCMYK = 2;
  kCGColorSpaceModelLab = 3;
  kCGColorSpaceModelDeviceN = 4;
  kCGColorSpaceModelIndexed = 5;
  kCGColorSpaceModelPattern = 6;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGColorSpaceGenericGray: CFStringRef { available starting in __MAC_10_4, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceGenericRGB: CFStringRef { available starting in __MAC_10_4, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceGenericCMYK: CFStringRef { available starting in __MAC_10_4, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceDisplayP3: CFStringRef { available starting in __MAC_10_11_2, __IPHONE_9_3 }; cvar; external;
  kCGColorSpaceGenericRGBLinear: CFStringRef { available starting in __MAC_10_5, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceAdobeRGB1998: CFStringRef { available starting in __MAC_10_5, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceSRGB: CFStringRef { available starting in __MAC_10_5, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceGenericGrayGamma2_2: CFStringRef { available starting in __MAC_10_6, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceGenericXYZ: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceACESCGLinear: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceITUR_709: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceITUR_2020: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceROMMRGB: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceDCIP3: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kCGColorSpaceExtendedSRGB: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
  kCGColorSpaceLinearSRGB: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
  kCGColorSpaceExtendedLinearSRGB: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
  kCGColorSpaceExtendedGray: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
  kCGColorSpaceLinearGray: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
  kCGColorSpaceExtendedLinearGray: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGColorSpaceCreateDeviceGray: CGColorSpaceRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateDeviceRGB: CGColorSpaceRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateDeviceCMYK: CGColorSpaceRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateCalibratedGray(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; gamma: CGFloat): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateCalibratedRGB(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; gamma: CGFloatPtr { 3 element array of CGFloat }; matrix: CGFloatPtr { 9 element array of CGFloat }): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateLab(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; range: CGFloatPtr { 4 element array of CGFloat }): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateWithICCProfile(data: CFDataRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceCreateICCBased(nComponents: size_t; range: CGFloat* __nullable; profile: CGDataProviderRef cg_nullable; alternate: CGColorSpaceRef __nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateIndexed(baseSpace: CGColorSpaceRef cg_nullable; lastIndex: size_t; colorTable: char* cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreatePattern(baseSpace: CGColorSpaceRef __nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateWithPlatformColorSpace(ref: void* cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_9_0 }
function CGColorSpaceCreateWithName(name: CFStringRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGColorSpaceRetain(space: CGColorSpaceRef cg_nullable): CGColorSpaceRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGColorSpaceRelease(space: CGColorSpaceRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCopyName(space: CGColorSpaceRef cg_nullable): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_6, __IPHONE_10_0 }
function CGColorSpaceGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGColorSpaceGetNumberOfComponents(space: CGColorSpaceRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceGetModel(space: CGColorSpaceRef cg_nullable): CGColorSpaceModel; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceGetBaseColorSpace(space: CGColorSpaceRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceGetColorTableCount(space: CGColorSpaceRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGColorSpaceGetColorTable(space: CGColorSpaceRef cg_nullable; table: uint8_t* cg_nullable); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceCopyICCProfile(space: CGColorSpaceRef cg_nullable): CFDataRef __nullable; cdecl; external;
function CGColorSpaceCopyICCData(space: CGColorSpaceRef cg_nullable): CFDataRef __nullable; cdecl; external; { available starting in __MAC_10_12, __IPHONE_10_0 }
function CGColorSpaceIsWideGamutRGB(param1: CGColorSpaceRef): cbool; cdecl; external; { available starting in __MAC_10_12, __IPHONE_10_0 }
function CGColorSpaceSupportsOutput(space: CGColorSpaceRef): cbool; cdecl; external; { available starting in __MAC_10_12, __IPHONE_10_0 }
{$endif}

{$endif}
