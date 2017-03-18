{ Parsed from UIKit.framework UISwitch.h }

{$ifdef TYPES}
type
  UISwitchPtr = ^UISwitch;
{$endif}

{$ifdef CLASSES}

type
  UISwitch = objcclass external (UIControl, NSCodingProtocol)
  public
    procedure setOnTintColor(newValue: UIColor); message 'setOnTintColor:';
    function onTintColor: UIColor; message 'onTintColor';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setThumbTintColor(newValue: UIColor); message 'setThumbTintColor:';
    function thumbTintColor: UIColor; message 'thumbTintColor';
    procedure setOnImage(newValue: UIImage); message 'setOnImage:';
    function onImage: UIImage; message 'onImage';
    procedure setOffImage(newValue: UIImage); message 'setOffImage:';
    function offImage: UIImage; message 'offImage';
    procedure setOn(newValue: boolean); message 'setOn:';
    function isOn: boolean; message 'isOn';
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setOn_animated (on: boolean; animated: boolean); message 'setOn:animated:';
  end;
{$endif}

