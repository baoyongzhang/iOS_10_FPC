{ Parsed from HomeKit.framework HMTimerTrigger.h }

{$ifdef TYPES}
type
  HMTimerTriggerPtr = ^HMTimerTrigger;
{$endif}

{$ifdef CLASSES}

type
  HMTimerTrigger = objcclass external (HMTrigger)
  public
    function init: instancetype; message 'init';
    function initWithName_fireDate_timeZone_recurrence_recurrenceCalendar (name_: NSString; fireDate: NSDate; timeZone: nullable NSTimeZonePtr; recurrence: nullable NSDateComponentsPtr; recurrenceCalendar: nullable NSCalendarPtr): instancetype; message 'initWithName:fireDate:timeZone:recurrence:recurrenceCalendar:'; { NS_DESIGNATED_INITIALIZER }
    function fireDate: NSDate; message 'fireDate';
    function timeZone: NSTimeZone; message 'timeZone';
    function recurrence: NSDateComponents; message 'recurrence';
    function recurrenceCalendar: NSCalendar; message 'recurrenceCalendar';
    procedure updateFireDate_completionHandler (fireDate_: NSDate; completion: OpaqueCBlock); message 'updateFireDate:completionHandler:';
    procedure updateTimeZone_completionHandler (timeZone_: nullable NSTimeZonePtr; completion: OpaqueCBlock); message 'updateTimeZone:completionHandler:';
    procedure updateRecurrence_completionHandler (recurrence_: nullable NSDateComponentsPtr; completion: OpaqueCBlock); message 'updateRecurrence:completionHandler:';
  end;
{$endif}

