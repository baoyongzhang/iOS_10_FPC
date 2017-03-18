{ Parsed from WatchKit.framework WKInterfaceMap.h }

{$ifdef TYPES}
type
  WKInterfaceMapPtr = ^WKInterfaceMap;
{$endif}

{$ifdef TYPES}
type
  WKInterfaceMapPinColor = NSInteger;
  WKInterfaceMapPinColorPtr = ^WKInterfaceMapPinColor;

const
  WKInterfaceMapPinColorRed = 0;
  WKInterfaceMapPinColorGreen = 1;
  WKInterfaceMapPinColorPurple = 2;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceMap = objcclass external (WKInterfaceObject)
  public
    procedure setVisibleMapRect (mapRect: MKMapRect); message 'setVisibleMapRect:';
    procedure setRegion (coordinateRegion: MKCoordinateRegion); message 'setRegion:';
    procedure addAnnotation_withImage_centerOffset (location: CLLocationCoordinate2D; image: nullable UIImagePtr; offset: CGPoint); message 'addAnnotation:withImage:centerOffset:';
    procedure addAnnotation_withImageNamed_centerOffset (location: CLLocationCoordinate2D; name: nullable NSStringPtr; offset: CGPoint); message 'addAnnotation:withImageNamed:centerOffset:';
    procedure addAnnotation_withPinColor (location: CLLocationCoordinate2D; pinColor: WKInterfaceMapPinColor); message 'addAnnotation:withPinColor:';
    procedure removeAllAnnotations; message 'removeAllAnnotations';
  end;
{$endif}

