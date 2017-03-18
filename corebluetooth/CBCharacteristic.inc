{ Parsed from CoreBluetooth.framework CBCharacteristic.h }

{$ifdef TYPES}
type
  CBCharacteristicPtr = ^CBCharacteristic;
  CBMutableCharacteristicPtr = ^CBMutableCharacteristic;
{$endif}

{$ifdef TYPES}
type
  CBCharacteristicProperties = NSUInteger;
  CBCharacteristicPropertiesPtr = ^CBCharacteristicProperties;

const
  CBCharacteristicPropertyBroadcast = $01;
  CBCharacteristicPropertyRead = $02;
  CBCharacteristicPropertyWriteWithoutResponse = $04;
  CBCharacteristicPropertyWrite = $08;
  CBCharacteristicPropertyNotify = $10;
  CBCharacteristicPropertyIndicate = $20;
  CBCharacteristicPropertyAuthenticatedSignedWrites = $40;
  CBCharacteristicPropertyExtendedProperties = $80;
  CBCharacteristicPropertyNotifyEncryptionRequired = $100 { available in NA, 6_0 };
  CBCharacteristicPropertyIndicateEncryptionRequired = $200 { available in NA, 6_0 };
{$endif}

{$ifdef CLASSES}

type
  CBCharacteristic = objcclass external (CBAttribute)
  public
    function service: CBService; message 'service';
    function properties: CBCharacteristicProperties; message 'properties';
    function value: NSData; message 'value';
    function descriptors: CBDescriptor *ProtocolPtr; message 'descriptors';
    function isBroadcasted: boolean; message 'isBroadcasted';
    function isNotifying: boolean; message 'isNotifying';
  end;
{$endif}

{$ifdef TYPES}
type
  CBAttributePermissions = NSUInteger;
  CBAttributePermissionsPtr = ^CBAttributePermissions;

const
  CBAttributePermissionsReadable = $01;
  CBAttributePermissionsWriteable = $02;
  CBAttributePermissionsReadEncryptionRequired = $04;
  CBAttributePermissionsWriteEncryptionRequired = $08;
{$endif}

{$ifdef CLASSES}

type
  CBMutableCharacteristic = objcclass external (CBCharacteristic)
  public
    procedure setPermissions(newValue: CBAttributePermissions); message 'setPermissions:';
    function permissions: CBAttributePermissions; message 'permissions';
    function subscribedCentrals: CBCentral *ProtocolPtr; message 'subscribedCentrals';
    procedure setProperties(newValue: CBCharacteristicProperties); message 'setProperties:';
    function properties: CBCharacteristicProperties; message 'properties';
    procedure setValue(newValue: NSData); message 'setValue:';
    function value: NSData; message 'value';
    procedure setDescriptors(newValue: CBDescriptor *ProtocolPtr); message 'setDescriptors:';
    function descriptors: CBDescriptor *ProtocolPtr; message 'descriptors';
    function initWithType_properties_value_permissions (UUID_: CBUUID; properties_: CBCharacteristicProperties; value_: nullable NSDataPtr; permissions_: CBAttributePermissions): instancetype; message 'initWithType:properties:value:permissions:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

