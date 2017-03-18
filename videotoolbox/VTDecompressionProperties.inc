{ Parsed from VideoToolbox.framework VTDecompressionProperties.h }

{$ifndef VTDECOMPRESSIONPROPERTIES_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTDecompressionPropertyKey_PixelBufferPool: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_PixelBufferPoolIsShared: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_OutputPoolRequestedMinimumBufferCount: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_NumberOfFramesBeingDecoded: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_MinOutputPresentationTimeStampOfFramesBeingDecoded: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_MaxOutputPresentationTimeStampOfFramesBeingDecoded: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_ContentHasInterframeDependencies: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoDecoderSpecification_EnableHardwareAcceleratedVideoDecoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTVideoDecoderSpecification_RequireHardwareAcceleratedVideoDecoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_UsingHardwareAcceleratedVideoDecoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTDecompressionPropertyKey_RealTime: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_ThreadCount: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_FieldMode: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_FieldMode_BothFields: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_FieldMode_TopFieldOnly: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_FieldMode_BottomFieldOnly: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_FieldMode_SingleField: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_FieldMode_DeinterlaceFields: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_DeinterlaceMode: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_DeinterlaceMode_VerticalFilter: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_DeinterlaceMode_Temporal: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_ReducedResolutionDecode: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionResolutionKey_Width: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionResolutionKey_Height: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_ReducedCoefficientDecode: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_ReducedFrameDelivery: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_OnlyTheseFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_OnlyTheseFrames_AllFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_OnlyTheseFrames_NonDroppableFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_OnlyTheseFrames_IFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionProperty_OnlyTheseFrames_KeyFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_SuggestedQualityOfServiceTiers: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_SupportedPixelFormatsOrderedByQuality: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_SupportedPixelFormatsOrderedByPerformance: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_PixelFormatsWithReducedResolutionSupport: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTDecompressionPropertyKey_PixelTransferProperties: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
