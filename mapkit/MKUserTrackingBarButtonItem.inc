{ Parsed from MapKit.framework MKUserTrackingBarButtonItem.h }

{$ifdef TYPES}
type
  MKUserTrackingBarButtonItemPtr = ^MKUserTrackingBarButtonItem;
{$endif}

{$ifdef CLASSES}

type
  MKUserTrackingBarButtonItem = objcclass external (UIBarButtonItem)
  public
    function initWithMapView (mapView: nullable MKMapViewPtr): instancetype; message 'initWithMapView:'; { NS_DESIGNATED_INITIALIZER }
    procedure setMapView(newValue: MKMapView); message 'setMapView:';
    function mapView: MKMapView; message 'mapView';
  end;
{$endif}

