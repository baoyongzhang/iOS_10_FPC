{ Parsed from HealthKit.framework HKCDADocumentSample.h }

{$ifdef TYPES}
type
  HKCDADocumentSamplePtr = ^HKCDADocumentSample;
  HKCDADocumentPtr = ^HKCDADocument;
{$endif}

{$ifdef CLASSES}

type
  HKCDADocumentSample = objcclass external (HKDocumentSample)
  public
    function document: HKCDADocument; message 'document';
    class function CDADocumentSampleWithData_startDate_endDate_metadata_validationError (documentData: NSData; startDate_: NSDate; endDate_: NSDate; metadata_: nullable NSDictionaryPtr; validationError: NSErrorPtr): nullable instancetype; message 'CDADocumentSampleWithData:startDate:endDate:metadata:validationError:';
  end;

type
  HKCDADocument = objcclass external (NSObject)
  public
    function documentData: NSData; message 'documentData';
    function title: NSString; message 'title';
    function patientName: NSString; message 'patientName';
    function authorName: NSString; message 'authorName';
    function custodianName: NSString; message 'custodianName';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathCDATitle: NSString { available in 10_0, 3_0 }; cvar; external;
  HKPredicateKeyPathCDAPatientName: NSString { available in 10_0, 3_0 }; cvar; external;
  HKPredicateKeyPathCDAAuthorName: NSString { available in 10_0, 3_0 }; cvar; external;
  HKPredicateKeyPathCDACustodianName: NSString { available in 10_0, 3_0 }; cvar; external;
  HKDetailedCDAValidationErrorKey: NSString { available in 10_0, 3_0 }; cvar; external;
{$endif}

