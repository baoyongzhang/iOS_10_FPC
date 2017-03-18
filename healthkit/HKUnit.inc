{ Parsed from HealthKit.framework HKUnit.h }

{$ifdef TYPES}
type
  HKUnitPtr = ^HKUnit;
{$endif}

{$ifdef CLASSES}

type
  HKUnit = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function unitString: NSString; message 'unitString';
    function init: instancetype; message 'init';
    class function unitFromString (string_: NSString): instancetype; message 'unitFromString:';
    class function unitFromMassFormatterUnit (massFormatterUnit: NSMassFormatterUnit): instancetype; message 'unitFromMassFormatterUnit:';
    class function massFormatterUnitFromUnit (unit_: HKUnit): NSMassFormatterUnit; message 'massFormatterUnitFromUnit:';
    class function unitFromLengthFormatterUnit (lengthFormatterUnit: NSLengthFormatterUnit): instancetype; message 'unitFromLengthFormatterUnit:';
    class function lengthFormatterUnitFromUnit (unit_: HKUnit): NSLengthFormatterUnit; message 'lengthFormatterUnitFromUnit:';
    class function unitFromEnergyFormatterUnit (energyFormatterUnit: NSEnergyFormatterUnit): instancetype; message 'unitFromEnergyFormatterUnit:';
    class function energyFormatterUnitFromUnit (unit_: HKUnit): NSEnergyFormatterUnit; message 'energyFormatterUnitFromUnit:';
    function isNull: boolean; message 'isNull';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  HKMetricPrefix = NSInteger;
  HKMetricPrefixPtr = ^HKMetricPrefix;

const
  HKMetricPrefixNone = 0;
  HKMetricPrefixPico = 1;
  HKMetricPrefixNano = 2;
  HKMetricPrefixMicro = 3;
  HKMetricPrefixMilli = 4;
  HKMetricPrefixCenti = 5;
  HKMetricPrefixDeci = 6;
  HKMetricPrefixDeca = 7;
  HKMetricPrefixHecto = 8;
  HKMetricPrefixKilo = 9;
  HKMetricPrefixMega = 10;
  HKMetricPrefixGiga = 11;
  HKMetricPrefixTera = 12;
{$endif}

{$ifdef CLASSES}

type
  Mass = objccategory external (HKUnit)
    class function gramUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'gramUnitWithMetricPrefix:';
    class function gramUnit: instancetype; message 'gramUnit';
    class function ounceUnit: instancetype; message 'ounceUnit';
    class function poundUnit: instancetype; message 'poundUnit';
    class function stoneUnit: instancetype; message 'stoneUnit';
    class function moleUnitWithMetricPrefix_molarMass (prefix: HKMetricPrefix; gramsPerMole: double): instancetype; message 'moleUnitWithMetricPrefix:molarMass:';
    class function moleUnitWithMolarMass (gramsPerMole: double): instancetype; message 'moleUnitWithMolarMass:';
  end;

type
  Length = objccategory external (HKUnit)
    class function meterUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'meterUnitWithMetricPrefix:';
    class function meterUnit: instancetype; message 'meterUnit';
    class function inchUnit: instancetype; message 'inchUnit';
    class function footUnit: instancetype; message 'footUnit';
    class function yardUnit: instancetype; message 'yardUnit'; { available in 9_0, 2_0 }
    class function mileUnit: instancetype; message 'mileUnit';
  end;

type
  Volume = objccategory external (HKUnit)
    class function literUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'literUnitWithMetricPrefix:';
    class function literUnit: instancetype; message 'literUnit';
    class function fluidOunceUSUnit: instancetype; message 'fluidOunceUSUnit';
    class function fluidOunceImperialUnit: instancetype; message 'fluidOunceImperialUnit';
    class function pintUSUnit: instancetype; message 'pintUSUnit';
    class function pintImperialUnit: instancetype; message 'pintImperialUnit';
    class function cupUSUnit: instancetype; message 'cupUSUnit'; { available in 9_0, 2_0 }
    class function cupImperialUnit: instancetype; message 'cupImperialUnit'; { available in 9_0, 2_0 }
  end;

type
  Pressure = objccategory external (HKUnit)
    class function pascalUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'pascalUnitWithMetricPrefix:';
    class function pascalUnit: instancetype; message 'pascalUnit';
    class function millimeterOfMercuryUnit: instancetype; message 'millimeterOfMercuryUnit';
    class function centimeterOfWaterUnit: instancetype; message 'centimeterOfWaterUnit';
    class function atmosphereUnit: instancetype; message 'atmosphereUnit';
  end;

type
  Time = objccategory external (HKUnit)
    class function secondUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'secondUnitWithMetricPrefix:';
    class function secondUnit: instancetype; message 'secondUnit';
    class function minuteUnit: instancetype; message 'minuteUnit';
    class function hourUnit: instancetype; message 'hourUnit';
    class function dayUnit: instancetype; message 'dayUnit';
  end;

type
  Energy = objccategory external (HKUnit)
    class function jouleUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'jouleUnitWithMetricPrefix:';
    class function jouleUnit: instancetype; message 'jouleUnit';
    class function calorieUnit: instancetype; message 'calorieUnit';
    class function kilocalorieUnit: instancetype; message 'kilocalorieUnit';
  end;

type
  Temperature = objccategory external (HKUnit)
    class function degreeCelsiusUnit: instancetype; message 'degreeCelsiusUnit';
    class function degreeFahrenheitUnit: instancetype; message 'degreeFahrenheitUnit';
    class function kelvinUnit: instancetype; message 'kelvinUnit';
  end;

type
  Conductance = objccategory external (HKUnit)
    class function siemenUnitWithMetricPrefix (prefix: HKMetricPrefix): instancetype; message 'siemenUnitWithMetricPrefix:';
    class function siemenUnit: instancetype; message 'siemenUnit';
  end;

type
  Scalar = objccategory external (HKUnit)
    class function countUnit: instancetype; message 'countUnit';
    class function percentUnit: instancetype; message 'percentUnit';
  end;

type
  Math = objccategory external (HKUnit)
    function unitMultipliedByUnit (unit_: HKUnit): HKUnit; message 'unitMultipliedByUnit:';
    function unitDividedByUnit (unit_: HKUnit): HKUnit; message 'unitDividedByUnit:';
    function unitRaisedToPower (power: NSInteger): HKUnit; message 'unitRaisedToPower:';
    function reciprocalUnit: HKUnit; message 'reciprocalUnit';
  end;
{$endif}

{$ifdef TYPES}
const
  HKUnitMolarMassBloodGlucose = 180.15588000005408;
{$endif}

