{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_Events.h }
{$ifdef CLASSES}

type
  CSEvents = objccategory external (CSSearchableItemAttributeSet)
    procedure setDueDate(newValue: NSDate); message 'setDueDate:';
    function dueDate: NSDate; message 'dueDate';
    procedure setCompletionDate(newValue: NSDate); message 'setCompletionDate:';
    function completionDate: NSDate; message 'completionDate';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    procedure setImportantDates(newValue: NSDate *ProtocolPtr); message 'setImportantDates:';
    function importantDates: NSDate *ProtocolPtr; message 'importantDates';
    procedure setAllDay(newValue: NSNumber); message 'setAllDay:';
    function allDay: NSNumber; message 'allDay';
  end;
{$endif}

