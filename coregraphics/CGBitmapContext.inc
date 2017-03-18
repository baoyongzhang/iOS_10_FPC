{ Parsed from CoreGraphics.framework CGBitmapContext.h }

{$ifndef CGBITMAPCONTEXT_H_}
{$ifdef TYPES}
type
  CGBitmapContextReleaseDataCallback = procedure (releaseInfo: pointer; data: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CGBitmapContextCreateWithData(data: void* __nullable; width: size_t; height: size_t; bitsPerComponent: size_t; bytesPerRow: size_t; space: CGColorSpaceRef cg_nullable; bitmapInfo: cuint32; releaseCallback: CGBitmapContextReleaseDataCallback __nullable; releaseInfo: void* __nullable): CGContextRef __nullable; cdecl; external; { available starting in __MAC_10_6, __IPHONE_4_0 }
function CGBitmapContextCreate(data: void* __nullable; width: size_t; height: size_t; bitsPerComponent: size_t; bytesPerRow: size_t; space: CGColorSpaceRef cg_nullable; bitmapInfo: cuint32): CGContextRef __nullable; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGBitmapContextGetData(context: CGContextRef cg_nullable): void * __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetWidth(context: CGContextRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetHeight(context: CGContextRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitsPerComponent(context: CGContextRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitsPerPixel(context: CGContextRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBytesPerRow(context: CGContextRef cg_nullable): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetColorSpace(context: CGContextRef cg_nullable): CGColorSpaceRef __nullable; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetAlphaInfo(context: CGContextRef cg_nullable): CGImageAlphaInfo; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitmapInfo(context: CGContextRef cg_nullable): CGBitmapInfo; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGBitmapContextCreateImage(context: CGContextRef cg_nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
