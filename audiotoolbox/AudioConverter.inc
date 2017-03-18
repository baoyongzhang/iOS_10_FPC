{ Parsed from AudioToolbox.framework AudioConverter.h }

{$ifndef AudioToolbox_AudioConverter_h}

{$ifdef TYPES}
type
  AudioConverterRef = OpaqueType;
  AudioConverterPropertyID = UInt32;
  AudioConverterPropertyIDPtr = ^AudioConverterPropertyID;
{$endif}

{$ifdef TYPES}
type
  AudioConverterPrimeInfo = record
    leadingFrames: UInt32;
    trailingFrames: UInt32;
  end;
type
  AudioConverterPrimeInfoPtr = ^AudioConverterPrimeInfo;
{$endif}

{$ifdef FUNCTIONS}
function AudioConverterNew(inSourceFormat: AudioStreamBasicDescriptionPtr; inDestinationFormat: AudioStreamBasicDescriptionPtr; outAudioConverter: AudioConverterRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterNewSpecific(inSourceFormat: AudioStreamBasicDescriptionPtr; inDestinationFormat: AudioStreamBasicDescriptionPtr; inNumberClassDescriptions: UInt32; inClassDescriptions: AudioClassDescriptionPtr; outAudioConverter: AudioConverterRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioConverterDispose(inAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterReset(inAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterGetPropertyInfo(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; outSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterGetProperty(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterSetProperty(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioConverterInputDataProc = function (inAudioConverter: AudioConverterRef; ioDataSize: UInt32Ptr; outData: void* __nonnull* __nonnull; inUserData: void* __nullable): OSStatus; cdecl;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioConverterFillBuffer(inAudioConverter: AudioConverterRef; inInputDataProc: AudioConverterInputDataProc; inInputDataProcUserData: void* __nullable; ioOutputDataSize: UInt32Ptr; outOutputData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_10_1,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioConverterConvertBuffer(inAudioConverter: AudioConverterRef; inInputDataSize: UInt32; inInputData: pointer; ioOutputDataSize: UInt32Ptr; outOutputData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioConverterComplexInputDataProc = function (inAudioConverter: AudioConverterRef; ioNumberDataPackets: UInt32Ptr; ioData: AudioBufferListPtr; outDataPacketDescription: AudioStreamPacketDescription* __nullable* __nullable; inUserData: void* __nullable): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioConverterFillComplexBuffer(inAudioConverter: AudioConverterRef; inInputDataProc: AudioConverterComplexInputDataProc; inInputDataProcUserData: void* __nullable; ioOutputDataPacketSize: UInt32Ptr; outOutputData: AudioBufferListPtr; outPacketDescription: AudioStreamPacketDescription* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioConverterConvertComplexBuffer(inAudioConverter: AudioConverterRef; inNumberPCMFrames: UInt32; inInputData: AudioBufferListPtr; outOutputData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_5_0 }
{$endif}

{$endif}
