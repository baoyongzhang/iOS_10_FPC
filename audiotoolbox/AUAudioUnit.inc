{ Parsed from AudioToolbox.framework AUAudioUnit.h }

{ Types from AUAudioInputOutputUnit }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AUAudioUnitPtr = ^AUAudioUnit;
  AUAudioUnitBusArrayPtr = ^AUAudioUnitBusArray;
  AUAudioUnitBusPtr = ^AUAudioUnitBus;
  AUAudioUnitPresetPtr = ^AUAudioUnitPreset;
{$endif}

{$if defined(__OBJC2__)}

{$ifdef TYPES}
type
  AUAudioUnitStatus = OSStatus;
  AUAudioUnitStatusPtr = ^AUAudioUnitStatus;
  AUEventSampleTime = cint64;
  AUEventSampleTimePtr = ^AUEventSampleTime;

const
  AUEventSampleTimeImmediate = $ffffffff00000000;

type
  AUAudioFrameCount = cuint32;
  AUAudioFrameCountPtr = ^AUAudioFrameCount;
  AUAudioChannelCount = cuint32;
  AUAudioChannelCountPtr = ^AUAudioChannelCount;
  AUAudioUnitBusType = NSInteger;
  AUAudioUnitBusTypePtr = ^AUAudioUnitBusType;

const
  AUAudioUnitBusTypeInput = 1;
  AUAudioUnitBusTypeOutput = 2;

type
  AURenderPullInputBlock = OpaqueCBlock;
  AURenderBlock = OpaqueCBlock;
  AURenderObserver = OpaqueCBlock;
  AUScheduleParameterBlock = OpaqueCBlock;
  AUScheduleMIDIEventBlock = OpaqueCBlock;
  AUHostMusicalContextBlock = OpaqueCBlock;
  AUHostTransportStateFlags = NSUInteger;
  AUHostTransportStateFlagsPtr = ^AUHostTransportStateFlags;

const
  AUHostTransportStateChanged = 1;
  AUHostTransportStateMoving = 2;
  AUHostTransportStateRecording = 4;
  AUHostTransportStateCycling = 8;

type
  AUHostTransportStateBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  AUAudioUnit = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithComponentDescription_options_error (componentDescription: AudioComponentDescription; options: AudioComponentInstantiationOptions; outError: NSErrorPtr): nullable instancetype; message 'initWithComponentDescription:options:error:'; { NS_DESIGNATED_INITIALIZER }
    function initWithComponentDescription_error (componentDescription: AudioComponentDescription; outError: NSErrorPtr): nullable instancetype; message 'initWithComponentDescription:error:';
    class procedure instantiateWithComponentDescription_options_completionHandler (componentDescription: AudioComponentDescription; options: AudioComponentInstantiationOptions; completionHandler: OpaqueCBlock); message 'instantiateWithComponentDescription:options:completionHandler:';
    function componentDescription: AudioComponentDescription; message 'componentDescription';
    function component: AudioComponent; message 'component';
    function componentName: NSString; message 'componentName';
    function audioUnitName: NSString; message 'audioUnitName';
    function manufacturerName: NSString; message 'manufacturerName';
    function componentVersion: cuint32; message 'componentVersion';
    function allocateRenderResourcesAndReturnError (outError: NSErrorPtr): boolean; message 'allocateRenderResourcesAndReturnError:';
    procedure deallocateRenderResources; message 'deallocateRenderResources';
    function renderResourcesAllocated: boolean; message 'renderResourcesAllocated';
    procedure reset; message 'reset';
    function inputBusses: AUAudioUnitBusArray; message 'inputBusses';
    function outputBusses: AUAudioUnitBusArray; message 'outputBusses';
    function renderBlock: AURenderBlock; message 'renderBlock';
    function scheduleParameterBlock: AUScheduleParameterBlock; message 'scheduleParameterBlock';
    function tokenByAddingRenderObserver (observer: AURenderObserver): NSInteger; message 'tokenByAddingRenderObserver:';
    procedure removeRenderObserver (token: NSInteger); message 'removeRenderObserver:';
    procedure setMaximumFramesToRender(newValue: AUAudioFrameCount); message 'setMaximumFramesToRender:';
    function maximumFramesToRender: AUAudioFrameCount; message 'maximumFramesToRender';
    function parameterTree: AUParameterTree; message 'parameterTree';
    function parametersForOverviewWithCount (count: NSInteger): NSNumber *ProtocolPtr; message 'parametersForOverviewWithCount:';
    function allParameterValues: boolean; message 'allParameterValues';
    function isMusicDeviceOrEffect: boolean; message 'isMusicDeviceOrEffect';
    function virtualMIDICableCount: NSInteger; message 'virtualMIDICableCount';
    function scheduleMIDIEventBlock: AUScheduleMIDIEventBlock; message 'scheduleMIDIEventBlock';
    procedure setFullState(newValue: NSDictionary); message 'setFullState:';
    function fullState: NSDictionary; message 'fullState';
    procedure setFullStateForDocument(newValue: NSDictionary); message 'setFullStateForDocument:';
    function fullStateForDocument: NSDictionary; message 'fullStateForDocument';
    function factoryPresets: AUAudioUnitPreset *ProtocolPtr; message 'factoryPresets';
    procedure setCurrentPreset(newValue: AUAudioUnitPreset); message 'setCurrentPreset:';
    function currentPreset: AUAudioUnitPreset; message 'currentPreset';
    function latency: NSTimeInterval; message 'latency';
    function tailTime: NSTimeInterval; message 'tailTime';
    procedure setRenderQuality(newValue: NSInteger); message 'setRenderQuality:';
    function renderQuality: NSInteger; message 'renderQuality';
    procedure setShouldBypassEffect(newValue: boolean); message 'setShouldBypassEffect:';
    function shouldBypassEffect: boolean; message 'shouldBypassEffect';
    function canProcessInPlace: boolean; message 'canProcessInPlace';
    procedure setRenderingOffline(newValue: boolean); message 'setRenderingOffline:';
    function isRenderingOffline: boolean; message 'isRenderingOffline';
    function channelCapabilities: NSNumber *ProtocolPtr; message 'channelCapabilities';
    procedure setMusicalContextBlock(newValue: AUHostMusicalContextBlock); message 'setMusicalContextBlock:';
    function musicalContextBlock: AUHostMusicalContextBlock; message 'musicalContextBlock';
    procedure setTransportStateBlock(newValue: AUHostTransportStateBlock); message 'setTransportStateBlock:';
    function transportStateBlock: AUHostTransportStateBlock; message 'transportStateBlock';
    procedure setContextName(newValue: NSString); message 'setContextName:';
    function contextName: NSString; message 'contextName';
    function supportsMPE: boolean; message 'supportsMPE';
    procedure setChannelMap(newValue: NSNumber *ProtocolPtr); message 'setChannelMap:';
    function channelMap: NSNumber *ProtocolPtr; message 'channelMap';
  end;
{$endif}

{$ifdef TYPES}
type
  AUInputHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  AUAudioInputOutputUnit = objccategory external (AUAudioUnit)
    function canPerformInput: boolean; message 'canPerformInput';
    function canPerformOutput: boolean; message 'canPerformOutput';
    procedure setInputEnabled(newValue: boolean); message 'setInputEnabled:';
    function isInputEnabled: boolean; message 'isInputEnabled';
    procedure setOutputEnabled(newValue: boolean); message 'setOutputEnabled:';
    function isOutputEnabled: boolean; message 'isOutputEnabled';
    procedure setOutputProvider(newValue: AURenderPullInputBlock); message 'setOutputProvider:';
    function outputProvider: AURenderPullInputBlock; message 'outputProvider';
    procedure setInputHandler(newValue: AUInputHandler); message 'setInputHandler:';
    function inputHandler: AUInputHandler; message 'inputHandler';
    {$if  not defined(TARGET_OS_IPHONE)}
    function deviceID: AudioObjectID; message 'deviceID';
    function setDeviceID_error (deviceID_: AudioObjectID; outError: NSErrorPtr): boolean; message 'setDeviceID:error:';
    {$endif}
    function startHardwareAndReturnError (outError: NSErrorPtr): boolean; message 'startHardwareAndReturnError:';
    procedure stopHardware; message 'stopHardware';
  end;


type
  AUAudioUnitBusArray = objcclass external (NSObject, NSFastEnumerationProtocol)
  public
    function init: instancetype; message 'init';
    function initWithAudioUnit_busType_busses (owner: AUAudioUnit; busType: AUAudioUnitBusType; busArray: AUAudioUnitBus *ProtocolPtr): instancetype; message 'initWithAudioUnit:busType:busses:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAudioUnit_busType (owner: AUAudioUnit; busType: AUAudioUnitBusType): instancetype; message 'initWithAudioUnit:busType:';
    function count: NSUInteger; message 'count';
    function objectAtIndexedSubscript (index: NSUInteger): AUAudioUnitBus; message 'objectAtIndexedSubscript:';
    function isCountChangeable: boolean; message 'isCountChangeable';
    function setBusCount_error (count_: NSUInteger; outError: NSErrorPtr): boolean; message 'setBusCount:error:';
    procedure addObserverToAllBusses_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: void * __nullable); message 'addObserverToAllBusses:forKeyPath:options:context:';
    procedure removeObserverFromAllBusses_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: void * __nullable); message 'removeObserverFromAllBusses:forKeyPath:context:';
    function ownerAudioUnit: AUAudioUnit; message 'ownerAudioUnit';
    function busType: AUAudioUnitBusType; message 'busType';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;

type
  AUAudioUnitBus = objcclass external (NSObject)
  public
    function format: AVAudioFormat; message 'format';
    function setFormat_error (format_: AVAudioFormat; outError: NSErrorPtr): boolean; message 'setFormat:error:';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function index: NSUInteger; message 'index';
    function busType: AUAudioUnitBusType; message 'busType';
    function ownerAudioUnit: AUAudioUnit; message 'ownerAudioUnit';
    function supportedChannelLayoutTags: NSNumber *ProtocolPtr; message 'supportedChannelLayoutTags';
    procedure setContextPresentationLatency(newValue: NSTimeInterval); message 'setContextPresentationLatency:';
    function contextPresentationLatency: NSTimeInterval; message 'contextPresentationLatency';
  end;

type
  AUAudioUnitPreset = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setNumber(newValue: NSInteger); message 'setNumber:';
    function number: NSInteger; message 'number';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
