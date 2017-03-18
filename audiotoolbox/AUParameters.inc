{ Parsed from AudioToolbox.framework AUParameters.h }

{$ifdef TYPES}
type
  AUParameterNodePtr = ^AUParameterNode;
  AUParameterGroupPtr = ^AUParameterGroup;
  AUParameterTreePtr = ^AUParameterTree;
  AUParameterPtr = ^AUParameter;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  AUValue = single;
  AUValuePtr = ^AUValue;
  AUParameterAddress = cuint64;
  AUParameterAddressPtr = ^AUParameterAddress;
  AUParameterAutomationEventType = cuint32;
  AUParameterAutomationEventTypePtr = ^AUParameterAutomationEventType;

const
  AUParameterAutomationEventTypeValue = 0;
  AUParameterAutomationEventTypeTouch = 1;
  AUParameterAutomationEventTypeRelease = 2;

type
  AURecordedParameterEvent = record
    hostTime: cuint64;
    address: AUParameterAddress;
    value: AUValue;
  end;
type
  AURecordedParameterEventPtr = ^AURecordedParameterEvent;
type
  AUParameterAutomationEvent = record
    hostTime: cuint64;
    address: AUParameterAddress;
    value: AUValue;
    eventType: AUParameterAutomationEventType;
    reserved: cuint64;
  end;
type
  AUParameterAutomationEventPtr = ^AUParameterAutomationEvent;

type
  AUParameterObserver = OpaqueCBlock;
  AUParameterRecordingObserver = OpaqueCBlock;
  AUParameterAutomationObserver = OpaqueCBlock;
  AUParameterObserverToken = pointer;
{$endif}

{$ifdef CLASSES}

type
  AUParameterNode = objcclass external (NSObject)
  public
    function identifier: NSString; message 'identifier';
    function keyPath: NSString; message 'keyPath';
    function displayName: NSString; message 'displayName';
    function displayNameWithLength (maximumLength: NSInteger): NSString; message 'displayNameWithLength:';
    function tokenByAddingParameterObserver (observer: AUParameterObserver): AUParameterObserverToken; message 'tokenByAddingParameterObserver:';
    function tokenByAddingParameterRecordingObserver (observer: AUParameterRecordingObserver): AUParameterObserverToken; message 'tokenByAddingParameterRecordingObserver:';
    function tokenByAddingParameterAutomationObserver (observer: AUParameterAutomationObserver): AUParameterObserverToken; message 'tokenByAddingParameterAutomationObserver:'; { available in 10_12, 10_0 }
    procedure removeParameterObserver (token: AUParameterObserverToken); message 'removeParameterObserver:';
  end;

type
  AUParameterGroup = objcclass external (AUParameterNode, NSSecureCodingProtocol)
  public
    function children: AUParameterNode *ProtocolPtr; message 'children';
    function allParameters: AUParameter *ProtocolPtr; message 'allParameters';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AUParameterTree = objcclass external (AUParameterGroup, NSSecureCodingProtocol)
  public
    function parameterWithAddress (address: AUParameterAddress): AUParameter *__nullable; message 'parameterWithAddress:';
    function parameterWithID_scope_element (paramID: AudioUnitParameterID; scope: AudioUnitScope; element: AudioUnitElement): AUParameter *__nullable; message 'parameterWithID:scope:element:';
  end;

type
  AUParameter = objcclass external (AUParameterNode, NSSecureCodingProtocol)
  public
    function minValue: AUValue; message 'minValue';
    function maxValue: AUValue; message 'maxValue';
    function unit_: AudioUnitParameterUnit; message 'unit';
    function unitName: NSString; message 'unitName';
    function flags: AudioUnitParameterOptions; message 'flags';
    function address: AUParameterAddress; message 'address';
    function valueStrings: NSString *ProtocolPtr; message 'valueStrings';
    function dependentParameters: NSNumber *ProtocolPtr; message 'dependentParameters';
    procedure setValue(newValue: AUValue); message 'setValue:';
    function value: AUValue; message 'value';
    procedure setValue_originator (value_: AUValue; originator: AUParameterObserverToken __nullable); message 'setValue:originator:';
    procedure setValue_originator_atHostTime (value_: AUValue; originator: AUParameterObserverToken __nullable; hostTime: cuint64); message 'setValue:originator:atHostTime:';
    procedure setValue_originator_atHostTime_eventType (value_: AUValue; originator: AUParameterObserverToken __nullable; hostTime: cuint64; eventType: AUParameterAutomationEventType); message 'setValue:originator:atHostTime:eventType:'; { available in 10_12, 10_0 }
    function stringFromValue (value_: AUValue *__nullable): NSString; message 'stringFromValue:';
    function valueFromString (string_: NSString): AUValue; message 'valueFromString:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
