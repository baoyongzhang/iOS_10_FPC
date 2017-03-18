{ Parsed from HealthKit.framework HKWorkout.h }

{$ifdef TYPES}
type
  HKWorkoutEventPtr = ^HKWorkoutEvent;
  HKWorkoutPtr = ^HKWorkout;
{$endif}

{$ifdef TYPES}
type
  HKWorkoutActivityType = NSUInteger;
  HKWorkoutActivityTypePtr = ^HKWorkoutActivityType;

const
  HKWorkoutActivityTypeAmericanFootball = 1;
  HKWorkoutActivityTypeArchery = 2;
  HKWorkoutActivityTypeAustralianFootball = 3;
  HKWorkoutActivityTypeBadminton = 4;
  HKWorkoutActivityTypeBaseball = 5;
  HKWorkoutActivityTypeBasketball = 6;
  HKWorkoutActivityTypeBowling = 7;
  HKWorkoutActivityTypeBoxing = 8;
  HKWorkoutActivityTypeClimbing = 9;
  HKWorkoutActivityTypeCricket = 10;
  HKWorkoutActivityTypeCrossTraining = 11;
  HKWorkoutActivityTypeCurling = 12;
  HKWorkoutActivityTypeCycling = 13;
  HKWorkoutActivityTypeDance = 14;
  HKWorkoutActivityTypeDanceInspiredTraining = 15 deprecated 'in 8_0, 10_0, "Use HKWorkoutActivityTypeDance, HKWorkoutActivityTypeBarre, or HKWorkoutActivityTypePilates"';
  HKWorkoutActivityTypeElliptical = 16;
  HKWorkoutActivityTypeEquestrianSports = 17;
  HKWorkoutActivityTypeFencing = 18;
  HKWorkoutActivityTypeFishing = 19;
  HKWorkoutActivityTypeFunctionalStrengthTraining = 20;
  HKWorkoutActivityTypeGolf = 21;
  HKWorkoutActivityTypeGymnastics = 22;
  HKWorkoutActivityTypeHandball = 23;
  HKWorkoutActivityTypeHiking = 24;
  HKWorkoutActivityTypeHockey = 25;
  HKWorkoutActivityTypeHunting = 26;
  HKWorkoutActivityTypeLacrosse = 27;
  HKWorkoutActivityTypeMartialArts = 28;
  HKWorkoutActivityTypeMindAndBody = 29;
  HKWorkoutActivityTypeMixedMetabolicCardioTraining = 30;
  HKWorkoutActivityTypePaddleSports = 31;
  HKWorkoutActivityTypePlay = 32;
  HKWorkoutActivityTypePreparationAndRecovery = 33;
  HKWorkoutActivityTypeRacquetball = 34;
  HKWorkoutActivityTypeRowing = 35;
  HKWorkoutActivityTypeRugby = 36;
  HKWorkoutActivityTypeRunning = 37;
  HKWorkoutActivityTypeSailing = 38;
  HKWorkoutActivityTypeSkatingSports = 39;
  HKWorkoutActivityTypeSnowSports = 40;
  HKWorkoutActivityTypeSoccer = 41;
  HKWorkoutActivityTypeSoftball = 42;
  HKWorkoutActivityTypeSquash = 43;
  HKWorkoutActivityTypeStairClimbing = 44;
  HKWorkoutActivityTypeSurfingSports = 45;
  HKWorkoutActivityTypeSwimming = 46;
  HKWorkoutActivityTypeTableTennis = 47;
  HKWorkoutActivityTypeTennis = 48;
  HKWorkoutActivityTypeTrackAndField = 49;
  HKWorkoutActivityTypeTraditionalStrengthTraining = 50;
  HKWorkoutActivityTypeVolleyball = 51;
  HKWorkoutActivityTypeWalking = 52;
  HKWorkoutActivityTypeWaterFitness = 53;
  HKWorkoutActivityTypeWaterPolo = 54;
  HKWorkoutActivityTypeWaterSports = 55;
  HKWorkoutActivityTypeWrestling = 56;
  HKWorkoutActivityTypeYoga = 57;
  HKWorkoutActivityTypeBarre = 58 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeCoreTraining = 59 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeCrossCountrySkiing = 60 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeDownhillSkiing = 61 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeFlexibility = 62 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeHighIntensityIntervalTraining = 63 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeJumpRope = 64 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeKickboxing = 65 { available in 10_0, 3_0 };
  HKWorkoutActivityTypePilates = 66 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeSnowboarding = 67 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeStairs = 68 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeStepTraining = 69 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeWheelchairWalkPace = 70 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeWheelchairRunPace = 71 { available in 10_0, 3_0 };
  HKWorkoutActivityTypeOther = 3000;

type
  HKWorkoutEventType = NSInteger;
  HKWorkoutEventTypePtr = ^HKWorkoutEventType;

const
  HKWorkoutEventTypePause = 1;
  HKWorkoutEventTypeResume = 2;
  HKWorkoutEventTypeLap = 3 { available in 10_0, 3_0 };
  HKWorkoutEventTypeMarker = 4 { available in 10_0, 3_0 };
  HKWorkoutEventTypeMotionPaused = 5 { available in 10_0, 3_0 };
  HKWorkoutEventTypeMotionResumed = 6 { available in 10_0, 3_0 };
{$endif}

{$ifdef CLASSES}

type
  HKWorkoutEvent = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function type_: HKWorkoutEventType; message 'type';
    function date: NSDate; message 'date';
    function metadata: NSDictionary; message 'metadata';
    class function workoutEventWithType_date (type_: HKWorkoutEventType; date_: NSDate): instancetype; message 'workoutEventWithType:date:';
    class function workoutEventWithType_date_metadata (type_: HKWorkoutEventType; date_: NSDate; metadata_: NSDictionary): instancetype; message 'workoutEventWithType:date:metadata:'; { available in 10_0, 3_0 }
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKWorkout = objcclass external (HKSample)
  public
    function workoutActivityType: HKWorkoutActivityType; message 'workoutActivityType';
    function workoutEvents: HKWorkoutEvent *ProtocolPtr; message 'workoutEvents';
    function duration: NSTimeInterval; message 'duration';
    function totalEnergyBurned: HKQuantity; message 'totalEnergyBurned';
    function totalDistance: HKQuantity; message 'totalDistance';
    function totalSwimmingStrokeCount: HKQuantity; message 'totalSwimmingStrokeCount';
    class function workoutWithActivityType_startDate_endDate (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate): instancetype; message 'workoutWithActivityType:startDate:endDate:';
    class function workoutWithActivityType_startDate_endDate_workoutEvents_totalEnergyBurned_totalDistance_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; workoutEvents_: nullable HKWorkoutEvent *ProtocolPtr; totalEnergyBurned_: nullable HKQuantityPtr; totalDistance_: nullable HKQuantityPtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'workoutWithActivityType:startDate:endDate:workoutEvents:totalEnergyBurned:totalDistance:metadata:';
    class function workoutWithActivityType_startDate_endDate_workoutEvents_totalEnergyBurned_totalDistance_device_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; workoutEvents_: nullable HKWorkoutEvent *ProtocolPtr; totalEnergyBurned_: nullable HKQuantityPtr; totalDistance_: nullable HKQuantityPtr; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'workoutWithActivityType:startDate:endDate:workoutEvents:totalEnergyBurned:totalDistance:device:metadata:'; { available in 9_0, 2_0 }
    class function workoutWithActivityType_startDate_endDate_duration_totalEnergyBurned_totalDistance_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; duration_: NSTimeInterval; totalEnergyBurned_: nullable HKQuantityPtr; totalDistance_: nullable HKQuantityPtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'workoutWithActivityType:startDate:endDate:duration:totalEnergyBurned:totalDistance:metadata:';
    class function workoutWithActivityType_startDate_endDate_duration_totalEnergyBurned_totalDistance_device_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; duration_: NSTimeInterval; totalEnergyBurned_: nullable HKQuantityPtr; totalDistance_: nullable HKQuantityPtr; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'workoutWithActivityType:startDate:endDate:duration:totalEnergyBurned:totalDistance:device:metadata:'; { available in 9_0, 2_0 }
    class function workoutWithActivityType_startDate_endDate_workoutEvents_totalEnergyBurned_totalDistance_totalSwimmingStrokeCount_device_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; workoutEvents_: nullable HKWorkoutEvent *ProtocolPtr; totalEnergyBurned_: nullable HKQuantityPtr; totalDistance_: nullable HKQuantityPtr; totalSwimmingStrokeCount_: nullable HKQuantityPtr; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'workoutWithActivityType:startDate:endDate:workoutEvents:totalEnergyBurned:totalDistance:totalSwimmingStrokeCount:device:metadata:'; { available in 10_0, 3_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathWorkoutDuration: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathWorkoutTotalDistance: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathWorkoutTotalEnergyBurned: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathWorkoutType: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathWorkoutTotalSwimmingStrokeCount: NSString { available in 10_0, 3_0 }; cvar; external;
  HKWorkoutSortIdentifierDuration: NSString { available in 8_0, 2_0 }; cvar; external;
  HKWorkoutSortIdentifierTotalDistance: NSString { available in 8_0, 2_0 }; cvar; external;
  HKWorkoutSortIdentifierTotalEnergyBurned: NSString { available in 8_0, 2_0 }; cvar; external;
  HKWorkoutSortIdentifierTotalSwimmingStrokeCount: NSString { available in 10_0, 3_0 }; cvar; external;
{$endif}

