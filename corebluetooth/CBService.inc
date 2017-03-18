{ Parsed from CoreBluetooth.framework CBService.h }

{$ifdef TYPES}
type
  CBServicePtr = ^CBService;
  CBMutableServicePtr = ^CBMutableService;
{$endif}

{$ifdef CLASSES}

type
  CBService = objcclass external (CBAttribute)
  public
    function peripheral: CBPeripheral; message 'peripheral';
    function isPrimary: boolean; message 'isPrimary';
    function includedServices: CBService *ProtocolPtr; message 'includedServices';
    function characteristics: CBCharacteristic *ProtocolPtr; message 'characteristics';
  end;

type
  CBMutableService = objcclass external (CBService)
  public
    procedure setIncludedServices(newValue: CBService *ProtocolPtr); message 'setIncludedServices:';
    function includedServices: CBService *ProtocolPtr; message 'includedServices';
    procedure setCharacteristics(newValue: CBCharacteristic *ProtocolPtr); message 'setCharacteristics:';
    function characteristics: CBCharacteristic *ProtocolPtr; message 'characteristics';
    function initWithType_primary (UUID_: CBUUID; isPrimary_: boolean): instancetype; message 'initWithType:primary:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

