{ Parsed from CoreMedia.framework CMFormatDescriptionBridge.h }

{$ifndef CMFORMATDESCRIPTIONBRIDGE_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMImageDescriptionFlavor_QuickTimeMovie: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMImageDescriptionFlavor_ISOFamily: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMImageDescriptionFlavor_3GPFamily: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMVideoFormatDescriptionCreateFromBigEndianImageDescriptionData(allocator: CFAllocatorRef CM_NULLABLE; imageDescriptionData: uint8_t* CM_NONNULL; imageDescriptionSize: size_t; imageDescriptionStringEncoding: CFStringEncoding; imageDescriptionFlavor: CFStringRef CM_NULLABLE; videoFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMVideoFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMVideoFormatDescriptionCreateFromBigEndianImageDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; imageDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; imageDescriptionStringEncoding: CFStringEncoding; imageDescriptionFlavor: CFStringRef CM_NULLABLE; videoFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMVideoFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMVideoFormatDescriptionCopyAsBigEndianImageDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; videoFormatDescription: CMVideoFormatDescriptionRef CM_NONNULL; imageDescriptionStringEncoding: CFStringEncoding; imageDescriptionFlavor: CFStringRef CM_NULLABLE; imageDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianImageDescriptionToHost(imageDescriptionData: uint8_t* CM_NONNULL; imageDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianImageDescriptionToBig(imageDescriptionData: uint8_t* CM_NONNULL; imageDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSoundDescriptionFlavor_QuickTimeMovie: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMSoundDescriptionFlavor_QuickTimeMovieV2: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMSoundDescriptionFlavor_ISOFamily: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMSoundDescriptionFlavor_3GPFamily: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionData(allocator: CM_NULLABLE CFAllocatorRef; soundDescriptionData: uint8_t* CM_NONNULL; soundDescriptionSize: size_t; soundDescriptionFlavor: CFStringRef CM_NULLABLE; audioFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMAudioFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; soundDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; soundDescriptionFlavor: CFStringRef CM_NULLABLE; audioFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMAudioFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMAudioFormatDescriptionCopyAsBigEndianSoundDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; audioFormatDescription: CMAudioFormatDescriptionRef CM_NONNULL; soundDescriptionFlavor: CFStringRef CM_NULLABLE; soundDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMDoesBigEndianSoundDescriptionRequireLegacyCBRSampleTableLayout(soundDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; soundDescriptionFlavor: CFStringRef CM_NULLABLE): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianSoundDescriptionToHost(soundDescriptionData: uint8_t* CM_NONNULL; soundDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianSoundDescriptionToBig(soundDescriptionData: uint8_t* CM_NONNULL; soundDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}
{$ifdef FUNCTIONS}
function CMTextFormatDescriptionCreateFromBigEndianTextDescriptionData(allocator: CFAllocatorRef CM_NULLABLE; textDescriptionData: uint8_t* CM_NONNULL; textDescriptionSize: size_t; textDescriptionFlavor: CFStringRef CM_NULLABLE; mediaType: CMMediaType; textFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMTextFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMTextFormatDescriptionCreateFromBigEndianTextDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; textDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; textDescriptionFlavor: CFStringRef CM_NULLABLE; mediaType: CMMediaType; textFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMTextFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMTextFormatDescriptionCopyAsBigEndianTextDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; textFormatDescription: CMTextFormatDescriptionRef CM_NONNULL; textDescriptionFlavor: CFStringRef CM_NULLABLE; textDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianTextDescriptionToHost(textDescriptionData: uint8_t* CM_NONNULL; textDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianTextDescriptionToBig(textDescriptionData: uint8_t* CM_NONNULL; textDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}
{$ifdef FUNCTIONS}
function CMClosedCaptionFormatDescriptionCreateFromBigEndianClosedCaptionDescriptionData(allocator: CFAllocatorRef CM_NULLABLE; closedCaptionDescriptionData: uint8_t* CM_NONNULL; closedCaptionDescriptionSize: size_t; closedCaptionDescriptionFlavor: CFStringRef CM_NULLABLE; closedCaptionFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMClosedCaptionFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMClosedCaptionFormatDescriptionCreateFromBigEndianClosedCaptionDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; closedCaptionDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; closedCaptionDescriptionFlavor: CFStringRef CM_NULLABLE; closedCaptionFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMClosedCaptionFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMClosedCaptionFormatDescriptionCopyAsBigEndianClosedCaptionDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; closedCaptionFormatDescription: CMClosedCaptionFormatDescriptionRef CM_NONNULL; closedCaptionDescriptionFlavor: CFStringRef CM_NULLABLE; closedCaptionDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianClosedCaptionDescriptionToHost(closedCaptionDescriptionData: uint8_t* CM_NONNULL; closedCaptionDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianClosedCaptionDescriptionToBig(closedCaptionDescriptionData: uint8_t* CM_NONNULL; closedCaptionDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}
{$ifdef FUNCTIONS}
function CMTimeCodeFormatDescriptionCreateFromBigEndianTimeCodeDescriptionData(allocator: CFAllocatorRef CM_NULLABLE; timeCodeDescriptionData: uint8_t* CM_NONNULL; timeCodeDescriptionSize: size_t; timeCodeDescriptionFlavor: CFStringRef CM_NULLABLE; timeCodeFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMTimeCodeFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMTimeCodeFormatDescriptionCreateFromBigEndianTimeCodeDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; timeCodeDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; timeCodeDescriptionFlavor: CFStringRef CM_NULLABLE; timeCodeFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMTimeCodeFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMTimeCodeFormatDescriptionCopyAsBigEndianTimeCodeDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef CM_NONNULL; timeCodeDescriptionFlavor: CFStringRef CM_NULLABLE; timeCodeDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianTimeCodeDescriptionToHost(timeCodeDescriptionData: uint8_t* CM_NONNULL; timeCodeDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianTimeCodeDescriptionToBig(timeCodeDescriptionData: uint8_t* CM_NONNULL; timeCodeDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}
{$ifdef FUNCTIONS}
function CMMetadataFormatDescriptionCreateFromBigEndianMetadataDescriptionData(allocator: CFAllocatorRef CM_NULLABLE; metadataDescriptionData: uint8_t* CM_NONNULL; metadataDescriptionSize: size_t; metadataDescriptionFlavor: CFStringRef CM_NULLABLE; metadataFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataFormatDescriptionCreateFromBigEndianMetadataDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; metadataDescriptionBlockBuffer: CMBlockBufferRef CM_NONNULL; metadataDescriptionFlavor: CFStringRef CM_NULLABLE; metadataFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataFormatDescriptionCopyAsBigEndianMetadataDescriptionBlockBuffer(allocator: CFAllocatorRef CM_NULLABLE; metadataFormatDescription: CMMetadataFormatDescriptionRef CM_NONNULL; metadataDescriptionFlavor: CFStringRef CM_NULLABLE; metadataDescriptionBlockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianMetadataDescriptionToHost(metadataDescriptionData: uint8_t* CM_NONNULL; metadataDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSwapHostEndianMetadataDescriptionToBig(metadataDescriptionData: uint8_t* CM_NONNULL; metadataDescriptionSize: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$else}
{$endif}

{$endif}
