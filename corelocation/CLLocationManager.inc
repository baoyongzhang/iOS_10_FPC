{ Parsed from CoreLocation.framework CLLocationManager.h }

{$ifdef TYPES}
type
  CLLocationManagerPtr = ^CLLocationManager;
{$endif}

{$ifdef TYPES}
type
  CLDeviceOrientation = cint;
  CLDeviceOrientationPtr = ^CLDeviceOrientation;

const
  CLDeviceOrientationUnknown = 0;
  CLDeviceOrientationPortrait = 1;
  CLDeviceOrientationPortraitUpsideDown = 2;
  CLDeviceOrientationLandscapeLeft = 3;
  CLDeviceOrientationLandscapeRight = 4;
  CLDeviceOrientationFaceUp = 5;
  CLDeviceOrientationFaceDown = 6;

type
  CLAuthorizationStatus = cint;
  CLAuthorizationStatusPtr = ^CLAuthorizationStatus;

const
  kCLAuthorizationStatusNotDetermined = 0;
  kCLAuthorizationStatusRestricted = 1;
  kCLAuthorizationStatusDenied = 2;
  kCLAuthorizationStatusAuthorizedAlways = 3 { available in 10_12, 8_0 };
  kCLAuthorizationStatusAuthorizedWhenInUse = 4 { available in NA, 8_0 };
  kCLAuthorizationStatusAuthorized = 5 deprecated 'in 10_6, NA, 2_0, 8_0, "Use kCLAuthorizationStatusAuthorizedAlways"';
  __TVOS_PROHIBITED = 6 deprecated 'in 10_6, NA, 2_0, 8_0, "Use kCLAuthorizationStatusAuthorizedAlways"';
  __WATCHOS_PROHIBITED = kCLAuthorizationStatusAuthorizedAlways deprecated 'in 10_6, NA, 2_0, 8_0, "Use kCLAuthorizationStatusAuthorizedAlways"';

type
  CLActivityType = NSInteger;
  CLActivityTypePtr = ^CLActivityType;

const
  CLActivityTypeOther = 1;
  CLActivityTypeAutomotiveNavigation = 2;
  CLActivityTypeFitness = 3;
  CLActivityTypeOtherNavigation = 4;
{$endif}

{$ifdef CLASSES}

type
  CLLocationManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function locationServicesEnabled: boolean; message 'locationServicesEnabled'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function headingAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'headingAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function significantLocationChangeMonitoringAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'significantLocationChangeMonitoringAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function isMonitoringAvailableForClass (regionClass: pobjc_class): boolean; message 'isMonitoringAvailableForClass:'; { available starting in __MAC_10_10,__IPHONE_7_0 }
    class function regionMonitoringAvailable                                                                                  __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'regionMonitoringAvailable                                                                                  __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; deprecated 'in __MAC_10_8,__MAC_10_10,__IPHONE_4_0,__IPHONE_7_0';
    class function regionMonitoringEnabled                                                                                    __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'regionMonitoringEnabled                                                                                    __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; deprecated 'in __MAC_10_8, __MAC_10_10,__IPHONE_4_0, __IPHONE_6_0';
    class function isRangingAvailable                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'isRangingAvailable                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_NA,__IPHONE_7_0 }
    class function authorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; { available starting in __MAC_10_7,__IPHONE_4_2 }
    procedure setDelegate(newValue: CLLocationManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CLLocationManagerDelegateProtocol; message 'delegate';
    function __WATCHOS_PROHIBITED_: BOOL locationServicesEnabled __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED(newValue: NSString *purpose __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: NSString *purpose __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_(newValue: CLActivityType activityType __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED__: CLActivityType activityType __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure setDistanceFilter(newValue: CLLocationDistance); message 'setDistanceFilter:';
    function distanceFilter: CLLocationDistance; message 'distanceFilter';
    procedure setDesiredAccuracy(newValue: CLLocationAccuracy); message 'setDesiredAccuracy:';
    function desiredAccuracy: CLLocationAccuracy; message 'desiredAccuracy';
    procedure set__WATCHOS_PROHIBITED__(newValue: BOOL pausesLocationUpdatesAutomatically __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED___: BOOL pausesLocationUpdatesAutomatically __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED___(newValue: BOOL allowsBackgroundLocationUpdates __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED____: BOOL allowsBackgroundLocationUpdates __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function location: CLLocation; message 'location';
    function __WATCHOS_PROHIBITED_____: BOOL headingAvailable __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED____(newValue: CLLocationDegrees headingFilter __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED______: CLLocationDegrees headingFilter __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_____(newValue: CLDeviceOrientation headingOrientation __TVOS_PROHIBITED); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_______: CLDeviceOrientation headingOrientation __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED________: CLHeading *heading __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_________: CLLocationDistance maximumRegionMonitoringDistance __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__________: __kindof CLRegion *Protocol *monitoredRegions __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED___________: __kindof CLRegion *Protocol *rangedRegions __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    procedure requestWhenInUseAuthorization; message 'requestWhenInUseAuthorization'; { available starting in __MAC_NA, __IPHONE_8_0 }
    procedure requestAlwaysAuthorization                                                  __TVOS_PROHIBITED; message 'requestAlwaysAuthorization                                                  __TVOS_PROHIBITED'; { available starting in __MAC_NA, __IPHONE_8_0 }
    procedure startUpdatingLocation __TVOS_PROHIBITED; message 'startUpdatingLocation __TVOS_PROHIBITED';
    procedure stopUpdatingLocation; message 'stopUpdatingLocation';
    procedure requestLocation; message 'requestLocation'; { available starting in __MAC_NA, __IPHONE_9_0 }
    procedure startUpdatingHeading                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'startUpdatingHeading                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure stopUpdatingHeading                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'stopUpdatingHeading                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure dismissHeadingCalibrationDisplay                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'dismissHeadingCalibrationDisplay                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure startMonitoringSignificantLocationChanges                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'startMonitoringSignificantLocationChanges                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    procedure stopMonitoringSignificantLocationChanges                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'stopMonitoringSignificantLocationChanges                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    procedure startMonitoringForRegion_desiredAccuracy (region: CLRegion; accuracy: CLLocationAccuracy); message 'startMonitoringForRegion:desiredAccuracy:'; deprecated 'in __MAC_NA, __MAC_NA,__IPHONE_4_0, __IPHONE_6_0';
    procedure stopMonitoringForRegion (region: CLRegion); message 'stopMonitoringForRegion:'; { available starting in __MAC_10_8,__IPHONE_4_0 }
    procedure startMonitoringForRegion (region: CLRegion); message 'startMonitoringForRegion:'; { available starting in __MAC_10_8,__IPHONE_5_0 }
    procedure requestStateForRegion (region: CLRegion); message 'requestStateForRegion:'; { available starting in __MAC_10_10,__IPHONE_7_0 }
    procedure startRangingBeaconsInRegion (region: CLBeaconRegion); message 'startRangingBeaconsInRegion:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure stopRangingBeaconsInRegion (region: CLBeaconRegion); message 'stopRangingBeaconsInRegion:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure allowDeferredLocationUpdatesUntilTraveled_timeout (distance: CLLocationDistance; timeout: NSTimeInterval); message 'allowDeferredLocationUpdatesUntilTraveled:timeout:'; { available starting in __MAC_NA,__IPHONE_6_0 }
    procedure disallowDeferredLocationUpdates                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED; message 'disallowDeferredLocationUpdates                                                 __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_NA,__IPHONE_6_0 }
    class function deferredLocationUpdatesAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED: boolean; message 'deferredLocationUpdatesAvailable                                                   __TVOS_PROHIBITED __WATCHOS_PROHIBITED'; { available starting in __MAC_10_9,__IPHONE_6_0 }
  end;
{$endif}

