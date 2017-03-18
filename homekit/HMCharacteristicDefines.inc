{ Parsed from HomeKit.framework HMCharacteristicDefines.h }
{$ifdef TYPES}
type
  HMCharacteristicValueDoorState = NSInteger;
  HMCharacteristicValueDoorStatePtr = ^HMCharacteristicValueDoorState;

const
  HMCharacteristicValueDoorStateOpen = 0;
  HMCharacteristicValueDoorStateClosed = 1;
  HMCharacteristicValueDoorStateOpening = 2;
  HMCharacteristicValueDoorStateClosing = 3;
  HMCharacteristicValueDoorStateStopped = 4;

type
  HMCharacteristicValueHeatingCooling = NSInteger;
  HMCharacteristicValueHeatingCoolingPtr = ^HMCharacteristicValueHeatingCooling;

const
  HMCharacteristicValueHeatingCoolingOff = 0;
  HMCharacteristicValueHeatingCoolingHeat = 1;
  HMCharacteristicValueHeatingCoolingCool = 2;
  HMCharacteristicValueHeatingCoolingAuto = 3;

type
  HMCharacteristicValueRotationDirection = NSInteger;
  HMCharacteristicValueRotationDirectionPtr = ^HMCharacteristicValueRotationDirection;

const
  HMCharacteristicValueRotationDirectionClockwise = 0;
  HMCharacteristicValueRotationDirectionCounterClockwise = 1;

type
  HMCharacteristicValueTemperatureUnit = NSInteger;
  HMCharacteristicValueTemperatureUnitPtr = ^HMCharacteristicValueTemperatureUnit;

const
  HMCharacteristicValueTemperatureUnitCelsius = 0;
  HMCharacteristicValueTemperatureUnitFahrenheit = 1;

type
  HMCharacteristicValueLockMechanismState = NSInteger;
  HMCharacteristicValueLockMechanismStatePtr = ^HMCharacteristicValueLockMechanismState;

const
  HMCharacteristicValueLockMechanismStateUnsecured = 0;
  HMCharacteristicValueLockMechanismStateSecured = 1;
  HMCharacteristicValueLockMechanismStateJammed = 2;
  HMCharacteristicValueLockMechanismStateUnknown = 3;

type
  HMCharacteristicValueLockMechanismLastKnownAction = NSInteger;
  HMCharacteristicValueLockMechanismLastKnownActionPtr = ^HMCharacteristicValueLockMechanismLastKnownAction;

const
  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior = 0;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior = 1;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior = 2;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior = 3;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad = 4;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad = 5;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely = 6;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely = 7;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout = 8;
  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovement = 9;
  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovement = 10;

type
  HMCharacteristicValueAirParticulateSize = NSInteger;
  HMCharacteristicValueAirParticulateSizePtr = ^HMCharacteristicValueAirParticulateSize;

const
  HMCharacteristicValueAirParticulateSize2_5 = 0;
  HMCharacteristicValueAirParticulateSize10 = 1;

type
  HMCharacteristicValueAirQuality = NSInteger;
  HMCharacteristicValueAirQualityPtr = ^HMCharacteristicValueAirQuality;

const
  HMCharacteristicValueAirQualityUnknown = 0;
  HMCharacteristicValueAirQualityExcellent = 1;
  HMCharacteristicValueAirQualityGood = 2;
  HMCharacteristicValueAirQualityFair = 3;
  HMCharacteristicValueAirQualityInferior = 4;
  HMCharacteristicValueAirQualityPoor = 5;

type
  HMCharacteristicValuePositionState = NSInteger;
  HMCharacteristicValuePositionStatePtr = ^HMCharacteristicValuePositionState;

const
  HMCharacteristicValuePositionStateClosing = 0;
  HMCharacteristicValuePositionStateOpening = 1;
  HMCharacteristicValuePositionStateStopped = 2;

type
  HMCharacteristicValueCurrentSecuritySystemState = NSInteger;
  HMCharacteristicValueCurrentSecuritySystemStatePtr = ^HMCharacteristicValueCurrentSecuritySystemState;

const
  HMCharacteristicValueCurrentSecuritySystemStateStayArm = 0;
  HMCharacteristicValueCurrentSecuritySystemStateAwayArm = 1;
  HMCharacteristicValueCurrentSecuritySystemStateNightArm = 2;
  HMCharacteristicValueCurrentSecuritySystemStateDisarmed = 3;
  HMCharacteristicValueCurrentSecuritySystemStateTriggered = 4;

type
  HMCharacteristicValueTargetSecuritySystemState = NSInteger;
  HMCharacteristicValueTargetSecuritySystemStatePtr = ^HMCharacteristicValueTargetSecuritySystemState;

const
  HMCharacteristicValueTargetSecuritySystemStateStayArm = 0;
  HMCharacteristicValueTargetSecuritySystemStateAwayArm = 1;
  HMCharacteristicValueTargetSecuritySystemStateNightArm = 2;
  HMCharacteristicValueTargetSecuritySystemStateDisarm = 3;

type
  HMCharacteristicValueBatteryStatus = NSInteger;
  HMCharacteristicValueBatteryStatusPtr = ^HMCharacteristicValueBatteryStatus;

const
  HMCharacteristicValueBatteryStatusNormal = 0;
  HMCharacteristicValueBatteryStatusLow = 1;

type
  HMCharacteristicValueJammedStatus = NSInteger;
  HMCharacteristicValueJammedStatusPtr = ^HMCharacteristicValueJammedStatus;

const
  HMCharacteristicValueJammedStatusNone = 0;
  HMCharacteristicValueJammedStatusJammed = 1;

type
  HMCharacteristicValueTamperedStatus = NSInteger;
  HMCharacteristicValueTamperedStatusPtr = ^HMCharacteristicValueTamperedStatus;

const
  HMCharacteristicValueTamperedStatusNone = 0;
  HMCharacteristicValueTamperedStatusTampered = 1;

type
  HMCharacteristicValueLeakStatus = NSInteger;
  HMCharacteristicValueLeakStatusPtr = ^HMCharacteristicValueLeakStatus;

const
  HMCharacteristicValueLeakStatusNone = 0;
  HMCharacteristicValueLeakStatusDetected = 1;

type
  HMCharacteristicValueSmokeDetectionStatus = NSInteger;
  HMCharacteristicValueSmokeDetectionStatusPtr = ^HMCharacteristicValueSmokeDetectionStatus;

const
  HMCharacteristicValueSmokeDetectionStatusNone = 0;
  HMCharacteristicValueSmokeDetectionStatusDetected = 1;

type
  HMCharacteristicValueChargingState = NSInteger;
  HMCharacteristicValueChargingStatePtr = ^HMCharacteristicValueChargingState;

const
  HMCharacteristicValueChargingStateNone = 0;
  HMCharacteristicValueChargingStateInProgress = 1;
  HMCharacteristicValueChargingStateNotChargeable = 2 { available in 10_2 };

type
  HMCharacteristicValueContactState = NSInteger;
  HMCharacteristicValueContactStatePtr = ^HMCharacteristicValueContactState;

const
  HMCharacteristicValueContactStateNone = 0;
  HMCharacteristicValueContactStateDetected = 1;

type
  HMCharacteristicValueStatusFault = NSInteger;
  HMCharacteristicValueStatusFaultPtr = ^HMCharacteristicValueStatusFault;

const
  HMCharacteristicValueStatusFaultNoFault = 0;
  HMCharacteristicValueStatusFaultGeneralFault = 1;

type
  HMCharacteristicValueCarbonMonoxideDetectionStatus = NSInteger;
  HMCharacteristicValueCarbonMonoxideDetectionStatusPtr = ^HMCharacteristicValueCarbonMonoxideDetectionStatus;

const
  HMCharacteristicValueCarbonMonoxideDetectionStatusNotDetected = 0;
  HMCharacteristicValueCarbonMonoxideDetectionStatusDetected = 1;

type
  HMCharacteristicValueCarbonDioxideDetectionStatus = NSInteger;
  HMCharacteristicValueCarbonDioxideDetectionStatusPtr = ^HMCharacteristicValueCarbonDioxideDetectionStatus;

const
  HMCharacteristicValueCarbonDioxideDetectionStatusNotDetected = 0;
  HMCharacteristicValueCarbonDioxideDetectionStatusDetected = 1;

type
  HMCharacteristicValueOccupancyStatus = NSInteger;
  HMCharacteristicValueOccupancyStatusPtr = ^HMCharacteristicValueOccupancyStatus;

const
  HMCharacteristicValueOccupancyStatusNotOccupied = 0;
  HMCharacteristicValueOccupancyStatusOccupied = 1;

type
  HMCharacteristicValueSecuritySystemAlarmType = NSInteger;
  HMCharacteristicValueSecuritySystemAlarmTypePtr = ^HMCharacteristicValueSecuritySystemAlarmType;

const
  HMCharacteristicValueSecuritySystemAlarmTypeNoAlarm = 0;
  HMCharacteristicValueSecuritySystemAlarmTypeUnknown = 1;

type
  HMCharacteristicValueLockPhysicalControlsState = NSInteger;
  HMCharacteristicValueLockPhysicalControlsStatePtr = ^HMCharacteristicValueLockPhysicalControlsState;

const
  HMCharacteristicValueLockPhysicalControlsStateNotLocked = 0;
  HMCharacteristicValueLockPhysicalControlsStateLocked = 1;

type
  HMCharacteristicValueCurrentAirPurifierState = NSInteger;
  HMCharacteristicValueCurrentAirPurifierStatePtr = ^HMCharacteristicValueCurrentAirPurifierState;

const
  HMCharacteristicValueCurrentAirPurifierStateInactive = 0;
  HMCharacteristicValueCurrentAirPurifierStateIdle = 1;
  HMCharacteristicValueCurrentAirPurifierStateActive = 2;

type
  HMCharacteristicValueTargetAirPurifierState = NSInteger;
  HMCharacteristicValueTargetAirPurifierStatePtr = ^HMCharacteristicValueTargetAirPurifierState;

const
  HMCharacteristicValueTargetAirPurifierStateManual = 0;
  HMCharacteristicValueTargetAirPurifierStateAutomatic = 1;

type
  HMCharacteristicValueCurrentSlatState = NSInteger;
  HMCharacteristicValueCurrentSlatStatePtr = ^HMCharacteristicValueCurrentSlatState;

const
  HMCharacteristicValueCurrentSlatStateStationary = 0;
  HMCharacteristicValueCurrentSlatStateJammed = 1;
  HMCharacteristicValueCurrentSlatStateOscillating = 2;

type
  HMCharacteristicValueSlatType = NSInteger;
  HMCharacteristicValueSlatTypePtr = ^HMCharacteristicValueSlatType;

const
  HMCharacteristicValueSlatTypeHorizontal = 0;
  HMCharacteristicValueSlatTypeVertical = 1;

type
  HMCharacteristicValueFilterChange = NSInteger;
  HMCharacteristicValueFilterChangePtr = ^HMCharacteristicValueFilterChange;

const
  HMCharacteristicValueFilterChangeNotNeeded = 0;
  HMCharacteristicValueFilterChangeNeeded = 1;

type
  HMCharacteristicValueCurrentFanState = NSInteger;
  HMCharacteristicValueCurrentFanStatePtr = ^HMCharacteristicValueCurrentFanState;

const
  HMCharacteristicValueCurrentFanStateInactive = 0;
  HMCharacteristicValueCurrentFanStateIdle = 1;
  HMCharacteristicValueCurrentFanStateActive = 2;

type
  HMCharacteristicValueTargetFanState = NSInteger;
  HMCharacteristicValueTargetFanStatePtr = ^HMCharacteristicValueTargetFanState;

const
  HMCharacteristicValueTargetFanStateManual = 0;
  HMCharacteristicValueTargetFanStateAutomatic = 1;

type
  HMCharacteristicValueCurrentHeaterCoolerState = NSInteger;
  HMCharacteristicValueCurrentHeaterCoolerStatePtr = ^HMCharacteristicValueCurrentHeaterCoolerState;

const
  HMCharacteristicValueCurrentHeaterCoolerStateInactive = 0;
  HMCharacteristicValueCurrentHeaterCoolerStateIdle = 1;
  HMCharacteristicValueCurrentHeaterCoolerStateHeating = 2;
  HMCharacteristicValueCurrentHeaterCoolerStateCooling = 3;

type
  HMCharacteristicValueTargetHeaterCoolerState = NSInteger;
  HMCharacteristicValueTargetHeaterCoolerStatePtr = ^HMCharacteristicValueTargetHeaterCoolerState;

const
  HMCharacteristicValueTargetHeaterCoolerStateAutomatic = 0;
  HMCharacteristicValueTargetHeaterCoolerStateHeat = 1;
  HMCharacteristicValueTargetHeaterCoolerStateCool = 2;

type
  HMCharacteristicValueCurrentHumidifierDehumidifierState = NSInteger;
  HMCharacteristicValueCurrentHumidifierDehumidifierStatePtr = ^HMCharacteristicValueCurrentHumidifierDehumidifierState;

const
  HMCharacteristicValueCurrentHumidifierDehumidifierStateInactive = 0;
  HMCharacteristicValueCurrentHumidifierDehumidifierStateIdle = 1;
  HMCharacteristicValueCurrentHumidifierDehumidifierStateHumidifying = 2;
  HMCharacteristicValueCurrentHumidifierDehumidifierStateDehumidifying = 3;

type
  HMCharacteristicValueTargetHumidifierDehumidifierState = NSInteger;
  HMCharacteristicValueTargetHumidifierDehumidifierStatePtr = ^HMCharacteristicValueTargetHumidifierDehumidifierState;

const
  HMCharacteristicValueTargetHumidifierDehumidifierStateAutomatic = 0;
  HMCharacteristicValueTargetHumidifierDehumidifierStateHumidify = 1;
  HMCharacteristicValueTargetHumidifierDehumidifierStateDehumidify = 2;

type
  HMCharacteristicValueSwingMode = NSInteger;
  HMCharacteristicValueSwingModePtr = ^HMCharacteristicValueSwingMode;

const
  HMCharacteristicValueSwingModeDisabled = 0;
  HMCharacteristicValueSwingModeEnabled = 1;

type
  HMCharacteristicValueActivationState = NSInteger;
  HMCharacteristicValueActivationStatePtr = ^HMCharacteristicValueActivationState;

const
  HMCharacteristicValueActivationStateInactive = 0;
  HMCharacteristicValueActivationStateActive = 1;
{$endif}

