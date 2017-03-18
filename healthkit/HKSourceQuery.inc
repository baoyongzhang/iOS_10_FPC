{ Parsed from HealthKit.framework HKSourceQuery.h }

{$ifdef TYPES}
type
  HKSourceQueryPtr = ^HKSourceQuery;
{$endif}

{$ifdef CLASSES}

type
  HKSourceQuery = objcclass external (HKQuery)
  public
    function initWithSampleType_samplePredicate_completionHandler (sampleType_: HKSampleType; objectPredicate: nullable NSPredicatePtr; completionHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:samplePredicate:completionHandler:';
  end;
{$endif}

