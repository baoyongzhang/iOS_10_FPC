{ Parsed from CoreGraphics.framework CGImage.h }

{$ifndef CGIMAGE_H_}
{$ifdef TYPES}
type
  CGImageRef = OpaqueType;
  CGImageAlphaInfo = cuint32;
  CGImageAlphaInfoPtr = ^CGImageAlphaInfo;

const
  kCGImageAlphaNone = 0;
  kCGImageAlphaPremultipliedLast = 1;
  kCGImageAlphaPremultipliedFirst = 2;
  kCGImageAlphaLast = 3;
  kCGImageAlphaFirst = 4;
  kCGImageAlphaNoneSkipLast = 5;
  kCGImageAlphaNoneSkipFirst = 6;
  kCGImageAlphaOnly = 7;

type
  CGImageByteOrderInfo = cuint32;
  CGImageByteOrderInfoPtr = ^CGImageByteOrderInfo;

const
  kCGImageByteOrderMask = $7000;
  kCGImageByteOrder16Little = 1 shl 12;
  kCGImageByteOrder32Little = 2 shl 12;
  kCGImageByteOrder16Big = 3 shl 12;
  kCGImageByteOrder32Big = 4 shl 12;

type
  CGBitmapInfo = cuint32;
  CGBitmapInfoPtr = ^CGBitmapInfo;

const
  kCGBitmapAlphaInfoMask = $1F;
  kCGBitmapFloatInfoMask = $F00;
  kCGBitmapFloatComponents = 1 shl 8;
  kCGBitmapByteOrderMask = kCGImageByteOrderMask;
  kCGBitmapByteOrderDefault = 0 shl 12;
  kCGBitmapByteOrder16Little = kCGImageByteOrder16Little;
  kCGBitmapByteOrder32Little = kCGImageByteOrder32Little;
  kCGBitmapByteOrder16Big = kCGImageByteOrder16Big;
  kCGBitmapByteOrder32Big = kCGImageByteOrder32Big;
{$endif}

{$ifdef __BIG_ENDIAN__}
{$ifdef TYPES}
const
  kCGBitmapByteOrder16Host = kCGBitmapByteOrder16Big;
  kCGBitmapByteOrder32Host = kCGBitmapByteOrder32Big;
{$endif}

{$else}
{$ifdef TYPES}
const
  kCGBitmapByteOrder16Host = kCGBitmapByteOrder16Little;
  kCGBitmapByteOrder32Host = kCGBitmapByteOrder32Little;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CGImageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGImageCreate(width: size_t; height: size_t; bitsPerComponent: size_t; bitsPerPixel: size_t; bytesPerRow: size_t; space: CGColorSpaceRef cg_nullable; bitmapInfo: CGBitmapInfo; provider: CGDataProviderRef cg_nullable; decode: CGFloat* __nullable; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageMaskCreate(width: size_t; height: size_t; bitsPerComponent: size_t; bitsPerPixel: size_t; bytesPerRow: size_t; provider: CGDataProviderRef cg_nullable; decode: CGFloat* __nullable; shouldInterpolate: cbool): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageCreateCopy(image: CGImageRef cg_nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithJPEGDataProvider(source: CGDataProviderRef cg_nullable; decode: CGFloat* __nullable; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_1, __IPHONE_2_0 }
function CGImageCreateWithPNGDataProvider(source: CGDataProviderRef cg_nullable; decode: CGFloat* __nullable; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGImageCreateWithImageInRect(image: CGImageRef cg_nullable; rect: CGRect): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithMask(image: CGImageRef cg_nullable; mask: CGImageRef cg_nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithMaskingColors(image: CGImageRef cg_nullable; components: CGFloat* cg_nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateCopyWithColorSpace(image: CGImageRef cg_nullable; space: CGColorSpaceRef cg_nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGImageRetain(image: CGImageRef cg_nullable): CGImageRef cg_nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGImageRelease(image: CGImageRef cg_nullable); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageIsMask(image: CGImageRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetWidth(image: CGImageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetHeight(image: CGImageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitsPerComponent(image: CGImageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitsPerPixel(image: CGImageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBytesPerRow(image: CGImageRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetColorSpace(image: CGImageRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetAlphaInfo(image: CGImageRef cg_nullable): CGImageAlphaInfo; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetDataProvider(image: CGImageRef cg_nullable): CGDataProviderRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetDecode(image: CGImageRef cg_nullable): CGFloat * __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetShouldInterpolate(image: CGImageRef cg_nullable): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetRenderingIntent(image: cg_nullable CGImageRef): CGColorRenderingIntent; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitmapInfo(image: CGImageRef cg_nullable): CGBitmapInfo; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageGetUTType(image: cg_nullable CGImageRef): CFStringRef  __nullable; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
{$endif}

{$endif}
