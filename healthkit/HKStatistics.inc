{ Parsed from HealthKit.framework HKStatistics.h }

{$ifdef TYPES}
type
  HKStatisticsPtr = ^HKStatistics;
{$endif}

{$ifdef TYPES}
type
  HKStatisticsOptions = NSUInteger;
  HKStatisticsOptionsPtr = ^HKStatisticsOptions;

const
  HKStatisticsOptionNone = 0;
  HKStatisticsOptionSeparateBySource = 1 shl 0;
  HKStatisticsOptionDiscreteAverage = 1 shl 1;
  HKStatisticsOptionDiscreteMin = 1 shl 2;
  HKStatisticsOptionDiscreteMax = 1 shl 3;
  HKStatisticsOptionCumulativeSum = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  HKStatistics = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function quantityType: HKQuantityType; message 'quantityType';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function sources: HKSource *ProtocolPtr; message 'sources';
    function init: instancetype; message 'init';
    function averageQuantityForSource (source: HKSource): nullable HKQuantityPtr; message 'averageQuantityForSource:';
    function averageQuantity: nullable HKQuantityPtr; message 'averageQuantity';
    function minimumQuantityForSource (source: HKSource): nullable HKQuantityPtr; message 'minimumQuantityForSource:';
    function minimumQuantity: nullable HKQuantityPtr; message 'minimumQuantity';
    function maximumQuantityForSource (source: HKSource): nullable HKQuantityPtr; message 'maximumQuantityForSource:';
    function maximumQuantity: nullable HKQuantityPtr; message 'maximumQuantity';
    function sumQuantityForSource (source: HKSource): nullable HKQuantityPtr; message 'sumQuantityForSource:';
    function sumQuantity: nullable HKQuantityPtr; message 'sumQuantity';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

