{ Parsed from AudioToolbox.framework AudioFile.h }

{$ifndef AudioToolbox_AudioFile_h}

{$ifdef TYPES}
type
  AudioFileTypeID = UInt32;
  AudioFileTypeIDPtr = ^AudioFileTypeID;
  AudioFileFlags = UInt32;
  AudioFileFlagsPtr = ^AudioFileFlags;

const
  kAudioFileFlags_EraseFile = 1;
  kAudioFileFlags_DontPageAlignAudioData = 2;

type
  AudioFilePermissions = SInt8;
  AudioFilePermissionsPtr = ^AudioFilePermissions;

const
  kAudioFileReadPermission = $01;
  kAudioFileWritePermission = $02;
  kAudioFileReadWritePermission = $03;

type
  AudioFileID = OpaqueType;
  AudioFilePropertyID = UInt32;
  AudioFilePropertyIDPtr = ^AudioFilePropertyID;

type
  AudioFile_SMPTE_Time = record
    mHours: SInt8;
    mMinutes: UInt8;
    mSeconds: UInt8;
    mFrames: UInt8;
    mSubFrameSampleOffset: UInt32;
  end;
type
  AudioFile_SMPTE_TimePtr = ^AudioFile_SMPTE_Time;
type
  AudioFileMarker = record
    mFramePosition: Float64;
    mName: CFStringRef __nullable;
    mMarkerID: SInt32;
    mSMPTETime: AudioFile_SMPTE_Time;
    mType: UInt32;
    mReserved: UInt16;
    mChannel: UInt16;
  end;
type
  AudioFileMarkerPtr = ^AudioFileMarker;
type
  AudioFileMarkerList = record
    mSMPTE_TimeType: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of AudioFileMarker;
  end;
type
  AudioFileMarkerListPtr = ^AudioFileMarkerList;
{$endif}

{$ifdef TYPES}
type
  AudioFileRegionFlags = UInt32;
  AudioFileRegionFlagsPtr = ^AudioFileRegionFlags;

const
  kAudioFileRegionFlag_LoopEnable = 1;
  kAudioFileRegionFlag_PlayForward = 2;
  kAudioFileRegionFlag_PlayBackward = 4;

type
  AudioFileRegion = record
    mRegionID: UInt32;
    mName: CFStringRef;
    mFlags: AudioFileRegionFlags;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of AudioFileMarker;
  end;
type
  AudioFileRegionPtr = ^AudioFileRegion;
type
  AudioFileRegionList = record
    mSMPTE_TimeType: UInt32;
    mNumberRegions: UInt32;
    mRegions:array[0..0] of AudioFileRegion;
  end;
type
  AudioFileRegionListPtr = ^AudioFileRegionList;
{$endif}

{$ifdef TYPES}
type
  AudioFramePacketTranslation = record
    mFrame: SInt64;
    mPacket: SInt64;
    mFrameOffsetInPacket: UInt32;
  end;
type
  AudioFramePacketTranslationPtr = ^AudioFramePacketTranslation;

type
  AudioBytePacketTranslationFlags = UInt32;
  AudioBytePacketTranslationFlagsPtr = ^AudioBytePacketTranslationFlags;

const
  kBytePacketTranslationFlag_IsEstimate = 1;

type
  AudioBytePacketTranslation = record
    mByte: SInt64;
    mPacket: SInt64;
    mByteOffsetInPacket: UInt32;
    mFlags: AudioBytePacketTranslationFlags;
  end;
type
  AudioBytePacketTranslationPtr = ^AudioBytePacketTranslation;
type
  AudioFilePacketTableInfo = record
    mNumberValidFrames: SInt64;
    mPrimingFrames: SInt32;
    mRemainderFrames: SInt32;
  end;
type
  AudioFilePacketTableInfoPtr = ^AudioFilePacketTableInfo;

const
  kAFInfoDictionary_Artist = 'artist';
  kAFInfoDictionary_Album = 'album';
  kAFInfoDictionary_Tempo = 'tempo';
  kAFInfoDictionary_KeySignature = 'key signature';
  kAFInfoDictionary_TimeSignature = 'time signature';
  kAFInfoDictionary_TrackNumber = 'track number';
  kAFInfoDictionary_Year = 'year';
  kAFInfoDictionary_Composer = 'composer';
  kAFInfoDictionary_Lyricist = 'lyricist';
  kAFInfoDictionary_Genre = 'genre';
  kAFInfoDictionary_Title = 'title';
  kAFInfoDictionary_RecordedDate = 'recorded date';
  kAFInfoDictionary_Comments = 'comments';
  kAFInfoDictionary_Copyright = 'copyright';
  kAFInfoDictionary_SourceEncoder = 'source encoder';
  kAFInfoDictionary_EncodingApplication = 'encoding application';
  kAFInfoDictionary_NominalBitRate = 'nominal bit rate';
  kAFInfoDictionary_ChannelLayout = 'channel layout';
  kAFInfoDictionary_ApproximateDurationInSeconds = 'approximate duration in seconds';
  kAFInfoDictionary_SourceBitDepth = 'source bit depth';
  kAFInfoDictionary_ISRC = 'ISRC';
  kAFInfoDictionary_SubTitle = 'subtitle';
{$endif}

{$ifdef FUNCTIONS}
function AudioFileCreateWithURL(inFileRef: CFURLRef; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: AudioFileFlags; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileOpenURL(inFileRef: CFURLRef; inPermissions: AudioFilePermissions; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioFile_ReadProc = function (inClientData: pointer; inPosition: SInt64; requestCount: UInt32; buffer: pointer; actualCount: UInt32Ptr): OSStatus; cdecl;
  AudioFile_WriteProc = function (inClientData: pointer; inPosition: SInt64; requestCount: UInt32; buffer: pointer; actualCount: UInt32Ptr): OSStatus; cdecl;
  AudioFile_GetSizeProc = function (inClientData: pointer): SInt64; cdecl;
  AudioFile_SetSizeProc = function (inClientData: pointer; inSize: SInt64): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioFileInitializeWithCallbacks(inClientData: pointer; inReadFunc: AudioFile_ReadProc; inWriteFunc: AudioFile_WriteProc; inGetSizeFunc: AudioFile_GetSizeProc; inSetSizeFunc: AudioFile_SetSizeProc; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: AudioFileFlags; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileOpenWithCallbacks(inClientData: pointer; inReadFunc: AudioFile_ReadProc; inWriteFunc: AudioFile_WriteProc __nullable; inGetSizeFunc: AudioFile_GetSizeProc; inSetSizeFunc: AudioFile_SetSizeProc __nullable; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileClose(inAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileOptimize(inAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileReadBytes(inAudioFile: AudioFileID; inUseCache: Boolean; inStartingByte: SInt64; ioNumBytes: UInt32Ptr; outBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileWriteBytes(inAudioFile: AudioFileID; inUseCache: Boolean; inStartingByte: SInt64; ioNumBytes: UInt32Ptr; inBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileReadPacketData(inAudioFile: AudioFileID; inUseCache: Boolean; ioNumBytes: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescription* __nullable; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; outBuffer: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_2 }
function AudioFileReadPackets(inAudioFile: AudioFileID; inUseCache: Boolean; outNumBytes: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescription* __nullable; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; outBuffer: void* __nullable): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_10, __IPHONE_2_0,__IPHONE_8_0';
function AudioFileWritePackets(inAudioFile: AudioFileID; inUseCache: Boolean; inNumBytes: UInt32; inPacketDescriptions: AudioStreamPacketDescription* __nullable; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; inBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileCountUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; outNumberItems: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileGetUserDataSize(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; outUserDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileGetUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; ioUserDataSize: UInt32Ptr; outUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileSetUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; inUserDataSize: UInt32; inUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileRemoveUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileGetPropertyInfo(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; outDataSize: UInt32* __nullable; isWritable: UInt32* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileGetProperty(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; ioDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileSetProperty(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; inDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioFileTypeAndFormatID = record
    mFileType: AudioFileTypeID;
    mFormatID: UInt32;
  end;
type
  AudioFileTypeAndFormatIDPtr = ^AudioFileTypeAndFormatID;
{$endif}

{$ifdef FUNCTIONS}
function AudioFileGetGlobalInfoSize(inPropertyID: AudioFilePropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; outDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileGetGlobalInfo(inPropertyID: AudioFilePropertyID; inSpecifierSize: UInt32; inSpecifier: void* __nullable; ioDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioFileCreate(inParentRef: FSRefPtr; inFileName: CFStringRef; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: AudioFileFlags; outNewFileRef: FSRefPtr; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function AudioFileInitialize(inFileRef: FSRefPtr; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: AudioFileFlags; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function AudioFileOpen(inFileRef: FSRefPtr; inPermissions: AudioFilePermissions; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
{$endif}

{$endif}

{$endif}
