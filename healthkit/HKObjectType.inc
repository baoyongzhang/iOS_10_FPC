{ Parsed from HealthKit.framework HKObjectType.h }

{$ifdef TYPES}
type
  HKObjectTypePtr = ^HKObjectType;
  HKCharacteristicTypePtr = ^HKCharacteristicType;
  HKSampleTypePtr = ^HKSampleType;
  HKCategoryTypePtr = ^HKCategoryType;
  HKCorrelationTypePtr = ^HKCorrelationType;
  HKDocumentTypePtr = ^HKDocumentType;
  HKQuantityTypePtr = ^HKQuantityType;
  HKWorkoutTypePtr = ^HKWorkoutType;
  HKActivitySummaryTypePtr = ^HKActivitySummaryType;
{$endif}

{$ifdef CLASSES}

type
  HKObjectType = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function init: instancetype; message 'init';
    class function quantityTypeForIdentifier (identifier_: HKQuantityTypeIdentifier): nullable HKQuantityTypePtr; message 'quantityTypeForIdentifier:';
    class function categoryTypeForIdentifier (identifier_: HKCategoryTypeIdentifier): nullable HKCategoryTypePtr; message 'categoryTypeForIdentifier:';
    class function characteristicTypeForIdentifier (identifier_: HKCharacteristicTypeIdentifier): nullable HKCharacteristicTypePtr; message 'characteristicTypeForIdentifier:';
    class function correlationTypeForIdentifier (identifier_: HKCorrelationTypeIdentifier): nullable HKCorrelationTypePtr; message 'correlationTypeForIdentifier:';
    class function documentTypeForIdentifier (identifier_: HKDocumentTypeIdentifier): nullable HKDocumentTypePtr; message 'documentTypeForIdentifier:'; { available in 10_0, 3_0 }
    class function workoutType: HKWorkoutType; message 'workoutType';
    class function activitySummaryType: HKActivitySummaryType; message 'activitySummaryType'; { available in 9_3, 2_2 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKCharacteristicType = objcclass external (HKObjectType)
  end;

type
  HKSampleType = objcclass external (HKObjectType)
  end;

type
  HKCategoryType = objcclass external (HKSampleType)
  end;

type
  HKCorrelationType = objcclass external (HKSampleType)
  end;
{$endif}

{$ifdef TYPES}
type
  HKQuantityAggregationStyle = NSInteger;
  HKQuantityAggregationStylePtr = ^HKQuantityAggregationStyle;

const
  HKQuantityAggregationStyleCumulative = 0;
  HKQuantityAggregationStyleDiscrete = 1;
{$endif}

{$ifdef CLASSES}

type
  HKDocumentType = objcclass external (HKSampleType)
  end;

type
  HKQuantityType = objcclass external (HKSampleType)
  public
    function aggregationStyle: HKQuantityAggregationStyle; message 'aggregationStyle';
    function isCompatibleWithUnit (unit_: HKUnit): boolean; message 'isCompatibleWithUnit:';
  end;

type
  HKWorkoutType = objcclass external (HKSampleType)
  end;

type
  HKActivitySummaryType = objcclass external (HKObjectType)
  end;
{$endif}

