{ Parsed from HealthKit.framework HKActivitySummaryQuery.h }

{$ifdef TYPES}
type
  HKActivitySummaryQueryPtr = ^HKActivitySummaryQuery;
{$endif}

{$ifdef CLASSES}

type
  HKActivitySummaryQuery = objcclass external (HKQuery)
  public
    procedure setUpdateHandler(newValue: OpaqueCBlock); message 'setUpdateHandler:';
    function updateHandler: OpaqueCBlock; message 'updateHandler';
    function initWithPredicate_resultsHandler (predicate_: nullable NSPredicatePtr; handler: OpaqueCBlock): instancetype; message 'initWithPredicate:resultsHandler:';
  end;
{$endif}

