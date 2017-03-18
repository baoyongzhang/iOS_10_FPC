{ Parsed from HomeKit.framework HMCharacteristic.h }

{$ifdef TYPES}
type
  HMCharacteristicPtr = ^HMCharacteristic;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristic = objcclass external (NSObject)
  public
    function characteristicType: NSString; message 'characteristicType';
    function localizedDescription: NSString; message 'localizedDescription';
    function service: HMService; message 'service';
    function properties: NSString *ProtocolPtr; message 'properties';
    function metadata: HMCharacteristicMetadata; message 'metadata';
    function value: id; message 'value';
    function isNotificationEnabled: boolean; message 'isNotificationEnabled';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure writeValue_completionHandler (value_: nullable id; completion: OpaqueCBlock); message 'writeValue:completionHandler:';
    procedure readValueWithCompletionHandler (completion: OpaqueCBlock); message 'readValueWithCompletionHandler:';
    procedure enableNotification_completionHandler (enable: boolean; completion: OpaqueCBlock); message 'enableNotification:completionHandler:';
    procedure updateAuthorizationData_completionHandler (data: nullable NSDataPtr; completion: OpaqueCBlock); message 'updateAuthorizationData:completionHandler:';
  end;
{$endif}

