{ Parsed from HomeKit.framework HMCharacteristicWriteAction.h }

{$ifdef TYPES}
type
  HMCharacteristicWriteActionPtr = ^HMCharacteristicWriteAction;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristicWriteAction = objcclass external (NSObject, TargetValueType : id<NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithCharacteristic_targetValue (characteristic: HMCharacteristic; targetValue: TargetValueType): instancetype; message 'initWithCharacteristic:targetValue:'; { NS_DESIGNATED_INITIALIZER }
    function characteristic: HMCharacteristic; message 'characteristic';
    function targetValue: TargetValueType; message 'targetValue';
    procedure updateTargetValue_completionHandler (targetValue_: TargetValueType; completion: OpaqueCBlock); message 'updateTargetValue:completionHandler:';
  end;
{$endif}

