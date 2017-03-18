{ Parsed from CoreVideo.framework CVImageBuffer.h }

{$if  not (defined(__COREVIDEO_CVIMAGEBUFFER_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVIMAGEBUFFER_H__ = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVImageBufferCGColorSpaceKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureWidthKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureHeightKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureHorizontalOffsetKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferCleanApertureVerticalOffsetKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPreferredCleanApertureKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldCountKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailTemporalTopFirst: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailTemporalBottomFirst: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailSpatialFirstLineEarly: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferFieldDetailSpatialFirstLineLate: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioHorizontalSpacingKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferPixelAspectRatioVerticalSpacingKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayDimensionsKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayWidthKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferDisplayHeightKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferGammaLevelKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferICCProfileKey: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrixKey: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_709_2: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_601_4: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_SMPTE_240M_1995: CFStringRef CV_NONNULL { available starting in __MAC_10_4,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_DCI_P3: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_P3_D65: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferYCbCrMatrix_ITU_R_2020: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimariesKey: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_ITU_R_709_2: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_EBU_3213: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_SMPTE_C: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferColorPrimaries_P22: CFStringRef CV_NONNULL { available starting in __MAC_10_8,__IPHONE_6_0 }; cvar; external;
  kCVImageBufferColorPrimaries_DCI_P3: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimaries_P3_D65: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferColorPrimaries_ITU_R_2020: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferTransferFunctionKey: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_ITU_R_709_2: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_240M_1995: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_UseGamma: CFStringRef CV_NONNULL { available starting in __MAC_10_6,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferTransferFunction_EBU_3213: CFStringRef CV_NONNULL deprecated 'in __MAC_10_5,__MAC_10_6,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_C: CFStringRef CV_NONNULL deprecated 'in __MAC_10_5,__MAC_10_6,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kCVImageBufferTransferFunction_ITU_R_2020: CFStringRef CV_NONNULL { available starting in __MAC_10_11,__IPHONE_9_0 }; cvar; external;
  kCVImageBufferTransferFunction_SMPTE_ST_428_1: CFStringRef CV_NONNULL { available starting in __MAC_10_12,__IPHONE_10_0 }; cvar; external;
  kCVImageBufferChromaLocationTopFieldKey: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocationBottomFieldKey: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Left: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Center: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_TopLeft: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Top: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_BottomLeft: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_Bottom: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaLocation_DV420: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsamplingKey: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_420: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_422: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferChromaSubsampling_411: CFStringRef CV_NONNULL { available starting in __MAC_10_5,__IPHONE_4_0 }; cvar; external;
  kCVImageBufferAlphaChannelIsOpaque: CFStringRef CV_NONNULL { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CVImageBufferRef = CVBufferRef;
  CVImageBufferRefPtr = ^CVImageBufferRef;
{$endif}

{$ifdef FUNCTIONS}
function CVImageBufferGetEncodedSize(imageBuffer: CVImageBufferRef CV_NONNULL): CGSize; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferGetDisplaySize(imageBuffer: CVImageBufferRef CV_NONNULL): CGSize; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferGetCleanRect(imageBuffer: CVImageBufferRef CV_NONNULL): CGRect; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferIsFlipped(imageBuffer: CVImageBufferRef CV_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$if defined(COREVIDEO_SUPPORTS_COLORSPACE)}
{$ifdef FUNCTIONS}
function CVImageBufferGetColorSpace(imageBuffer: CVImageBufferRef CV_NONNULL): CGColorSpaceRef CV_NULLABLE; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVImageBufferCreateColorSpaceFromAttachments(attachments: CFDictionaryRef CV_NONNULL): CGColorSpaceRef CV_NULLABLE; cdecl; external; { available starting in __MAC_10_8,__IPHONE_NA }
{$endif}

{$endif}

{$endif}
