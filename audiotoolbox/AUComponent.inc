{ Parsed from AudioToolbox.framework AUComponent.h }

{$ifndef AudioUnit_AUComponent_h}

{$ifdef TYPES}
type
  AudioUnit = AudioComponentInstance;
  AudioUnitPtr = ^AudioUnit;
{$endif}

{$ifdef TYPES}
type
  AudioUnitRenderActionFlags = UInt32;
  AudioUnitRenderActionFlagsPtr = ^AudioUnitRenderActionFlags;

const
  kAudioUnitRenderAction_PreRender = 1 shl 2;
  kAudioUnitRenderAction_PostRender = 1 shl 3;
  kAudioUnitRenderAction_OutputIsSilence = 1 shl 4;
  kAudioOfflineUnitRenderAction_Preflight = 1 shl 5;
  kAudioOfflineUnitRenderAction_Render = 1 shl 6;
  kAudioOfflineUnitRenderAction_Complete = 1 shl 7;
  kAudioUnitRenderAction_PostRenderError = 1 shl 8;
  kAudioUnitRenderAction_DoNotCheckRenderArgs = 1 shl 9;
{$endif}

{$ifdef TYPES}
type
  AudioUnitPropertyID = UInt32;
  AudioUnitPropertyIDPtr = ^AudioUnitPropertyID;
  AudioUnitScope = UInt32;
  AudioUnitScopePtr = ^AudioUnitScope;
  AudioUnitElement = UInt32;
  AudioUnitElementPtr = ^AudioUnitElement;
  AudioUnitParameterID = UInt32;
  AudioUnitParameterIDPtr = ^AudioUnitParameterID;
  AudioUnitParameterValue = Float32;
  AudioUnitParameterValuePtr = ^AudioUnitParameterValue;
  AUParameterEventType = UInt32;
  AUParameterEventTypePtr = ^AUParameterEventType;

const
  kParameterEvent_Immediate = 1;
  kParameterEvent_Ramped = 2;

type
  AudioUnitParameterEvent = record
    scope: AudioUnitScope;
    element: AudioUnitElement;
    parameter: AudioUnitParameterID;
    eventType: AUParameterEventType;
    eventValues: record
      case longint of
        0: (
          ramp: record
            startBufferOffset: SInt32;
            durationInFrames: UInt32;
            startValue: AudioUnitParameterValue;
            endValue: AudioUnitParameterValue;
          end;
        );
        1: (
          immediate: record
            bufferOffset: UInt32;
            value: AudioUnitParameterValue;
          end;
        );
    end;
  end;
type
  AudioUnitParameterEventPtr = ^AudioUnitParameterEvent;
type
  AudioUnitParameter = record
    mAudioUnit: AudioUnit;
    mParameterID: AudioUnitParameterID;
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
  end;
type
  AudioUnitParameterPtr = ^AudioUnitParameter;
type
  AudioUnitProperty = record
    mAudioUnit: AudioUnit;
    mPropertyID: AudioUnitPropertyID;
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
  end;
type
  AudioUnitPropertyPtr = ^AudioUnitProperty;

type
  AURenderCallback = function (inRefCon: pointer; var ioActionFlags: AudioUnitRenderActionFlags; inTimeStamp: AudioTimeStampPtr; inBusNumber: UInt32; inNumberFrames: UInt32; var ioData: AudioBufferList* __nullable): OSStatus; cdecl;
  AudioUnitPropertyListenerProc = procedure (inRefCon: pointer; inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement); cdecl;
  AUInputSamplesInOutputCallback = procedure (inRefCon: pointer; inOutputTimeStamp: AudioTimeStampPtr; inInputSample: Float64; inNumberInputSamples: Float64); cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kAudioComponentRegistrationsChangedNotification: CFStringRef { available starting in __MAC_10_11, __IPHONE_7_0 }; cvar; external;
  kAudioComponentInstanceInvalidationNotification: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function AudioUnitInitialize(inUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitUninitialize(inUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitGetPropertyInfo(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outDataSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitGetProperty(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outData: pointer; var ioDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitSetProperty(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; inData: void* __nullable; inDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitAddPropertyListener(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc; inProcUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitRemovePropertyListenerWithUserData(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc; inProcUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioUnitAddRenderNotify(inUnit: AudioUnit; inProc: AURenderCallback; inProcUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitRemoveRenderNotify(inUnit: AudioUnit; inProc: AURenderCallback; inProcUserData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitGetParameter(inUnit: AudioUnit; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; var outValue: AudioUnitParameterValue): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitSetParameter(inUnit: AudioUnit; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; inValue: AudioUnitParameterValue; inBufferOffsetInFrames: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitScheduleParameters(inUnit: AudioUnit; inParameterEvent: AudioUnitParameterEventPtr; inNumParamEvents: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitRender(inUnit: AudioUnit; var ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitProcess(inUnit: AudioUnit; ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioUnitProcessMultiple(inUnit: AudioUnit; ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; inNumberInputBufferLists: UInt32; inInputBufferLists: AudioBufferList* __nonnull* __nonnull; inNumberOutputBufferLists: UInt32; ioOutputBufferLists: AudioBufferList* __nonnull* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioUnitReset(inUnit: AudioUnit; inScope: AudioUnitScope; inElement: AudioUnitElement): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioOutputUnitPublish(inDesc: AudioComponentDescriptionPtr; inName: CFStringRef; inVersion: UInt32; inOutputUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$if (defined(__OBJC__))}
{$ifdef FUNCTIONS}
function AudioOutputUnitGetHostIcon(au: AudioUnit; desiredPointSize: single): UIImage * __nullable; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
function AudioComponentGetIcon_(comp: AudioComponent; desiredPointSize: single): UIImage * __nullable; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioComponentGetLastActiveTime(comp: AudioComponent): CFAbsoluteTime; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitRange = $0000;
  kAudioUnitInitializeSelect = $0001;
  kAudioUnitUninitializeSelect = $0002;
  kAudioUnitGetPropertyInfoSelect = $0003;
  kAudioUnitGetPropertySelect = $0004;
  kAudioUnitSetPropertySelect = $0005;
  kAudioUnitAddPropertyListenerSelect = $000A;
  kAudioUnitRemovePropertyListenerSelect = $000B;
  kAudioUnitRemovePropertyListenerWithUserDataSelect = $0012;
  kAudioUnitAddRenderNotifySelect = $000F;
  kAudioUnitRemoveRenderNotifySelect = $0010;
  kAudioUnitGetParameterSelect = $0006;
  kAudioUnitSetParameterSelect = $0007;
  kAudioUnitScheduleParametersSelect = $0011;
  kAudioUnitRenderSelect = $000E;
  kAudioUnitResetSelect = $0009;
  kAudioUnitComplexRenderSelect = $0013;
  kAudioUnitProcessSelect = $0014;
  kAudioUnitProcessMultipleSelect = $0015;

type
  AudioUnitInitializeProc = function (self_: pointer): OSStatus; cdecl;
  AudioUnitUninitializeProc = function (self_: pointer): OSStatus; cdecl;
  AudioUnitGetPropertyInfoProc = function (self_: pointer; prop: AudioUnitPropertyID; scope: AudioUnitScope; elem: AudioUnitElement; outDataSize: UInt32* __nullable; outWritable: Boolean* __nullable): OSStatus; cdecl;
  AudioUnitGetPropertyProc = function (self_: pointer; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outData: pointer; ioDataSize: UInt32Ptr): OSStatus; cdecl;
  AudioUnitSetPropertyProc = function (self_: pointer; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; inData: pointer; inDataSize: UInt32): OSStatus; cdecl;
  AudioUnitAddPropertyListenerProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc; userData: pointer): OSStatus; cdecl;
  AudioUnitRemovePropertyListenerProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc): OSStatus; cdecl;
  AudioUnitRemovePropertyListenerWithUserDataProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc; userData: void* __nullable): OSStatus; cdecl;
  AudioUnitAddRenderNotifyProc = function (self_: pointer; proc: AURenderCallback; userData: void* __nullable): OSStatus; cdecl;
  AudioUnitRemoveRenderNotifyProc = function (self_: pointer; proc: AURenderCallback; userData: void* __nullable): OSStatus; cdecl;
  AudioUnitScheduleParametersProc = function (self_: pointer; events: AudioUnitParameterEventPtr; numEvents: UInt32): OSStatus; cdecl;
  AudioUnitResetProc = function (self_: pointer; inScope: AudioUnitScope; inElement: AudioUnitElement): OSStatus; cdecl;
  AudioUnitComplexRenderProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberOfPackets: UInt32; outNumberOfPackets: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescriptionPtr; ioData: AudioBufferListPtr; outMetadata: pointer; outMetadataByteSize: UInt32Ptr): OSStatus; cdecl;
  AudioUnitProcessProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl;
  AudioUnitProcessMultipleProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; inNumberInputBufferLists: UInt32; inInputBufferLists: AudioBufferList* __nonnull* __nonnull; inNumberOutputBufferLists: UInt32; ioOutputBufferLists: AudioBufferList* __nonnull* __nonnull): OSStatus; cdecl;
  AudioUnitGetParameterProc = function (inComponentStorage: pointer; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; var outValue: AudioUnitParameterValue): OSStatus; cdecl;
  AudioUnitSetParameterProc = function (inComponentStorage: pointer; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; inValue: AudioUnitParameterValue; inBufferOffsetInFrames: UInt32): OSStatus; cdecl;
  AudioUnitRenderProc = function (inComponentStorage: pointer; var ioActionFlags: AudioUnitRenderActionFlags* __nullable; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl;
{$endif}

{$if  not defined(TARGET_RT_64_BIT) and not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioUnitRemovePropertyListener(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}

{$endif}
