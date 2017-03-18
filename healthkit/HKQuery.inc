{ Parsed from HealthKit.framework HKQuery.h }

{$ifdef TYPES}
type
  HKQueryPtr = ^HKQuery;
{$endif}

{$ifdef CLASSES}

type
  HKQuery = objcclass external (NSObject)
  public
    function objectType: HKObjectType; message 'objectType';
    function sampleType: HKSampleType; message 'sampleType';
    function predicate: NSPredicate; message 'predicate';
    function init: instancetype; message 'init';
  end;
{$endif}

{$ifdef TYPES}
type
  HKQueryOptions = NSUInteger;
  HKQueryOptionsPtr = ^HKQueryOptions;

const
  HKQueryOptionNone = 0;
  HKQueryOptionStrictStartDate = 1 shl 0;
  HKQueryOptionStrictEndDate = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  HKObjectPredicates = objccategory external (HKQuery)
    class function predicateForObjectsWithMetadataKey (key: NSString): NSPredicate; message 'predicateForObjectsWithMetadataKey:';
    class function predicateForObjectsWithMetadataKey_allowedValues (key: NSString; allowedValues: NSArray): NSPredicate; message 'predicateForObjectsWithMetadataKey:allowedValues:';
    class function predicateForObjectsWithMetadataKey_operatorType_value (key: NSString; operatorType: NSPredicateOperatorType; value: id): NSPredicate; message 'predicateForObjectsWithMetadataKey:operatorType:value:';
    class function predicateForObjectsFromSource (source: HKSource): NSPredicate; message 'predicateForObjectsFromSource:';
    class function predicateForObjectsFromSources (sources: HKSource *ProtocolPtr): NSPredicate; message 'predicateForObjectsFromSources:';
    class function predicateForObjectsFromSourceRevisions (sourceRevisions: HKSourceRevision *ProtocolPtr): NSPredicate; message 'predicateForObjectsFromSourceRevisions:'; { available in 9_0, 2_0 }
    class function predicateForObjectsFromDevices (devices: HKDevice *ProtocolPtr): NSPredicate; message 'predicateForObjectsFromDevices:'; { available in 9_0, 2_0 }
    class function predicateForObjectsWithDeviceProperty_allowedValues (key: NSString; allowedValues: NSString *ProtocolPtr): NSPredicate; message 'predicateForObjectsWithDeviceProperty:allowedValues:'; { available in 9_0, 2_0 }
    class function predicateForObjectWithUUID (UUID: NSUUID): NSPredicate; message 'predicateForObjectWithUUID:';
    class function predicateForObjectsWithUUIDs (UUIDs: NSUUID *ProtocolPtr): NSPredicate; message 'predicateForObjectsWithUUIDs:';
    class function predicateForObjectsWithNoCorrelation: NSPredicate; message 'predicateForObjectsWithNoCorrelation';
    class function predicateForObjectsFromWorkout (workout: HKWorkout): NSPredicate; message 'predicateForObjectsFromWorkout:';
  end;

type
  HKSamplePredicates = objccategory external (HKQuery)
    class function predicateForSamplesWithStartDate_endDate_options (startDate: nullable NSDatePtr; endDate: nullable NSDatePtr; options: HKQueryOptions): NSPredicate; message 'predicateForSamplesWithStartDate:endDate:options:';
  end;

type
  HKQuantitySamplePredicates = objccategory external (HKQuery)
    class function predicateForQuantitySamplesWithOperatorType_quantity (operatorType: NSPredicateOperatorType; quantity: HKQuantity): NSPredicate; message 'predicateForQuantitySamplesWithOperatorType:quantity:';
  end;

type
  HKCategorySamplePredicates = objccategory external (HKQuery)
    class function predicateForCategorySamplesWithOperatorType_value (operatorType: NSPredicateOperatorType; value: NSInteger): NSPredicate; message 'predicateForCategorySamplesWithOperatorType:value:';
  end;

type
  HKWorkoutPredicates = objccategory external (HKQuery)
    class function predicateForWorkoutsWithWorkoutActivityType (workoutActivityType: HKWorkoutActivityType): NSPredicate; message 'predicateForWorkoutsWithWorkoutActivityType:';
    class function predicateForWorkoutsWithOperatorType_duration (operatorType: NSPredicateOperatorType; duration: NSTimeInterval): NSPredicate; message 'predicateForWorkoutsWithOperatorType:duration:';
    class function predicateForWorkoutsWithOperatorType_totalEnergyBurned (operatorType: NSPredicateOperatorType; totalEnergyBurned: HKQuantity): NSPredicate; message 'predicateForWorkoutsWithOperatorType:totalEnergyBurned:';
    class function predicateForWorkoutsWithOperatorType_totalDistance (operatorType: NSPredicateOperatorType; totalDistance: HKQuantity): NSPredicate; message 'predicateForWorkoutsWithOperatorType:totalDistance:';
    class function predicateForWorkoutsWithOperatorType_totalSwimmingStrokeCount (operatorType: NSPredicateOperatorType; totalSwimmingStrokeCount: HKQuantity): NSPredicate; message 'predicateForWorkoutsWithOperatorType:totalSwimmingStrokeCount:';
  end;

type
  HKActivitySummaryPredicates = objccategory external (HKQuery)
    class function predicateForActivitySummaryWithDateComponents (dateComponents: NSDateComponents): NSPredicate; message 'predicateForActivitySummaryWithDateComponents:'; { available in 9_3, 2_2 }
    class function predicateForActivitySummariesBetweenStartDateComponents_endDateComponents (startDateComponents: NSDateComponents; endDateComponents: NSDateComponents): NSPredicate; message 'predicateForActivitySummariesBetweenStartDateComponents:endDateComponents:'; { available in 9_3, 2_2 }
  end;
{$endif}

