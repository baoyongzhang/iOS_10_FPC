{ Parsed from CoreVideo.framework CVMetalTextureCache.h }

{$if  not (defined(__COREVIDEO__CVMETALTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVMETALTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureCacheMaximumTextureAgeKey: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_8_0 }; cvar; external;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  struct CV_BRIDGED_TYPE = function (CVMetalTextureCacheGetTypeID(void: id) __CVMetalTextureCache* CVMetalTextureCacheRef;CV_EXPORT CFTypeID): ; cdecl { available starting in __MAC_10_11,__IPHONE_8_0 };
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureCacheCreate(allocator: CFAllocatorRef CV_NULLABLE; cacheAttributes: CFDictionaryRef CV_NULLABLE; metalDevice: MTLDeviceProtocol CV_NONNULL; textureAttributes: CFDictionaryRef CV_NULLABLE; cacheOut: CV_RETURNS_RETAINED_PARAMETER CVMetalTextureCacheRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
function CVMetalTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef CV_NULLABLE; textureCache: CVMetalTextureCacheRef CV_NONNULL; sourceImage: CVImageBufferRef CV_NONNULL; textureAttributes: CFDictionaryRef CV_NULLABLE; pixelFormat: MTLPixelFormat; width: size_t; height: size_t; planeIndex: size_t; textureOut: CV_RETURNS_RETAINED_PARAMETER CVMetalTextureRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
procedure CVMetalTextureCacheFlush(textureCache: CVMetalTextureCacheRef CV_NONNULL; options: CVOptionFlags); cdecl; external; { available starting in __MAC_10_11,__IPHONE_8_0 }
{$endif}

{$endif}

{$endif}
