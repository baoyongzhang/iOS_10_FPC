{ Parsed from VideoToolbox.framework VTDecompressionSession.h }

{$ifndef VTDECOMPRESSIONSESSION_H}

{$ifdef TYPES}
type
  VTDecompressionSessionRef = OpaqueType;
  VTDecompressionOutputCallback = procedure (decompressionOutputRefCon: void* CM_NULLABLE; sourceFrameRefCon: void* CM_NULLABLE; status: OSStatus; infoFlags: VTDecodeInfoFlags; imageBuffer: CM_NULLABLE CVImageBufferRef; presentationTimeStamp: CMTime; presentationDuration: CMTime); cdecl;

type
  VTDecompressionOutputCallbackRecord = record
    decompressionOutputCallback: CM_NULLABLE VTDecompressionOutputCallback;
    decompressionOutputRefCon: void *CM_NULLABLE;
  end;
type
  VTDecompressionOutputCallbackRecordPtr = ^VTDecompressionOutputCallbackRecord;
{$endif}

{$ifdef FUNCTIONS}
function VTDecompressionSessionCreate(allocator: CM_NULLABLE CFAllocatorRef; videoFormatDescription: CM_NONNULL CMVideoFormatDescriptionRef; videoDecoderSpecification: CM_NULLABLE CFDictionaryRef; destinationImageBufferAttributes: CM_NULLABLE CFDictionaryRef; outputCallback: VTDecompressionOutputCallbackRecord* CM_NULLABLE; decompressionSessionOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE VTDecompressionSessionRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
procedure VTDecompressionSessionInvalidate(session: CM_NONNULL VTDecompressionSessionRef); cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionDecodeFrame(session: CM_NONNULL VTDecompressionSessionRef; sampleBuffer: CM_NONNULL CMSampleBufferRef; decodeFlags: VTDecodeFrameFlags; sourceFrameRefCon: void* CM_NULLABLE; infoFlagsOut: VTDecodeInfoFlags* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  VTDecompressionOutputHandler = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
function VTDecompressionSessionDecodeFrameWithOutputHandler(session: CM_NONNULL VTDecompressionSessionRef; sampleBuffer: CM_NONNULL CMSampleBufferRef; decodeFlags: VTDecodeFrameFlags; infoFlagsOut: VTDecodeInfoFlags* CM_NULLABLE; outputHandler: CM_NONNULL VTDecompressionOutputHandler): OSStatus; cdecl; external; { available starting in __MAC_10_11,__IPHONE_9_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function VTDecompressionSessionFinishDelayedFrames(session: CM_NONNULL VTDecompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionCanAcceptFormatDescription(session: CM_NONNULL VTDecompressionSessionRef; newFormatDesc: CM_NONNULL CMFormatDescriptionRef): Boolean; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionWaitForAsynchronousFrames(session: CM_NONNULL VTDecompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionCopyBlackPixelBuffer(session: CM_NONNULL VTDecompressionSessionRef; pixelBufferOut: CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CVPixelBufferRef* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$endif}
