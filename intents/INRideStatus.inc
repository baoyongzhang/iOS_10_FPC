{ Parsed from Intents.framework INRideStatus.h }

{$ifdef TYPES}
type
  INRideStatusPtr = ^INRideStatus;
{$endif}

{$ifdef CLASSES}

type
  INRideStatus = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setRideIdentifier(newValue: NSString); message 'setRideIdentifier:';
    function rideIdentifier: NSString; message 'rideIdentifier';
    procedure setPhase(newValue: INRidePhase); message 'setPhase:';
    function phase: INRidePhase; message 'phase';
    procedure setCompletionStatus(newValue: INRideCompletionStatus); message 'setCompletionStatus:';
    function completionStatus: INRideCompletionStatus; message 'completionStatus';
    procedure setVehicle(newValue: INRideVehicle); message 'setVehicle:';
    function vehicle: INRideVehicle; message 'vehicle';
    procedure setDriver(newValue: INRideDriver); message 'setDriver:';
    function driver: INRideDriver; message 'driver';
    procedure setEstimatedPickupDate(newValue: NSDate); message 'setEstimatedPickupDate:';
    function estimatedPickupDate: NSDate; message 'estimatedPickupDate';
    procedure setEstimatedDropOffDate(newValue: NSDate); message 'setEstimatedDropOffDate:';
    function estimatedDropOffDate: NSDate; message 'estimatedDropOffDate';
    procedure setEstimatedPickupEndDate(newValue: NSDate); message 'setEstimatedPickupEndDate:';
    function estimatedPickupEndDate: NSDate; message 'estimatedPickupEndDate';
    procedure setPickupLocation(newValue: CLPlacemark); message 'setPickupLocation:';
    function pickupLocation: CLPlacemark; message 'pickupLocation';
    procedure setWaypoints(newValue: CLPlacemark *ProtocolPtr); message 'setWaypoints:';
    function waypoints: CLPlacemark *ProtocolPtr; message 'waypoints';
    procedure setDropOffLocation(newValue: CLPlacemark); message 'setDropOffLocation:';
    function dropOffLocation: CLPlacemark; message 'dropOffLocation';
    procedure setRideOption(newValue: INRideOption); message 'setRideOption:';
    function rideOption: INRideOption; message 'rideOption';
    procedure setUserActivityForCancelingInApplication(newValue: NSUserActivity); message 'setUserActivityForCancelingInApplication:';
    function userActivityForCancelingInApplication: NSUserActivity; message 'userActivityForCancelingInApplication';
    procedure setAdditionalActionActivities(newValue: NSUserActivity *ProtocolPtr); message 'setAdditionalActionActivities:';
    function additionalActionActivities: NSUserActivity *ProtocolPtr; message 'additionalActionActivities';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

