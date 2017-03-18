{ Parsed from CoreLocation.framework CLVisit.h }

{$ifdef TYPES}
type
  CLVisitPtr = ^CLVisit;
{$endif}

{$ifdef CLASSES}

type
  CLVisit = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function arrivalDate: NSDate; message 'arrivalDate';
    function departureDate: NSDate; message 'departureDate';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function horizontalAccuracy: CLLocationAccuracy; message 'horizontalAccuracy';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

