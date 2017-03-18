{ Parsed from HealthKit.framework HKMetadata.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyDeviceSerialNumber: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyBodyTemperatureSensorLocation: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKBodyTemperatureSensorLocation = NSInteger;
  HKBodyTemperatureSensorLocationPtr = ^HKBodyTemperatureSensorLocation;

const
  HKBodyTemperatureSensorLocationOther = 0;
  HKBodyTemperatureSensorLocationArmpit = 1;
  HKBodyTemperatureSensorLocationBody = 2;
  HKBodyTemperatureSensorLocationEar = 3;
  HKBodyTemperatureSensorLocationFinger = 4;
  HKBodyTemperatureSensorLocationGastroIntestinal = 5;
  HKBodyTemperatureSensorLocationMouth = 6;
  HKBodyTemperatureSensorLocationRectum = 7;
  HKBodyTemperatureSensorLocationToe = 8;
  HKBodyTemperatureSensorLocationEarDrum = 9;
  HKBodyTemperatureSensorLocationTemporalArtery = 10;
  HKBodyTemperatureSensorLocationForehead = 11;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyHeartRateSensorLocation: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKHeartRateSensorLocation = NSInteger;
  HKHeartRateSensorLocationPtr = ^HKHeartRateSensorLocation;

const
  HKHeartRateSensorLocationOther = 0;
  HKHeartRateSensorLocationChest = 1;
  HKHeartRateSensorLocationWrist = 2;
  HKHeartRateSensorLocationFinger = 3;
  HKHeartRateSensorLocationHand = 4;
  HKHeartRateSensorLocationEarLobe = 5;
  HKHeartRateSensorLocationFoot = 6;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyFoodType: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyUDIDeviceIdentifier: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyUDIProductionIdentifier: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyDigitalSignature: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyExternalUUID: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyTimeZone: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyDeviceName: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyDeviceManufacturerName: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyWasTakenInLab: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyReferenceRangeLowerLimit: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyReferenceRangeUpperLimit: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyWasUserEntered: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyWorkoutBrandName: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyGroupFitness: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyIndoorWorkout: NSString { available in 8_0, 2_0 }; cvar; external;
  HKMetadataKeyCoachedWorkout: NSString { available in 8_0, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKWeatherCondition = NSInteger;
  HKWeatherConditionPtr = ^HKWeatherCondition;

const
  HKWeatherConditionNone = 0;
  HKWeatherConditionClear = 1;
  HKWeatherConditionFair = 2;
  HKWeatherConditionPartlyCloudy = 3;
  HKWeatherConditionMostlyCloudy = 4;
  HKWeatherConditionCloudy = 5;
  HKWeatherConditionFoggy = 6;
  HKWeatherConditionHaze = 7;
  HKWeatherConditionWindy = 8;
  HKWeatherConditionBlustery = 9;
  HKWeatherConditionSmoky = 10;
  HKWeatherConditionDust = 11;
  HKWeatherConditionSnow = 12;
  HKWeatherConditionHail = 13;
  HKWeatherConditionSleet = 14;
  HKWeatherConditionFreezingDrizzle = 15;
  HKWeatherConditionFreezingRain = 16;
  HKWeatherConditionMixedRainAndHail = 17;
  HKWeatherConditionMixedRainAndSnow = 18;
  HKWeatherConditionMixedRainAndSleet = 19;
  HKWeatherConditionMixedSnowAndSleet = 20;
  HKWeatherConditionDrizzle = 21;
  HKWeatherConditionScatteredShowers = 22;
  HKWeatherConditionShowers = 23;
  HKWeatherConditionThunderstorms = 24;
  HKWeatherConditionTropicalStorm = 25;
  HKWeatherConditionHurricane = 26;
  HKWeatherConditionTornado = 27;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyWeatherCondition: NSString { available in 10_0, 3_0 }; cvar; external;
  HKMetadataKeyWeatherTemperature: NSString { available in 10_0, 3_0 }; cvar; external;
  HKMetadataKeyWeatherHumidity: NSString { available in 10_0, 3_0 }; cvar; external;
  HKMetadataKeySexualActivityProtectionUsed: NSString { available in 9_0, 2_0 }; cvar; external;
  HKMetadataKeyMenstrualCycleStart: NSString { available in 9_0, 2_0 }; cvar; external;
  HKMetadataKeyLapLength: NSString { available in 10_0, 3_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKWorkoutSwimmingLocationType = NSInteger;
  HKWorkoutSwimmingLocationTypePtr = ^HKWorkoutSwimmingLocationType;

const
  HKWorkoutSwimmingLocationTypeUnknown = 0;
  HKWorkoutSwimmingLocationTypePool = 1;
  HKWorkoutSwimmingLocationTypeOpenWater = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeySwimmingLocationType: NSString { available in 10_0, 3_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKSwimmingStrokeStyle = NSInteger;
  HKSwimmingStrokeStylePtr = ^HKSwimmingStrokeStyle;

const
  HKSwimmingStrokeStyleUnknown = 0;
  HKSwimmingStrokeStyleMixed = 1;
  HKSwimmingStrokeStyleFreestyle = 2;
  HKSwimmingStrokeStyleBackstroke = 3;
  HKSwimmingStrokeStyleBreaststroke = 4;
  HKSwimmingStrokeStyleButterfly = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeySwimmingStrokeStyle: NSString { available in 10_0, 3_0 }; cvar; external;
{$endif}

