{ Parsed from HealthKit.framework HKSample.h }

{$ifdef TYPES}
type
  HKSamplePtr = ^HKSample;
{$endif}

{$ifdef CLASSES}

type
  HKSample = objcclass external (HKObject)
  public
    function sampleType: HKSampleType; message 'sampleType';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKSampleSortIdentifierStartDate: NSString { available in 8_0, 2_0 }; cvar; external;
  HKSampleSortIdentifierEndDate: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathStartDate: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathEndDate: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

