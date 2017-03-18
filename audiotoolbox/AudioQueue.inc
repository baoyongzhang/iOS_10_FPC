{ Parsed from AudioToolbox.framework AudioQueue.h }

{$ifndef AudioToolbox_AudioQueue_h}

{$ifdef TYPES}
type
  AudioQueuePropertyID = UInt32;
  AudioQueuePropertyIDPtr = ^AudioQueuePropertyID;
  AudioQueueParameterID = UInt32;
  AudioQueueParameterIDPtr = ^AudioQueueParameterID;
  AudioQueueParameterValue = Float32;
  AudioQueueParameterValuePtr = ^AudioQueueParameterValue;
  AudioQueueRef = OpaqueType;
  AudioQueueTimelineRef = OpaqueType;
{$endif}

{$ifdef TYPES}
type
  AudioQueueProcessingTapFlags = UInt32;
  AudioQueueProcessingTapFlagsPtr = ^AudioQueueProcessingTapFlags;

const
  kAudioQueueProcessingTap_PreEffects = 1 shl 0;
  kAudioQueueProcessingTap_PostEffects = 1 shl 1;
  kAudioQueueProcessingTap_Siphon = 1 shl 2;
  kAudioQueueProcessingTap_StartOfStream = 1 shl 8;
  kAudioQueueProcessingTap_EndOfStream = 1 shl 9;

type
  AudioQueueBuffer = record
    mAudioDataBytesCapacity: UInt32;
    mAudioData: pointer;
    mAudioDataByteSize: UInt32;
    mUserData: void *__nullable;
    mPacketDescriptionCapacity: UInt32;
    mPacketDescriptions: AudioStreamPacketDescription *__nullable;
    mPacketDescriptionCount: UInt32;
    {$ifdef __cplusplus}
    {$endif}
  end;
type
  #endif}AudioQueueBuffer = AudioQueueBuffer;
type
  #endif}AudioQueueBufferPtr = ^AudioQueueBuffer;
type
  AudioQueueBufferPtr = ^AudioQueueBuffer;

type
  AudioQueueBufferRef = ^AudioQueueBuffer;

type
  AudioQueueParameterEvent = record
    mID: AudioQueueParameterID;
    mValue: AudioQueueParameterValue;
  end;
type
  AudioQueueParameterEventPtr = ^AudioQueueParameterEvent;
type
  AudioQueueLevelMeterState = record
    mAveragePower: Float32;
    mPeakPower: Float32;
  end;
type
  AudioQueueLevelMeterStatePtr = ^AudioQueueLevelMeterState;

type
  AudioQueueProcessingTapRef = OpaqueType;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioQueueChannelAssignment = record
    mDeviceUID: CFStringRef;
    mChannelNumber: UInt32;
  end;
type
  AudioQueueChannelAssignmentPtr = ^AudioQueueChannelAssignment;
{$endif}

{$endif}

{$if (defined(__BLOCKS__))}
{$ifdef TYPES}
type
  AudioQueueOutputCallbackBlock = OpaqueCBlock;
  AudioQueueInputCallbackBlock = OpaqueCBlock;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioQueueOutputCallback = procedure (inUserData: void* __nullable; inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef); cdecl;
  AudioQueueInputCallback = procedure (inUserData: void* __nullable; inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inStartTime: AudioTimeStampPtr; inNumberPacketDescriptions: UInt32; inPacketDescs: AudioStreamPacketDescription* __nullable); cdecl;
  AudioQueuePropertyListenerProc = procedure (inUserData: void* __nullable; inAQ: AudioQueueRef; inID: AudioQueuePropertyID); cdecl;
  AudioQueueProcessingTapCallback = procedure (inClientData: pointer; inAQTap: AudioQueueProcessingTapRef; inNumberFrames: UInt32; ioTimeStamp: AudioTimeStampPtr; ioFlags: AudioQueueProcessingTapFlagsPtr; outNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioQueueNewOutput(inFormat: AudioStreamBasicDescriptionPtr; inCallbackProc: AudioQueueOutputCallback; inUserData: void* __nullable; inCallbackRunLoop: CFRunLoopRef __nullable; inCallbackRunLoopMode: CFStringRef __nullable; inFlags: UInt32; outAQ: AudioQueueRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueNewInput(inFormat: AudioStreamBasicDescriptionPtr; inCallbackProc: AudioQueueInputCallback; inUserData: void* __nullable; inCallbackRunLoop: CFRunLoopRef __nullable; inCallbackRunLoopMode: CFStringRef __nullable; inFlags: UInt32; outAQ: AudioQueueRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$if (defined(__BLOCKS__))}
{$ifdef FUNCTIONS}
function AudioQueueNewOutputWithDispatchQueue(outAQ: AudioQueueRef __nullable* __nonnull; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; inCallbackDispatchQueue: dispatch_queue_t; inCallbackBlock: AudioQueueOutputCallbackBlock): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_10_0 }
function AudioQueueNewInputWithDispatchQueue(outAQ: AudioQueueRef __nullable* __nonnull; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; inCallbackDispatchQueue: dispatch_queue_t; inCallbackBlock: AudioQueueInputCallbackBlock): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_10_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioQueueDispose(inAQ: AudioQueueRef; inImmediate: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAllocateBuffer(inAQ: AudioQueueRef; inBufferByteSize: UInt32; outBuffer: AudioQueueBufferRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAllocateBufferWithPacketDescriptions(inAQ: AudioQueueRef; inBufferByteSize: UInt32; inNumberPacketDescriptions: UInt32; outBuffer: AudioQueueBufferRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioQueueFreeBuffer(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueEnqueueBuffer(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inNumPacketDescs: UInt32; inPacketDescs: AudioStreamPacketDescription* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueEnqueueBufferWithParameters(inAQ: AudioQueueRef; inBuffer: AudioQueueBufferRef; inNumPacketDescs: UInt32; inPacketDescs: AudioStreamPacketDescription* __nullable; inTrimFramesAtStart: UInt32; inTrimFramesAtEnd: UInt32; inNumParamValues: UInt32; inParamValues: AudioQueueParameterEvent* __nullable; inStartTime: AudioTimeStamp* __nullable; outActualStartTime: AudioTimeStamp* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueStart(inAQ: AudioQueueRef; inStartTime: AudioTimeStamp* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueuePrime(inAQ: AudioQueueRef; inNumberOfFramesToPrepare: UInt32; outNumberOfFramesPrepared: UInt32* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueStop(inAQ: AudioQueueRef; inImmediate: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueuePause(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueFlush(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueReset(inAQ: AudioQueueRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetParameter(inAQ: AudioQueueRef; inParamID: AudioQueueParameterID; outValue: AudioQueueParameterValuePtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetParameter(inAQ: AudioQueueRef; inParamID: AudioQueueParameterID; inValue: AudioQueueParameterValue): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetProperty(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; outData: pointer; ioDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetProperty(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inData: pointer; inDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetPropertySize(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; outDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueAddPropertyListener(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inProc: AudioQueuePropertyListenerProc; inUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueRemovePropertyListener(inAQ: AudioQueueRef; inID: AudioQueuePropertyID; inProc: AudioQueuePropertyListenerProc; inUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueCreateTimeline(inAQ: AudioQueueRef; outTimeline: AudioQueueTimelineRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDisposeTimeline(inAQ: AudioQueueRef; inTimeline: AudioQueueTimelineRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueGetCurrentTime(inAQ: AudioQueueRef; inTimeline: AudioQueueTimelineRef __nullable; outTimeStamp: AudioTimeStamp* __nullable; outTimelineDiscontinuity: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceGetCurrentTime(inAQ: AudioQueueRef; outTimeStamp: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceTranslateTime(inAQ: AudioQueueRef; inTime: AudioTimeStampPtr; outTime: AudioTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueDeviceGetNearestStartTime(inAQ: AudioQueueRef; ioRequestedStartTime: AudioTimeStampPtr; inFlags: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueSetOfflineRenderFormat(inAQ: AudioQueueRef; inFormat: AudioStreamBasicDescription* __nullable; inLayout: AudioChannelLayout* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueOfflineRender(inAQ: AudioQueueRef; inTimestamp: AudioTimeStampPtr; ioBuffer: AudioQueueBufferRef; inNumberFrames: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioQueueProcessingTapNew(inAQ: AudioQueueRef; inCallback: AudioQueueProcessingTapCallback; inClientData: void* __nullable; inFlags: AudioQueueProcessingTapFlags; outMaxFrames: UInt32Ptr; outProcessingFormat: AudioStreamBasicDescriptionPtr; outAQTap: AudioQueueProcessingTapRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapDispose(inAQTap: AudioQueueProcessingTapRef): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapGetSourceAudio(inAQTap: AudioQueueProcessingTapRef; inNumberFrames: UInt32; ioTimeStamp: AudioTimeStampPtr; outFlags: AudioQueueProcessingTapFlagsPtr; outNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioQueueProcessingTapGetQueueTime(inAQTap: AudioQueueProcessingTapRef; outQueueSampleTime: Float64Ptr; outQueueFrameCount: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_6_0 }
{$endif}

{$endif}
