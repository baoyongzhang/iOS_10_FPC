{ Parsed from CoreBluetooth.framework CBUUID.h }

{$ifdef TYPES}
type
  CBUUIDPtr = ^CBUUID;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CBUUIDCharacteristicExtendedPropertiesString: NSString; cvar; external;
  CBUUIDCharacteristicUserDescriptionString: NSString; cvar; external;
  CBUUIDClientCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDServerCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDCharacteristicFormatString: NSString; cvar; external;
  CBUUIDCharacteristicAggregateFormatString: NSString; cvar; external;
  CBUUIDCharacteristicValidRangeString: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CBUUID = objcclass external (NSObject, NSCopyingProtocol)
  public
    function data: NSData; message 'data';
    function UUIDString: NSString; message 'UUIDString';
    class function UUIDWithString (theString: NSString): CBUUID; message 'UUIDWithString:';
    class function UUIDWithData (theData: NSData): CBUUID; message 'UUIDWithData:';
    class function UUIDWithCFUUID (theUUID: CFUUIDRef): CBUUID; message 'UUIDWithCFUUID:'; deprecated 'in NA, NA, 5_0, 9_0';
    class function UUIDWithNSUUID (theUUID: NSUUID): CBUUID; message 'UUIDWithNSUUID:'; { available in NA, 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

