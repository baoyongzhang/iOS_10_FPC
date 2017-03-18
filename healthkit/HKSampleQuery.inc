{ Parsed from HealthKit.framework HKSampleQuery.h }

{$ifdef TYPES}
type
  HKSampleQueryPtr = ^HKSampleQuery;
{$endif}

{$ifdef CLASSES}

type
  HKSampleQuery = objcclass external (HKQuery)
  public
    function limit: NSUInteger; message 'limit';
    function sortDescriptors: NSSortDescriptor *ProtocolPtr; message 'sortDescriptors';
    function initWithSampleType_predicate_limit_sortDescriptors_resultsHandler (sampleType_: HKSampleType; predicate_: nullable NSPredicatePtr; limit_: NSUInteger; sortDescriptors_: nullable NSSortDescriptor *ProtocolPtr; resultsHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:predicate:limit:sortDescriptors:resultsHandler:';
  end;
{$endif}

