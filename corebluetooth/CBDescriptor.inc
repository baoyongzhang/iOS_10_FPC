{ Parsed from CoreBluetooth.framework CBDescriptor.h }

{$ifdef TYPES}
type
  CBDescriptorPtr = ^CBDescriptor;
  CBMutableDescriptorPtr = ^CBMutableDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CBDescriptor = objcclass external (CBAttribute)
  public
    function characteristic: CBCharacteristic; message 'characteristic';
    function value: id; message 'value';
  end;

type
  CBMutableDescriptor = objcclass external (CBDescriptor)
  public
    function initWithType_value (UUID_: CBUUID; value_: nullable id): instancetype; message 'initWithType:value:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

