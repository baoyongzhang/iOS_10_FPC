{ Parsed from HealthKit.framework HKStatisticsQuery.h }

{$ifdef TYPES}
type
  HKStatisticsQueryPtr = ^HKStatisticsQuery;
{$endif}

{$ifdef CLASSES}

type
  HKStatisticsQuery = objcclass external (HKQuery)
  public
    function initWithQuantityType_quantitySamplePredicate_options_completionHandler (quantityType: HKQuantityType; quantitySamplePredicate: nullable NSPredicatePtr; options: HKStatisticsOptions; handler: OpaqueCBlock): instancetype; message 'initWithQuantityType:quantitySamplePredicate:options:completionHandler:';
  end;
{$endif}

