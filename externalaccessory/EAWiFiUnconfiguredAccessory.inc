{ Parsed from ExternalAccessory.framework EAWiFiUnconfiguredAccessory.h }

{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryPtr = ^EAWiFiUnconfiguredAccessory;
{$endif}

{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryProperties = NSUInteger;
  EAWiFiUnconfiguredAccessoryPropertiesPtr = ^EAWiFiUnconfiguredAccessoryProperties;

const
  EAWiFiUnconfiguredAccessoryPropertySupportsAirPlay = 1 shl 0;
  EAWiFiUnconfiguredAccessoryPropertySupportsAirPrint = 1 shl 1;
  EAWiFiUnconfiguredAccessoryPropertySupportsHomeKit = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  EAWiFiUnconfiguredAccessory = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function manufacturer: NSString; message 'manufacturer';
    function model: NSString; message 'model';
    function ssid: NSString; message 'ssid';
    function macAddress: NSString; message 'macAddress';
    function properties: EAWiFiUnconfiguredAccessoryProperties; message 'properties';
  end;
{$endif}

