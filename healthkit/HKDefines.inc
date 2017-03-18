{ Parsed from HealthKit.framework HKDefines.h }

{$ifdef TYPES}
type
  HKErrorCode = NSInteger;
  HKErrorCodePtr = ^HKErrorCode;

const
  HKNoError = 0;
  HKErrorHealthDataUnavailable = 1;
  HKErrorHealthDataRestricted = 2;
  HKErrorInvalidArgument = 3;
  HKErrorAuthorizationDenied = 4;
  HKErrorAuthorizationNotDetermined = 5;
  HKErrorDatabaseInaccessible = 6;
  HKErrorUserCanceled = 7;
  HKErrorAnotherWorkoutSessionStarted = 8 { available in 9_0, 2_0 };
  HKErrorUserExitedWorkoutSession = 9 { available in 9_0, 2_0 };

type
  HKUpdateFrequency = NSInteger;
  HKUpdateFrequencyPtr = ^HKUpdateFrequency;

const
  HKUpdateFrequencyImmediate = 1;
  HKUpdateFrequencyHourly = 2;
  HKUpdateFrequencyDaily = 3;
  HKUpdateFrequencyWeekly = 4;

type
  HKAuthorizationStatus = NSInteger;
  HKAuthorizationStatusPtr = ^HKAuthorizationStatus;

const
  HKAuthorizationStatusNotDetermined = 0;
  HKAuthorizationStatusSharingDenied = 1;
  HKAuthorizationStatusSharingAuthorized = 2;

type
  HKBiologicalSex = NSInteger;
  HKBiologicalSexPtr = ^HKBiologicalSex;

const
  HKBiologicalSexNotSet = 0;
  HKBiologicalSexFemale = 1;
  HKBiologicalSexMale = 2;
  HKBiologicalSexOther = 3 { available in 8_2, 2_0 };

type
  HKBloodType = NSInteger;
  HKBloodTypePtr = ^HKBloodType;

const
  HKBloodTypeNotSet = 0;
  HKBloodTypeAPositive = 1;
  HKBloodTypeANegative = 2;
  HKBloodTypeBPositive = 3;
  HKBloodTypeBNegative = 4;
  HKBloodTypeABPositive = 5;
  HKBloodTypeABNegative = 6;
  HKBloodTypeOPositive = 7;
  HKBloodTypeONegative = 8;

type
  HKCategoryValueSleepAnalysis = NSInteger;
  HKCategoryValueSleepAnalysisPtr = ^HKCategoryValueSleepAnalysis;

const
  HKCategoryValueSleepAnalysisInBed = 0;
  HKCategoryValueSleepAnalysisAsleep = 1;
  HKCategoryValueSleepAnalysisAwake = 2 { available in 10_0, 3_0 };

type
  HKCategoryValueAppleStandHour = NSInteger;
  HKCategoryValueAppleStandHourPtr = ^HKCategoryValueAppleStandHour;

const
  HKCategoryValueAppleStandHourStood = 0;
  HKCategoryValueAppleStandHourIdle = 1;

type
  HKFitzpatrickSkinType = NSInteger;
  HKFitzpatrickSkinTypePtr = ^HKFitzpatrickSkinType;

const
  HKFitzpatrickSkinTypeNotSet = 0;
  HKFitzpatrickSkinTypeI = 1;
  HKFitzpatrickSkinTypeII = 2;
  HKFitzpatrickSkinTypeIII = 3;
  HKFitzpatrickSkinTypeIV = 4;
  HKFitzpatrickSkinTypeV = 5;
  HKFitzpatrickSkinTypeVI = 6;

type
  HKWheelchairUse = NSInteger;
  HKWheelchairUsePtr = ^HKWheelchairUse;

const
  HKWheelchairUseNotSet = 0;
  HKWheelchairUseNo = 1;
  HKWheelchairUseYes = 2;

type
  HKCategoryValueCervicalMucusQuality = NSInteger;
  HKCategoryValueCervicalMucusQualityPtr = ^HKCategoryValueCervicalMucusQuality;

const
  HKCategoryValueCervicalMucusQualityDry = 1;
  HKCategoryValueCervicalMucusQualitySticky = 2;
  HKCategoryValueCervicalMucusQualityCreamy = 3;
  HKCategoryValueCervicalMucusQualityWatery = 4;
  HKCategoryValueCervicalMucusQualityEggWhite = 5;

type
  HKCategoryValueOvulationTestResult = NSInteger;
  HKCategoryValueOvulationTestResultPtr = ^HKCategoryValueOvulationTestResult;

const
  HKCategoryValueOvulationTestResultNegative = 1;
  HKCategoryValueOvulationTestResultPositive = 2;
  HKCategoryValueOvulationTestResultIndeterminate = 3;

type
  HKCategoryValueMenstrualFlow = NSInteger;
  HKCategoryValueMenstrualFlowPtr = ^HKCategoryValueMenstrualFlow;

const
  HKCategoryValueMenstrualFlowUnspecified = 1;
  HKCategoryValueMenstrualFlowLight = 2;
  HKCategoryValueMenstrualFlowMedium = 3;
  HKCategoryValueMenstrualFlowHeavy = 4;

type
  HKCategoryValue = NSInteger;
  HKCategoryValuePtr = ^HKCategoryValue;

const
  HKCategoryValueNotApplicable = 0;
{$endif}

