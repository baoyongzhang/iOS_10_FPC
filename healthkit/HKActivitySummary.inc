{ Parsed from HealthKit.framework HKActivitySummary.h }

{$ifdef TYPES}
type
  HKActivitySummaryPtr = ^HKActivitySummary;
{$endif}

{$ifdef CLASSES}

type
  HKActivitySummary = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function dateComponentsForCalendar (calendar: NSCalendar): NSDateComponents; message 'dateComponentsForCalendar:';
    procedure setActiveEnergyBurned(newValue: HKQuantity); message 'setActiveEnergyBurned:';
    function activeEnergyBurned: HKQuantity; message 'activeEnergyBurned';
    procedure setAppleExerciseTime(newValue: HKQuantity); message 'setAppleExerciseTime:';
    function appleExerciseTime: HKQuantity; message 'appleExerciseTime';
    procedure setAppleStandHours(newValue: HKQuantity); message 'setAppleStandHours:';
    function appleStandHours: HKQuantity; message 'appleStandHours';
    procedure setActiveEnergyBurnedGoal(newValue: HKQuantity); message 'setActiveEnergyBurnedGoal:';
    function activeEnergyBurnedGoal: HKQuantity; message 'activeEnergyBurnedGoal';
    procedure setAppleExerciseTimeGoal(newValue: HKQuantity); message 'setAppleExerciseTimeGoal:';
    function appleExerciseTimeGoal: HKQuantity; message 'appleExerciseTimeGoal';
    procedure setAppleStandHoursGoal(newValue: HKQuantity); message 'setAppleStandHoursGoal:';
    function appleStandHoursGoal: HKQuantity; message 'appleStandHoursGoal';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathDateComponents: NSString { available in 9_3, 2_2 }; cvar; external;
{$endif}

