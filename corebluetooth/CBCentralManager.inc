{ Parsed from CoreBluetooth.framework CBCentralManager.h }

{$ifdef TYPES}
type
  CBCentralManagerPtr = ^CBCentralManager;
  CBCentralManagerDelegateProtocolPtr = ^CBCentralManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBCentralManagerState = NSInteger;
  CBCentralManagerStatePtr = ^CBCentralManagerState;

const
  CBCentralManagerStateUnknown = CBManagerStateUnknown;
  CBCentralManagerStateResetting = CBManagerStateResetting;
  CBCentralManagerStateUnsupported = CBManagerStateUnsupported;
  CBCentralManagerStateUnauthorized = CBManagerStateUnauthorized;
  CBCentralManagerStatePoweredOff = CBManagerStatePoweredOff;
  CBCentralManagerStatePoweredOn = CBManagerStatePoweredOn;
{$endif}

{$ifdef CLASSES}

type
  CBCentralManager = objcclass external (CBManager)
  public
    procedure setDelegate(newValue: CBCentralManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CBCentralManagerDelegateProtocol; message 'delegate';
    function isScanning: boolean; message 'isScanning';
    function init: instancetype; message 'init';
    function initWithDelegate_queue (delegate_: nullable CBCentralManagerDelegateProtocol; queue: nullable dispatch_queue_t): instancetype; message 'initWithDelegate:queue:';
    function initWithDelegate_queue_options (delegate_: nullable CBCentralManagerDelegateProtocol; queue: nullable dispatch_queue_t; options: nullable NSDictionaryPtr): instancetype; message 'initWithDelegate:queue:options:'; { available in NA, 7_0 }
    function retrievePeripheralsWithIdentifiers (identifiers: NSUUID *ProtocolPtr): CBPeripheral *ProtocolPtr; message 'retrievePeripheralsWithIdentifiers:'; { available in NA, 7_0 }
    function retrieveConnectedPeripheralsWithServices (serviceUUIDs: CBUUID *ProtocolPtr): CBPeripheral *ProtocolPtr; message 'retrieveConnectedPeripheralsWithServices:'; { available in NA, 7_0 }
    procedure scanForPeripheralsWithServices_options (serviceUUIDs: nullable CBUUID *ProtocolPtr; options: nullable NSDictionaryPtr); message 'scanForPeripheralsWithServices:options:';
    procedure stopScan; message 'stopScan';
    procedure connectPeripheral_options (peripheral: CBPeripheral; options: nullable NSDictionaryPtr); message 'connectPeripheral:options:';
    procedure cancelPeripheralConnection (peripheral: CBPeripheral); message 'cancelPeripheralConnection:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBCentralManagerDelegateProtocol = objcprotocol external name 'CBCentralManagerDelegate' (NSObjectProtocol)
  required
    procedure centralManagerDidUpdateState (central: CBCentralManager); message 'centralManagerDidUpdateState:';
  optional
    procedure centralManager_willRestoreState (central: CBCentralManager; dict: NSDictionary); message 'centralManager:willRestoreState:';
    procedure centralManager_didDiscoverPeripheral_advertisementData_RSSI (central: CBCentralManager; peripheral: CBPeripheral; advertisementData: NSDictionary; RSSI: NSNumber); message 'centralManager:didDiscoverPeripheral:advertisementData:RSSI:';
    procedure centralManager_didConnectPeripheral (central: CBCentralManager; peripheral: CBPeripheral); message 'centralManager:didConnectPeripheral:';
    procedure centralManager_didFailToConnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: nullable NSErrorPtr); message 'centralManager:didFailToConnectPeripheral:error:';
    procedure centralManager_didDisconnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: nullable NSErrorPtr); message 'centralManager:didDisconnectPeripheral:error:';
  end;
{$endif}

