{ Parsed from WatchKit.framework WKInterfaceDate.h }

{$ifdef TYPES}
type
  WKInterfaceDatePtr = ^WKInterfaceDate;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceDate = objcclass external (WKInterfaceObject)
  public
    procedure setTextColor (color: nullable UIColorPtr); message 'setTextColor:';
    procedure setTimeZone (timeZone: nullable NSTimeZonePtr); message 'setTimeZone:';
    procedure setCalendar (calendar: nullable NSCalendarPtr); message 'setCalendar:';
  end;
{$endif}

