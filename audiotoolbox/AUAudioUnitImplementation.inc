{ Parsed from AudioToolbox.framework AUAudioUnitImplementation.h }

{$ifdef TYPES}
type
  AUAudioUnitV2BridgePtr = ^AUAudioUnitV2Bridge;
  AUAudioUnitFactoryProtocolPtr = ^AUAudioUnitFactoryProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  AURenderEventType = cuint8;
  AURenderEventTypePtr = ^AURenderEventType;

const
  AURenderEventParameter = 1;
  AURenderEventParameterRamp = 2;
  AURenderEventMIDI = 8;
  AURenderEventMIDISysEx = 9;

type
  AURenderEventHeader = record
    next: AURenderEvent *__nullable;
    eventSampleTime: AUEventSampleTime;
    eventType: AURenderEventType;
    reserved: cuint8;
  end;
type
  AURenderEventHeaderPtr = ^AURenderEventHeader;
type
  AUParameterEvent = record
    next: AURenderEvent *__nullable;
    eventSampleTime: AUEventSampleTime;
    eventType: AURenderEventType;
    reserved:array[0..2] of cuint8;
    rampDurationSampleFrames: AUAudioFrameCount;
    parameterAddress: AUParameterAddress;
    value: AUValue;
  end;
type
  AUParameterEventPtr = ^AUParameterEvent;
type
  AUMIDIEvent = record
    next: AURenderEvent *__nullable;
    eventSampleTime: AUEventSampleTime;
    eventType: AURenderEventType;
    reserved: cuint8;
    length: cuint16;
    cable: cuint8;
    data:array[0..2] of cuint8;
  end;
type
  AUMIDIEventPtr = ^AUMIDIEvent;
type
  AURenderEvent = record
    case longint of
      0: (head: AURenderEventHeader);
      1: (parameter: AUParameterEvent);
      2: (MIDI: AUMIDIEvent);
  end;
type
  AURenderEventPtr = ^AURenderEvent;

type
  AUInternalRenderBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  AUAudioUnit_AUAudioUnitImplementation = objccategory external name 'AUAudioUnitImplementation' (AUAudioUnit)
    class procedure registerSubclass_asComponentDescription_name_version (cls: pobjc_class; componentDescription_: AudioComponentDescription; name: NSString; version: UInt32); message 'registerSubclass:asComponentDescription:name:version:';
    function internalRenderBlock: AUInternalRenderBlock; message 'internalRenderBlock';
    function shouldChangeToFormat_forBus (format: AVAudioFormat; bus: AUAudioUnitBus): boolean; message 'shouldChangeToFormat:forBus:';
    procedure setRenderResourcesAllocated (flag: boolean); message 'setRenderResourcesAllocated:';
  end;

type
  AUAudioUnitImplementation = objccategory external (AUAudioUnitBus)
    function initWithFormat_error (format_: AVAudioFormat; outError: NSErrorPtr): nullable instancetype; message 'initWithFormat:error:';
    procedure setSupportedChannelCounts(newValue: NSNumber *ProtocolPtr); message 'setSupportedChannelCounts:';
    function supportedChannelCounts: NSNumber *ProtocolPtr; message 'supportedChannelCounts';
    procedure setMaximumChannelCount(newValue: AUAudioChannelCount); message 'setMaximumChannelCount:';
    function maximumChannelCount: AUAudioChannelCount; message 'maximumChannelCount';
  end;

type
  AUAudioUnitBusImplementation = objccategory external (AUAudioUnitBusArray)
    procedure replaceBusses (busArray: AUAudioUnitBus *ProtocolPtr); message 'replaceBusses:';
  end;

type
  Factory = objccategory external (AUParameterTree)
    class function createParameterWithIdentifier_name_address_min_max_unit_unitName_flags_valueStrings_dependentParameters (identifier_: NSString; name: NSString; address: AUParameterAddress; min: AUValue; max: AUValue; unit_: AudioUnitParameterUnit; unitName: NSString * __nullable; flags: AudioUnitParameterOptions; valueStrings: NSString *Protocol *__nullable; dependentParameters: NSNumber *Protocol *__nullable): AUParameter; message 'createParameterWithIdentifier:name:address:min:max:unit:unitName:flags:valueStrings:dependentParameters:';
    class function createGroupWithIdentifier_name_children (identifier_: NSString; name: NSString; children_: AUParameterNode *ProtocolPtr): AUParameterGroup; message 'createGroupWithIdentifier:name:children:';
    class function createGroupTemplate (children_: AUParameterNode *ProtocolPtr): AUParameterGroup; message 'createGroupTemplate:';
    class function createGroupFromTemplate_identifier_name_addressOffset (templateGroup: AUParameterGroup; identifier_: NSString; name: NSString; addressOffset: AUParameterAddress): AUParameterGroup; message 'createGroupFromTemplate:identifier:name:addressOffset:';
    class function createTreeWithChildren (children_: AUParameterNode *ProtocolPtr): AUParameterTree; message 'createTreeWithChildren:';
  end;
{$endif}

{$ifdef TYPES}
type
  AUImplementorValueObserver = OpaqueCBlock;
  AUImplementorValueProvider = OpaqueCBlock;
  AUImplementorStringFromValueCallback = OpaqueCBlock;
  AUImplementorValueFromStringCallback = OpaqueCBlock;
  AUImplementorDisplayNameWithLengthCallback = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  AUParameterNodeImplementation = objccategory external (AUParameterNode)
    procedure setImplementorValueObserver(newValue: AUImplementorValueObserver); message 'setImplementorValueObserver:';
    function implementorValueObserver: AUImplementorValueObserver; message 'implementorValueObserver';
    procedure setImplementorValueProvider(newValue: AUImplementorValueProvider); message 'setImplementorValueProvider:';
    function implementorValueProvider: AUImplementorValueProvider; message 'implementorValueProvider';
    procedure setImplementorStringFromValueCallback(newValue: AUImplementorStringFromValueCallback); message 'setImplementorStringFromValueCallback:';
    function implementorStringFromValueCallback: AUImplementorStringFromValueCallback; message 'implementorStringFromValueCallback';
    procedure setImplementorValueFromStringCallback(newValue: AUImplementorValueFromStringCallback); message 'setImplementorValueFromStringCallback:';
    function implementorValueFromStringCallback: AUImplementorValueFromStringCallback; message 'implementorValueFromStringCallback';
    procedure setImplementorDisplayNameWithLengthCallback(newValue: AUImplementorDisplayNameWithLengthCallback); message 'setImplementorDisplayNameWithLengthCallback:';
    function implementorDisplayNameWithLengthCallback: AUImplementorDisplayNameWithLengthCallback; message 'implementorDisplayNameWithLengthCallback';
  end;


type
  AUAudioUnitV2Bridge = objcclass external (AUAudioUnit)
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AUAudioUnitFactoryProtocol = objcprotocol external name 'AUAudioUnitFactory' (NSExtensionRequestHandlingProtocol)
    function createAudioUnitWithComponentDescription_error (desc: AudioComponentDescription; error: NSErrorPtr): nullable AUAudioUnitPtr; message 'createAudioUnitWithComponentDescription:error:';
  end;
{$endif}

{$endif}
