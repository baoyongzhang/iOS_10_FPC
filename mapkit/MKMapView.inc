{ Parsed from MapKit.framework MKMapView.h }

{ Types from MKMapView }
{$ifdef TYPES}





{$endif}


{ Types from OverlaysAPI }
{$ifdef TYPES}

{$endif}


{ Types from MKMapViewDelegateProtocol }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  MKMapViewPtr = ^MKMapView;
  MKMapViewDelegateProtocolPtr = ^MKMapViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  MKUserTrackingMode = NSInteger;
  MKUserTrackingModePtr = ^MKUserTrackingMode;

const
  MKUserTrackingModeNone = 0;
  MKUserTrackingModeFollow = 1;
  MKUserTrackingModeFollowWithHeading = 2;
  __TVOS_PROHIBITED = 3;
{$endif}

{$ifdef CLASSES}

type
  MKMapView = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setDelegate(newValue: MKMapViewDelegateProtocol); message 'setDelegate:';
    function delegate: MKMapViewDelegateProtocol; message 'delegate';
    procedure setMapType(newValue: MKMapType); message 'setMapType:';
    function mapType: MKMapType; message 'mapType';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setRegion_animated (region_: MKCoordinateRegion; animated: boolean); message 'setRegion:animated:';
    procedure setCenterCoordinate(newValue: CLLocationCoordinate2D); message 'setCenterCoordinate:';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    procedure setCenterCoordinate_animated (coordinate: CLLocationCoordinate2D; animated: boolean); message 'setCenterCoordinate:animated:';
    function regionThatFits (region_: MKCoordinateRegion): MKCoordinateRegion; message 'regionThatFits:';
    procedure setVisibleMapRect(newValue: MKMapRect); message 'setVisibleMapRect:';
    function visibleMapRect: MKMapRect; message 'visibleMapRect';
    procedure setVisibleMapRect_animated (mapRect: MKMapRect; animate: boolean); message 'setVisibleMapRect:animated:';
    function mapRectThatFits (mapRect: MKMapRect): MKMapRect; message 'mapRectThatFits:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: UIEdgeInsets; animate: boolean); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: UIEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$else}
    procedure setVisibleMapRect_edgePadding_animated (mapRect: MKMapRect; insets: NSEdgeInsets; animate: boolean); message 'setVisibleMapRect:edgePadding:animated:';
    function mapRectThatFits_edgePadding (mapRect: MKMapRect; insets: NSEdgeInsets): MKMapRect; message 'mapRectThatFits:edgePadding:';
    {$endif}
    procedure setCamera(newValue: MKMapCamera); message 'setCamera:';
    function camera: MKMapCamera; message 'camera';
    procedure setCamera_animated (camera_: MKMapCamera; animated: boolean); message 'setCamera:animated:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: nullable UIViewPtr): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: nullable UIViewPtr): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: nullable UIViewPtr): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: nullable UIViewPtr): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$else}
    function convertCoordinate_toPointToView (coordinate: CLLocationCoordinate2D; view: nullable NSViewPtr): CGPoint; message 'convertCoordinate:toPointToView:';
    function convertPoint_toCoordinateFromView (point: CGPoint; view: nullable NSViewPtr): CLLocationCoordinate2D; message 'convertPoint:toCoordinateFromView:';
    function convertRegion_toRectToView (region_: MKCoordinateRegion; view: nullable NSViewPtr): CGRect; message 'convertRegion:toRectToView:';
    function convertRect_toRegionFromView (rect: CGRect; view: nullable NSViewPtr): MKCoordinateRegion; message 'convertRect:toRegionFromView:';
    {$endif}
    procedure setZoomEnabled(newValue: boolean); message 'setZoomEnabled:';
    function isZoomEnabled: boolean; message 'isZoomEnabled';
    procedure setScrollEnabled(newValue: boolean); message 'setScrollEnabled:';
    function isScrollEnabled: boolean; message 'isScrollEnabled';
    procedure set__TVOS_PROHIBITED(newValue: BOOL rotateEnabled); message 'set__TVOS_PROHIBITED:';
    function isRotateEnabled: BOOL rotateEnabled; message 'isRotateEnabled';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL pitchEnabled); message 'set__TVOS_PROHIBITED:';
    function isPitchEnabled: BOOL pitchEnabled; message 'isPitchEnabled';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setShowsZoomControls(newValue: boolean); message 'setShowsZoomControls:';
    function showsZoomControls: boolean; message 'showsZoomControls';
    {$endif}
    procedure set__TVOS_PROHIBITED__(newValue: BOOL showsCompass); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL showsCompass; message 'TVOS_PROHIBITED';
    procedure setShowsScale(newValue: boolean); message 'setShowsScale:';
    function showsScale: boolean; message 'showsScale';
    procedure setShowsPointsOfInterest(newValue: boolean); message 'setShowsPointsOfInterest:';
    function showsPointsOfInterest: boolean; message 'showsPointsOfInterest';
    procedure setShowsBuildings(newValue: boolean); message 'setShowsBuildings:';
    function showsBuildings: boolean; message 'showsBuildings';
    procedure setShowsTraffic(newValue: boolean); message 'setShowsTraffic:';
    function showsTraffic: boolean; message 'showsTraffic';
    procedure setShowsUserLocation(newValue: boolean); message 'setShowsUserLocation:';
    function showsUserLocation: boolean; message 'showsUserLocation';
    function userLocation: MKUserLocation; message 'userLocation';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setUserTrackingMode(newValue: MKUserTrackingMode); message 'setUserTrackingMode:';
    function userTrackingMode: MKUserTrackingMode; message 'userTrackingMode';
    procedure setUserTrackingMode_animated (mode: MKUserTrackingMode; animated: boolean); message 'setUserTrackingMode:animated:'; { available in NA, 5_0 }
    {$endif}
    function isUserLocationVisible: boolean; message 'isUserLocationVisible';
    procedure addAnnotation (annotation: MKAnnotationProtocol); message 'addAnnotation:';
    procedure addAnnotations (annotations: id<MKAnnotationProtocol>Ptr); message 'addAnnotations:';
    procedure removeAnnotation (annotation: MKAnnotationProtocol); message 'removeAnnotation:';
    procedure removeAnnotations (annotations: id<MKAnnotationProtocol>Ptr); message 'removeAnnotations:';
    function annotations: MKAnnotationProtocolProtocolPtr; message 'annotations';
    function annotationsInMapRect (mapRect: MKMapRect): id<MKAnnotationProtocol>Ptr; message 'annotationsInMapRect:'; { available in 10_9, 4_2 }
    function viewForAnnotation (annotation: MKAnnotationProtocol): nullable MKAnnotationViewPtr; message 'viewForAnnotation:';
    function dequeueReusableAnnotationViewWithIdentifier (identifier: NSString): nullable MKAnnotationViewPtr; message 'dequeueReusableAnnotationViewWithIdentifier:';
    procedure selectAnnotation_animated (annotation: MKAnnotationProtocol; animated: boolean); message 'selectAnnotation:animated:';
    procedure deselectAnnotation_animated (annotation: nullable MKAnnotationProtocol; animated: boolean); message 'deselectAnnotation:animated:';
    procedure setSelectedAnnotations(newValue: MKAnnotationProtocolProtocolPtr); message 'setSelectedAnnotations:';
    function selectedAnnotations: MKAnnotationProtocolProtocolPtr; message 'selectedAnnotations';
    function annotationVisibleRect: CGRect; message 'annotationVisibleRect';
    procedure showAnnotations_animated (annotations_: id<MKAnnotationProtocol>Ptr; animated: boolean); message 'showAnnotations:animated:'; { available in 10_9, 7_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  MKOverlayLevel = NSInteger;
  MKOverlayLevelPtr = ^MKOverlayLevel;

const
  MKOverlayLevelAboveRoads = 0;
  MKOverlayLevelAboveLabels = 1;
{$endif}

{$ifdef CLASSES}

type
  OverlaysAPI = objccategory external (MKMapView)
    procedure addOverlay_level (overlay: MKOverlayProtocol; level: MKOverlayLevel); message 'addOverlay:level:'; { available in 10_9, 7_0 }
    procedure addOverlays_level (overlays: id<MKOverlayProtocol>Ptr; level: MKOverlayLevel); message 'addOverlays:level:'; { available in 10_9, 7_0 }
    procedure removeOverlay (overlay: MKOverlayProtocol); message 'removeOverlay:'; { available in 10_9, 4_0 }
    procedure removeOverlays (overlays: id<MKOverlayProtocol>Ptr); message 'removeOverlays:'; { available in 10_9, 4_0 }
    procedure insertOverlay_atIndex_level (overlay: MKOverlayProtocol; index: NSUInteger; level: MKOverlayLevel); message 'insertOverlay:atIndex:level:'; { available in 10_9, 7_0 }
    procedure insertOverlay_aboveOverlay (overlay: MKOverlayProtocol; sibling: MKOverlayProtocol); message 'insertOverlay:aboveOverlay:'; { available in 10_9, 4_0 }
    procedure insertOverlay_belowOverlay (overlay: MKOverlayProtocol; sibling: MKOverlayProtocol); message 'insertOverlay:belowOverlay:'; { available in 10_9, 4_0 }
    procedure exchangeOverlay_withOverlay (overlay1: MKOverlayProtocol; overlay2: MKOverlayProtocol); message 'exchangeOverlay:withOverlay:'; { available in 10_9, 7_0 }
    function overlays: MKOverlayProtocolProtocolPtr; message 'overlays';
    function overlaysInLevel (level: MKOverlayLevel): id<MKOverlayProtocol>Ptr; message 'overlaysInLevel:'; { available in 10_9, 7_0 }
    function rendererForOverlay (overlay: MKOverlayProtocol): nullable MKOverlayRendererPtr; message 'rendererForOverlay:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function viewForOverlay (overlay: MKOverlayProtocol): MKOverlayView; message 'viewForOverlay:'; deprecated 'in 4_0, 7_0';
    {$endif}
    procedure addOverlay (overlay: MKOverlayProtocol); message 'addOverlay:'; { available in 10_9, 4_0 }
    procedure addOverlays (overlays_: id<MKOverlayProtocol>Ptr); message 'addOverlays:'; { available in 10_9, 4_0 }
    procedure insertOverlay_atIndex (overlay: MKOverlayProtocol; index: NSUInteger); message 'insertOverlay:atIndex:'; { available in 10_9, 4_0 }
    procedure exchangeOverlayAtIndex_withOverlayAtIndex (index1: NSUInteger; index2: NSUInteger); message 'exchangeOverlayAtIndex:withOverlayAtIndex:'; { available in 10_9, 4_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MKMapViewDelegateProtocol = objcprotocol external name 'MKMapViewDelegate' (NSObjectProtocol)
  optional
    procedure mapView_regionWillChangeAnimated (mapView: MKMapView; animated: boolean); message 'mapView:regionWillChangeAnimated:';
    procedure mapView_regionDidChangeAnimated (mapView: MKMapView; animated: boolean); message 'mapView:regionDidChangeAnimated:';
    procedure mapViewWillStartLoadingMap (mapView: MKMapView); message 'mapViewWillStartLoadingMap:';
    procedure mapViewDidFinishLoadingMap (mapView: MKMapView); message 'mapViewDidFinishLoadingMap:';
    procedure mapViewDidFailLoadingMap_withError (mapView: MKMapView; error: NSError); message 'mapViewDidFailLoadingMap:withError:';
    procedure mapViewWillStartRenderingMap (mapView: MKMapView); message 'mapViewWillStartRenderingMap:'; { available in 10_9, 7_0 }
    procedure mapViewDidFinishRenderingMap_fullyRendered (mapView: MKMapView; fullyRendered: boolean); message 'mapViewDidFinishRenderingMap:fullyRendered:'; { available in 10_9, 7_0 }
    function mapView_viewForAnnotation (mapView: MKMapView; annotation: MKAnnotationProtocol): nullable MKAnnotationViewPtr; message 'mapView:viewForAnnotation:';
    procedure mapView_didAddAnnotationViews (mapView: MKMapView; views: MKAnnotationView *ProtocolPtr); message 'mapView:didAddAnnotationViews:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure mapView_annotationView_calloutAccessoryControlTapped (mapView: MKMapView; view: MKAnnotationView; control: UIControl); message 'mapView:annotationView:calloutAccessoryControlTapped:';
    {$endif}
    procedure mapView_didSelectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didSelectAnnotationView:'; { available in 10_9, 4_0 }
    procedure mapView_didDeselectAnnotationView (mapView: MKMapView; view: MKAnnotationView); message 'mapView:didDeselectAnnotationView:'; { available in 10_9, 4_0 }
    procedure mapViewWillStartLocatingUser (mapView: MKMapView); message 'mapViewWillStartLocatingUser:'; { available in 10_9, 4_0 }
    procedure mapViewDidStopLocatingUser (mapView: MKMapView); message 'mapViewDidStopLocatingUser:'; { available in 10_9, 4_0 }
    procedure mapView_didUpdateUserLocation (mapView: MKMapView; userLocation: MKUserLocation); message 'mapView:didUpdateUserLocation:'; { available in 10_9, 4_0 }
    procedure mapView_didFailToLocateUserWithError (mapView: MKMapView; error: NSError); message 'mapView:didFailToLocateUserWithError:'; { available in 10_9, 4_0 }
    procedure mapView_annotationView_didChangeDragState_fromOldState (mapView: MKMapView; view: MKAnnotationView; newState: MKAnnotationViewDragState; oldState: MKAnnotationViewDragState); message 'mapView:annotationView:didChangeDragState:fromOldState:'; { available in 10_9, 4_0 }
    {$if defined(TARGET_OS_IPHONE)}
    procedure mapView_didChangeUserTrackingMode_animated (mapView: MKMapView; mode: MKUserTrackingMode; animated: boolean); message 'mapView:didChangeUserTrackingMode:animated:'; { available in NA, 5_0 }
    {$endif}
    function mapView_rendererForOverlay (mapView: MKMapView; overlay: MKOverlayProtocol): MKOverlayRenderer; message 'mapView:rendererForOverlay:'; { available in 10_9, 7_0 }
    procedure mapView_didAddOverlayRenderers (mapView: MKMapView; renderers: MKOverlayRenderer *ProtocolPtr); message 'mapView:didAddOverlayRenderers:'; { available in 10_9, 7_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function mapView_viewForOverlay (mapView: MKMapView; overlay: MKOverlayProtocol): MKOverlayView; message 'mapView:viewForOverlay:'; deprecated 'in 4_0, 7_0';
    procedure mapView_didAddOverlayViews (mapView: MKMapView; overlayViews: NSArray); message 'mapView:didAddOverlayViews:'; deprecated 'in 4_0, 7_0';
    {$endif}
  end;
{$endif}

