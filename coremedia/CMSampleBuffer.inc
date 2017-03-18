{ Parsed from CoreMedia.framework CMSampleBuffer.h }

{$ifndef CMSAMPLEBUFFER_H}

{$ifdef TYPES}
type
  CMSampleBufferRef = OpaqueType;

type
  CMSampleTimingInfo = record
    duration: CMTime;
    presentationTimeStamp: CMTime;
    decodeTimeStamp: CMTime;
  end;
type
  CMSampleTimingInfoPtr = ^CMSampleTimingInfo;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimingInfoInvalid: CMSampleTimingInfo; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CMSampleBufferMakeDataReadyCallback = function (sbuf: CMSampleBufferRef CM_NONNULL; makeDataReadyRefcon: void* CM_NULLABLE): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferCreate(allocator: CFAllocatorRef CM_NULLABLE; dataBuffer: CMBlockBufferRef CM_NULLABLE; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback CM_NULLABLE; makeDataReadyRefcon: void* CM_NULLABLE; formatDescription: CMFormatDescriptionRef CM_NULLABLE; numSamples: CMItemCount; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfo* CM_NULLABLE; numSampleSizeEntries: CMItemCount; sampleSizeArray: size_t* CM_NULLABLE; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferCreateReady(allocator: CFAllocatorRef CM_NULLABLE; dataBuffer: CMBlockBufferRef CM_NULLABLE; formatDescription: CMFormatDescriptionRef CM_NULLABLE; numSamples: CMItemCount; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfo* CM_NULLABLE; numSampleSizeEntries: CMItemCount; sampleSizeArray: size_t* CM_NULLABLE; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMAudioSampleBufferCreateWithPacketDescriptions(allocator: CFAllocatorRef CM_NULLABLE; dataBuffer: CMBlockBufferRef CM_NULLABLE; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback CM_NULLABLE; makeDataReadyRefcon: void* CM_NULLABLE; formatDescription: CMFormatDescriptionRef CM_NONNULL; numSamples: CMItemCount; sbufPTS: CMTime; packetDescriptions: AudioStreamPacketDescription* CM_NULLABLE; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMAudioSampleBufferCreateReadyWithPacketDescriptions(allocator: CFAllocatorRef CM_NULLABLE; dataBuffer: CMBlockBufferRef CM_NULLABLE; formatDescription: CMFormatDescriptionRef CM_NONNULL; numSamples: CMItemCount; sbufPTS: CMTime; packetDescriptions: AudioStreamPacketDescription* CM_NULLABLE; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSampleBufferCreateForImageBuffer(allocator: CFAllocatorRef CM_NULLABLE; imageBuffer: CVImageBufferRef CM_NONNULL; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback CM_NULLABLE; makeDataReadyRefcon: void* CM_NULLABLE; formatDescription: CMVideoFormatDescriptionRef CM_NONNULL; sampleTiming: CMSampleTimingInfo* CM_NONNULL; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferCreateReadyWithImageBuffer(allocator: CFAllocatorRef CM_NULLABLE; imageBuffer: CVImageBufferRef CM_NONNULL; formatDescription: CMVideoFormatDescriptionRef CM_NONNULL; sampleTiming: CMSampleTimingInfo* CM_NONNULL; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSampleBufferCreateCopy(allocator: CFAllocatorRef CM_NULLABLE; sbuf: CMSampleBufferRef CM_NONNULL; sbufCopyOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferCreateCopyWithNewTiming(allocator: CFAllocatorRef CM_NULLABLE; originalSBuf: CMSampleBufferRef CM_NONNULL; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfo* CM_NULLABLE; sBufCopyOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferCopySampleBufferForRange(allocator: CFAllocatorRef CM_NULLABLE; sbuf: CMSampleBufferRef CM_NONNULL; sampleRange: CFRange; sBufOut: CM_RETURNS_RETAINED_PARAMETER CMSampleBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferSetDataBuffer(sbuf: CMSampleBufferRef CM_NONNULL; dataBuffer: CMBlockBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetDataBuffer(sbuf: CMSampleBufferRef CM_NONNULL): CMBlockBufferRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetImageBuffer(sbuf: CMSampleBufferRef CM_NONNULL): CVImageBufferRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferSetDataBufferFromAudioBufferList(sbuf: CMSampleBufferRef CM_NONNULL; bbufStructAllocator: CFAllocatorRef CM_NULLABLE; bbufMemoryAllocator: CFAllocatorRef CM_NULLABLE; flags: cuint32; bufferList: AudioBufferList* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer(sbuf: CMSampleBufferRef CM_NONNULL; bufferListSizeNeededOut: size_t* CM_NULLABLE; bufferListOut: AudioBufferList* CM_NULLABLE; bufferListSize: size_t; bbufStructAllocator: CFAllocatorRef CM_NULLABLE; bbufMemoryAllocator: CFAllocatorRef CM_NULLABLE; flags: cuint32; blockBufferOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetAudioStreamPacketDescriptions(sbuf: CMSampleBufferRef CM_NONNULL; packetDescriptionsSize: size_t; packetDescriptionsOut: AudioStreamPacketDescription* CM_NULLABLE; packetDescriptionsSizeNeededOut: size_t* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetAudioStreamPacketDescriptionsPtr(sbuf: CMSampleBufferRef CM_NONNULL; packetDescriptionsPtrOut: AudioStreamPacketDescription* CM_NULLABLE* CM_NULLABLE; packetDescriptionsSizeOut: size_t* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferCopyPCMDataIntoAudioBufferList(sbuf: CMSampleBufferRef CM_NONNULL; frameOffset: cint32; numFrames: cint32; bufferList: AudioBufferList* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_7_0 }
function CMSampleBufferSetDataReady(sbuf: CMSampleBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferDataIsReady(sbuf: CMSampleBufferRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferSetDataFailed(sbuf: CMSampleBufferRef CM_NONNULL; status: OSStatus): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSampleBufferHasDataFailed(sbuf: CMSampleBufferRef CM_NONNULL; statusOut: OSStatus* CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function CMSampleBufferMakeDataReady(sbuf: CMSampleBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferTrackDataReadiness(sbuf: CMSampleBufferRef CM_NONNULL; sbufToTrack: CMSampleBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferInvalidate(sbuf: CMSampleBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMSampleBufferInvalidateCallback = procedure (sbuf: CMSampleBufferRef CM_NONNULL; invalidateRefCon: cuint64); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferSetInvalidateCallback(sbuf: CMSampleBufferRef CM_NONNULL; invalidateCallback: CMSampleBufferInvalidateCallback CM_NONNULL; invalidateRefCon: cuint64): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMSampleBufferInvalidateHandler = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferSetInvalidateHandler(sbuf: CMSampleBufferRef CM_NONNULL; invalidateHandler: CMSampleBufferInvalidateHandler CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMSampleBufferIsValid(sbuf: CMSampleBufferRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSampleBufferNotification_DataBecameReady: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCMSampleBufferNotification_DataFailed: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMSampleBufferNotificationParameter_OSStatus: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
  kCMSampleBufferConduitNotification_InhibitOutputUntil: CFStringRef; cvar; external;
  kCMSampleBufferConduitNotificationParameter_ResumeTag: CFStringRef; cvar; external;
  kCMSampleBufferConduitNotification_ResetOutput: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCMSampleBufferConduitNotification_UpcomingOutputPTSRangeChanged: CFStringRef; cvar; external;
  kCMSampleBufferConduitNotificationParameter_UpcomingOutputPTSRangeMayOverlapQueuedOutputPTSRange: CFStringRef; cvar; external;
  kCMSampleBufferConduitNotificationParameter_MinUpcomingOutputPTS: CFStringRef; cvar; external;
  kCMSampleBufferConduitNotificationParameter_MaxUpcomingOutputPTS: CFStringRef; cvar; external;
  kCMSampleBufferConsumerNotification_BufferConsumed: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferGetNumSamples(sbuf: CMSampleBufferRef CM_NONNULL): CMItemCount; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetDuration(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetPresentationTimeStamp(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetDecodeTimeStamp(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetOutputDuration(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetOutputPresentationTimeStamp(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferSetOutputPresentationTimeStamp(sbuf: CMSampleBufferRef CM_NONNULL; outputPresentationTimeStamp: CMTime): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetOutputDecodeTimeStamp(sbuf: CMSampleBufferRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetSampleTimingInfoArray(sbuf: CMSampleBufferRef CM_NONNULL; timingArrayEntries: CMItemCount; timingArrayOut: CMSampleTimingInfo* CM_NULLABLE; timingArrayEntriesNeededOut: CMItemCount* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetOutputSampleTimingInfoArray(sbuf: CMSampleBufferRef CM_NONNULL; timingArrayEntries: CMItemCount; timingArrayOut: CMSampleTimingInfo* CM_NULLABLE; timingArrayEntriesNeededOut: CMItemCount* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetSampleTimingInfo(sbuf: CMSampleBufferRef CM_NONNULL; sampleIndex: CMItemIndex; timingInfoOut: CMSampleTimingInfo* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetSampleSizeArray(sbuf: CMSampleBufferRef CM_NONNULL; sizeArrayEntries: CMItemCount; sizeArrayOut: size_t* CM_NULLABLE; sizeArrayEntriesNeededOut: CMItemCount* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetSampleSize(sbuf: CMSampleBufferRef CM_NONNULL; sampleIndex: CMItemIndex): size_t; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetTotalSampleSize(sbuf: CMSampleBufferRef CM_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetFormatDescription(sbuf: CMSampleBufferRef CM_NONNULL): CM_NULLABLE CMFormatDescriptionRef; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMSampleBufferGetSampleAttachmentsArray(sbuf: CMSampleBufferRef CM_NONNULL; createIfNecessary: Boolean): CM_NULLABLE CFArrayRef; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSampleAttachmentKey_NotSync: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_PartialSync: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_HasRedundantCoding: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_IsDependedOnByOthers: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_DependsOnOthers: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_EarlierDisplayTimesAllowed: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_DisplayImmediately: CFStringRef; cvar; external;
  kCMSampleAttachmentKey_DoNotDisplay: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_ResetDecoderBeforeDecoding: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_DrainAfterDecoding: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_PostNotificationWhenConsumed: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_ResumeOutput: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_TransitionID: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCMSampleBufferAttachmentKey_TrimDurationAtStart: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_TrimDurationAtEnd: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_SpeedMultiplier: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_Reverse: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_FillDiscontinuitiesWithSilence: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_EmptyMedia: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_PermanentEmptyMedia: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_DisplayEmptyMediaImmediately: CFStringRef { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCMSampleBufferAttachmentKey_EndsPreviousSampleDuration: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_SampleReferenceURL: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_SampleReferenceByteOffset: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_GradualDecoderRefresh: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_DroppedFrameReason: CFStringRef; cvar; external;
  kCMSampleBufferDroppedFrameReason_FrameWasLate: CFStringRef { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  kCMSampleBufferDroppedFrameReason_OutOfBuffers: CFStringRef { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  kCMSampleBufferDroppedFrameReason_Discontinuity: CFStringRef { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  kCMSampleBufferAttachmentKey_DroppedFrameReasonInfo: CFStringRef; cvar; external;
  kCMSampleBufferDroppedFrameReasonInfo_CameraModeSwitch: CFStringRef { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  kCMSampleBufferAttachmentKey_StillImageLensStabilizationInfo: CFStringRef; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Active: CFStringRef; cvar; external;
  kCMSampleBufferLensStabilizationInfo_OutOfRange: CFStringRef; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Unavailable: CFStringRef; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Off: CFStringRef; cvar; external;
  kCMSampleBufferAttachmentKey_ForceKeyFrame: CFStringRef { available starting in __MAC_10_10,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
