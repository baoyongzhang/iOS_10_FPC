{ Parsed from HealthKit.framework HKObserverQuery.h }

{$ifdef TYPES}
type
  HKObserverQueryPtr = ^HKObserverQuery;
{$endif}

{$ifdef TYPES}
type
  HKObserverQueryCompletionHandler = OpaqueCBlock { available in 8_0, 2_0 };
{$endif}

{$ifdef CLASSES}

type
  HKObserverQuery = objcclass external (HKQuery)
  public
    function initWithSampleType_predicate_updateHandler (sampleType_: HKSampleType; predicate_: nullable NSPredicatePtr; updateHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:predicate:updateHandler:';
  end;
{$endif}

