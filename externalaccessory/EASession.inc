{ Parsed from ExternalAccessory.framework EASession.h }

{$ifdef TYPES}
type
  EASessionPtr = ^EASession;
{$endif}

{$ifdef CLASSES}

type
  EASession = objcclass external (NSObject)
  private
    _accessory: EAAccessory;
    _sessionID: cuint32;
    _protocolString: NSString;
    _inputStream: NSInputStream;
    _outputStream: NSOutputStream;
    _openCompleted: boolean;
  public
    function initWithAccessory_forProtocol (accessory: EAAccessory; protocolString: NSString): instancetype; message 'initWithAccessory:forProtocol:'; { available starting in __MAC_NA,__IPHONE_3_0 }
    function accessory: EAAccessory; message 'accessory';
    function protocolString: NSString; message 'protocolString';
    function inputStream: NSInputStream; message 'inputStream';
    function outputStream: NSOutputStream; message 'outputStream';
  end;
{$endif}

