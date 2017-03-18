{ Parsed from HealthKit.framework HKQuantitySample.h }

{$ifdef TYPES}
type
  HKQuantitySamplePtr = ^HKQuantitySample;
{$endif}

{$ifdef CLASSES}

type
  HKQuantitySample = objcclass external (HKSample)
  public
    function quantityType: HKQuantityType; message 'quantityType';
    function quantity: HKQuantity; message 'quantity';
    class function quantitySampleWithType_quantity_startDate_endDate (quantityType_: HKQuantityType; quantity_: HKQuantity; startDate_: NSDate; endDate_: NSDate): instancetype; message 'quantitySampleWithType:quantity:startDate:endDate:';
    class function quantitySampleWithType_quantity_startDate_endDate_metadata (quantityType_: HKQuantityType; quantity_: HKQuantity; startDate_: NSDate; endDate_: NSDate; metadata_: nullable NSDictionaryPtr): instancetype; message 'quantitySampleWithType:quantity:startDate:endDate:metadata:';
    class function quantitySampleWithType_quantity_startDate_endDate_device_metadata (quantityType_: HKQuantityType; quantity_: HKQuantity; startDate_: NSDate; endDate_: NSDate; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'quantitySampleWithType:quantity:startDate:endDate:device:metadata:'; { available in 9_0, 2_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathQuantity: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

