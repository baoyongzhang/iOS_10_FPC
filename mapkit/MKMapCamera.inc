{ Parsed from MapKit.framework MKMapCamera.h }

{$ifdef TYPES}
type
  MKMapCameraPtr = ^MKMapCamera;
{$endif}

{$ifdef CLASSES}

type
  MKMapCamera = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setCenterCoordinate(newValue: CLLocationCoordinate2D); message 'setCenterCoordinate:';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    procedure setHeading(newValue: CLLocationDirection); message 'setHeading:';
    function heading: CLLocationDirection; message 'heading';
    procedure setPitch(newValue: CGFloat); message 'setPitch:';
    function pitch: CGFloat; message 'pitch';
    procedure setAltitude(newValue: CLLocationDistance); message 'setAltitude:';
    function altitude: CLLocationDistance; message 'altitude';
    class function camera: instancetype; message 'camera';
    class function cameraLookingAtCenterCoordinate_fromEyeCoordinate_eyeAltitude (centerCoordinate_: CLLocationCoordinate2D; eyeCoordinate: CLLocationCoordinate2D; eyeAltitude: CLLocationDistance): instancetype; message 'cameraLookingAtCenterCoordinate:fromEyeCoordinate:eyeAltitude:';
    class function cameraLookingAtCenterCoordinate_fromDistance_pitch_heading (centerCoordinate_: CLLocationCoordinate2D; distance: CLLocationDistance; pitch_: CGFloat; heading_: CLLocationDirection): instancetype; message 'cameraLookingAtCenterCoordinate:fromDistance:pitch:heading:'; { available in 10_11, 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

