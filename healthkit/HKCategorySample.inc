{ Parsed from HealthKit.framework HKCategorySample.h }

{$ifdef TYPES}
type
  HKCategorySamplePtr = ^HKCategorySample;
{$endif}

{$ifdef CLASSES}

type
  HKCategorySample = objcclass external (HKSample)
  public
    function categoryType: HKCategoryType; message 'categoryType';
    function value: NSInteger; message 'value';
    function init: instancetype; message 'init';
    class function categorySampleWithType_value_startDate_endDate_metadata (type_: HKCategoryType; value_: NSInteger; startDate_: NSDate; endDate_: NSDate; metadata_: nullable NSDictionaryPtr): instancetype; message 'categorySampleWithType:value:startDate:endDate:metadata:';
    class function categorySampleWithType_value_startDate_endDate (type_: HKCategoryType; value_: NSInteger; startDate_: NSDate; endDate_: NSDate): instancetype; message 'categorySampleWithType:value:startDate:endDate:';
    class function categorySampleWithType_value_startDate_endDate_device_metadata (type_: HKCategoryType; value_: NSInteger; startDate_: NSDate; endDate_: NSDate; device_: nullable HKDevicePtr; metadata_: nullable NSDictionaryPtr): instancetype; message 'categorySampleWithType:value:startDate:endDate:device:metadata:'; { available in 9_0, 2_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathCategoryValue: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

