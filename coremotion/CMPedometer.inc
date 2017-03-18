{ Parsed from CoreMotion.framework CMPedometer.h }

{$ifdef TYPES}
type
  CMPedometerDataPtr = ^CMPedometerData;
  CMPedometerEventPtr = ^CMPedometerEvent;
  CMPedometerPtr = ^CMPedometer;
{$endif}

{$ifdef CLASSES}

type
  CMPedometerData = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function numberOfSteps_: NSNumber; message 'numberOfSteps';
    function distance: NSNumber; message 'distance';
    function floorsAscended: NSNumber; message 'floorsAscended';
    function floorsDescended: NSNumber; message 'floorsDescended';
    function currentPace: NSNumber; message 'currentPace';
    function currentCadence: NSNumber; message 'currentCadence';
    function averageActivePace: NSNumber; message 'averageActivePace';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CMPedometerEventType = NSInteger;
  CMPedometerEventTypePtr = ^CMPedometerEventType;

const
  CMPedometerEventTypePause = 0;
  CMPedometerEventTypeResume = 1;
{$endif}

{$ifdef CLASSES}

type
  CMPedometerEvent = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function date: NSDate; message 'date';
    function type_: CMPedometerEventType; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  __TVOS_PROHIBITED = void (^CMPedometerHandler)(CMPedometerData *__nullable NSError *__nullable error);
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED;
  __TVOS_PROHIBITED = void (^CMPedometerEventHandler)(CMPedometerEvent *__nullable NSError *__nullable error) { available in NA, 10_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in NA, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  CMPedometer = objcclass external (NSObject)
  public
    class function isStepCountingAvailable: boolean; message 'isStepCountingAvailable';
    class function isDistanceAvailable: boolean; message 'isDistanceAvailable';
    class function isFloorCountingAvailable: boolean; message 'isFloorCountingAvailable';
    class function isPaceAvailable: boolean; message 'isPaceAvailable'; { available in NA,9_0 }
    class function isCadenceAvailable: boolean; message 'isCadenceAvailable'; { available in NA,9_0 }
    class function isPedometerEventTrackingAvailable: boolean; message 'isPedometerEventTrackingAvailable'; { available in NA,10_0 }
    procedure queryPedometerDataFromDate_toDate_withHandler (start: NSDate; end_: NSDate; handler: CMPedometerHandler); message 'queryPedometerDataFromDate:toDate:withHandler:';
    procedure startPedometerUpdatesFromDate_withHandler (start: NSDate; handler: CMPedometerHandler); message 'startPedometerUpdatesFromDate:withHandler:';
    procedure stopPedometerUpdates; message 'stopPedometerUpdates';
    procedure startPedometerEventUpdatesWithHandler (handler: CMPedometerEventHandler); message 'startPedometerEventUpdatesWithHandler:'; { available in NA,10_0 }
    procedure stopPedometerEventUpdates; message 'stopPedometerEventUpdates'; { available in NA,10_0 }
  end;
{$endif}

