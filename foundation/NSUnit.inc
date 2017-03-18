{ Parsed from Foundation.framework NSUnit.h }

{$ifdef TYPES}
type
  NSUnitConverterPtr = ^NSUnitConverter;
  NSUnitConverterLinearPtr = ^NSUnitConverterLinear;
  NSUnitPtr = ^NSUnit;
  NSDimensionPtr = ^NSDimension;
  NSUnitAccelerationPtr = ^NSUnitAcceleration;
  NSUnitAnglePtr = ^NSUnitAngle;
  NSUnitAreaPtr = ^NSUnitArea;
  NSUnitConcentrationMassPtr = ^NSUnitConcentrationMass;
  NSUnitDispersionPtr = ^NSUnitDispersion;
  NSUnitDurationPtr = ^NSUnitDuration;
  NSUnitElectricChargePtr = ^NSUnitElectricCharge;
  NSUnitElectricCurrentPtr = ^NSUnitElectricCurrent;
  NSUnitElectricPotentialDifferencePtr = ^NSUnitElectricPotentialDifference;
  NSUnitElectricResistancePtr = ^NSUnitElectricResistance;
  NSUnitEnergyPtr = ^NSUnitEnergy;
  NSUnitFrequencyPtr = ^NSUnitFrequency;
  NSUnitFuelEfficiencyPtr = ^NSUnitFuelEfficiency;
  NSUnitLengthPtr = ^NSUnitLength;
  NSUnitIlluminancePtr = ^NSUnitIlluminance;
  NSUnitMassPtr = ^NSUnitMass;
  NSUnitPowerPtr = ^NSUnitPower;
  NSUnitPressurePtr = ^NSUnitPressure;
  NSUnitSpeedPtr = ^NSUnitSpeed;
  NSUnitTemperaturePtr = ^NSUnitTemperature;
  NSUnitVolumePtr = ^NSUnitVolume;
{$endif}

{$ifdef CLASSES}

type
  NSUnitConverter = objcclass external (NSObject)
  public
    function baseUnitValueFromValue (value: double): double; message 'baseUnitValueFromValue:';
    function valueFromBaseUnitValue (baseUnitValue: double): double; message 'valueFromBaseUnitValue:';
  end;

type
  NSUnitConverterLinear = objcclass external (NSUnitConverter, NSSecureCodingProtocol)
  private
    _coefficient: double;
    _constant: double;
  public
    function coefficient: double; message 'coefficient';
    function constant: double; message 'constant';
    function initWithCoefficient (coefficient_: double): instancetype; message 'initWithCoefficient:';
    function initWithCoefficient_constant (coefficient_: double; constant_: double): instancetype; message 'initWithCoefficient:constant:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSUnit = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _symbol: NSString;
  public
    function symbol: NSString; message 'symbol';
    function initWithSymbol (symbol_: NSString): instancetype; message 'initWithSymbol:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSDimension = objcclass external (NSUnit, NSSecureCodingProtocol)
  private
    _reserved: NSUInteger;
    _converter: NSUnitConverter;
  public
    function converter: NSUnitConverter; message 'converter';
    function initWithSymbol_converter (symbol_: NSString; converter_: NSUnitConverter): instancetype; message 'initWithSymbol:converter:'; { NS_DESIGNATED_INITIALIZER }
    class function baseUnit: instancetype; message 'baseUnit';
  end;

type
  NSUnitAcceleration = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function metersPerSecondSquared: NSUnitAcceleration; message 'metersPerSecondSquared';
    function gravity: NSUnitAcceleration; message 'gravity';
  end;

type
  NSUnitAngle = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function degrees: NSUnitAngle; message 'degrees';
    function arcMinutes: NSUnitAngle; message 'arcMinutes';
    function arcSeconds: NSUnitAngle; message 'arcSeconds';
    function radians: NSUnitAngle; message 'radians';
    function gradians: NSUnitAngle; message 'gradians';
    function revolutions: NSUnitAngle; message 'revolutions';
  end;

type
  NSUnitArea = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function squareMegameters: NSUnitArea; message 'squareMegameters';
    function squareKilometers: NSUnitArea; message 'squareKilometers';
    function squareMeters: NSUnitArea; message 'squareMeters';
    function squareCentimeters: NSUnitArea; message 'squareCentimeters';
    function squareMillimeters: NSUnitArea; message 'squareMillimeters';
    function squareMicrometers: NSUnitArea; message 'squareMicrometers';
    function squareNanometers: NSUnitArea; message 'squareNanometers';
    function squareInches: NSUnitArea; message 'squareInches';
    function squareFeet: NSUnitArea; message 'squareFeet';
    function squareYards: NSUnitArea; message 'squareYards';
    function squareMiles: NSUnitArea; message 'squareMiles';
    function acres: NSUnitArea; message 'acres';
    function ares: NSUnitArea; message 'ares';
    function hectares: NSUnitArea; message 'hectares';
  end;

type
  NSUnitConcentrationMass = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function gramsPerLiter: NSUnitConcentrationMass; message 'gramsPerLiter';
    function milligramsPerDeciliter: NSUnitConcentrationMass; message 'milligramsPerDeciliter';
    class function millimolesPerLiterWithGramsPerMole (gramsPerMole: double): NSUnitConcentrationMass; message 'millimolesPerLiterWithGramsPerMole:';
  end;

type
  NSUnitDispersion = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function partsPerMillion: NSUnitDispersion; message 'partsPerMillion';
  end;

type
  NSUnitDuration = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function seconds: NSUnitDuration; message 'seconds';
    function minutes: NSUnitDuration; message 'minutes';
    function hours: NSUnitDuration; message 'hours';
  end;

type
  NSUnitElectricCharge = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function coulombs: NSUnitElectricCharge; message 'coulombs';
    function megaampereHours: NSUnitElectricCharge; message 'megaampereHours';
    function kiloampereHours: NSUnitElectricCharge; message 'kiloampereHours';
    function ampereHours: NSUnitElectricCharge; message 'ampereHours';
    function milliampereHours: NSUnitElectricCharge; message 'milliampereHours';
    function microampereHours: NSUnitElectricCharge; message 'microampereHours';
  end;

type
  NSUnitElectricCurrent = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function megaamperes: NSUnitElectricCurrent; message 'megaamperes';
    function kiloamperes: NSUnitElectricCurrent; message 'kiloamperes';
    function amperes: NSUnitElectricCurrent; message 'amperes';
    function milliamperes: NSUnitElectricCurrent; message 'milliamperes';
    function microamperes: NSUnitElectricCurrent; message 'microamperes';
  end;

type
  NSUnitElectricPotentialDifference = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function megavolts: NSUnitElectricPotentialDifference; message 'megavolts';
    function kilovolts: NSUnitElectricPotentialDifference; message 'kilovolts';
    function volts: NSUnitElectricPotentialDifference; message 'volts';
    function millivolts: NSUnitElectricPotentialDifference; message 'millivolts';
    function microvolts: NSUnitElectricPotentialDifference; message 'microvolts';
  end;

type
  NSUnitElectricResistance = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function megaohms: NSUnitElectricResistance; message 'megaohms';
    function kiloohms: NSUnitElectricResistance; message 'kiloohms';
    function ohms: NSUnitElectricResistance; message 'ohms';
    function milliohms: NSUnitElectricResistance; message 'milliohms';
    function microohms: NSUnitElectricResistance; message 'microohms';
  end;

type
  NSUnitEnergy = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function kilojoules: NSUnitEnergy; message 'kilojoules';
    function joules: NSUnitEnergy; message 'joules';
    function kilocalories: NSUnitEnergy; message 'kilocalories';
    function calories: NSUnitEnergy; message 'calories';
    function kilowattHours: NSUnitEnergy; message 'kilowattHours';
  end;

type
  NSUnitFrequency = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function terahertz: NSUnitFrequency; message 'terahertz';
    function gigahertz: NSUnitFrequency; message 'gigahertz';
    function megahertz: NSUnitFrequency; message 'megahertz';
    function kilohertz: NSUnitFrequency; message 'kilohertz';
    function hertz: NSUnitFrequency; message 'hertz';
    function millihertz: NSUnitFrequency; message 'millihertz';
    function microhertz: NSUnitFrequency; message 'microhertz';
    function nanohertz: NSUnitFrequency; message 'nanohertz';
  end;

type
  NSUnitFuelEfficiency = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function litersPer100Kilometers: NSUnitFuelEfficiency; message 'litersPer100Kilometers';
    function milesPerImperialGallon: NSUnitFuelEfficiency; message 'milesPerImperialGallon';
    function milesPerGallon: NSUnitFuelEfficiency; message 'milesPerGallon';
  end;

type
  NSUnitLength = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function megameters: NSUnitLength; message 'megameters';
    function kilometers: NSUnitLength; message 'kilometers';
    function hectometers: NSUnitLength; message 'hectometers';
    function decameters: NSUnitLength; message 'decameters';
    function meters: NSUnitLength; message 'meters';
    function decimeters: NSUnitLength; message 'decimeters';
    function centimeters: NSUnitLength; message 'centimeters';
    function millimeters: NSUnitLength; message 'millimeters';
    function micrometers: NSUnitLength; message 'micrometers';
    function nanometers: NSUnitLength; message 'nanometers';
    function picometers: NSUnitLength; message 'picometers';
    function inches: NSUnitLength; message 'inches';
    function feet: NSUnitLength; message 'feet';
    function yards: NSUnitLength; message 'yards';
    function miles: NSUnitLength; message 'miles';
    function scandinavianMiles: NSUnitLength; message 'scandinavianMiles';
    function lightyears: NSUnitLength; message 'lightyears';
    function nauticalMiles: NSUnitLength; message 'nauticalMiles';
    function fathoms: NSUnitLength; message 'fathoms';
    function furlongs: NSUnitLength; message 'furlongs';
    function astronomicalUnits: NSUnitLength; message 'astronomicalUnits';
    function parsecs: NSUnitLength; message 'parsecs';
  end;

type
  NSUnitIlluminance = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function lux: NSUnitIlluminance; message 'lux';
  end;

type
  NSUnitMass = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function kilograms: NSUnitMass; message 'kilograms';
    function grams: NSUnitMass; message 'grams';
    function decigrams: NSUnitMass; message 'decigrams';
    function centigrams: NSUnitMass; message 'centigrams';
    function milligrams: NSUnitMass; message 'milligrams';
    function micrograms: NSUnitMass; message 'micrograms';
    function nanograms: NSUnitMass; message 'nanograms';
    function picograms: NSUnitMass; message 'picograms';
    function ounces: NSUnitMass; message 'ounces';
    function poundsMass: NSUnitMass; message 'poundsMass';
    function stones: NSUnitMass; message 'stones';
    function metricTons: NSUnitMass; message 'metricTons';
    function shortTons: NSUnitMass; message 'shortTons';
    function carats: NSUnitMass; message 'carats';
    function ouncesTroy: NSUnitMass; message 'ouncesTroy';
    function slugs: NSUnitMass; message 'slugs';
  end;

type
  NSUnitPower = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function terawatts: NSUnitPower; message 'terawatts';
    function gigawatts: NSUnitPower; message 'gigawatts';
    function megawatts: NSUnitPower; message 'megawatts';
    function kilowatts: NSUnitPower; message 'kilowatts';
    function watts: NSUnitPower; message 'watts';
    function milliwatts: NSUnitPower; message 'milliwatts';
    function microwatts: NSUnitPower; message 'microwatts';
    function nanowatts: NSUnitPower; message 'nanowatts';
    function picowatts: NSUnitPower; message 'picowatts';
    function femtowatts: NSUnitPower; message 'femtowatts';
    function horsepower: NSUnitPower; message 'horsepower';
  end;

type
  NSUnitPressure = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function newtonsPerMetersSquared: NSUnitPressure; message 'newtonsPerMetersSquared';
    function gigapascals: NSUnitPressure; message 'gigapascals';
    function megapascals: NSUnitPressure; message 'megapascals';
    function kilopascals: NSUnitPressure; message 'kilopascals';
    function hectopascals: NSUnitPressure; message 'hectopascals';
    function inchesOfMercury: NSUnitPressure; message 'inchesOfMercury';
    function bars: NSUnitPressure; message 'bars';
    function millibars: NSUnitPressure; message 'millibars';
    function millimetersOfMercury: NSUnitPressure; message 'millimetersOfMercury';
    function poundsForcePerSquareInch: NSUnitPressure; message 'poundsForcePerSquareInch';
  end;

type
  NSUnitSpeed = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function metersPerSecond: NSUnitSpeed; message 'metersPerSecond';
    function kilometersPerHour: NSUnitSpeed; message 'kilometersPerHour';
    function milesPerHour: NSUnitSpeed; message 'milesPerHour';
    function knots: NSUnitSpeed; message 'knots';
  end;

type
  NSUnitTemperature = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function kelvin: NSUnitTemperature; message 'kelvin';
    function celsius: NSUnitTemperature; message 'celsius';
    function fahrenheit: NSUnitTemperature; message 'fahrenheit';
  end;

type
  NSUnitVolume = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    function megaliters: NSUnitVolume; message 'megaliters';
    function kiloliters: NSUnitVolume; message 'kiloliters';
    function liters: NSUnitVolume; message 'liters';
    function deciliters: NSUnitVolume; message 'deciliters';
    function centiliters: NSUnitVolume; message 'centiliters';
    function milliliters: NSUnitVolume; message 'milliliters';
    function cubicKilometers: NSUnitVolume; message 'cubicKilometers';
    function cubicMeters: NSUnitVolume; message 'cubicMeters';
    function cubicDecimeters: NSUnitVolume; message 'cubicDecimeters';
    function cubicCentimeters: NSUnitVolume; message 'cubicCentimeters';
    function cubicMillimeters: NSUnitVolume; message 'cubicMillimeters';
    function cubicInches: NSUnitVolume; message 'cubicInches';
    function cubicFeet: NSUnitVolume; message 'cubicFeet';
    function cubicYards: NSUnitVolume; message 'cubicYards';
    function cubicMiles: NSUnitVolume; message 'cubicMiles';
    function acreFeet: NSUnitVolume; message 'acreFeet';
    function bushels: NSUnitVolume; message 'bushels';
    function teaspoons: NSUnitVolume; message 'teaspoons';
    function tablespoons: NSUnitVolume; message 'tablespoons';
    function fluidOunces: NSUnitVolume; message 'fluidOunces';
    function cups: NSUnitVolume; message 'cups';
    function pints: NSUnitVolume; message 'pints';
    function quarts: NSUnitVolume; message 'quarts';
    function gallons: NSUnitVolume; message 'gallons';
    function imperialTeaspoons: NSUnitVolume; message 'imperialTeaspoons';
    function imperialTablespoons: NSUnitVolume; message 'imperialTablespoons';
    function imperialFluidOunces: NSUnitVolume; message 'imperialFluidOunces';
    function imperialPints: NSUnitVolume; message 'imperialPints';
    function imperialQuarts: NSUnitVolume; message 'imperialQuarts';
    function imperialGallons: NSUnitVolume; message 'imperialGallons';
    function metricCups: NSUnitVolume; message 'metricCups';
  end;
{$endif}

