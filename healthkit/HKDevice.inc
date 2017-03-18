{ Parsed from HealthKit.framework HKDevice.h }

{$ifdef TYPES}
type
  HKDevicePtr = ^HKDevice;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKDevicePropertyKeyName: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyManufacturer: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyModel: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyHardwareVersion: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyFirmwareVersion: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeySoftwareVersion: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyLocalIdentifier: NSString { available in 9_0, 2_0 }; cvar; external;
  HKDevicePropertyKeyUDIDeviceIdentifier: NSString { available in 9_0, 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  HKDevice = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function name: NSString; message 'name';
    function manufacturer: NSString; message 'manufacturer';
    function model: NSString; message 'model';
    function hardwareVersion: NSString; message 'hardwareVersion';
    function firmwareVersion: NSString; message 'firmwareVersion';
    function softwareVersion: NSString; message 'softwareVersion';
    function localIdentifier: NSString; message 'localIdentifier';
    function UDIDeviceIdentifier: NSString; message 'UDIDeviceIdentifier';
    function initWithName_manufacturer_model_hardwareVersion_firmwareVersion_softwareVersion_localIdentifier_UDIDeviceIdentifier (name_: nullable NSStringPtr; manufacturer_: NSString * _Nullable; model_: NSString * _Nullable; hardwareVersion_: NSString * _Nullable; firmwareVersion_: NSString * _Nullable; softwareVersion_: NSString * _Nullable; localIdentifier_: NSString * _Nullable; UDIDeviceIdentifier_: NSString * _Nullable): instancetype; message 'initWithName:manufacturer:model:hardwareVersion:firmwareVersion:softwareVersion:localIdentifier:UDIDeviceIdentifier:';
    function init: instancetype; message 'init';
    class function localDevice: HKDevice; message 'localDevice';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

