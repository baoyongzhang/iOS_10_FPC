{ Parsed from EventKit.framework EKRecurrenceDayOfWeek.h }

{$ifdef TYPES}
type
  EKRecurrenceDayOfWeekPtr = ^EKRecurrenceDayOfWeek;
{$endif}

{$ifdef CLASSES}

type
  EKRecurrenceDayOfWeek = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    class function dayOfWeek (dayOfTheWeek: EKWeekday): instancetype; message 'dayOfWeek:';
    class function dayOfWeek_weekNumber (dayOfTheWeek: EKWeekday; weekNumber: NSInteger): instancetype; message 'dayOfWeek:weekNumber:';
    function initWithDayOfTheWeek_weekNumber (dayOfTheWeek: EKWeekday; weekNumber: NSInteger): id; message 'initWithDayOfTheWeek:weekNumber:';
    function dayOfTheWeek: EKWeekday; message 'dayOfTheWeek';
    function weekNumber: NSInteger; message 'weekNumber';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

