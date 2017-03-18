{ Parsed from AudioToolbox.framework CAFFile.h }

{$ifndef AudioToolbox_CAFFile_h}

{$ifdef TYPES}
type
  CAFFileHeader = record
    mFileType: UInt32;
    mFileVersion: UInt16;
    mFileFlags: UInt16;
  end;
type
  CAFFileHeaderPtr = ^CAFFileHeader;
type
  CAFChunkHeader = record
    mChunkType: UInt32;
    mChunkSize: SInt64;
  end;
type
  CAFChunkHeaderPtr = ^CAFChunkHeader;
type
  CAF_UUID_ChunkHeader = record
    mHeader: CAFChunkHeader;
    mUUID:array[0..15] of UInt8;
  end;
type
  CAF_UUID_ChunkHeaderPtr = ^CAF_UUID_ChunkHeader;

type
  CAFFormatFlags = UInt32;
  CAFFormatFlagsPtr = ^CAFFormatFlags;

const
  kCAFLinearPCMFormatFlagIsFloat = 1 shl 0;
  kCAFLinearPCMFormatFlagIsLittleEndian = 1 shl 1;

type
  CAFAudioDescription = record
    mSampleRate: Float64;
    mFormatID: UInt32;
    mFormatFlags: CAFFormatFlags;
    mBytesPerPacket: UInt32;
    mFramesPerPacket: UInt32;
    mChannelsPerFrame: UInt32;
    mBitsPerChannel: UInt32;
  end;
type
  CAFAudioDescriptionPtr = ^CAFAudioDescription;
type
  CAFAudioFormatListItem = record
    mFormat: CAFAudioDescription;
    mChannelLayoutTag: UInt32;
  end;
type
  CAFAudioFormatListItemPtr = ^CAFAudioFormatListItem;
type
  CAFPacketTableHeader = record
    mNumberPackets: SInt64;
    mNumberValidFrames: SInt64;
    mPrimingFrames: SInt32;
    mRemainderFrames: SInt32;
    mPacketDescriptions:array[0..0] of UInt8;
  end;
type
  CAFPacketTableHeaderPtr = ^CAFPacketTableHeader;
type
  CAFDataChunk = record
    mEditCount: UInt32;
    mData:array[0..0] of UInt8;
  end;
type
  CAFDataChunkPtr = ^CAFDataChunk;
type
  CAF_SMPTE_Time = record
    mHours: SInt8;
    mMinutes: SInt8;
    mSeconds: SInt8;
    mFrames: SInt8;
    mSubFrameSampleOffset: UInt32;
  end;
type
  CAF_SMPTE_TimePtr = ^CAF_SMPTE_Time;
type
  CAFMarker = record
    mType: UInt32;
    mFramePosition: Float64;
    mMarkerID: UInt32;
    mSMPTETime: CAF_SMPTE_Time;
    mChannel: UInt32;
  end;
type
  CAFMarkerPtr = ^CAFMarker;
type
  CAFMarkerChunk = record
    mSMPTE_TimeType: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of CAFMarker;
  end;
type
  CAFMarkerChunkPtr = ^CAFMarkerChunk;

type
  CAFRegionFlags = UInt32;
  CAFRegionFlagsPtr = ^CAFRegionFlags;

const
  kCAFRegionFlag_LoopEnable = 1;
  kCAFRegionFlag_PlayForward = 2;
  kCAFRegionFlag_PlayBackward = 4;

type
  CAFRegion = record
    mRegionID: UInt32;
    mFlags: CAFRegionFlags;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of CAFMarker;
  end;
type
  CAFRegionPtr = ^CAFRegion;
type
  CAFRegionChunk = record
    mSMPTE_TimeType: UInt32;
    mNumberRegions: UInt32;
    mRegions:array[0..0] of CAFRegion;
  end;
type
  CAFRegionChunkPtr = ^CAFRegionChunk;
type
  CAFInstrumentChunk = record
    mBaseNote: Float32;
    mMIDILowNote: UInt8;
    mMIDIHighNote: UInt8;
    mMIDILowVelocity: UInt8;
    mMIDIHighVelocity: UInt8;
    mdBGain: Float32;
    mStartRegionID: UInt32;
    mSustainRegionID: UInt32;
    mReleaseRegionID: UInt32;
    mInstrumentID: UInt32;
  end;
type
  CAFInstrumentChunkPtr = ^CAFInstrumentChunk;
type
  CAFStringID = record
    mStringID: UInt32;
    mStringStartByteOffset: SInt64;
  end;
type
  CAFStringIDPtr = ^CAFStringID;
type
  CAFStrings = record
    mNumEntries: UInt32;
    mStringsIDs:array[0..0] of CAFStringID;
  end;
type
  CAFStringsPtr = ^CAFStrings;
type
  CAFInfoStrings = record
    mNumEntries: UInt32;
  end;
type
  CAFInfoStringsPtr = ^CAFInfoStrings;
type
  CAFPositionPeak = record
    mValue: Float32;
    mFrameNumber: UInt64;
  end;
type
  CAFPositionPeakPtr = ^CAFPositionPeak;
type
  CAFPeakChunk = record
    mEditCount: UInt32;
    mPeaks:array[0..0] of CAFPositionPeak;
  end;
type
  CAFPeakChunkPtr = ^CAFPeakChunk;
type
  CAFOverviewSample = record
    mMinValue: SInt16;
    mMaxValue: SInt16;
  end;
type
  CAFOverviewSamplePtr = ^CAFOverviewSample;
type
  CAFOverviewChunk = record
    mEditCount: UInt32;
    mNumFramesPerOVWSample: UInt32;
    mData:array[0..0] of CAFOverviewSample;
  end;
type
  CAFOverviewChunkPtr = ^CAFOverviewChunk;
type
  CAFUMIDChunk = record
    mBytes:array[0..63] of UInt8;
  end;
type
  CAFUMIDChunkPtr = ^CAFUMIDChunk;
{$endif}

{$endif}
