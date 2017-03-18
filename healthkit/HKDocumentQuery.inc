{ Parsed from HealthKit.framework HKDocumentQuery.h }

{$ifdef TYPES}
type
  HKDocumentQueryPtr = ^HKDocumentQuery;
{$endif}

{$ifdef CLASSES}

type
  HKDocumentQuery = objcclass external (HKQuery)
  public
    function limit: NSUInteger; message 'limit';
    function sortDescriptors: NSSortDescriptor *ProtocolPtr; message 'sortDescriptors';
    function includeDocumentData: boolean; message 'includeDocumentData';
    function initWithDocumentType_predicate_limit_sortDescriptors_includeDocumentData (documentType: HKDocumentType; predicate_: nullable NSPredicatePtr; limit_: NSUInteger; sortDescriptors_: nullable NSSortDescriptor *ProtocolPtr; includeDocumentData_: boolean): instancetype; message 'initWithDocumentType:predicate:limit:sortDescriptors:includeDocumentData:';
  end;
{$endif}

