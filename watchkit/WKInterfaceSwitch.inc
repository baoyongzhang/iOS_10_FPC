{ Parsed from WatchKit.framework WKInterfaceSwitch.h }

{$ifdef TYPES}
type
  WKInterfaceSwitchPtr = ^WKInterfaceSwitch;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSwitch = objcclass external (WKInterfaceObject)
  public
    procedure setTitle (title: nullable NSStringPtr); message 'setTitle:';
    procedure setAttributedTitle (attributedTitle: nullable NSAttributedStringPtr); message 'setAttributedTitle:';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    procedure setOn (on: boolean); message 'setOn:';
    procedure setColor (color: nullable UIColorPtr); message 'setColor:';
  end;
{$endif}

