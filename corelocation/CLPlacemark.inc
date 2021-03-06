{ Parsed from CoreLocation.framework CLPlacemark.h }

{$ifdef TYPES}
type
  CLPlacemarkPtr = ^CLPlacemark;
{$endif}

{$ifdef CLASSES}

type
  CLPlacemark = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLPlacemarkInternal;
  public
    function initWithPlacemark (placemark: CLPlacemark): instancetype; message 'initWithPlacemark:';
    function location: CLLocation; message 'location';
    function region: CLRegion; message 'region';
    function timeZone: NSTimeZone; message 'timeZone';
    function addressDictionary: NSDictionary; message 'addressDictionary';
    function name: NSString; message 'name';
    function thoroughfare: NSString; message 'thoroughfare';
    function subThoroughfare: NSString; message 'subThoroughfare';
    function locality: NSString; message 'locality';
    function subLocality: NSString; message 'subLocality';
    function administrativeArea: NSString; message 'administrativeArea';
    function subAdministrativeArea: NSString; message 'subAdministrativeArea';
    function postalCode: NSString; message 'postalCode';
    function ISOcountryCode: NSString; message 'ISOcountryCode';
    function country: NSString; message 'country';
    function inlandWater: NSString; message 'inlandWater';
    function ocean: NSString; message 'ocean';
    function areasOfInterest: NSString *ProtocolPtr; message 'areasOfInterest';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

