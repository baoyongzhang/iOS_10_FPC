{ Parsed from WatchKit.framework WKInterfaceLabel.h }

{$ifdef TYPES}
type
  WKInterfaceLabelPtr = ^WKInterfaceLabel;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceLabel = objcclass external (WKInterfaceObject)
  public
    procedure setText (text: nullable NSStringPtr); message 'setText:';
    procedure setTextColor (color: nullable UIColorPtr); message 'setTextColor:';
    procedure setAttributedText (attributedText: nullable NSAttributedStringPtr); message 'setAttributedText:';
  end;
{$endif}

