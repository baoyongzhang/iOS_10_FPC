{ Parsed from EventKit.framework EKRecurrenceRule.h }

{$ifdef TYPES}
type
  EKRecurrenceRulePtr = ^EKRecurrenceRule;
{$endif}

{$ifdef CLASSES}

type
  EKRecurrenceRule = objcclass external (EKObject, NSCopyingProtocol)
  public
    function initRecurrenceWithFrequency_interval_end (type_: EKRecurrenceFrequency; interval: NSInteger; end_: nullable EKRecurrenceEndPtr): instancetype; message 'initRecurrenceWithFrequency:interval:end:';
    function initRecurrenceWithFrequency_interval_daysOfTheWeek_daysOfTheMonth_monthsOfTheYear_weeksOfTheYear_daysOfTheYear_setPositions_end (type_: EKRecurrenceFrequency; interval: NSInteger; days: nullable EKRecurrenceDayOfWeek *ProtocolPtr; monthDays: nullable NSNumber *ProtocolPtr; months: nullable NSNumber *ProtocolPtr; weeksOfTheYear: nullable NSNumber *ProtocolPtr; daysOfTheYear: nullable NSNumber *ProtocolPtr; setPositions: nullable NSNumber *ProtocolPtr; end_: nullable EKRecurrenceEndPtr): instancetype; message 'initRecurrenceWithFrequency:interval:daysOfTheWeek:daysOfTheMonth:monthsOfTheYear:weeksOfTheYear:daysOfTheYear:setPositions:end:';
    function calendarIdentifier: NSString; message 'calendarIdentifier';
    procedure setRecurrenceEnd(newValue: EKRecurrenceEnd); message 'setRecurrenceEnd:';
    function recurrenceEnd: EKRecurrenceEnd; message 'recurrenceEnd';
    function frequency: EKRecurrenceFrequency; message 'frequency';
    function interval: NSInteger; message 'interval';
    function firstDayOfTheWeek: NSInteger; message 'firstDayOfTheWeek';
    function daysOfTheWeek: EKRecurrenceDayOfWeek *ProtocolPtr; message 'daysOfTheWeek';
    function daysOfTheMonth: NSNumber *ProtocolPtr; message 'daysOfTheMonth';
    function daysOfTheYear: NSNumber *ProtocolPtr; message 'daysOfTheYear';
    function weeksOfTheYear: NSNumber *ProtocolPtr; message 'weeksOfTheYear';
    function monthsOfTheYear: NSNumber *ProtocolPtr; message 'monthsOfTheYear';
    function setPositions: NSNumber *ProtocolPtr; message 'setPositions';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

