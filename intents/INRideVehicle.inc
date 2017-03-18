{ Parsed from Intents.framework INRideVehicle.h }

{$ifdef TYPES}
type
  INRideVehiclePtr = ^INRideVehicle;
{$endif}

{$ifdef CLASSES}

type
  INRideVehicle = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setLocation(newValue: CLLocation); message 'setLocation:';
    function location: CLLocation; message 'location';
    procedure setRegistrationPlate(newValue: NSString); message 'setRegistrationPlate:';
    function registrationPlate: NSString; message 'registrationPlate';
    procedure setManufacturer(newValue: NSString); message 'setManufacturer:';
    function manufacturer: NSString; message 'manufacturer';
    procedure setModel(newValue: NSString); message 'setModel:';
    function model: NSString; message 'model';
    procedure setMapAnnotationImage(newValue: INImage); message 'setMapAnnotationImage:';
    function mapAnnotationImage: INImage; message 'mapAnnotationImage';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

