{ Parsed from CoreLocation.framework CLRegion.h }

{$ifdef TYPES}
type
  CLRegionPtr = ^CLRegion;
{$endif}

{$ifdef TYPES}
type
  CLRegionState = NSInteger;
  CLRegionStatePtr = ^CLRegionState;

const
  CLRegionStateUnknown = 0;
  CLRegionStateInside = 1;
  CLRegionStateOutside = 2;

type
  CLProximity = NSInteger;
  CLProximityPtr = ^CLProximity;

const
  CLProximityUnknown = 0;
  CLProximityImmediate = 1;
  CLProximityNear = 2;
  CLProximityFar = 3;
{$endif}

{$ifdef CLASSES}

type
  CLRegion = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLRegionInternal;
  public
    function initCircularRegionWithCenter_radius_identifier (center: CLLocationCoordinate2D; radius: CLLocationDistance; identifier: NSString): instancetype; message 'initCircularRegionWithCenter:radius:identifier:'; deprecated 'in __MAC_10_7,__MAC_10_10,__IPHONE_4_0,__IPHONE_7_0';
    function __TVOS_PROHIBITED_: CLLocationCoordinate2D center; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: CLLocationDistance radius; message 'TVOS_PROHIBITED';
    function identifier: NSString; message 'identifier';
    procedure setNotifyOnEntry(newValue: boolean); message 'setNotifyOnEntry:';
    function notifyOnEntry: boolean; message 'notifyOnEntry';
    procedure setNotifyOnExit(newValue: boolean); message 'setNotifyOnExit:';
    function notifyOnExit: boolean; message 'notifyOnExit';
    function containsCoordinate (coordinate: CLLocationCoordinate2D): boolean; message 'containsCoordinate:'; deprecated 'in __MAC_10_7,__MAC_10_10,__IPHONE_4_0,__IPHONE_7_0';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

