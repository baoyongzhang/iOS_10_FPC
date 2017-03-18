{ Parsed from CoreVideo.framework CVPixelBufferPool.h }

{$if  not (defined(__COREVIDEO__CVPIXELBUFFERPOOL_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVPIXELBUFFERPOOL_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  struct CV_BRIDGED_TYPE = function (CVPixelBufferPoolGetTypeID(void: id) __CVPixelBufferPool* CVPixelBufferPoolRef;CV_EXPORT CFStringRef CV_NONNULL kCVPixelBufferPoolMinimumBufferCountKey ;CV_EXPORT CFStringRef CV_NONNULL kCVPixelBufferPoolMaximumBufferAgeKey ;CV_EXPORT CFTypeID): ; cdecl { available starting in __MAC_10_4,__IPHONE_4_0 };
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferPoolRetain(pixelBufferPool: CVPixelBufferPoolRef CV_NULLABLE): CVPixelBufferPoolRef CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVPixelBufferPoolRelease(pixelBufferPool: CV_RELEASES_ARGUMENT CVPixelBufferPoolRef CV_NULLABLE); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferPoolCreate(allocator: CFAllocatorRef CV_NULLABLE; poolAttributes: CFDictionaryRef CV_NULLABLE; pixelBufferAttributes: CFDictionaryRef CV_NULLABLE; var poolOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferPoolRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferPoolGetAttributes(pool: CVPixelBufferPoolRef CV_NONNULL): CFDictionaryRef                         CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferPoolGetPixelBufferAttributes(pool: CVPixelBufferPoolRef CV_NONNULL): CFDictionaryRef                         CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferPoolCreatePixelBuffer(allocator: CFAllocatorRef CV_NULLABLE; pixelBufferPool: CVPixelBufferPoolRef CV_NONNULL; var pixelBufferOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferPoolCreatePixelBufferWithAuxAttributes(allocator: CFAllocatorRef CV_NULLABLE; pixelBufferPool: CVPixelBufferPoolRef CV_NONNULL; auxAttributes: CFDictionaryRef CV_NULLABLE; pixelBufferOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferPoolAllocationThresholdKey: CFStringRef CV_NONNULL { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferPoolFreeBufferNotification: CFStringRef CV_NONNULL { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferPoolFlushFlags = CVOptionFlags;
  CVPixelBufferPoolFlushFlagsPtr = ^CVPixelBufferPoolFlushFlags;

const
  kCVPixelBufferPoolFlushExcessBuffers = 1;
{$endif}

{$ifdef FUNCTIONS}
procedure CVPixelBufferPoolFlush(pool: CVPixelBufferPoolRef CV_NONNULL; options: CVPixelBufferPoolFlushFlags); cdecl; external;
{$endif}

{$endif}
