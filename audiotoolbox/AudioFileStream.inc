{ Parsed from AudioToolbox.framework AudioFileStream.h }

{$ifndef AudioToolbox_AudioFileStream_h}

{$ifdef TYPES}
type
  AudioFileStreamPropertyFlags = UInt32;
  AudioFileStreamPropertyFlagsPtr = ^AudioFileStreamPropertyFlags;

const
  kAudioFileStreamPropertyFlag_PropertyIsCached = 1;
  kAudioFileStreamPropertyFlag_CacheProperty = 2;

type
  AudioFileStreamParseFlags = UInt32;
  AudioFileStreamParseFlagsPtr = ^AudioFileStreamParseFlags;

const
  kAudioFileStreamParseFlag_Discontinuity = 1;

type
  AudioFileStreamSeekFlags = UInt32;
  AudioFileStreamSeekFlagsPtr = ^AudioFileStreamSeekFlags;

const
  kAudioFileStreamSeekFlag_OffsetIsEstimated = 1;

type
  AudioFileStreamPropertyID = UInt32;
  AudioFileStreamPropertyIDPtr = ^AudioFileStreamPropertyID;
  AudioFileStreamID = OpaqueType;
  AudioFileStream_PropertyListenerProc = procedure (inClientData: pointer; inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; ioFlags: AudioFileStreamPropertyFlagsPtr); cdecl;
  AudioFileStream_PacketsProc = procedure (inClientData: pointer; inNumberBytes: UInt32; inNumberPackets: UInt32; inInputData: pointer; inPacketDescriptions: AudioStreamPacketDescriptionPtr); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioFileStreamOpen(inClientData: void* __nullable; inPropertyListenerProc: AudioFileStream_PropertyListenerProc; inPacketsProc: AudioFileStream_PacketsProc; inFileTypeHint: AudioFileTypeID; outAudioFileStream: AudioFileStreamID __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamParseBytes(inAudioFileStream: AudioFileStreamID; inDataByteSize: UInt32; inData: pointer; inFlags: AudioFileStreamParseFlags): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamSeek(inAudioFileStream: AudioFileStreamID; inPacketOffset: SInt64; outDataByteOffset: SInt64Ptr; ioFlags: AudioFileStreamSeekFlagsPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamGetPropertyInfo(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; outPropertyDataSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamGetProperty(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamSetProperty(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamClose(inAudioFileStream: AudioFileStreamID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$endif}
