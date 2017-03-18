{ Parsed from HomeKit.framework HMCharacteristicEvent.h }

{$ifdef TYPES}
type
  HMCharacteristicEventPtr = ^HMCharacteristicEvent;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristicEvent = objcclass external (NSObject, TriggerValueType : id<NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithCharacteristic_triggerValue (characteristic: HMCharacteristic; triggerValue: nullable TriggerValueType): instancetype; message 'initWithCharacteristic:triggerValue:';
    function characteristic: HMCharacteristic; message 'characteristic';
    function triggerValue: TriggerValueType; message 'triggerValue';
    procedure updateTriggerValue_completionHandler (triggerValue_: nullable TriggerValueType; completion: OpaqueCBlock); message 'updateTriggerValue:completionHandler:';
  end;
{$endif}

