{ Parsed from CoreVideo.framework CVPixelFormatDescription.h }

{$if  not (defined(__COREVIDEO_CVPIXELFORMATDESCRIPTION_H__))}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatName: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatConstant: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatCodecType: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatFourCC: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatContainsAlpha: CFStringRef CV_NONNULL { available starting in __MAC_10_7,__IPHONE_4_3 }; cvar; external;
  kCVPixelFormatContainsYCbCr: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCVPixelFormatContainsRGB: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCVPixelFormatComponentRange: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_9_0 }; cvar; external;
  kCVPixelFormatComponentRange_VideoRange: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_9_0 }; cvar; external;
  kCVPixelFormatComponentRange_FullRange: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_9_0 }; cvar; external;
  kCVPixelFormatComponentRange_WideRange: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_9_0 }; cvar; external;
  kCVPixelFormatPlanes: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBlockWidth: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBlockHeight: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBitsPerBlock: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBlockHorizontalAlignment: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBlockVerticalAlignment: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatBlackBlock: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatHorizontalSubsampling: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatVerticalSubsampling: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatOpenGLFormat: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatOpenGLType: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatOpenGLInternalFormat: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatCGBitmapInfo: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatQDCompatibility: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatCGBitmapContextCompatibility: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatCGImageCompatibility: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatOpenGLCompatibility: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVPixelFormatOpenGLESCompatibility: CFStringRef CV_NONNULL { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVFillExtendedPixelsCallBack = function (pixelBuffer: CVPixelBufferRef CV_NONNULL; refCon: void* CV_NULLABLE): Boolean; cdecl;

type
  CVFillExtendedPixelsCallBackData = record
    version: CFIndex;
    fillCallBack: CVFillExtendedPixelsCallBack CV_NULLABLE;
    refCon: void *CV_NULLABLE;
  end;
type
  CVFillExtendedPixelsCallBackDataPtr = ^CVFillExtendedPixelsCallBackData;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatFillExtendedPixelsCallback: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVPixelFormatDescriptionCreateWithPixelFormatType(allocator: CFAllocatorRef CV_NULLABLE; pixelFormat: OSType): CFDictionaryRef CF_RETURNS_RETAINED CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVPixelFormatDescriptionArrayCreateWithAllPixelFormatTypes(allocator: CFAllocatorRef CV_NULLABLE): CFArrayRef CF_RETURNS_RETAINED CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
procedure CVPixelFormatDescriptionRegisterDescriptionWithPixelFormatType(description: CFDictionaryRef CV_NONNULL; pixelFormat: OSType); cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$if defined(COREVIDEO_SUPPORTS_DIRECT3D)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVPixelFormatDirect3DFormat: CFStringRef CV_NONNULL; cvar; external;
  kCVPixelFormatDirect3DType: CFStringRef CV_NONNULL; cvar; external;
  kCVPixelFormatDirect3DInternalFormat: CFStringRef CV_NONNULL; cvar; external;
  kCVPixelFormatDirect3DCompatibility: CFStringRef CV_NONNULL; cvar; external;
{$endif}

{$endif}

{$endif}
