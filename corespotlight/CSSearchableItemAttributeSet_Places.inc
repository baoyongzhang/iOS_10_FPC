{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_Places.h }
{$ifdef CLASSES}

type
  CSPlaces = objccategory external (CSSearchableItemAttributeSet)
    procedure setHeadline(newValue: NSString); message 'setHeadline:';
    function headline: NSString; message 'headline';
    procedure setInstructions(newValue: NSString); message 'setInstructions:';
    function instructions: NSString; message 'instructions';
    procedure setThoroughfare(newValue: NSString); message 'setThoroughfare:';
    function thoroughfare: NSString; message 'thoroughfare';
    procedure setSubThoroughfare(newValue: NSString); message 'setSubThoroughfare:';
    function subThoroughfare: NSString; message 'subThoroughfare';
    procedure setPostalCode(newValue: NSString); message 'setPostalCode:';
    function postalCode: NSString; message 'postalCode';
    procedure setCity(newValue: NSString); message 'setCity:';
    function city: NSString; message 'city';
    procedure setStateOrProvince(newValue: NSString); message 'setStateOrProvince:';
    function stateOrProvince: NSString; message 'stateOrProvince';
    procedure setCountry(newValue: NSString); message 'setCountry:';
    function country: NSString; message 'country';
    procedure setFullyFormattedAddress(newValue: NSString); message 'setFullyFormattedAddress:';
    function fullyFormattedAddress: NSString; message 'fullyFormattedAddress';
    procedure setAltitude(newValue: NSNumber); message 'setAltitude:';
    function altitude: NSNumber; message 'altitude';
    procedure setLatitude(newValue: NSNumber); message 'setLatitude:';
    function latitude: NSNumber; message 'latitude';
    procedure setLongitude(newValue: NSNumber); message 'setLongitude:';
    function longitude: NSNumber; message 'longitude';
    procedure setSpeed(newValue: NSNumber); message 'setSpeed:';
    function speed: NSNumber; message 'speed';
    procedure setTimestamp(newValue: NSDate); message 'setTimestamp:';
    function timestamp_: NSDate; message 'timestamp';
    procedure setImageDirection(newValue: NSNumber); message 'setImageDirection:';
    function imageDirection: NSNumber; message 'imageDirection';
    procedure setNamedLocation(newValue: NSString); message 'setNamedLocation:';
    function namedLocation: NSString; message 'namedLocation';
    procedure setGPSTrack(newValue: NSNumber); message 'setGPSTrack:';
    function GPSTrack: NSNumber; message 'GPSTrack';
    procedure setGPSStatus(newValue: NSString); message 'setGPSStatus:';
    function GPSStatus: NSString; message 'GPSStatus';
    procedure setGPSMeasureMode(newValue: NSString); message 'setGPSMeasureMode:';
    function GPSMeasureMode: NSString; message 'GPSMeasureMode';
    procedure setGPSDOP(newValue: NSNumber); message 'setGPSDOP:';
    function GPSDOP: NSNumber; message 'GPSDOP';
    procedure setGPSMapDatum(newValue: NSString); message 'setGPSMapDatum:';
    function GPSMapDatum: NSString; message 'GPSMapDatum';
    procedure setGPSDestLatitude(newValue: NSNumber); message 'setGPSDestLatitude:';
    function GPSDestLatitude: NSNumber; message 'GPSDestLatitude';
    procedure setGPSDestLongitude(newValue: NSNumber); message 'setGPSDestLongitude:';
    function GPSDestLongitude: NSNumber; message 'GPSDestLongitude';
    procedure setGPSDestBearing(newValue: NSNumber); message 'setGPSDestBearing:';
    function GPSDestBearing: NSNumber; message 'GPSDestBearing';
    procedure setGPSDestDistance(newValue: NSNumber); message 'setGPSDestDistance:';
    function GPSDestDistance: NSNumber; message 'GPSDestDistance';
    procedure setGPSProcessingMethod(newValue: NSString); message 'setGPSProcessingMethod:';
    function GPSProcessingMethod: NSString; message 'GPSProcessingMethod';
    procedure setGPSAreaInformation(newValue: NSString); message 'setGPSAreaInformation:';
    function GPSAreaInformation: NSString; message 'GPSAreaInformation';
    procedure setGPSDateStamp(newValue: NSDate); message 'setGPSDateStamp:';
    function GPSDateStamp: NSDate; message 'GPSDateStamp';
    procedure setGPSDifferental(newValue: NSNumber); message 'setGPSDifferental:';
    function GPSDifferental: NSNumber; message 'GPSDifferental';
  end;
{$endif}

