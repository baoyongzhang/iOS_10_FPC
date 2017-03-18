{ Parsed from CoreAudio.framework CoreAudioTypes.h }

{$if  not (defined(CoreAudio_CoreAudioTypes_h))}
{$ifdef TYPES}
const
  COREAUDIOTYPES_VERSION = 20150414;
{$endif}

{$if  not (defined(CA_PREFER_FIXED_POINT))}

{$if defined(TARGET_OS_IPHONE)}

{$if (defined(TARGET_CPU_X86) or defined(TARGET_CPU_X86_64) or defined(TARGET_CPU_PPC) or defined(TARGET_CPU_PPC64)) and not defined(TARGET_IPHONE_SIMULATOR)}
{$ifdef TYPES}
const
  CA_PREFER_FIXED_POINT = 0;
{$endif}

{$else}
{$ifdef TYPES}
const
  CA_PREFER_FIXED_POINT = 1;
{$endif}

{$endif}

{$else}
{$ifdef TYPES}
const
  CA_PREFER_FIXED_POINT = 0;
{$endif}

{$endif}
{$endif}

{$ifdef TYPES}
type
  AudioValueRange = record
    mMinimum: Float64;
    mMaximum: Float64;
  end;
type
  AudioValueRangePtr = ^AudioValueRange;
type
  AudioValueTranslation = record
    mInputData: void *__nonnull;
    mInputDataSize: UInt32;
    mOutputData: void *__nonnull;
    mOutputDataSize: UInt32;
  end;
type
  AudioValueTranslationPtr = ^AudioValueTranslation;
type
  AudioBuffer = record
    mNumberChannels: UInt32;
    mDataByteSize: UInt32;
    mData: void *__nullable;
  end;
type
  AudioBufferPtr = ^AudioBuffer;
type
  AudioBufferList = record
    mNumberBuffers: UInt32;
    mBuffers:array[0..0] of AudioBuffer;
    {$if (defined(__cplusplus)) and (defined(CA_STRICT)) and defined(CA_STRICT)}
    AudioBufferList&): AudioBufferList(;
    AudioBufferList&)_: AudioBufferList& operator=(;
    {$endif}
  end;
type
  private:AudioBufferList(AudioBufferList&) = AudioBufferList;
type
  private:AudioBufferList(AudioBufferList&)Ptr = ^AudioBufferList;
type
  AudioBufferListPtr = ^AudioBufferList;
{$endif}

{$endif}

{$if  not defined(CA_PREFER_FIXED_POINT)}
{$ifdef TYPES}
type
  AudioSampleType = Float32;
  AudioSampleTypePtr = ^AudioSampleType;
  AudioUnitSampleType = Float32;
  AudioUnitSampleTypePtr = ^AudioUnitSampleType;
{$endif}

{$else}
{$ifdef TYPES}
type
  AudioSampleType = SInt16;
  AudioSampleTypePtr = ^AudioSampleType;
  AudioUnitSampleType = SInt32;
  AudioUnitSampleTypePtr = ^AudioUnitSampleType;

const
  kAudioUnitSampleFractionBits = 24;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioFormatID = UInt32;
  AudioFormatIDPtr = ^AudioFormatID;
  AudioFormatFlags = UInt32;
  AudioFormatFlagsPtr = ^AudioFormatFlags;

type
  AudioStreamBasicDescription = record
    mSampleRate: Float64;
    mFormatID: AudioFormatID;
    mFormatFlags: AudioFormatFlags;
    mBytesPerPacket: UInt32;
    mFramesPerPacket: UInt32;
    mBytesPerFrame: UInt32;
    mChannelsPerFrame: UInt32;
    mBitsPerChannel: UInt32;
    mReserved: UInt32;
  end;
type
  AudioStreamBasicDescriptionPtr = ^AudioStreamBasicDescription;
{$endif}

{$ifdef TYPES}
type
  AudioStreamPacketDescription = record
    mStartOffset: SInt64;
    mVariableFramesInPacket: UInt32;
    mDataByteSize: UInt32;
  end;
type
  AudioStreamPacketDescriptionPtr = ^AudioStreamPacketDescription;
{$endif}

{$if  not (defined(__SMPTETime__))}
{$ifdef TYPES}
type
  SMPTETimeType = UInt32;
  SMPTETimeTypePtr = ^SMPTETimeType;

const
  kSMPTETimeType24 = 0;
  kSMPTETimeType25 = 1;
  kSMPTETimeType30Drop = 2;
  kSMPTETimeType30 = 3;
  kSMPTETimeType2997 = 4;
  kSMPTETimeType2997Drop = 5;
  kSMPTETimeType60 = 6;
  kSMPTETimeType5994 = 7;
  kSMPTETimeType60Drop = 8;
  kSMPTETimeType5994Drop = 9;
  kSMPTETimeType50 = 10;
  kSMPTETimeType2398 = 11;

type
  SMPTETimeFlags = UInt32;
  SMPTETimeFlagsPtr = ^SMPTETimeFlags;

const
  kSMPTETimeUnknown = 0;
  kSMPTETimeValid = 1 shl 0;
  kSMPTETimeRunning = 1 shl 1;

type
  SMPTETime = record
    mSubframes: SInt16;
    mSubframeDivisor: SInt16;
    mCounter: UInt32;
    mType: SMPTETimeType;
    mFlags: SMPTETimeFlags;
    mHours: SInt16;
    mMinutes: SInt16;
    mSeconds: SInt16;
    mFrames: SInt16;
  end;
type
  SMPTETimePtr = ^SMPTETime;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioTimeStampFlags = UInt32;
  AudioTimeStampFlagsPtr = ^AudioTimeStampFlags;

const
  kAudioTimeStampNothingValid = 0;
  kAudioTimeStampSampleTimeValid = 1 shl 0;
  kAudioTimeStampHostTimeValid = 1 shl 1;
  kAudioTimeStampRateScalarValid = 1 shl 2;
  kAudioTimeStampWordClockTimeValid = 1 shl 3;
  kAudioTimeStampSMPTETimeValid = 1 shl 4;
  kAudioTimeStampSampleHostTimeValid = kAudioTimeStampSampleTimeValid + kAudioTimeStampHostTimeValid;

type
  AudioTimeStamp = record
    mSampleTime: Float64;
    mHostTime: UInt64;
    mRateScalar: Float64;
    mWordClockTime: UInt64;
    mSMPTETime: SMPTETime;
    mFlags: AudioTimeStampFlags;
    mReserved: UInt32;
  end;
type
  AudioTimeStampPtr = ^AudioTimeStamp;
{$endif}

{$ifdef TYPES}
type
  AudioClassDescription = record
    mType: OSType;
    mSubType: OSType;
    mManufacturer: OSType;
  end;
type
  AudioClassDescriptionPtr = ^AudioClassDescription;

type
  AudioChannelLabel = UInt32;
  AudioChannelLabelPtr = ^AudioChannelLabel;
  AudioChannelLayoutTag = UInt32;
  AudioChannelLayoutTagPtr = ^AudioChannelLayoutTag;
  AudioChannelBitmap = UInt32;
  AudioChannelBitmapPtr = ^AudioChannelBitmap;

const
  kAudioChannelBit_Left = 1 shl 0;
  kAudioChannelBit_Right = 1 shl 1;
  kAudioChannelBit_Center = 1 shl 2;
  kAudioChannelBit_LFEScreen = 1 shl 3;
  kAudioChannelBit_LeftSurround = 1 shl 4;
  kAudioChannelBit_RightSurround = 1 shl 5;
  kAudioChannelBit_LeftCenter = 1 shl 6;
  kAudioChannelBit_RightCenter = 1 shl 7;
  kAudioChannelBit_CenterSurround = 1 shl 8;
  kAudioChannelBit_LeftSurroundDirect = 1 shl 9;
  kAudioChannelBit_RightSurroundDirect = 1 shl 10;
  kAudioChannelBit_TopCenterSurround = 1 shl 11;
  kAudioChannelBit_VerticalHeightLeft = 1 shl 12;
  kAudioChannelBit_VerticalHeightCenter = 1 shl 13;
  kAudioChannelBit_VerticalHeightRight = 1 shl 14;
  kAudioChannelBit_TopBackLeft = 1 shl 15;
  kAudioChannelBit_TopBackCenter = 1 shl 16;
  kAudioChannelBit_TopBackRight = 1 shl 17;

type
  AudioChannelFlags = UInt32;
  AudioChannelFlagsPtr = ^AudioChannelFlags;

const
  kAudioChannelFlags_AllOff = 0;
  kAudioChannelFlags_RectangularCoordinates = 1 shl 0;
  kAudioChannelFlags_SphericalCoordinates = 1 shl 1;
  kAudioChannelFlags_Meters = 1 shl 2;

type
  AudioChannelCoordinateIndex = UInt32;
  AudioChannelCoordinateIndexPtr = ^AudioChannelCoordinateIndex;

const
  kAudioChannelCoordinates_LeftRight = 0;
  kAudioChannelCoordinates_BackFront = 1;
  kAudioChannelCoordinates_DownUp = 2;
  kAudioChannelCoordinates_Azimuth = 0;
  kAudioChannelCoordinates_Elevation = 1;
  kAudioChannelCoordinates_Distance = 2;

type
  AudioChannelDescription = record
    mChannelLabel: AudioChannelLabel;
    mChannelFlags: AudioChannelFlags;
    mCoordinates:array[0..2] of Float32;
  end;
type
  AudioChannelDescriptionPtr = ^AudioChannelDescription;
type
  AudioChannelLayout = record
    mChannelLayoutTag: AudioChannelLayoutTag;
    mChannelBitmap: AudioChannelBitmap;
    mNumberChannelDescriptions: UInt32;
    mChannelDescriptions:array[0..0] of AudioChannelDescription;
    {$if (defined(__cplusplus)) and defined(CA_STRICT)}
    AudioChannelLayout&): AudioChannelLayout(;
    AudioChannelLayout&)_: AudioChannelLayout& operator=(;
    {$endif}
  end;
type
  private:AudioChannelLayout(AudioChannelLayout&) = AudioChannelLayout;
type
  private:AudioChannelLayout(AudioChannelLayout&)Ptr = ^AudioChannelLayout;
type
  AudioChannelLayoutPtr = ^AudioChannelLayout;
{$endif}

{$ifdef TYPES}
type
  MPEG4ObjectID = clong;
  MPEG4ObjectIDPtr = ^MPEG4ObjectID;

const
  kMPEG4Object_AAC_Main = 1;
  kMPEG4Object_AAC_LC = 2;
  kMPEG4Object_AAC_SSR = 3;
  kMPEG4Object_AAC_LTP = 4;
  kMPEG4Object_AAC_SBR = 5;
  kMPEG4Object_AAC_Scalable = 6;
  kMPEG4Object_TwinVQ = 7;
  kMPEG4Object_CELP = 8;
  kMPEG4Object_HVXC = 9;
{$endif}

