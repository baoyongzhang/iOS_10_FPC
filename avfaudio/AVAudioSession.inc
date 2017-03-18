{ Parsed from AVFAudio.framework AVAudioSession.h }

{ Types from AVAudioSession }
{$ifdef TYPES}

type
  PermissionBlock = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  AVAudioSessionPtr = ^AVAudioSession;
  AVAudioSessionChannelDescriptionPtr = ^AVAudioSessionChannelDescription;
  AVAudioSessionPortDescriptionPtr = ^AVAudioSessionPortDescription;
  AVAudioSessionRouteDescriptionPtr = ^AVAudioSessionRouteDescription;
  AVAudioSessionDataSourceDescriptionPtr = ^AVAudioSessionDataSourceDescription;
  AVAudioSessionDelegateProtocolPtr = ^AVAudioSessionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionInterruptionOptions = NSUInteger;
  AVAudioSessionInterruptionOptionsPtr = ^AVAudioSessionInterruptionOptions;

const
  AVAudioSessionInterruptionOptionShouldResume = 1;

type
  AVAudioSessionSetActiveOptions = NSUInteger;
  AVAudioSessionSetActiveOptionsPtr = ^AVAudioSessionSetActiveOptions;

const
  AVAudioSessionSetActiveOptionNotifyOthersOnDeactivation = 1;

type
  AVAudioSessionPortOverride = NSUInteger;
  AVAudioSessionPortOverridePtr = ^AVAudioSessionPortOverride;

const
  AVAudioSessionPortOverrideNone = 0;
  AVAudioSessionPortOverrideSpeaker = 1;
  __TVOS_PROHIBITED = 2;
  __WATCHOS_PROHIBITED = 'spkr';

type
  AVAudioSessionRouteChangeReason = NSUInteger;
  AVAudioSessionRouteChangeReasonPtr = ^AVAudioSessionRouteChangeReason;

const
  AVAudioSessionRouteChangeReasonUnknown = 0;
  AVAudioSessionRouteChangeReasonNewDeviceAvailable = 1;
  AVAudioSessionRouteChangeReasonOldDeviceUnavailable = 2;
  AVAudioSessionRouteChangeReasonCategoryChange = 3;
  AVAudioSessionRouteChangeReasonOverride = 4;
  AVAudioSessionRouteChangeReasonWakeFromSleep = 6;
  AVAudioSessionRouteChangeReasonNoSuitableRouteForCategory = 7;
  AVAudioSessionRouteChangeReasonRouteConfigurationChange = 8 { available in 7_0 };

type
  AVAudioSessionCategoryOptions = NSUInteger;
  AVAudioSessionCategoryOptionsPtr = ^AVAudioSessionCategoryOptions;

const
  AVAudioSessionCategoryOptionMixWithOthers = $1;
  AVAudioSessionCategoryOptionDuckOthers = $2;
  AVAudioSessionCategoryOptionAllowBluetooth = 0;
  __TVOS_PROHIBITED = 1;
  __WATCHOS_PROHIBITED = $4;
  AVAudioSessionCategoryOptionDefaultToSpeaker = 2;
  __TVOS_PROHIBITED = 3;
  __WATCHOS_PROHIBITED = $8;
  AVAudioSessionCategoryOptionInterruptSpokenAudioAndMixWithOthers = $11 { available in 9_0 };
  AVAudioSessionCategoryOptionAllowBluetoothA2DP = $20 { available in 10_0 };
  AVAudioSessionCategoryOptionAllowAirPlay = 4 { available in 10_0 };
  __WATCHOS_PROHIBITED = $40 { available in 10_0 };

type
  AVAudioSessionInterruptionType = NSUInteger;
  AVAudioSessionInterruptionTypePtr = ^AVAudioSessionInterruptionType;

const
  AVAudioSessionInterruptionTypeBegan = 1;
  AVAudioSessionInterruptionTypeEnded = 0;

type
  AVAudioSessionSilenceSecondaryAudioHintType = NSUInteger;
  AVAudioSessionSilenceSecondaryAudioHintTypePtr = ^AVAudioSessionSilenceSecondaryAudioHintType;

const
  AVAudioSessionSilenceSecondaryAudioHintTypeBegin = 1;
  AVAudioSessionSilenceSecondaryAudioHintTypeEnd = 0;

type
  AVAudioSessionRecordPermission = NSUInteger;
  AVAudioSessionRecordPermissionPtr = ^AVAudioSessionRecordPermission;

const
  AVAudioSessionRecordPermissionUndetermined = 'undt';
  AVAudioSessionRecordPermissionDenied = 'deny';
  AVAudioSessionRecordPermissionGranted = 'grnt';

type
  AVAudioSessionIOType = NSUInteger;
  AVAudioSessionIOTypePtr = ^AVAudioSessionIOType;

const
  AVAudioSessionIOTypeNotSpecified = 0;
  AVAudioSessionIOTypeAggregated = 1;

type
  AVAudioSessionErrorCode = NSInteger;
  AVAudioSessionErrorCodePtr = ^AVAudioSessionErrorCode;

const
  AVAudioSessionErrorCodeNone = 0;
  AVAudioSessionErrorCodeMediaServicesFailed = 'msrv';
  AVAudioSessionErrorCodeIsBusy = '!act';
  AVAudioSessionErrorCodeIncompatibleCategory = '!cat';
  AVAudioSessionErrorCodeCannotInterruptOthers = '!int';
  AVAudioSessionErrorCodeMissingEntitlement = 'ent?';
  AVAudioSessionErrorCodeSiriIsRecording = 'siri';
  AVAudioSessionErrorCodeCannotStartPlaying = '!pla';
  AVAudioSessionErrorCodeCannotStartRecording = '!rec';
  AVAudioSessionErrorCodeBadParam = -50;
  AVAudioSessionErrorInsufficientPriority = '!pri';
  AVAudioSessionErrorCodeResourceNotAvailable = '!res';
  AVAudioSessionErrorCodeUnspecified = 'what';
{$endif}

{$ifdef CLASSES}

type
  AVAudioSession = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function sharedInstance: AVAudioSession; message 'sharedInstance';
    function setActive_error (active: boolean; outError: NSErrorPtr): boolean; message 'setActive:error:';
    function setActive_withOptions_error (active: boolean; options: AVAudioSessionSetActiveOptions; outError: NSErrorPtr): boolean; message 'setActive:withOptions:error:'; { available in 6_0 }
    function availableCategories: NSString *ProtocolPtr; message 'availableCategories';
    function setCategory_error (category: NSString; outError: NSErrorPtr): boolean; message 'setCategory:error:';
    function setCategory_withOptions_error (category: NSString; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): boolean; message 'setCategory:withOptions:error:'; { available in 6_0 }
    function setCategory_mode_options_error (category: NSString; mode: NSString; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): boolean; message 'setCategory:mode:options:error:'; { available in 10_0 }
    function category: NSString; message 'category';
    function recordPermission                       __TVOS_PROHIBITED __WATCHOS_PROHIBITED: AVAudioSessionRecordPermission; message 'recordPermission                       __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available in 8_0 }
    procedure requestRecordPermission (response: PermissionBlock); message 'requestRecordPermission:'; { available in 7_0 }
    function categoryOptions: AVAudioSessionCategoryOptions; message 'categoryOptions';
    function availableModes: NSString *ProtocolPtr; message 'availableModes';
    function setMode_error (mode: NSString; outError: NSErrorPtr): boolean; message 'setMode:error:'; { available in 5_0 }
    function mode: NSString; message 'mode';
    function overrideOutputAudioPort_error (portOverride: AVAudioSessionPortOverride; outError: NSErrorPtr): boolean; message 'overrideOutputAudioPort:error:'; { available in 6_0 }
    function isOtherAudioPlaying: boolean; message 'isOtherAudioPlaying';
    function secondaryAudioShouldBeSilencedHint: boolean; message 'secondaryAudioShouldBeSilencedHint';
    function currentRoute: AVAudioSessionRouteDescription; message 'currentRoute';
    function setPreferredInput_error (inPort: nullable AVAudioSessionPortDescriptionPtr; outError: NSErrorPtr): boolean; message 'setPreferredInput:error:'; { available in 7_0 }
    function __WATCHOS_PROHIBITED_: AVAudioSessionPortDescription *preferredInput; message 'WATCHOS_PROHIBITED';
    function availableInputs: AVAudioSessionPortDescription *ProtocolPtr; message 'availableInputs';
  end;


type
  AVAudioSessionHardwareConfiguration = objccategory external (AVAudioSession)
    function setPreferredSampleRate_error (sampleRate: double; outError: NSErrorPtr): boolean; message 'setPreferredSampleRate:error:'; { available in 6_0 }
    function __WATCHOS_PROHIBITED_: double preferredSampleRate; message 'WATCHOS_PROHIBITED';
    function setPreferredIOBufferDuration_error (duration: NSTimeInterval; outError: NSErrorPtr): boolean; message 'setPreferredIOBufferDuration:error:';
    function __WATCHOS_PROHIBITED_: NSTimeInterval preferredIOBufferDuration; message 'WATCHOS_PROHIBITED';
    function setPreferredInputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): boolean; message 'setPreferredInputNumberOfChannels:error:'; { available in 7_0 }
    function __WATCHOS_PROHIBITED__: NSInteger preferredInputNumberOfChannels; message 'WATCHOS_PROHIBITED';
    function setPreferredOutputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): boolean; message 'setPreferredOutputNumberOfChannels:error:'; { available in 7_0 }
    function __WATCHOS_PROHIBITED___: NSInteger preferredOutputNumberOfChannels; message 'WATCHOS_PROHIBITED';
    function maximumInputNumberOfChannels: NSInteger; message 'maximumInputNumberOfChannels';
    function maximumOutputNumberOfChannels: NSInteger; message 'maximumOutputNumberOfChannels';
    function setInputGain_error (gain: single; outError: NSErrorPtr): boolean; message 'setInputGain:error:'; { available in 6_0 }
    function __WATCHOS_PROHIBITED____: float inputGain; message 'WATCHOS_PROHIBITED';
    function isInputGainSettable: BOOL inputGainSettable; message 'isInputGainSettable';
    function isInputAvailable: boolean; message 'isInputAvailable';
    function inputDataSources: AVAudioSessionDataSourceDescription *ProtocolPtr; message 'inputDataSources';
    function inputDataSource: AVAudioSessionDataSourceDescription; message 'inputDataSource';
    function setInputDataSource_error (dataSource: nullable AVAudioSessionDataSourceDescriptionPtr; outError: NSErrorPtr): boolean; message 'setInputDataSource:error:'; { available in 6_0 }
    function outputDataSources: AVAudioSessionDataSourceDescription *ProtocolPtr; message 'outputDataSources';
    function outputDataSource: AVAudioSessionDataSourceDescription; message 'outputDataSource';
    function setOutputDataSource_error (dataSource: nullable AVAudioSessionDataSourceDescriptionPtr; outError: NSErrorPtr): boolean; message 'setOutputDataSource:error:'; { available in 6_0 }
    function sampleRate: double; message 'sampleRate';
    function inputNumberOfChannels: NSInteger; message 'inputNumberOfChannels';
    function outputNumberOfChannels: NSInteger; message 'outputNumberOfChannels';
    function outputVolume: single; message 'outputVolume';
    function inputLatency: NSTimeInterval; message 'inputLatency';
    function outputLatency: NSTimeInterval; message 'outputLatency';
    function IOBufferDuration: NSTimeInterval; message 'IOBufferDuration';
    function setAggregatedIOPreference_error (inIOType: AVAudioSessionIOType; outError: NSErrorPtr): boolean; message 'setAggregatedIOPreference:error:'; { available in 10_0 }
  end;


type
  AVAudioSessionChannelDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function channelName: NSString; message 'channelName';
    function owningPortUID: NSString; message 'owningPortUID';
    function channelNumber: NSUInteger; message 'channelNumber';
    function channelLabel: AudioChannelLabel; message 'channelLabel';
  end;

type
  AVAudioSessionPortDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function portType: NSString; message 'portType';
    function portName: NSString; message 'portName';
    function UID: NSString; message 'UID';
    function hasHardwareVoiceCallProcessing: boolean; message 'hasHardwareVoiceCallProcessing';
    function channels: AVAudioSessionChannelDescription *ProtocolPtr; message 'channels';
    function __WATCHOS_PROHIBITED_: AVAudioSessionDataSourceDescription *Protocol *dataSources; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_: AVAudioSessionDataSourceDescription *selectedDataSource; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__: AVAudioSessionDataSourceDescription *preferredDataSource; message 'WATCHOS_PROHIBITED';
    function setPreferredDataSource_error (dataSource: nullable AVAudioSessionDataSourceDescriptionPtr; outError: NSErrorPtr): boolean; message 'setPreferredDataSource:error:'; { available in 7_0 }
  end;

type
  AVAudioSessionRouteDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function inputs: AVAudioSessionPortDescription *ProtocolPtr; message 'inputs';
    function outputs: AVAudioSessionPortDescription *ProtocolPtr; message 'outputs';
  end;

type
  AVAudioSessionDataSourceDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function dataSourceID: NSNumber; message 'dataSourceID';
    function dataSourceName: NSString; message 'dataSourceName';
    function location: NSString; message 'location';
    function orientation: NSString; message 'orientation';
    function __WATCHOS_PROHIBITED_: NSString *Protocol *supportedPolarPatterns; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_: NSString *selectedPolarPattern; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__: NSString *preferredPolarPattern; message 'WATCHOS_PROHIBITED';
    function setPreferredPolarPattern_error (pattern: nullable NSStringPtr; outError: NSErrorPtr): boolean; message 'setPreferredPolarPattern:error:'; { available in 7_0 }
  end;


type
  AVAudioSessionDeprecated = objccategory external (AVAudioSession)
    procedure set__WATCHOS_PROHIBITED(newValue: AVAudioSessionDelegateProtocol delegate __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: AVAudioSessionDelegateProtocol delegate __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function init                              __WATCHOS_PROHIBITED: instancetype; message 'init                              __WATCHOS_PROHIBITED'; deprecated 'in 3_0, 10_0';
    function setActive_withFlags_error (active: boolean; flags: NSInteger; outError: NSErrorPtr): boolean; message 'setActive:withFlags:error:'; deprecated 'in 4_0, 6_0';
    function __WATCHOS_PROHIBITED_: BOOL inputIsAvailable __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__: double currentHardwareSampleRate __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED___: NSInteger currentHardwareInputNumberOfChannels __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED____: NSInteger currentHardwareOutputNumberOfChannels __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function setPreferredHardwareSampleRate_error (sampleRate: double; outError: NSErrorPtr): boolean; message 'setPreferredHardwareSampleRate:error:'; deprecated 'in 3_0, 6_0';
    function __WATCHOS_PROHIBITED_____: double preferredHardwareSampleRate __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioSessionDelegateProtocol = objcprotocol external name 'AVAudioSessionDelegate' (NSObjectProtocol)
  optional
    procedure beginInterruption; message 'beginInterruption';
    procedure endInterruptionWithFlags (flags: NSUInteger); message 'endInterruptionWithFlags:'; { available in 4_0 }
    procedure endInterruption; message 'endInterruption';
    procedure inputIsAvailableChanged (isInputAvailable: boolean); message 'inputIsAvailableChanged:';
  end;
{$endif}

{$ifdef TYPES}
const
  AVAudioSessionInterruptionFlags_ShouldResume = 1;
const
  AVAudioSessionSetActiveFlags_NotifyOthersOnDeactivation = 1;
{$endif}

