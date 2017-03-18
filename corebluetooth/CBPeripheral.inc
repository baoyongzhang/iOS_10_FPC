{ Parsed from CoreBluetooth.framework CBPeripheral.h }

{$ifdef TYPES}
type
  CBPeripheralPtr = ^CBPeripheral;
  CBPeripheralDelegateProtocolPtr = ^CBPeripheralDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBPeripheralState = NSInteger;
  CBPeripheralStatePtr = ^CBPeripheralState;

const
  CBPeripheralStateDisconnected = 0;
  CBPeripheralStateConnecting = 1;
  CBPeripheralStateConnected = 2;
  CBPeripheralStateDisconnecting = 3 { available in NA, 9_0 };

type
  CBCharacteristicWriteType = NSInteger;
  CBCharacteristicWriteTypePtr = ^CBCharacteristicWriteType;

const
  CBCharacteristicWriteWithResponse = 0;
  CBCharacteristicWriteWithoutResponse = 1;
{$endif}

{$ifdef CLASSES}

type
  CBPeripheral = objcclass external (CBPeer)
  public
    procedure setDelegate(newValue: CBPeripheralDelegateProtocol); message 'setDelegate:';
    function delegate: CBPeripheralDelegateProtocol; message 'delegate';
    function name: NSString; message 'name';
    function RSSI: NSNumber; message 'RSSI';
    function state: CBPeripheralState; message 'state';
    function services: CBService *ProtocolPtr; message 'services';
    procedure readRSSI; message 'readRSSI';
    procedure discoverServices (serviceUUIDs: nullable CBUUID *ProtocolPtr); message 'discoverServices:';
    procedure discoverIncludedServices_forService (includedServiceUUIDs: nullable CBUUID *ProtocolPtr; service: CBService); message 'discoverIncludedServices:forService:';
    procedure discoverCharacteristics_forService (characteristicUUIDs: nullable CBUUID *ProtocolPtr; service: CBService); message 'discoverCharacteristics:forService:';
    procedure readValueForCharacteristic (characteristic: CBCharacteristic); message 'readValueForCharacteristic:';
    function maximumWriteValueLengthForType (type_: CBCharacteristicWriteType): NSUInteger; message 'maximumWriteValueLengthForType:'; { available in NA, 9_0 }
    procedure writeValue_forCharacteristic_type (data: NSData; characteristic: CBCharacteristic; type_: CBCharacteristicWriteType); message 'writeValue:forCharacteristic:type:';
    procedure setNotifyValue_forCharacteristic (enabled: boolean; characteristic: CBCharacteristic); message 'setNotifyValue:forCharacteristic:';
    procedure discoverDescriptorsForCharacteristic (characteristic: CBCharacteristic); message 'discoverDescriptorsForCharacteristic:';
    procedure readValueForDescriptor (descriptor: CBDescriptor); message 'readValueForDescriptor:';
    procedure writeValue_forDescriptor (data: NSData; descriptor: CBDescriptor); message 'writeValue:forDescriptor:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBPeripheralDelegateProtocol = objcprotocol external name 'CBPeripheralDelegate' (NSObjectProtocol)
  optional
    procedure peripheralDidUpdateName (peripheral: CBPeripheral); message 'peripheralDidUpdateName:'; { available in NA, 6_0 }
    procedure peripheral_didModifyServices (peripheral: CBPeripheral; invalidatedServices: CBService *ProtocolPtr); message 'peripheral:didModifyServices:'; { available in NA, 7_0 }
    procedure peripheralDidUpdateRSSI_error (peripheral: CBPeripheral; error: nullable NSErrorPtr); message 'peripheralDidUpdateRSSI:error:'; deprecated 'in NA, NA, 5_0, 8_0';
    procedure peripheral_didReadRSSI_error (peripheral: CBPeripheral; RSSI: NSNumber; error: nullable NSErrorPtr); message 'peripheral:didReadRSSI:error:'; { available in NA, 8_0 }
    procedure peripheral_didDiscoverServices (peripheral: CBPeripheral; error: nullable NSErrorPtr); message 'peripheral:didDiscoverServices:';
    procedure peripheral_didDiscoverIncludedServicesForService_error (peripheral: CBPeripheral; service: CBService; error: nullable NSErrorPtr); message 'peripheral:didDiscoverIncludedServicesForService:error:';
    procedure peripheral_didDiscoverCharacteristicsForService_error (peripheral: CBPeripheral; service: CBService; error: nullable NSErrorPtr); message 'peripheral:didDiscoverCharacteristicsForService:error:';
    procedure peripheral_didUpdateValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: nullable NSErrorPtr); message 'peripheral:didUpdateValueForCharacteristic:error:';
    procedure peripheral_didWriteValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: nullable NSErrorPtr); message 'peripheral:didWriteValueForCharacteristic:error:';
    procedure peripheral_didUpdateNotificationStateForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: nullable NSErrorPtr); message 'peripheral:didUpdateNotificationStateForCharacteristic:error:';
    procedure peripheral_didDiscoverDescriptorsForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: nullable NSErrorPtr); message 'peripheral:didDiscoverDescriptorsForCharacteristic:error:';
    procedure peripheral_didUpdateValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: nullable NSErrorPtr); message 'peripheral:didUpdateValueForDescriptor:error:';
    procedure peripheral_didWriteValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: nullable NSErrorPtr); message 'peripheral:didWriteValueForDescriptor:error:';
  end;
{$endif}

