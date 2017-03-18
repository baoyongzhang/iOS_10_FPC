{ Parsed from WatchKit.framework WKInterfaceTimer.h }

{$ifdef TYPES}
type
  WKInterfaceTimerPtr = ^WKInterfaceTimer;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceTimer = objcclass external (WKInterfaceObject)
  public
    procedure setTextColor (color: nullable UIColorPtr); message 'setTextColor:';
    procedure setDate (date: NSDate); message 'setDate:';
    procedure start; message 'start';
    procedure stop; message 'stop';
  end;
{$endif}

