{ Parsed from MapKit.framework MKReverseGeocoder.h }

{$ifdef TYPES}
type
  MKReverseGeocoderPtr = ^MKReverseGeocoder;
  MKReverseGeocoderDelegateProtocolPtr = ^MKReverseGeocoderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MKReverseGeocoder = objcclass external (NSObject)
  public
    function initWithCoordinate (coordinate: CLLocationCoordinate2D): instancetype; message 'initWithCoordinate:'; deprecated 'in 3_0,5_0';
    procedure start; message 'start'; deprecated 'in 3_0,5_0';
    procedure cancel; message 'cancel'; deprecated 'in 3_0,5_0';
    procedure setDelegate(newValue: MKReverseGeocoderDelegateProtocol); message 'setDelegate:';
    function delegate: MKReverseGeocoderDelegateProtocol; message 'delegate';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function placemark: MKPlacemark; message 'placemark';
    function isQuerying: boolean; message 'isQuerying';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MKReverseGeocoderDelegateProtocol = objcprotocol external name 'MKReverseGeocoderDelegate' (NSObjectProtocol)
  required
    procedure reverseGeocoder_didFindPlacemark (geocoder: MKReverseGeocoder; placemark: MKPlacemark); message 'reverseGeocoder:didFindPlacemark:'; deprecated 'in 3_0,5_0';
    procedure reverseGeocoder_didFailWithError (geocoder: MKReverseGeocoder; error: NSError); message 'reverseGeocoder:didFailWithError:'; deprecated 'in 3_0,5_0';
  end;
{$endif}

