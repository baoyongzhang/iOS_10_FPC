{ Parsed from WatchKit.framework WKInterfaceButton.h }

{$ifdef TYPES}
type
  WKInterfaceButtonPtr = ^WKInterfaceButton;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceButton = objcclass external (WKInterfaceObject)
  public
    procedure setTitle (title: nullable NSStringPtr); message 'setTitle:';
    procedure setAttributedTitle (attributedTitle: nullable NSAttributedStringPtr); message 'setAttributedTitle:';
    procedure setBackgroundColor (color: nullable UIColorPtr); message 'setBackgroundColor:';
    procedure setBackgroundImage (image: nullable UIImagePtr); message 'setBackgroundImage:';
    procedure setBackgroundImageData (imageData: nullable NSDataPtr); message 'setBackgroundImageData:';
    procedure setBackgroundImageNamed (imageName: nullable NSStringPtr); message 'setBackgroundImageNamed:';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
  end;
{$endif}

