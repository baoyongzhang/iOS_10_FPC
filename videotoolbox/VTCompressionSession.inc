{ Parsed from VideoToolbox.framework VTCompressionSession.h }

{$ifndef VTCOMPRESSIONSESSION_H}

{$ifdef TYPES}
type
  VTCompressionSessionRef = OpaqueType;
  VTCompressionOutputCallback = procedure (outputCallbackRefCon: void* CM_NULLABLE; sourceFrameRefCon: void* CM_NULLABLE; status: OSStatus; infoFlags: VTEncodeInfoFlags; sampleBuffer: CM_NULLABLE CMSampleBufferRef); cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoEncoderSpecification_EncoderID: CFStringRef { available starting in __MAC_10_8, __IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTCompressionSessionCreate(allocator: CM_NULLABLE CFAllocatorRef; width: cint32; height: cint32; codecType: CMVideoCodecType; encoderSpecification: CM_NULLABLE CFDictionaryRef; sourceImageBufferAttributes: CM_NULLABLE CFDictionaryRef; compressedDataAllocator: CM_NULLABLE CFAllocatorRef; outputCallback: CM_NULLABLE VTCompressionOutputCallback; outputCallbackRefCon: void* CM_NULLABLE; compressionSessionOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE VTCompressionSessionRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
procedure VTCompressionSessionInvalidate(session: CM_NONNULL VTCompressionSessionRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionGetPixelBufferPool(session: CM_NONNULL VTCompressionSessionRef): CM_NULLABLE CVPixelBufferPoolRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionPrepareToEncodeFrames(session: CM_NONNULL VTCompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_9, __IPHONE_8_0 }
function VTCompressionSessionEncodeFrame(session: CM_NONNULL VTCompressionSessionRef; imageBuffer: CM_NONNULL CVImageBufferRef; presentationTimeStamp: CMTime; duration: CMTime; frameProperties: CM_NULLABLE CFDictionaryRef; sourceFrameRefCon: void* CM_NULLABLE; infoFlagsOut: VTEncodeInfoFlags* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  VTCompressionOutputHandler = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
function VTCompressionSessionEncodeFrameWithOutputHandler(session: CM_NONNULL VTCompressionSessionRef; imageBuffer: CM_NONNULL CVImageBufferRef; presentationTimeStamp: CMTime; duration: CMTime; frameProperties: CM_NULLABLE CFDictionaryRef; infoFlagsOut: VTEncodeInfoFlags* CM_NULLABLE; outputHandler: CM_NONNULL VTCompressionOutputHandler): OSStatus; cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function VTCompressionSessionCompleteFrames(session: CM_NONNULL VTCompressionSessionRef; completeUntilPresentationTimeStamp: CMTime): OSStatus; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  VTCompressionSessionOptionFlags = cuint32;
  VTCompressionSessionOptionFlagsPtr = ^VTCompressionSessionOptionFlags;

const
  kVTCompressionSessionBeginFinalPass = 1 shl 0;
{$endif}

{$ifdef FUNCTIONS}
function VTCompressionSessionBeginPass(session: CM_NONNULL VTCompressionSessionRef; beginPassFlags: VTCompressionSessionOptionFlags; reserved: uint32_t* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTCompressionSessionEndPass(session: CM_NONNULL VTCompressionSessionRef; furtherPassesRequestedOut: Boolean* CM_NULLABLE; reserved: uint32_t* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTCompressionSessionGetTimeRangesForNextPass(session: CM_NONNULL VTCompressionSessionRef; timeRangeCountOut: CMItemCount* CM_NONNULL; timeRangeArrayOut: CMTimeRange* CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external;
{$endif}

{$endif}
