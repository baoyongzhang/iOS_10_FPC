{ Parsed from CoreVideo.framework CVPixelBuffer.h }

{$if  not (defined(__COREVIDEO_CVPIXELBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVPIXELBUFFER_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferLockFlags = CVOptionFlags;
  CVPixelBufferLockFlagsPtr = ^CVPixelBufferLockFlags;

const
  kCVPixelBufferLock_ReadOnly = $00000001;

type
  CVPlanarComponentInfo = record
    offset: cint32;
    rowBytes: cuint32;
  end;
type
  CVPlanarComponentInfoPtr = ^CVPlanarComponentInfo;
type
  CVPlanarPixelBufferInfo = record
    componentInfo:array[0..0] of CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfoPtr = ^CVPlanarPixelBufferInfo;
type
  CVPlanarPixelBufferInfo_YCbCrPlanar = record
    componentInfoY: CVPlanarComponentInfo;
    componentInfoCb: CVPlanarComponentInfo;
    componentInfoCr: CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfo_YCbCrPlanarPtr = ^CVPlanarPixelBufferInfo_YCbCrPlanar;
type
  CVPlanarPixelBufferInfo_YCbCrBiPlanar = record
    componentInfoY: CVPlanarComponentInfo;
    componentInfoCbCr: CVPlanarComponentInfo;
  end;
type
  CVPlanarPixelBufferInfo_YCbCrBiPlanarPtr = ^CVPlanarPixelBufferInfo_YCbCrBiPlanar;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelBufferPixelFormatTypeKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferMemoryAllocatorKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferWidthKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferHeightKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferExtendedPixelsLeftKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferExtendedPixelsTopKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferExtendedPixelsRightKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferExtendedPixelsBottomKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferBytesPerRowAlignmentKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferCGBitmapContextCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferCGImageCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferOpenGLCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferPlaneAlignmentKey: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferIOSurfacePropertiesKey: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVPixelBufferOpenGLESCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  kCVPixelBufferMetalCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_8_0 }; cvar; external;
  kCVPixelBufferOpenGLTextureCacheCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_NA }; cvar; external;
  kCVPixelBufferOpenGLESTextureCacheCompatibilityKey: CFStringRef CV_NONNULL { available starting in __MAC_NA,__IPHONE_9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferRef = CVImageBufferRef;
  CVPixelBufferRefPtr = ^CVPixelBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferRetain(texture: CVPixelBufferRef CV_NULLABLE): CVPixelBufferRef CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVPixelBufferRelease(texture: CV_RELEASES_ARGUMENT CVPixelBufferRef CV_NULLABLE); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferCreateResolvedAttributesDictionary(allocator: CFAllocatorRef CV_NULLABLE; attributes: CFArrayRef CV_NULLABLE; var resolvedDictionaryOut: CV_RETURNS_RETAINED_PARAMETER CFDictionaryRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferCreate(allocator: CFAllocatorRef CV_NULLABLE; width: size_t; height: size_t; pixelFormatType: OSType; pixelBufferAttributes: CFDictionaryRef CV_NULLABLE; var pixelBufferOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferReleaseBytesCallback = procedure (releaseRefCon: void* CV_NULLABLE; baseAddress: void* CV_NULLABLE); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferCreateWithBytes(allocator: CFAllocatorRef CV_NULLABLE; width: size_t; height: size_t; pixelFormatType: OSType; baseAddress: void* CV_NONNULL; bytesPerRow: size_t; releaseCallback: CVPixelBufferReleaseBytesCallback CV_NULLABLE; releaseRefCon: void* CV_NULLABLE; pixelBufferAttributes: CFDictionaryRef CV_NULLABLE; var pixelBufferOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CVPixelBufferReleasePlanarBytesCallback = procedure (releaseRefCon: void* CV_NULLABLE; dataPtr: void* CV_NULLABLE; dataSize: size_t; numberOfPlanes: size_t; planeAddresses: void* CV_NULLABLEPtr { variable size array of void* CV_NULLABLE }); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelBufferCreateWithPlanarBytes(allocator: CFAllocatorRef CV_NULLABLE; width: size_t; height: size_t; pixelFormatType: OSType; dataPtr: void* CV_NULLABLE; dataSize: size_t; numberOfPlanes: size_t; planeBaseAddress: void* CV_NULLABLEPtr { variable size array of void* CV_NULLABLE }; var planeWidth: size_tPtr { variable size array of size_t }; planeHeight: size_tPtr { variable size array of size_t }; planeBytesPerRow: size_tPtr { variable size array of size_t }; releaseCallback: CVPixelBufferReleasePlanarBytesCallback CV_NULLABLE; releaseRefCon: void* CV_NULLABLE; pixelBufferAttributes: CFDictionaryRef CV_NULLABLE; pixelBufferOut: CV_RETURNS_RETAINED_PARAMETER CVPixelBufferRef CV_NULLABLE* CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferLockBaseAddress(pixelBuffer: CVPixelBufferRef CV_NONNULL; lockFlags: CVPixelBufferLockFlags): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferUnlockBaseAddress(pixelBuffer: CVPixelBufferRef CV_NONNULL; unlockFlags: CVPixelBufferLockFlags): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetWidth(pixelBuffer: CVPixelBufferRef CV_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetHeight(pixelBuffer: CVPixelBufferRef CV_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetPixelFormatType(pixelBuffer: CVPixelBufferRef CV_NONNULL): OSType; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBaseAddress(pixelBuffer: CVPixelBufferRef CV_NONNULL): void * CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBytesPerRow(pixelBuffer: CVPixelBufferRef CV_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetDataSize(pixelBuffer: CVPixelBufferRef CV_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferIsPlanar(pixelBuffer: CVPixelBufferRef CV_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetPlaneCount(pixelBuffer: CVPixelBufferRef CV_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetWidthOfPlane(pixelBuffer: CVPixelBufferRef CV_NONNULL; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetHeightOfPlane(pixelBuffer: CVPixelBufferRef CV_NONNULL; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBaseAddressOfPlane(pixelBuffer: CVPixelBufferRef CV_NONNULL; planeIndex: size_t): void * CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferGetBytesPerRowOfPlane(pixelBuffer: CVPixelBufferRef CV_NONNULL; planeIndex: size_t): size_t; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVPixelBufferGetExtendedPixels(pixelBuffer: CVPixelBufferRef CV_NONNULL; var extraColumnsOnLeft: size_t* CV_NULLABLE; var extraColumnsOnRight: size_t* CV_NULLABLE; var extraRowsOnTop: size_t* CV_NULLABLE; var extraRowsOnBottom: size_t* CV_NULLABLE); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelBufferFillExtendedPixels(pixelBuffer: CVPixelBufferRef CV_NONNULL): CVReturn; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
