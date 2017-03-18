{ Parsed from HomeKit.framework HMCharacteristicMetadata.h }

{$ifdef TYPES}
type
  HMCharacteristicMetadataPtr = ^HMCharacteristicMetadata;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristicMetadata = objcclass external (NSObject)
  public
    function minimumValue: NSNumber; message 'minimumValue';
    function maximumValue: NSNumber; message 'maximumValue';
    function stepValue: NSNumber; message 'stepValue';
    function maxLength: NSNumber; message 'maxLength';
    function format: NSString; message 'format';
    function units: NSString; message 'units';
    function manufacturerDescription: NSString; message 'manufacturerDescription';
    function validValues: NSNumber *ProtocolPtr; message 'validValues';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMCharacteristicMetadataFormatBool: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatInt: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatFloat: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatString: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatArray: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatDictionary: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt8: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt16: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt32: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt64: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatData: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatTLV8: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsCelsius: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsFahrenheit: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsPercentage: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsArcDegree: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsSeconds: NSString { available in 8_3 }; cvar; external;
  HMCharacteristicMetadataUnitsLux: NSString { available in 9_3 }; cvar; external;
  HMCharacteristicMetadataUnitsPartsPerMillion: NSString { available in 10_0 }; cvar; external;
  HMCharacteristicMetadataUnitsMicrogramsPerCubicMeter: NSString { available in 10_0 }; cvar; external;
{$endif}

