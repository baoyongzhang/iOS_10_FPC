{ Parsed from CoreMedia.framework CMFormatDescription.h }

{$ifndef CMFORMATDESCRIPTION_H}

{$ifdef TYPES}
type
  CMFormatDescriptionRef = OpaqueType;
  CMMediaType = FourCharCode;
  CMMediaTypePtr = ^CMMediaType;
{$endif}

{$ifdef FUNCTIONS}
function CMFormatDescriptionCreate(allocator: CFAllocatorRef CM_NULLABLE; mediaType: CMMediaType; mediaSubtype: FourCharCode; extensions: CFDictionaryRef CM_NULLABLE; descOut: CM_RETURNS_RETAINED_PARAMETER CMFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMFormatDescriptionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMFormatDescriptionEqual(desc1: CMFormatDescriptionRef CM_NULLABLE; desc2: CMFormatDescriptionRef CM_NULLABLE): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMFormatDescriptionEqualIgnoringExtensionKeys(desc1: CMFormatDescriptionRef CM_NULLABLE; desc2: CMFormatDescriptionRef CM_NULLABLE; formatDescriptionExtensionKeysToIgnore: CFTypeRef CM_NULLABLE; sampleDescriptionExtensionAtomKeysToIgnore: CFTypeRef CM_NULLABLE): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_3 }
function CMFormatDescriptionGetMediaType(desc: CMFormatDescriptionRef CM_NONNULL): CMMediaType; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMFormatDescriptionGetMediaSubType(desc: CMFormatDescriptionRef CM_NONNULL): FourCharCode; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMFormatDescriptionGetExtensions(desc: CMFormatDescriptionRef CM_NONNULL): CFDictionaryRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_OriginalCompressionSettings: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_SampleDescriptionExtensionAtoms: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_VerbatimSampleDescription: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_VerbatimISOSampleEntry: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMFormatDescriptionGetExtension(desc: CMFormatDescriptionRef CM_NONNULL; extensionKey: CFStringRef CM_NONNULL): CFPropertyListRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMAudioCodecType = FourCharCode;
  CMAudioCodecTypePtr = ^CMAudioCodecType;
{$endif}

{$ifdef TYPES}
type
  CMAudioFormatDescriptionRef = CMFormatDescriptionRef;
  CMAudioFormatDescriptionRefPtr = ^CMAudioFormatDescriptionRef;
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionCreate(allocator: CFAllocatorRef CM_NULLABLE; asbd: AudioStreamBasicDescription* CM_NONNULL; layoutSize: size_t; layout: AudioChannelLayout* CM_NULLABLE; magicCookieSize: size_t; magicCookie: void* CM_NULLABLE; extensions: CFDictionaryRef CM_NULLABLE; outDesc: CM_RETURNS_RETAINED_PARAMETER CMAudioFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetStreamBasicDescription(desc: CMAudioFormatDescriptionRef CM_NONNULL): AudioStreamBasicDescription * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetMagicCookie(desc: CMAudioFormatDescriptionRef CM_NONNULL; cookieSizeOut: size_t* CM_NULLABLE): void * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetChannelLayout(desc: CMAudioFormatDescriptionRef CM_NONNULL; layoutSize: size_t* CM_NULLABLE): AudioChannelLayout * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetFormatList(desc: CMAudioFormatDescriptionRef CM_NONNULL; formatListSize: size_t* CM_NULLABLE): AudioFormatListItem * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetRichestDecodableFormat(desc: CMAudioFormatDescriptionRef CM_NONNULL): AudioFormatListItem * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionGetMostCompatibleFormat(desc: CMAudioFormatDescriptionRef CM_NONNULL): AudioFormatListItem * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioFormatDescriptionCreateSummary(allocator: CFAllocatorRef CM_NULLABLE; formatDescriptionArray: CFArrayRef CM_NONNULL; flags: cuint32; summaryFormatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMAudioFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMAudioFormatDescriptionMask = cuint32;
  CMAudioFormatDescriptionMaskPtr = ^CMAudioFormatDescriptionMask;
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionEqual(desc1: CMAudioFormatDescriptionRef CM_NONNULL; desc2: CMAudioFormatDescriptionRef CM_NONNULL; equalityMask: CMAudioFormatDescriptionMask; equalityMaskOut: CMAudioFormatDescriptionMask* CM_NULLABLE): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMVideoFormatDescriptionRef = CMFormatDescriptionRef;
  CMVideoFormatDescriptionRefPtr = ^CMVideoFormatDescriptionRef;
  CMPixelFormatType = FourCharCode;
  CMPixelFormatTypePtr = ^CMPixelFormatType;
{$endif}

{$ifdef TYPES}
type
  CMVideoCodecType = FourCharCode;
  CMVideoCodecTypePtr = ^CMVideoCodecType;
{$endif}

{$ifdef TYPES}
type
  CMVideoDimensions = record
    width: cint32;
    height: cint32;
  end;
type
  CMVideoDimensionsPtr = ^CMVideoDimensions;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_FormatName: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_Depth: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_CleanAperture: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureWidth: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHeight: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHorizontalOffset: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureVerticalOffset: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureWidthRational: CFStringRef; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHeightRational: CFStringRef; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHorizontalOffsetRational: CFStringRef; cvar; external;
  kCMFormatDescriptionKey_CleanApertureVerticalOffsetRational: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_FieldCount: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_FieldDetail: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_TemporalTopFirst: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_TemporalBottomFirst: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_SpatialFirstLineEarly: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_SpatialFirstLineLate: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_PixelAspectRatio: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_PixelAspectRatioHorizontalSpacing: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionKey_PixelAspectRatioVerticalSpacing: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_ColorPrimaries: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_ITU_R_709_2: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_EBU_3213: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_SMPTE_C: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_DCI_P3: CFStringRef; cvar; external;
  kCMFormatDescriptionColorPrimaries_P3_D65: CFStringRef; cvar; external;
  kCMFormatDescriptionColorPrimaries_ITU_R_2020: CFStringRef; cvar; external;
  kCMFormatDescriptionColorPrimaries_P22: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_TransferFunction: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_ITU_R_709_2: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_SMPTE_240M_1995: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_UseGamma: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_ITU_R_2020: CFStringRef; cvar; external;
  kCMFormatDescriptionTransferFunction_SMPTE_ST_428_1: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_GammaLevel: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_YCbCrMatrix: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_709_2: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_601_4: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_SMPTE_240M_1995: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_2020: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_FullRangeVideo: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_ICCProfile: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_BytesPerRow: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_ChromaLocationTopField: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_ChromaLocationBottomField: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Left: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Center: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_TopLeft: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Top: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_BottomLeft: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Bottom: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_DV420: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionConformsToMPEG2VideoProfile: CFStringRef; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_TemporalQuality: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_SpatialQuality: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_VerbatimImageDescription: CFStringRef { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCMFormatDescriptionExtension_Version: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_RevisionLevel: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_Vendor: CFStringRef; cvar; external;
  kCMFormatDescriptionVendor_Apple: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMVideoFormatDescriptionCreate(allocator: CFAllocatorRef CM_NULLABLE; codecType: CMVideoCodecType; width: cint32; height: cint32; extensions: CFDictionaryRef CM_NULLABLE; outDesc: CM_RETURNS_RETAINED_PARAMETER CMVideoFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionCreateForImageBuffer(allocator: CFAllocatorRef CM_NULLABLE; imageBuffer: CVImageBufferRef CM_NONNULL; outDesc: CM_RETURNS_RETAINED_PARAMETER CMVideoFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionCreateFromH264ParameterSets(allocator: CFAllocatorRef CM_NULLABLE; parameterSetCount: size_t; parameterSetPointers: uint8_t* CM_NONNULL* CM_NONNULL; parameterSetSizes: size_t* CM_NONNULL; NALUnitHeaderLength: cint; formatDescriptionOut: CM_RETURNS_RETAINED_PARAMETER CMFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_7_0 }
function CMVideoFormatDescriptionGetH264ParameterSetAtIndex(videoDesc: CMFormatDescriptionRef CM_NONNULL; parameterSetIndex: size_t; parameterSetPointerOut: uint8_t* CM_NULLABLE* CM_NULLABLE; parameterSetSizeOut: size_t* CM_NULLABLE; parameterSetCountOut: size_t* CM_NULLABLE; NALUnitHeaderLengthOut: int* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_7_0 }
function CMVideoFormatDescriptionGetDimensions(videoDesc: CMVideoFormatDescriptionRef CM_NONNULL): CMVideoDimensions; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionGetPresentationDimensions(videoDesc: CMVideoFormatDescriptionRef CM_NONNULL; usePixelAspectRatio: Boolean; useCleanAperture: Boolean): CGSize; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionGetCleanAperture(videoDesc: CMVideoFormatDescriptionRef CM_NONNULL; originIsAtTopLeft: Boolean): CGRect; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionGetExtensionKeysCommonWithImageBuffers: CFArrayRef CM_NONNULL; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMVideoFormatDescriptionMatchesImageBuffer(desc: CMVideoFormatDescriptionRef CM_NONNULL; imageBuffer: CVImageBufferRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMMuxedFormatDescriptionRef = CMFormatDescriptionRef;
  CMMuxedFormatDescriptionRefPtr = ^CMMuxedFormatDescriptionRef;
  CMMuxedStreamType = FourCharCode;
  CMMuxedStreamTypePtr = ^CMMuxedStreamType;
{$endif}

{$ifdef FUNCTIONS}
function CMMuxedFormatDescriptionCreate(allocator: CFAllocatorRef CM_NULLABLE; muxType: CMMuxedStreamType; extensions: CFDictionaryRef CM_NULLABLE; outDesc: CM_RETURNS_RETAINED_PARAMETER CMMuxedFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMClosedCaptionFormatDescriptionRef = CMFormatDescriptionRef;
  CMClosedCaptionFormatDescriptionRefPtr = ^CMClosedCaptionFormatDescriptionRef;
  CMClosedCaptionFormatType = FourCharCode;
  CMClosedCaptionFormatTypePtr = ^CMClosedCaptionFormatType;
{$endif}

{$ifdef TYPES}
type
  CMTextFormatDescriptionRef = CMFormatDescriptionRef;
  CMTextFormatDescriptionRefPtr = ^CMTextFormatDescriptionRef;
  CMTextFormatType = FourCharCode;
  CMTextFormatTypePtr = ^CMTextFormatType;
{$endif}

{$ifdef TYPES}
type
  CMTextDisplayFlags = cuint32;
  CMTextDisplayFlagsPtr = ^CMTextDisplayFlags;
{$endif}

{$ifdef TYPES}
type
  CMTextJustificationValue = cint8;
  CMTextJustificationValuePtr = ^CMTextJustificationValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTextFormatDescriptionExtension_DisplayFlags: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_BackgroundColor: CFStringRef; cvar; external;
  kCMTextFormatDescriptionColor_Red: CFStringRef; cvar; external;
  kCMTextFormatDescriptionColor_Green: CFStringRef; cvar; external;
  kCMTextFormatDescriptionColor_Blue: CFStringRef; cvar; external;
  kCMTextFormatDescriptionColor_Alpha: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultTextBox: CFStringRef; cvar; external;
  kCMTextFormatDescriptionRect_Top: CFStringRef; cvar; external;
  kCMTextFormatDescriptionRect_Left: CFStringRef; cvar; external;
  kCMTextFormatDescriptionRect_Bottom: CFStringRef; cvar; external;
  kCMTextFormatDescriptionRect_Right: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultStyle: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_StartChar: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_Font: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_FontFace: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_ForegroundColor: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_FontSize: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_HorizontalJustification: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_VerticalJustification: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_EndChar: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_FontTable: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_TextJustification: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_Height: CFStringRef; cvar; external;
  kCMTextFormatDescriptionStyle_Ascent: CFStringRef; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultFontName: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTextFormatDescriptionGetDisplayFlags(desc: CMFormatDescriptionRef CM_NONNULL; outDisplayFlags: CMTextDisplayFlags* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTextFormatDescriptionGetJustification(desc: CMFormatDescriptionRef CM_NONNULL; outHorizontalJust: CMTextJustificationValue* CM_NULLABLE; outVerticalJust: CMTextJustificationValue* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTextFormatDescriptionGetDefaultTextBox(desc: CMFormatDescriptionRef CM_NONNULL; originIsAtTopLeft: Boolean; heightOfTextTrack: CGFloat; outDefaultTextBox: CGRect* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTextFormatDescriptionGetDefaultStyle(desc: CMFormatDescriptionRef CM_NONNULL; outLocalFontID: uint16_t* CM_NULLABLE; outBold: Boolean* CM_NULLABLE; outItalic: Boolean* CM_NULLABLE; outUnderline: Boolean* CM_NULLABLE; outFontSize: CGFloat* CM_NULLABLE; outColorComponents: CGFloatPtr { 4 element array of CGFloat }): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTextFormatDescriptionGetFontName(desc: CMFormatDescriptionRef CM_NONNULL; localFontID: cuint16; outFontName: CM_RETURNS_NOT_RETAINED_PARAMETER CFStringRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMSubtitleFormatType = FourCharCode;
  CMSubtitleFormatTypePtr = ^CMSubtitleFormatType;
{$endif}

{$ifdef TYPES}
type
  CMTimeCodeFormatDescriptionRef = CMFormatDescriptionRef;
  CMTimeCodeFormatDescriptionRefPtr = ^CMTimeCodeFormatDescriptionRef;
  CMTimeCodeFormatType = FourCharCode;
  CMTimeCodeFormatTypePtr = ^CMTimeCodeFormatType;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeCodeFormatDescriptionCreate(allocator: CFAllocatorRef CM_NULLABLE; timeCodeFormatType: CMTimeCodeFormatType; frameDuration: CMTime; frameQuanta: cuint32; tcFlags: cuint32; extensions: CFDictionaryRef CM_NULLABLE; descOut: CM_RETURNS_RETAINED_PARAMETER CMTimeCodeFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTimeCodeFormatDescriptionGetFrameDuration(timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTimeCodeFormatDescriptionGetFrameQuanta(timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef CM_NONNULL): cuint32; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMTimeCodeFormatDescriptionGetTimeCodeFlags(desc: CMTimeCodeFormatDescriptionRef CM_NONNULL): cuint32; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeCodeFormatDescriptionExtension_SourceReferenceName: CFStringRef; cvar; external;
  kCMTimeCodeFormatDescriptionKey_Value: CFStringRef; cvar; external;
  kCMTimeCodeFormatDescriptionKey_LangCode: CFStringRef; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CMMetadataFormatDescriptionRef = CMFormatDescriptionRef;
  CMMetadataFormatDescriptionRefPtr = ^CMMetadataFormatDescriptionRef;
  CMMetadataFormatType = FourCharCode;
  CMMetadataFormatTypePtr = ^CMMetadataFormatType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtensionKey_MetadataKeyTable: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_Namespace: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_Value: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_LocalID: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_DataType: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_DataTypeNamespace: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_ConformingDataTypes: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_LanguageTag: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_StructuralDependency: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionKey_SetupData: CFStringRef; cvar; external;
  kCMMetadataFormatDescription_StructuralDependencyKey_DependencyIsInvalidFlag: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_Identifier: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_DataType: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_ExtendedLanguageTag: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_StructuralDependency: CFStringRef; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_SetupData: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataFormatDescriptionCreateWithKeys(allocator: CFAllocatorRef CM_NULLABLE; metadataType: CMMetadataFormatType; keys: CFArrayRef CM_NULLABLE; outDesc: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMMetadataFormatDescriptionCreateWithMetadataSpecifications(allocator: CFAllocatorRef CM_NULLABLE; metadataType: CMMetadataFormatType; metadataSpecifications: CFArrayRef CM_NONNULL; outDesc: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataFormatDescriptionCreateWithMetadataFormatDescriptionAndMetadataSpecifications(allocator: CFAllocatorRef CM_NULLABLE; srcDesc: CMMetadataFormatDescriptionRef CM_NONNULL; metadataSpecifications: CFArrayRef CM_NONNULL; outDesc: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataFormatDescriptionCreateByMergingMetadataFormatDescriptions(allocator: CFAllocatorRef CM_NULLABLE; srcDesc1: CMMetadataFormatDescriptionRef CM_NONNULL; srcDesc2: CMMetadataFormatDescriptionRef CM_NONNULL; outDesc: CM_RETURNS_RETAINED_PARAMETER CMMetadataFormatDescriptionRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMMetadataFormatDescriptionGetKeyWithLocalID(desc: CMMetadataFormatDescriptionRef CM_NONNULL; localKeyID: OSType): CFDictionaryRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMMetadataFormatDescriptionGetIdentifiers(desc: CMMetadataFormatDescriptionRef CM_NONNULL): CFArrayRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
