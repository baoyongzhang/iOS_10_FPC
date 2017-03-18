{ Parsed from AudioToolbox.framework AudioUnitProperties.h }

{$ifndef AudioUnit_AudioUnitProperties_h}

{$ifdef TYPES}
const
  kAUPresetVersionKey = 'version';
  kAUPresetSubtypeKey = 'subtype';
  kAUPresetManufacturerKey = 'manufacturer';
  kAUPresetDataKey = 'data';
  kAUPresetNameKey = 'name';
  kAUPresetRenderQualityKey = 'render-quality';
  kAUPresetCPULoadKey = 'cpu-load';
  kAUPresetElementNameKey = 'element-name';
  kAUPresetExternalFileRefs = 'file-references';
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAUPresetVSTDataKey = 'vstdata';
  kAUPresetVSTPresetKey = 'vstpreset';
  kAUPresetMASDataKey = 'masdata';
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAUPresetPartKey = 'part';

type
  AudioUnitConnection = record
    sourceAudioUnit: AudioUnit;
    sourceOutputNumber: UInt32;
    destInputNumber: UInt32;
  end;
type
  AudioUnitConnectionPtr = ^AudioUnitConnection;
type
  AUChannelInfo = record
    inChannels: SInt16;
    outChannels: SInt16;
  end;
type
  AUChannelInfoPtr = ^AUChannelInfo;
type
  AudioUnitExternalBuffer = record
    buffer: BytePtr;
    size: UInt32;
  end;
type
  AudioUnitExternalBufferPtr = ^AudioUnitExternalBuffer;
type
  AURenderCallbackStruct = record
    inputProc: AURenderCallback __nullable;
    inputProcRefCon: void *__nullable;
  end;
type
  AURenderCallbackStructPtr = ^AURenderCallbackStruct;
type
  AUPreset = record
    presetNumber: SInt32;
    presetName: CFStringRef __nullable;
  end;
type
  AUPresetPtr = ^AUPreset;

const
  kRenderQuality_Max = 127;
  kRenderQuality_High = 96;
  kRenderQuality_Medium = 64;
  kRenderQuality_Low = 32;
  kRenderQuality_Min = 0;
const
  kNumberOfResponseFrequencies = 1024;

type
  AudioUnitFrequencyResponseBin = record
    mFrequency: Float64;
    mMagnitude: Float64;
  end;
type
  AudioUnitFrequencyResponseBinPtr = ^AudioUnitFrequencyResponseBin;

type
  HostCallback_GetBeatAndTempo = function (inHostUserData: void* __nullable; var outCurrentBeat: Float64* __nullable; var outCurrentTempo: Float64* __nullable): OSStatus; cdecl;
  HostCallback_GetMusicalTimeLocation = function (inHostUserData: void* __nullable; var outDeltaSampleOffsetToNextBeat: UInt32* __nullable; var outTimeSig_Numerator: Float32* __nullable; var outTimeSig_Denominator: UInt32* __nullable; var outCurrentMeasureDownBeat: Float64* __nullable): OSStatus; cdecl;
  HostCallback_GetTransportState = function (inHostUserData: void* __nullable; var outIsPlaying: Boolean* __nullable; var outTransportStateChanged: Boolean* __nullable; var outCurrentSampleInTimeLine: Float64* __nullable; var outIsCycling: Boolean* __nullable; var outCycleStartBeat: Float64* __nullable; var outCycleEndBeat: Float64* __nullable): OSStatus; cdecl;
  HostCallback_GetTransportState2 = function (inHostUserData: void* __nullable; outIsPlaying: Boolean* __nullable; outIsRecording: Boolean* __nullable; outTransportStateChanged: Boolean* __nullable; outCurrentSampleInTimeLine: Float64* __nullable; outIsCycling: Boolean* __nullable; outCycleStartBeat: Float64* __nullable; outCycleEndBeat: Float64* __nullable): OSStatus; cdecl;

type
  HostCallbackInfo = record
    hostUserData: void *__nullable;
    beatAndTempoProc: HostCallback_GetBeatAndTempo __nullable;
    musicalTimeLocationProc: HostCallback_GetMusicalTimeLocation __nullable;
    transportStateProc: HostCallback_GetTransportState __nullable;
    transportStateProc2: HostCallback_GetTransportState2 __nullable;
  end;
type
  HostCallbackInfoPtr = ^HostCallbackInfo;
type
  AUDependentParameter = record
    mScope: AudioUnitScope;
    mParameterID: AudioUnitParameterID;
  end;
type
  AUDependentParameterPtr = ^AUDependentParameter;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioUnitCocoaViewInfo = record
    mCocoaAUViewBundleLocation: CFURLRef;
    mCocoaAUViewClass:array[0..0] of CFStringRef;
  end;
type
  AudioUnitCocoaViewInfoPtr = ^AudioUnitCocoaViewInfo;
type
  AUHostVersionIdentifier = record
    hostName: CFStringRef;
    hostVersion: UInt32;
  end;
type
  AUHostVersionIdentifierPtr = ^AUHostVersionIdentifier;

type
  AUMIDIOutputCallback = function (userData: void* __nullable; timeStamp: AudioTimeStampPtr; midiOutNum: UInt32; pktlist: MIDIPacketListPtr): OSStatus; cdecl;

type
  AUMIDIOutputCallbackStruct = record
    midiOutputCallback: AUMIDIOutputCallback;
    userData: void *__nullable;
  end;
type
  AUMIDIOutputCallbackStructPtr = ^AUMIDIOutputCallbackStruct;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUInputSamplesInOutputCallbackStruct = record
    inputToOutputCallback: AUInputSamplesInOutputCallback;
    userData: void *__nullable;
  end;
type
  AUInputSamplesInOutputCallbackStructPtr = ^AUInputSamplesInOutputCallbackStruct;
type
  AudioUnitParameterHistoryInfo = record
    updatesPerSecond: Float32;
    historyDurationInSeconds: Float32;
  end;
type
  AudioUnitParameterHistoryInfoPtr = ^AudioUnitParameterHistoryInfo;

type
  AudioUnitParameterUnit = UInt32;
  AudioUnitParameterUnitPtr = ^AudioUnitParameterUnit;

const
  kAudioUnitParameterUnit_Generic = 0;
  kAudioUnitParameterUnit_Indexed = 1;
  kAudioUnitParameterUnit_Boolean = 2;
  kAudioUnitParameterUnit_Percent = 3;
  kAudioUnitParameterUnit_Seconds = 4;
  kAudioUnitParameterUnit_SampleFrames = 5;
  kAudioUnitParameterUnit_Phase = 6;
  kAudioUnitParameterUnit_Rate = 7;
  kAudioUnitParameterUnit_Hertz = 8;
  kAudioUnitParameterUnit_Cents = 9;
  kAudioUnitParameterUnit_RelativeSemiTones = 10;
  kAudioUnitParameterUnit_MIDINoteNumber = 11;
  kAudioUnitParameterUnit_MIDIController = 12;
  kAudioUnitParameterUnit_Decibels = 13;
  kAudioUnitParameterUnit_LinearGain = 14;
  kAudioUnitParameterUnit_Degrees = 15;
  kAudioUnitParameterUnit_EqualPowerCrossfade = 16;
  kAudioUnitParameterUnit_MixerFaderCurve1 = 17;
  kAudioUnitParameterUnit_Pan = 18;
  kAudioUnitParameterUnit_Meters = 19;
  kAudioUnitParameterUnit_AbsoluteCents = 20;
  kAudioUnitParameterUnit_Octaves = 21;
  kAudioUnitParameterUnit_BPM = 22;
  kAudioUnitParameterUnit_Beats = 23;
  kAudioUnitParameterUnit_Milliseconds = 24;
  kAudioUnitParameterUnit_Ratio = 25;
  kAudioUnitParameterUnit_CustomUnit = 26;

type
  AudioUnitParameterOptions = UInt32;
  AudioUnitParameterOptionsPtr = ^AudioUnitParameterOptions;

const
  kAudioUnitParameterFlag_CFNameRelease = 1 shl 4;
  kAudioUnitParameterFlag_OmitFromPresets = 1 shl 13;
  kAudioUnitParameterFlag_PlotHistory = 1 shl 14;
  kAudioUnitParameterFlag_MeterReadOnly = 1 shl 15;
  kAudioUnitParameterFlag_DisplayMask = (7 shl 16) + (1 shl 22);
  kAudioUnitParameterFlag_DisplaySquareRoot = 1 shl 16;
  kAudioUnitParameterFlag_DisplaySquared = 2 shl 16;
  kAudioUnitParameterFlag_DisplayCubed = 3 shl 16;
  kAudioUnitParameterFlag_DisplayCubeRoot = 4 shl 16;
  kAudioUnitParameterFlag_DisplayExponential = 5 shl 16;
  kAudioUnitParameterFlag_HasClump = 1 shl 20;
  kAudioUnitParameterFlag_ValuesHaveStrings = 1 shl 21;
  kAudioUnitParameterFlag_DisplayLogarithmic = 1 shl 22;
  kAudioUnitParameterFlag_IsHighResolution = 1 shl 23;
  kAudioUnitParameterFlag_NonRealTime = 1 shl 24;
  kAudioUnitParameterFlag_CanRamp = 1 shl 25;
  kAudioUnitParameterFlag_ExpertMode = 1 shl 26;
  kAudioUnitParameterFlag_HasCFNameString = 1 shl 27;
  kAudioUnitParameterFlag_IsGlobalMeta = 1 shl 28;
  kAudioUnitParameterFlag_IsElementMeta = 1 shl 29;
  kAudioUnitParameterFlag_IsReadable = 1 shl 30;
  kAudioUnitParameterFlag_IsWritable = 1 shl 31;

type
  AudioUnitParameterInfo = record
    name:array[0..51] of char;
    unitName: CFStringRef __nullable;
    clumpID: UInt32;
    cfNameString: CFStringRef __nullable;
    unit_: AudioUnitParameterUnit;
    minValue: AudioUnitParameterValue;
    maxValue: AudioUnitParameterValue;
    defaultValue: AudioUnitParameterValue;
    flags: AudioUnitParameterOptions;
  end;
type
  AudioUnitParameterInfoPtr = ^AudioUnitParameterInfo;

const
  kAudioUnitClumpID_System = 0;
{$endif}

{$ifdef TYPES}
const
  kAudioUnitParameterName_Full = -1;

type
  AudioUnitParameterNameInfo = record
    inID: AudioUnitParameterID;
    inDesiredLength: SInt32;
    outName: CFStringRef __nullable;
  end;
type
  AudioUnitParameterIDName = AudioUnitParameterNameInfo;
type
  AudioUnitParameterIDNamePtr = ^AudioUnitParameterNameInfo;
type
  AudioUnitParameterNameInfoPtr = ^AudioUnitParameterNameInfo;
type
  AudioUnitParameterStringFromValue = record
    inParamID: AudioUnitParameterID;
    inValue: AudioUnitParameterValuePtr;
    outString: CFStringRef __nullable;
  end;
type
  AudioUnitParameterStringFromValuePtr = ^AudioUnitParameterStringFromValue;
type
  AudioUnitParameterValueFromString = record
    inParamID: AudioUnitParameterID;
    inString: CFStringRef;
    outValue: AudioUnitParameterValue;
  end;
type
  AudioUnitParameterValueFromStringPtr = ^AudioUnitParameterValueFromString;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioUnitRemoteControlEvent = UInt32;
  AudioUnitRemoteControlEventPtr = ^AudioUnitRemoteControlEvent;

const
  kAudioUnitRemoteControlEvent_TogglePlayPause = 1;
  kAudioUnitRemoteControlEvent_ToggleRecord = 2;
  kAudioUnitRemoteControlEvent_Rewind = 3;

type
  AudioUnitRemoteControlEventListener = OpaqueCBlock;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitConfigurationInfo_HasCustomView = 'HasCustomView';
  kAudioUnitConfigurationInfo_ChannelConfigurations = 'ChannelConfigurations';
  kAudioUnitConfigurationInfo_InitialInputs = 'InitialInputs';
  kAudioUnitConfigurationInfo_InitialOutputs = 'InitialOutputs';
  kAudioUnitConfigurationInfo_IconURL = 'IconURL';
  kAudioUnitConfigurationInfo_BusCountWritable = 'BusCountWritable';
  kAudioUnitConfigurationInfo_SupportedChannelLayoutTags = 'SupportedChannelLayoutTags';
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AUParameterMIDIMappingFlags = UInt32;
  AUParameterMIDIMappingFlagsPtr = ^AUParameterMIDIMappingFlags;

const
  kAUParameterMIDIMapping_AnyChannelFlag = 1 shl 0;
  kAUParameterMIDIMapping_AnyNoteFlag = 1 shl 1;
  kAUParameterMIDIMapping_SubRange = 1 shl 2;
  kAUParameterMIDIMapping_Toggle = 1 shl 3;
  kAUParameterMIDIMapping_Bipolar = 1 shl 4;
  kAUParameterMIDIMapping_Bipolar_On = 1 shl 5;

type
  AUParameterMIDIMapping = record
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
    mParameterID: AudioUnitParameterID;
    mFlags: AUParameterMIDIMappingFlags;
    mSubRangeMin: AudioUnitParameterValue;
    mSubRangeMax: AudioUnitParameterValue;
    mStatus: UInt8;
    mData1: UInt8;
    reserved1: UInt8;
    reserved2: UInt8;
    reserved3: UInt32;
  end;
type
  AUParameterMIDIMappingPtr = ^AUParameterMIDIMapping;

const
  kMusicDeviceSampleFrameMask_SampleOffset = $FFFFFF;
  kMusicDeviceSampleFrameMask_IsScheduled = $01000000;
const
  kOfflinePreflight_NotRequired = 0;
  kOfflinePreflight_Optional = 1;
  kOfflinePreflight_Required = 2;

type
  AUDistanceAttenuationData = record
    inNumberOfPairs: UInt32;
    pairs: array[0..0] of record
      inDistance: Float32;
      outGain: Float32;
    end;
  end;
type
  AUDistanceAttenuationDataPtr = ^AUDistanceAttenuationData;
type
  AudioUnitOtherPluginDesc = record
    format: UInt32;
    plugin: AudioClassDescription;
  end;
type
  AudioUnitOtherPluginDescPtr = ^AudioUnitOtherPluginDesc;
type
  AudioUnitParameterValueTranslation = record
    otherDesc: AudioUnitOtherPluginDesc;
    otherParamID: UInt32;
    otherValue: Float32;
    auParamID: AudioUnitParameterID;
    auValue: AudioUnitParameterValue;
  end;
type
  AudioUnitParameterValueTranslationPtr = ^AudioUnitParameterValueTranslation;
type
  AudioUnitPresetMAS_SettingData = record
    isStockSetting: UInt32;
    settingID: UInt32;
    dataLen: UInt32;
    data:array[0..0] of UInt8;
  end;
type
  AudioUnitPresetMAS_SettingDataPtr = ^AudioUnitPresetMAS_SettingData;
type
  AudioUnitPresetMAS_Settings = record
    manufacturerID: UInt32;
    effectID: UInt32;
    variantID: UInt32;
    settingsVersion: UInt32;
    numberOfSettings: UInt32;
    settings:array[0..0] of AudioUnitPresetMAS_SettingData;
  end;
type
  AudioUnitPresetMAS_SettingsPtr = ^AudioUnitPresetMAS_Settings;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioOutputUnitMIDICallbacks = record
    userData: void *__nullable;
    MIDIEventProc: procedure (userData: void* __nullable; inStatus: UInt32; inData1: UInt32; inData2: UInt32; inOffsetSampleFrame: UInt32); cdecl;
    MIDISysExProc: procedure (userData: void* __nullable; inData: UInt8Ptr; inLength: UInt32); cdecl;
  end;
type
  AudioOutputUnitMIDICallbacksPtr = ^AudioOutputUnitMIDICallbacks;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioOutputUnitStartAtTimeParams = record
    mTimestamp: AudioTimeStamp;
    mFlags: UInt32;
  end;
type
  AudioOutputUnitStartAtTimeParamsPtr = ^AudioOutputUnitStartAtTimeParams;
{$endif}

{$ifdef TYPES}
type
  AudioUnitMeterClipping = record
    peakValueSinceLastCall: Float32;
    sawInfinity: Boolean;
    sawNotANumber: Boolean;
  end;
type
  AudioUnitMeterClippingPtr = ^AudioUnitMeterClipping;

type
  AUSpatializationAlgorithm = UInt32;
  AUSpatializationAlgorithmPtr = ^AUSpatializationAlgorithm;

const
  kSpatializationAlgorithm_EqualPowerPanning = 0;
  kSpatializationAlgorithm_SphericalHead = 1;
  kSpatializationAlgorithm_HRTF = 2;
  kSpatializationAlgorithm_SoundField = 3;
  kSpatializationAlgorithm_VectorBasedPanning = 4;
  kSpatializationAlgorithm_StereoPassThrough = 5;

type
  AUReverbRoomType = UInt32;
  AUReverbRoomTypePtr = ^AUReverbRoomType;

const
  kReverbRoomType_SmallRoom = 0;
  kReverbRoomType_MediumRoom = 1;
  kReverbRoomType_LargeRoom = 2;
  kReverbRoomType_MediumHall = 3;
  kReverbRoomType_LargeHall = 4;
  kReverbRoomType_Plate = 5;
  kReverbRoomType_MediumChamber = 6;
  kReverbRoomType_LargeChamber = 7;
  kReverbRoomType_Cathedral = 8;
  kReverbRoomType_LargeRoom2 = 9;
  kReverbRoomType_MediumHall2 = 10;
  kReverbRoomType_MediumHall3 = 11;
  kReverbRoomType_LargeHall2 = 12;

type
  AUSpatialMixerAttenuationCurve = UInt32;
  AUSpatialMixerAttenuationCurvePtr = ^AUSpatialMixerAttenuationCurve;

const
  kSpatialMixerAttenuationCurve_Power = 0;
  kSpatialMixerAttenuationCurve_Exponential = 1;
  kSpatialMixerAttenuationCurve_Inverse = 2;
  kSpatialMixerAttenuationCurve_Linear = 3;

type
  MixerDistanceParams = record
    mReferenceDistance: Float32;
    mMaxDistance: Float32;
    mMaxAttenuation: Float32;
  end;
type
  MixerDistanceParamsPtr = ^MixerDistanceParams;

type
  AUSpatialMixerRenderingFlags = UInt32;
  AUSpatialMixerRenderingFlagsPtr = ^AUSpatialMixerRenderingFlags;

const
  kSpatialMixerRenderingFlags_InterAuralDelay = 1 shl 0;
  kSpatialMixerRenderingFlags_DistanceAttenuation = 1 shl 2;

type
  AU3DMixerRenderingFlags = UInt32;
  AU3DMixerRenderingFlagsPtr = ^AU3DMixerRenderingFlags;

const
  k3DMixerRenderingFlags_InterAuralDelay = 1 shl 0;
  k3DMixerRenderingFlags_DopplerShift = 1 shl 1;
  k3DMixerRenderingFlags_DistanceAttenuation = 1 shl 2;
  k3DMixerRenderingFlags_DistanceFilter = 1 shl 3;
  k3DMixerRenderingFlags_DistanceDiffusion = 1 shl 4;
  k3DMixerRenderingFlags_LinearDistanceAttenuation = 1 shl 5;
  k3DMixerRenderingFlags_ConstantReverbBlend = 1 shl 6;

type
  AU3DMixerAttenuationCurve = UInt32;
  AU3DMixerAttenuationCurvePtr = ^AU3DMixerAttenuationCurve;

const
  k3DMixerAttenuationCurve_Power = 0;
  k3DMixerAttenuationCurve_Exponential = 1;
  k3DMixerAttenuationCurve_Inverse = 2;
  k3DMixerAttenuationCurve_Linear = 3;

type
  AUScheduledAudioSliceFlags = UInt32;
  AUScheduledAudioSliceFlagsPtr = ^AUScheduledAudioSliceFlags;

const
  kScheduledAudioSliceFlag_Complete = $01;
  kScheduledAudioSliceFlag_BeganToRender = $02;
  kScheduledAudioSliceFlag_BeganToRenderLate = $04;
  kScheduledAudioSliceFlag_Loop = $08;
  kScheduledAudioSliceFlag_Interrupt = $10;
  kScheduledAudioSliceFlag_InterruptAtLoop = $20;

type
  ScheduledAudioSliceCompletionProc = procedure (userData: void* __nullable; bufferList: ScheduledAudioSlicePtr); cdecl;

type
  ScheduledAudioSlice = record
    mTimeStamp: AudioTimeStamp;
    mCompletionProc: ScheduledAudioSliceCompletionProc __nullable;
    mCompletionProcUserData: pointer;
    mFlags: AUScheduledAudioSliceFlags;
    mReserved: UInt32;
    mReserved2: void *__nullable;
    mNumberFrames: UInt32;
    mBufferList: AudioBufferListPtr;
  end;
type
  ScheduledAudioSlicePtr = ^ScheduledAudioSlice;

type
  ScheduledAudioFileRegionCompletionProc = procedure (userData: void* __nullable; fileRegion: ScheduledAudioFileRegionPtr; result_: OSStatus); cdecl;

type
  ScheduledAudioFileRegion = record
    mTimeStamp: AudioTimeStamp;
    mCompletionProc: ScheduledAudioFileRegionCompletionProc __nullable;
    mCompletionProcUserData: void *__nullable;
    mAudioFile: OpaqueAudioFileIDPtr;
    mLoopCount: UInt32;
    mStartFrame: SInt64;
    mFramesToPlay: UInt32;
  end;
type
  ScheduledAudioFileRegionPtr = ^ScheduledAudioFileRegion;
{$endif}

{$ifdef TYPES}
type
  AUSamplerInstrumentData = record
    fileURL: CFURLRef;
    instrumentType: UInt8;
    bankMSB: UInt8;
    bankLSB: UInt8;
    presetID: UInt8;
  end;
type
  AUSamplerInstrumentDataPtr = ^AUSamplerInstrumentData;

const
  kInstrumentType_DLSPreset = 1;
  kInstrumentType_SF2Preset = kInstrumentType_DLSPreset;
  kInstrumentType_AUPreset = 2;
  kInstrumentType_Audiofile = 3;
  kInstrumentType_EXS24 = 4;
const
  kAUSampler_DefaultPercussionBankMSB = $78;
  kAUSampler_DefaultMelodicBankMSB = $79;
  kAUSampler_DefaultBankLSB = $00;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}

{$if defined(TARGET_RT_BIG_ENDIAN)}
{$ifdef TYPES}
type
  AUNumVersion = record
    majorRev: UInt8;
    minorAndBugRev: UInt8;
    stage: UInt8;
    nonRelRev: UInt8;
  end;
type
  AUNumVersionPtr = ^AUNumVersion;
{$endif}

{$else}
{$ifdef TYPES}
type
  AUNumVersion = record
    nonRelRev: UInt8;
    stage: UInt8;
    minorAndBugRev: UInt8;
    majorRev: UInt8;
  end;
type
  AUNumVersionPtr = ^AUNumVersion;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUHostIdentifier = record
    hostName: CFStringRef;
    hostVersion: AUNumVersion;
  end;
type
  AUHostIdentifierPtr = ^AUHostIdentifier;

const
  kAudioUnitParameterFlag_Global = 1 shl 0;
  kAudioUnitParameterFlag_Input = 1 shl 1;
  kAudioUnitParameterFlag_Output = 1 shl 2;
  kAudioUnitParameterFlag_Group = 1 shl 3;
const
  kAudioUnitParameterFlag_HasName = kAudioUnitParameterFlag_ValuesHaveStrings;

type
  AudioUnitMIDIControlMapping = record
    midiNRPN: UInt16;
    midiControl: UInt8;
    scope: UInt8;
    element: AudioUnitElement;
    parameter: AudioUnitParameterID;
  end;
type
  AudioUnitMIDIControlMappingPtr = ^AudioUnitMIDIControlMapping;
type
  AudioUnitParameterValueName = record
    inParamID: AudioUnitParameterID;
    inValue: Float32 *__nonnull;
    outName: CFStringRef;
  end;
type
  AudioUnitParameterValueNamePtr = ^AudioUnitParameterValueName;

const
  kSpeakerConfiguration_HeadPhones = 0;
  kSpeakerConfiguration_Stereo = 1;
  kSpeakerConfiguration_Quad = 2;
  kSpeakerConfiguration_5_0 = 3;
  kSpeakerConfiguration_5_1 = kSpeakerConfiguration_5_0;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AUSamplerBankPresetData = record
    bankURL: CFURLRef;
    bankMSB: UInt8;
    bankLSB: UInt8;
    presetID: UInt8;
    reserved: UInt8;
  end;
type
  AUSamplerBankPresetDataPtr = ^AUSamplerBankPresetData;
{$endif}

{$endif}
