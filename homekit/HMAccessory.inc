{ Parsed from HomeKit.framework HMAccessory.h }

{$ifdef TYPES}
type
  HMAccessoryPtr = ^HMAccessory;
  HMAccessoryDelegateProtocolPtr = ^HMAccessoryDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMAccessory = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function __TVOS_PROHIBITED_: NSUUID *identifier __WATCHOS_PROHIBITED; message 'TVOS_PROHIBITED';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure setDelegate(newValue: HMAccessoryDelegateProtocol); message 'setDelegate:';
    function delegate: HMAccessoryDelegateProtocol; message 'delegate';
    function isReachable: boolean; message 'isReachable';
    function isBridged: boolean; message 'isBridged';
    function __TVOS_PROHIBITED_: NSUUID *Protocol *identifiersForBridgedAccessories __WATCHOS_PROHIBITED; message 'TVOS_PROHIBITED';
    function uniqueIdentifiersForBridgedAccessories: NSUUID *ProtocolPtr; message 'uniqueIdentifiersForBridgedAccessories';
    function category: HMAccessoryCategory; message 'category';
    function room: HMRoom; message 'room';
    function services: HMService *ProtocolPtr; message 'services';
    function isBlocked: boolean; message 'isBlocked';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure identifyWithCompletionHandler (completion: OpaqueCBlock); message 'identifyWithCompletionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMAccessoryDelegateProtocol = objcprotocol external name 'HMAccessoryDelegate' (NSObjectProtocol)
  optional
    procedure accessoryDidUpdateName (accessory: HMAccessory); message 'accessoryDidUpdateName:';
    procedure accessory_didUpdateNameForService (accessory: HMAccessory; service: HMService); message 'accessory:didUpdateNameForService:';
    procedure accessory_didUpdateAssociatedServiceTypeForService (accessory: HMAccessory; service: HMService); message 'accessory:didUpdateAssociatedServiceTypeForService:';
    procedure accessoryDidUpdateServices (accessory: HMAccessory); message 'accessoryDidUpdateServices:';
    procedure accessoryDidUpdateReachability (accessory: HMAccessory); message 'accessoryDidUpdateReachability:';
    procedure accessory_service_didUpdateValueForCharacteristic (accessory: HMAccessory; service: HMService; characteristic: HMCharacteristic); message 'accessory:service:didUpdateValueForCharacteristic:';
  end;
{$endif}

