{ Parsed from AudioToolbox.framework AudioCodec.h }

{$ifndef AudioUnit_AudioCodec_h}

{$ifdef TYPES}
type
  AudioCodec = AudioComponentInstance;
  AudioCodecPtr = ^AudioCodec;
  AudioCodecPropertyID = UInt32;
  AudioCodecPropertyIDPtr = ^AudioCodecPropertyID;

type
  AudioCodecMagicCookieInfo = record
    mMagicCookieSize: UInt32;
    mMagicCookie: void *__nullable;
  end;
type
  AudioCodecMagicCookieInfoPtr = ^AudioCodecMagicCookieInfo;
{$endif}

{$ifdef TYPES}
type
  AudioCodecPrimeInfo = record
    leadingFrames: UInt32;
    trailingFrames: UInt32;
  end;
type
  AudioCodecPrimeInfoPtr = ^AudioCodecPrimeInfo;

const
  kAudioSettings_TopLevelKey = 'name';
  kAudioSettings_Version = 'version';
  kAudioSettings_Parameters = 'parameters';
  kAudioSettings_SettingKey = 'key';
  kAudioSettings_SettingName = 'name';
  kAudioSettings_AvailableValues = 'available values';
  kAudioSettings_LimitedValues = 'limited values';
  kAudioSettings_CurrentValue = 'current value';
  kAudioSettings_Summary = 'summary';
  kAudioSettings_Hint = 'hint';
  kAudioSettings_Unit = 'unit';

type
  AudioSettingsFlags = UInt32;
  AudioSettingsFlagsPtr = ^AudioSettingsFlags;

const
  kAudioSettingsFlags_ExpertParameter = 1 shl 0;
  kAudioSettingsFlags_InvisibleParameter = 1 shl 1;
  kAudioSettingsFlags_MetaParameter = 1 shl 2;
  kAudioSettingsFlags_UserInterfaceParameter = 1 shl 3;
{$endif}

{$ifdef FUNCTIONS}
function AudioCodecGetPropertyInfo(inCodec: AudioCodec; inPropertyID: AudioCodecPropertyID; var outSize: UInt32* __nullable; var outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecGetProperty(inCodec: AudioCodec; inPropertyID: AudioCodecPropertyID; var ioPropertyDataSize: UInt32; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecSetProperty(inCodec: AudioCodec; inPropertyID: AudioCodecPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecInitialize(inCodec: AudioCodec; inInputFormat: AudioStreamBasicDescription* __nullable; inOutputFormat: AudioStreamBasicDescription* __nullable; inMagicCookie: void* __nullable; inMagicCookieByteSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecUninitialize(inCodec: AudioCodec): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecAppendInputData(inCodec: AudioCodec; inInputData: pointer; var ioInputDataByteSize: UInt32; var ioNumberPackets: UInt32; inPacketDescription: AudioStreamPacketDescription* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecProduceOutputPackets(inCodec: AudioCodec; outOutputData: pointer; var ioOutputDataByteSize: UInt32; var ioNumberPackets: UInt32; var outPacketDescription: AudioStreamPacketDescription* __nullable; var outStatus: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioCodecAppendInputBufferList(inCodec: AudioCodec; inBufferList: AudioBufferListPtr; ioNumberPackets: UInt32Ptr; inPacketDescription: AudioStreamPacketDescription* __nullable; outBytesConsumed: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function AudioCodecProduceOutputBufferList(inCodec: AudioCodec; ioBufferList: AudioBufferListPtr; ioNumberPackets: UInt32Ptr; outPacketDescription: AudioStreamPacketDescription* __nullable; outStatus: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function AudioCodecReset(inCodec: AudioCodec): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioCodecGetPropertyInfoProc = function (self_: pointer; inPropertyID: AudioCodecPropertyID; outSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl;
  AudioCodecGetPropertyProc = function (self_: pointer; inPropertyID: AudioCodecPropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl;
  AudioCodecSetPropertyProc = function (self_: pointer; inPropertyID: AudioCodecPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl;
  AudioCodecInitializeProc = function (self_: pointer; inInputFormat: AudioStreamBasicDescription* __nullable; inOutputFormat: AudioStreamBasicDescription* __nullable; inMagicCookie: void* __nullable; inMagicCookieByteSize: UInt32): OSStatus; cdecl;
  AudioCodecUninitializeProc = function (self_: pointer): OSStatus; cdecl;
  AudioCodecAppendInputDataProc = function (self_: pointer; inInputData: pointer; ioInputDataByteSize: UInt32Ptr; ioNumberPackets: UInt32Ptr; inPacketDescription: AudioStreamPacketDescription* __nullable): OSStatus; cdecl;
  AudioCodecProduceOutputPacketsProc = function (self_: pointer; outOutputData: pointer; ioOutputDataByteSize: UInt32Ptr; ioNumberPackets: UInt32Ptr; outPacketDescription: AudioStreamPacketDescription* __nullable; outStatus: UInt32Ptr): OSStatus; cdecl;
  AudioCodecResetProc = function (self_: pointer): OSStatus; cdecl;
  AudioCodecAppendInputBufferListProc = function (self_: pointer; ioBufferList: AudioBufferListPtr; inNumberPackets: UInt32Ptr; inPacketDescription: AudioStreamPacketDescription* __nullable; outBytesConsumed: UInt32Ptr): OSStatus; cdecl;
  AudioCodecProduceOutputBufferListProc = function (self_: pointer; ioBufferList: AudioBufferListPtr; ioNumberPackets: UInt32Ptr; outPacketDescription: AudioStreamPacketDescription* __nullable; outStatus: UInt32Ptr): OSStatus; cdecl;
  MagicCookieInfo = AudioCodecMagicCookieInfo;
  MagicCookieInfoPtr = ^MagicCookieInfo;
{$endif}

{$endif}
