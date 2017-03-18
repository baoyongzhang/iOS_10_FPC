{ Parsed from VideoToolbox.framework VTCompressionProperties.h }

{$ifndef VTCOMPRESSIONPROPERTIES_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTCompressionPropertyKey_NumberOfPendingFrames: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_PixelBufferPoolIsShared: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_VideoEncoderPixelBufferAttributes: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MaxKeyFrameInterval: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MaxKeyFrameIntervalDuration: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_AllowTemporalCompression: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_AllowFrameReordering: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_AverageBitRate: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_DataRateLimits: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_Quality: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MoreFramesBeforeStart: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MoreFramesAfterEnd: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ProfileLevel: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_1_3: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_3_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_3_1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_3_2: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_4_0: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_4_1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_4_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_5_0: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_5_1: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_5_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Baseline_AutoLevel: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_3_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_3_1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_3_2: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_4_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_4_1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_4_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_5_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_5_1: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_5_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Main_AutoLevel: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Extended_5_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_Extended_AutoLevel: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_3_0: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_3_1: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_3_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_4_0: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_4_1: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_4_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_5_0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_5_1: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_5_2: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H264_High_AutoLevel: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Simple_L0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Simple_L1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Simple_L2: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Simple_L3: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Main_L2: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Main_L3: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_Main_L4: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_AdvancedSimple_L0: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_AdvancedSimple_L1: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_AdvancedSimple_L2: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_AdvancedSimple_L3: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_MP4V_AdvancedSimple_L4: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H263_Profile0_Level10: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H263_Profile0_Level45: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTProfileLevel_H263_Profile3_Level45: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_H264EntropyMode: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTH264EntropyMode_CAVLC: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTH264EntropyMode_CABAC: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_Depth: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MaxFrameDelayCount: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kVTUnlimitedFrameDelayCount = -1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTCompressionPropertyKey_MaxH264SliceBytes: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_RealTime: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_SourceFrameCount: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ExpectedFrameRate: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ExpectedDuration: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoEncoderSpecification_EnableHardwareAcceleratedVideoEncoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderSpecification_RequireHardwareAcceleratedVideoEncoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_UsingHardwareAcceleratedVideoEncoder: CFStringRef { available starting in __MAC_10_9,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTEncodeFrameOptionKey_ForceKeyFrame: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_CleanAperture: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_PixelAspectRatio: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_FieldCount: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_FieldDetail: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_AspectRatio16x9: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ProgressiveScan: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ColorPrimaries: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_TransferFunction: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_YCbCrMatrix: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_ICCProfile: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_PixelTransferProperties: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTCompressionPropertyKey_MultiPassStorage: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
