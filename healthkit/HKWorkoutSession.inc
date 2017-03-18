{ Parsed from HealthKit.framework HKWorkoutSession.h }

{$ifdef TYPES}
type
  HKWorkoutConfigurationPtr = ^HKWorkoutConfiguration;
  HKWorkoutSessionPtr = ^HKWorkoutSession;
  HKWorkoutSessionDelegateProtocolPtr = ^HKWorkoutSessionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  HKWorkoutSessionState = NSInteger;
  HKWorkoutSessionStatePtr = ^HKWorkoutSessionState;

const
  HKWorkoutSessionStateNotStarted = 1;
  HKWorkoutSessionStateRunning = 2;
  HKWorkoutSessionStateEnded = 3;
  HKWorkoutSessionStatePaused = 4 { available in 3_0 };

type
  HKWorkoutSessionLocationType = NSInteger;
  HKWorkoutSessionLocationTypePtr = ^HKWorkoutSessionLocationType;

const
  HKWorkoutSessionLocationTypeUnknown = 1;
  HKWorkoutSessionLocationTypeIndoor = 2;
  HKWorkoutSessionLocationTypeOutdoor = 3;
{$endif}

{$ifdef CLASSES}

type
  HKWorkoutConfiguration = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setActivityType(newValue: HKWorkoutActivityType); message 'setActivityType:';
    function activityType: HKWorkoutActivityType; message 'activityType';
    procedure setLocationType(newValue: HKWorkoutSessionLocationType); message 'setLocationType:';
    function locationType: HKWorkoutSessionLocationType; message 'locationType';
    procedure setSwimmingLocationType(newValue: HKWorkoutSwimmingLocationType); message 'setSwimmingLocationType:';
    function swimmingLocationType: HKWorkoutSwimmingLocationType; message 'swimmingLocationType';
    procedure setLapLength(newValue: HKQuantity); message 'setLapLength:';
    function lapLength: HKQuantity; message 'lapLength';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKWorkoutSession = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function activityType: HKWorkoutActivityType; message 'activityType';
    function locationType: HKWorkoutSessionLocationType; message 'locationType';
    function workoutConfiguration: HKWorkoutConfiguration; message 'workoutConfiguration';
    procedure setDelegate(newValue: HKWorkoutSessionDelegateProtocol); message 'setDelegate:';
    function delegate: HKWorkoutSessionDelegateProtocol; message 'delegate';
    function state: HKWorkoutSessionState; message 'state';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function initWithActivityType_locationType (activityType_: HKWorkoutActivityType; locationType_: HKWorkoutSessionLocationType): instancetype; message 'initWithActivityType:locationType:'; deprecated 'in 2_0, 3_0, "Use initWithConfiguration:error:"';
    function initWithConfiguration_error (workoutConfiguration_: HKWorkoutConfiguration; error: NSErrorPtr): nullable instancetype; message 'initWithConfiguration:error:'; { available in 3_0 }
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HKWorkoutSessionDelegateProtocol = objcprotocol external name 'HKWorkoutSessionDelegate' (NSObjectProtocol)
    procedure workoutSession_didChangeToState_fromState_date (workoutSession: HKWorkoutSession; toState: HKWorkoutSessionState; fromState: HKWorkoutSessionState; date: NSDate); message 'workoutSession:didChangeToState:fromState:date:';
    procedure workoutSession_didFailWithError (workoutSession: HKWorkoutSession; error: NSError); message 'workoutSession:didFailWithError:';
  optional
    procedure workoutSession_didGenerateEvent (workoutSession: HKWorkoutSession; event: HKWorkoutEvent); message 'workoutSession:didGenerateEvent:'; { available in 10_0, 3_0 }
  end;
{$endif}

