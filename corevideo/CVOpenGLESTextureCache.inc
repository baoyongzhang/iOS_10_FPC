{ Parsed from CoreVideo.framework CVOpenGLESTextureCache.h }

{$if  not (defined(__COREVIDEO__CVOPENGLESTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVOPENGLESTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLESTextureCacheRef = OpaqueType;
{$endif}

{$ifndef COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API}
{$ifdef TYPES}
const
  COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API = 1;
{$endif}

{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API)}
{$ifdef TYPES}
type
  CVEAGLContext = ^EAGLContext;
{$endif}

{$else}
{$ifdef TYPES}
type
  CVEAGLContext = pointer;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVOpenGLESTextureCacheMaximumTextureAgeKey: CFStringRef CV_NONNULL { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLESTextureCacheGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureCacheCreate(allocator: CFAllocatorRef CV_NULLABLE; cacheAttributes: CFDictionaryRef CV_NULLABLE; eaglContext: CVEAGLContext CV_NONNULL; textureAttributes: CFDictionaryRef CV_NULLABLE; cacheOut: CV_RETURNS_RETAINED_PARAMETER CVOpenGLESTextureCacheRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef CV_NULLABLE; textureCache: CVOpenGLESTextureCacheRef CV_NONNULL; sourceImage: CVImageBufferRef CV_NONNULL; textureAttributes: CFDictionaryRef CV_NULLABLE; target: GLenum; internalFormat: GLint; width: GLsizei; height: GLsizei; format: GLenum; type_: GLenum; planeIndex: size_t; textureOut: CV_RETURNS_RETAINED_PARAMETER CVOpenGLESTextureRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
procedure CVOpenGLESTextureCacheFlush(textureCache: CVOpenGLESTextureCacheRef CV_NONNULL; options: CVOptionFlags); cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$endif}
