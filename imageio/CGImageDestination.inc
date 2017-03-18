{ Parsed from ImageIO.framework CGImageDestination.h }

{$ifndef CGIMAGEDESTINATION_H_}
{$ifdef TYPES}
type
  CGImageDestinationRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageDestinationLossyCompressionQuality: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageDestinationBackgroundColor: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageDestinationImageMaxPixelSize: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  kCGImageDestinationEmbedThumbnail: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  kCGImageDestinationOptimizeColorForSharing: CFStringRef { available starting in __MAC_10_12, __IPHONE_9_3 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageDestinationGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCopyTypeIdentifiers: CFArrayRef __nonnull; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithDataConsumer(consumer: CGDataConsumerRef __nonnull; type_: CFStringRef __nonnull; count: size_t; options: CFDictionaryRef __nullable): CGImageDestinationRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithData(data: CFMutableDataRef __nonnull; type_: CFStringRef __nonnull; count: size_t; options: CFDictionaryRef __nullable): CGImageDestinationRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithURL(url: CFURLRef __nonnull; type_: CFStringRef __nonnull; count: size_t; options: CFDictionaryRef __nullable): CGImageDestinationRef __nullable; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationSetProperties(idst: CGImageDestinationRef __nonnull; properties: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImage(idst: CGImageDestinationRef __nonnull; image: CGImageRef __nonnull; properties: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImageFromSource(idst: CGImageDestinationRef __nonnull; isrc: CGImageSourceRef __nonnull; index: size_t; properties: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationFinalize(idst: CGImageDestinationRef __nonnull): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImageAndMetadata(idst: CGImageDestinationRef __nonnull; image: CGImageRef __nonnull; metadata: CGImageMetadataRef __nullable; options: CFDictionaryRef __nullable); cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageDestinationMetadata: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageDestinationMergeMetadata: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataShouldExcludeXMP: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataShouldExcludeGPS: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  kCGImageDestinationDateTime: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageDestinationOrientation: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageDestinationCopyImageSource(idst: CGImageDestinationRef __nonnull; isrc: CGImageSourceRef __nonnull; options: CFDictionaryRef __nullable; err: __nullable CFErrorRef* __nullable): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$endif}
