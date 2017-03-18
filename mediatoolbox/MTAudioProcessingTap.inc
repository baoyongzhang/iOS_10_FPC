{ Parsed from MediaToolbox.framework MTAudioProcessingTap.h }

{$ifndef MTAUDIOPROCESSINGTAP_H}

{$ifdef TYPES}
type
  MTAudioProcessingTapRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function MTAudioProcessingTapGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
{$endif}

{$ifdef TYPES}
type
  MTAudioProcessingTapCreationFlags = cuint32;
  MTAudioProcessingTapCreationFlagsPtr = ^MTAudioProcessingTapCreationFlags;
{$endif}

{$ifdef TYPES}
type
  MTAudioProcessingTapFlags = cuint32;
  MTAudioProcessingTapFlagsPtr = ^MTAudioProcessingTapFlags;
{$endif}

{$ifdef TYPES}
type
  MTAudioProcessingTapInitCallback = procedure (tap: MTAudioProcessingTapRef CM_NONNULL; clientInfo: void* CM_NULLABLE; tapStorageOut: void* CM_NULLABLE* CM_NONNULL); cdecl;
  MTAudioProcessingTapFinalizeCallback = procedure (tap: MTAudioProcessingTapRef CM_NONNULL); cdecl;
  MTAudioProcessingTapPrepareCallback = procedure (tap: MTAudioProcessingTapRef CM_NONNULL; maxFrames: CMItemCount; processingFormat: AudioStreamBasicDescription* CM_NONNULL); cdecl;
  MTAudioProcessingTapUnprepareCallback = procedure (tap: MTAudioProcessingTapRef CM_NONNULL); cdecl;
  MTAudioProcessingTapProcessCallback = procedure (tap: MTAudioProcessingTapRef CM_NONNULL; numberFrames: CMItemCount; flags: MTAudioProcessingTapFlags; bufferListInOut: AudioBufferList* CM_NONNULL; numberFramesOut: CMItemCount* CM_NONNULL; flagsOut: MTAudioProcessingTapFlags* CM_NONNULL); cdecl;
{$endif}

{$ifdef TYPES}
type
  MTAudioProcessingTapCallbacks = record
    version: cint;
    clientInfo: void *CM_NULLABLE;
    init: MTAudioProcessingTapInitCallback CM_NULLABLE;
    finalize: MTAudioProcessingTapFinalizeCallback CM_NULLABLE;
    prepare: MTAudioProcessingTapPrepareCallback CM_NULLABLE;
    unprepare: MTAudioProcessingTapUnprepareCallback CM_NULLABLE;
    process: MTAudioProcessingTapProcessCallback CM_NONNULL;
  end;
type
  MTAudioProcessingTapCallbacksPtr = ^MTAudioProcessingTapCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function MTAudioProcessingTapCreate(allocator: CFAllocatorRef CM_NULLABLE; callbacks: MTAudioProcessingTapCallbacks* CM_NONNULL; flags: MTAudioProcessingTapCreationFlags; tapOut: MTAudioProcessingTapRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
function MTAudioProcessingTapGetStorage(tap: CM_NONNULL MTAudioProcessingTapRef): void* CM_NONNULL; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
function MTAudioProcessingTapGetSourceAudio(tap: MTAudioProcessingTapRef CM_NONNULL; numberFrames: CMItemCount; bufferListInOut: AudioBufferList* CM_NONNULL; flagsOut: MTAudioProcessingTapFlags* CM_NULLABLE; timeRangeOut: CMTimeRange* CM_NULLABLE; numberFramesOut: CMItemCount* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
{$endif}

{$endif}
