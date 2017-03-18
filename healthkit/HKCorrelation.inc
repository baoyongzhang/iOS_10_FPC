{ Parsed from HealthKit.framework HKCorrelation.h }

{$ifdef TYPES}
type
  HKCorrelationPtr = ^HKCorrelation;
{$endif}

{$ifdef CLASSES}

type
  HKCorrelation = objcclass external (HKSample)
  public
    function correlationType: HKCorrelationType; message 'correlationType';
    function objects: __kindof HKSample *ProtocolPtr; message 'objects';
    class function correlationWithType_startDate_endDate_objects (correlationType_: HKCorrelationType; startDate_: NSDate; endDate_: NSDate; objects_: HKSample *ProtocolPtr): instancetype; message 'correlationWithType:startDate:endDate:objects:';
    class function correlationWithType_startDate_endDate_objects_metadata (correlationType_: HKCorrelationType; startDate_: NSDate; endDate_: NSDate; objects_: HKSample *ProtocolPtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'correlationWithType:startDate:endDate:objects:metadata:';
    class function correlationWithType_startDate_endDate_objects_device_metadata (correlationType_: HKCorrelationType; startDate_: NSDate; endDate_: NSDate; objects_: HKSample *ProtocolPtr; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'correlationWithType:startDate:endDate:objects:device:metadata:'; { available in 9_0, 2_0 }
    function objectsForType (objectType: HKObjectType): __kindof HKSample *ProtocolPtr; message 'objectsForType:';
  end;
{$endif}

