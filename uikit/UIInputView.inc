{ Parsed from UIKit.framework UIInputView.h }

{$ifdef TYPES}
type
  UIInputViewPtr = ^UIInputView;
{$endif}

{$ifdef TYPES}
type
  UIInputViewStyle = NSInteger;
  UIInputViewStylePtr = ^UIInputViewStyle;

const
  UIInputViewStyleDefault = 0;
  UIInputViewStyleKeyboard = 1;
{$endif}

{$ifdef CLASSES}

type
  UIInputView = objcclass external (UIView)
  public
    function inputViewStyle: UIInputViewStyle; message 'inputViewStyle';
    procedure setAllowsSelfSizing(newValue: boolean); message 'setAllowsSelfSizing:';
    function allowsSelfSizing: boolean; message 'allowsSelfSizing';
    function initWithFrame_inputViewStyle (frame: CGRect; inputViewStyle_: UIInputViewStyle): instancetype; message 'initWithFrame:inputViewStyle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

