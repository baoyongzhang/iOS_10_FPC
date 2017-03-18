{ Parsed from VideoToolbox.framework VTErrors.h }

{$ifndef VTERRORS_H}

{$ifdef TYPES}
type
  VTDecodeFrameFlags = cuint32;
  VTDecodeFrameFlagsPtr = ^VTDecodeFrameFlags;

const
  kVTDecodeFrame_EnableAsynchronousDecompression = 1 shl 0;
  kVTDecodeFrame_DoNotOutputFrame = 1 shl 1;
  kVTDecodeFrame_1xRealTimePlayback = 1 shl 2;
  kVTDecodeFrame_EnableTemporalProcessing = 1 shl 3;

type
  VTDecodeInfoFlags = UInt32;
  VTDecodeInfoFlagsPtr = ^VTDecodeInfoFlags;

const
  kVTDecodeInfo_Asynchronous = 1 shl 0;
  kVTDecodeInfo_FrameDropped = 1 shl 1;
  kVTDecodeInfo_ImageBufferModifiable = 1 shl 2;

type
  VTEncodeInfoFlags = UInt32;
  VTEncodeInfoFlagsPtr = ^VTEncodeInfoFlags;

const
  kVTEncodeInfo_Asynchronous = 1 shl 0;
  kVTEncodeInfo_FrameDropped = 1 shl 1;
{$endif}

{$endif}
