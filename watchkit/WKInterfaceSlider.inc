{ Parsed from WatchKit.framework WKInterfaceSlider.h }

{$ifdef TYPES}
type
  WKInterfaceSliderPtr = ^WKInterfaceSlider;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSlider = objcclass external (WKInterfaceObject)
  public
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    procedure setValue (value: single); message 'setValue:';
    procedure setColor (color: nullable UIColorPtr); message 'setColor:';
    procedure setNumberOfSteps (numberOfSteps_: NSInteger); message 'setNumberOfSteps:';
  end;
{$endif}

