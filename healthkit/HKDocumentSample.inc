{ Parsed from HealthKit.framework HKDocumentSample.h }

{$ifdef TYPES}
type
  HKDocumentSamplePtr = ^HKDocumentSample;
{$endif}

{$ifdef CLASSES}

type
  HKDocumentSample = objcclass external (HKSample)
  public
    function documentType: HKDocumentType; message 'documentType';
  end;
{$endif}

