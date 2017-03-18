{ Parsed from MapKit.framework MKDirectionsRequest.h }

{$ifdef TYPES}
type
  MKDirectionsRequestPtr = ^MKDirectionsRequest;
{$endif}

{$ifdef CLASSES}

type
  MKDirectionsRequest = objcclass external (NSObject)
  public
    procedure setSource(newValue: MKMapItem); message 'setSource:';
    function source: MKMapItem; message 'source';
    procedure setSource (source_: nullable MKMapItemPtr); message 'setSource:'; { available in 10_9, 7_0 }
    procedure setDestination(newValue: MKMapItem); message 'setDestination:';
    function destination: MKMapItem; message 'destination';
    procedure setDestination (destination_: nullable MKMapItemPtr); message 'setDestination:'; { available in 10_9, 7_0 }
  end;


type
  MKRequestOptions = objccategory external (MKDirectionsRequest)
    procedure setTransportType(newValue: MKDirectionsTransportType); message 'setTransportType:';
    function transportType: MKDirectionsTransportType; message 'transportType';
    procedure setRequestsAlternateRoutes(newValue: boolean); message 'setRequestsAlternateRoutes:';
    function requestsAlternateRoutes: boolean; message 'requestsAlternateRoutes';
    procedure setDepartureDate(newValue: NSDate); message 'setDepartureDate:';
    function departureDate: NSDate; message 'departureDate';
    procedure setArrivalDate(newValue: NSDate); message 'setArrivalDate:';
    function arrivalDate: NSDate; message 'arrivalDate';
  end;

type
  MKDirectionsURL = objccategory external (MKDirectionsRequest)
    function initWithContentsOfURL (url: NSURL): instancetype; message 'initWithContentsOfURL:'; { available in 10_9, 6_0 }
    class function isDirectionsRequestURL (url: NSURL): boolean; message 'isDirectionsRequestURL:'; { available in 10_9, 6_0 }
  end;
{$endif}

