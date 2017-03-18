{ Parsed from WatchKit.framework WKInterfaceSeparator.h }

{$ifdef TYPES}
type
  WKInterfaceSeparatorPtr = ^WKInterfaceSeparator;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSeparator = objcclass external (WKInterfaceObject)
  public
    procedure setColor (color: nullable UIColorPtr); message 'setColor:';
  end;
{$endif}

