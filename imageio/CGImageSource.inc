{ Parsed from ImageIO.framework CGImageSource.h }

{$ifndef CGIMAGESOURCE_H_}
{$ifdef TYPES}
type
  CGImageSourceRef = OpaqueType;
  CGImageSourceStatus = cint32;
  CGImageSourceStatusPtr = ^CGImageSourceStatus;

const
  kCGImageStatusUnexpectedEOF = -5;
  kCGImageStatusInvalidData = -4;
  kCGImageStatusUnknownType = -3;
  kCGImageStatusReadingHeader = -2;
  kCGImageStatusIncomplete = -1;
  kCGImageStatusComplete = 0;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageSourceTypeIdentifierHint: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceShouldCache: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceShouldCacheImmediately: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageSourceShouldAllowFloat: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailFromImageIfAbsent: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailFromImageAlways: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceThumbnailMaxPixelSize: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailWithTransform: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceSubsampleFactor: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageSourceGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyTypeIdentifiers: CFArrayRef __nonnull; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithDataProvider(provider: CGDataProviderRef __nonnull; options: CFDictionaryRef __nullable): CGImageSourceRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithData(data: CFDataRef __nonnull; options: CFDictionaryRef __nullable): CGImageSourceRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithURL(url: CFURLRef __nonnull; options: CFDictionaryRef __nullable): CGImageSourceRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetType(isrc: CGImageSourceRef __nonnull): CFStringRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetCount(isrc: CGImageSourceRef __nonnull): size_t; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyProperties(isrc: CGImageSourceRef __nonnull; options: CFDictionaryRef __nullable): CFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyPropertiesAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t; options: CFDictionaryRef __nullable): CFDictionaryRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyMetadataAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t; options: CFDictionaryRef __nullable): CGImageMetadataRef __nullable; cdecl; external; { available starting in __MAC_10_8,__IPHONE_7_0 }
function CGImageSourceCreateImageAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t; options: CFDictionaryRef __nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceRemoveCacheAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function CGImageSourceCreateThumbnailAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t; options: CFDictionaryRef __nullable): CGImageRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateIncremental(options: CFDictionaryRef __nullable): CGImageSourceRef __nonnull; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceUpdateData(isrc: CGImageSourceRef __nonnull; data: CFDataRef __nonnull; final: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceUpdateDataProvider(isrc: CGImageSourceRef __nonnull; provider: CGDataProviderRef __nonnull; final: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetStatus(isrc: CGImageSourceRef __nonnull): CGImageSourceStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetStatusAtIndex(isrc: CGImageSourceRef __nonnull; index: size_t): CGImageSourceStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
{$endif}

{$endif}
