{ Parsed from HealthKit.framework HKCorrelationQuery.h }

{$ifdef TYPES}
type
  HKCorrelationQueryPtr = ^HKCorrelationQuery;
{$endif}

{$ifdef CLASSES}

type
  HKCorrelationQuery = objcclass external (HKQuery)
  public
    function correlationType: HKCorrelationType; message 'correlationType';
    function samplePredicates: NSDictionary; message 'samplePredicates';
    function initWithType_predicate_samplePredicates_completion (correlationType_: HKCorrelationType; predicate_: nullable NSPredicatePtr; samplePredicates_: nullable NSDictionaryPtr; completion: OpaqueCBlock): instancetype; message 'initWithType:predicate:samplePredicates:completion:';
  end;
{$endif}

