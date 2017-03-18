{ Parsed from CoreBluetooth.framework CBPeripheralManager.h }

{$ifdef TYPES}
type
  CBPeripheralManagerPtr = ^CBPeripheralManager;
  CBPeripheralManagerDelegateProtocolPtr = ^CBPeripheralManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBPeripheralManagerAuthorizationStatus = NSInteger;
  CBPeripheralManagerAuthorizationStatusPtr = ^CBPeripheralManagerAuthorizationStatus;

const
  CBPeripheralManagerAuthorizationStatusNotDetermined = 0;
  CBPeripheralManagerAuthorizationStatusRestricted = 1;
  CBPeripheralManagerAuthorizationStatusDenied = 2;
  CBPeripheralManagerAuthorizationStatusAuthorized = 3;

type
  CBPeripheralManagerState = NSInteger;
  CBPeripheralManagerStatePtr = ^CBPeripheralManagerState;

const
  CBPeripheralManagerStateUnknown = CBManagerStateUnknown;
  CBPeripheralManagerStateResetting = CBManagerStateResetting;
  CBPeripheralManagerStateUnsupported = CBManagerStateUnsupported;
  CBPeripheralManagerStateUnauthorized = CBManagerStateUnauthorized;
  CBPeripheralManagerStatePoweredOff = CBManagerStatePoweredOff;
  CBPeripheralManagerStatePoweredOn = CBManagerStatePoweredOn;

type
  CBPeripheralManagerConnectionLatency = NSInteger;
  CBPeripheralManagerConnectionLatencyPtr = ^CBPeripheralManagerConnectionLatency;

const
  CBPeripheralManagerConnectionLatencyLow = 0;
  CBPeripheralManagerConnectionLatencyMedium = 1;
  CBPeripheralManagerConnectionLatencyHigh = 2;
{$endif}

{$ifdef CLASSES}

type
  CBPeripheralManager = objcclass external (CBManager)
  public
    procedure setDelegate(newValue: CBPeripheralManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CBPeripheralManagerDelegateProtocol; message 'delegate';
    function isAdvertising: boolean; message 'isAdvertising';
    class function authorizationStatus: CBPeripheralManagerAuthorizationStatus; message 'authorizationStatus'; { available in NA, 7_0 }
    function init: instancetype; message 'init';
    function initWithDelegate_queue (delegate_: nullable CBPeripheralManagerDelegateProtocol; queue: nullable dispatch_queue_t): instancetype; message 'initWithDelegate:queue:';
    function initWithDelegate_queue_options (delegate_: nullable CBPeripheralManagerDelegateProtocol; queue: nullable dispatch_queue_t; options: nullable NSDictionaryPtr): instancetype; message 'initWithDelegate:queue:options:'; { available in NA, 7_0 }
    procedure startAdvertising (advertisementData: nullable NSDictionaryPtr); message 'startAdvertising:';
    procedure stopAdvertising; message 'stopAdvertising';
    procedure setDesiredConnectionLatency_forCentral (latency: CBPeripheralManagerConnectionLatency; central: CBCentral); message 'setDesiredConnectionLatency:forCentral:';
    procedure addService (service: CBMutableService); message 'addService:';
    procedure removeService (service: CBMutableService); message 'removeService:';
    procedure removeAllServices; message 'removeAllServices';
    procedure respondToRequest_withResult (request: CBATTRequest; result_: CBATTError); message 'respondToRequest:withResult:';
    function updateValue_forCharacteristic_onSubscribedCentrals (value: NSData; characteristic: CBMutableCharacteristic; centrals: nullable CBCentral *ProtocolPtr): boolean; message 'updateValue:forCharacteristic:onSubscribedCentrals:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBPeripheralManagerDelegateProtocol = objcprotocol external name 'CBPeripheralManagerDelegate' (NSObjectProtocol)
  required
    procedure peripheralManagerDidUpdateState (peripheral: CBPeripheralManager); message 'peripheralManagerDidUpdateState:';
  optional
    procedure peripheralManager_willRestoreState (peripheral: CBPeripheralManager; dict: NSDictionary); message 'peripheralManager:willRestoreState:';
    procedure peripheralManagerDidStartAdvertising_error (peripheral: CBPeripheralManager; error: nullable NSErrorPtr); message 'peripheralManagerDidStartAdvertising:error:';
    procedure peripheralManager_didAddService_error (peripheral: CBPeripheralManager; service: CBService; error: nullable NSErrorPtr); message 'peripheralManager:didAddService:error:';
    procedure peripheralManager_central_didSubscribeToCharacteristic (peripheral: CBPeripheralManager; central: CBCentral; characteristic: CBCharacteristic); message 'peripheralManager:central:didSubscribeToCharacteristic:';
    procedure peripheralManager_central_didUnsubscribeFromCharacteristic (peripheral: CBPeripheralManager; central: CBCentral; characteristic: CBCharacteristic); message 'peripheralManager:central:didUnsubscribeFromCharacteristic:';
    procedure peripheralManager_didReceiveReadRequest (peripheral: CBPeripheralManager; request: CBATTRequest); message 'peripheralManager:didReceiveReadRequest:';
    procedure peripheralManager_didReceiveWriteRequests (peripheral: CBPeripheralManager; requests: CBATTRequest *ProtocolPtr); message 'peripheralManager:didReceiveWriteRequests:';
    procedure peripheralManagerIsReadyToUpdateSubscribers (peripheral: CBPeripheralManager); message 'peripheralManagerIsReadyToUpdateSubscribers:';
  end;
{$endif}

