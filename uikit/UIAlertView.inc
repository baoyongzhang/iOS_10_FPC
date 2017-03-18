{ Parsed from UIKit.framework UIAlertView.h }

{$ifdef TYPES}
type
  UIAlertViewPtr = ^UIAlertView;
  UIAlertViewDelegateProtocolPtr = ^UIAlertViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIAlertViewStyle = NSInteger;
  UIAlertViewStylePtr = ^UIAlertViewStyle;

const
  UIAlertViewStyleDefault = 0;
  UIAlertViewStyleSecureTextInput = 1;
  UIAlertViewStylePlainTextInput = 2;
  UIAlertViewStyleLoginAndPasswordInput = 3;
{$endif}

{$ifdef CLASSES}

type
  UIAlertView = objcclass external (UIView)
  public
    function initWithTitle_message_delegate_cancelButtonTitle_otherButtonTitles (title: nullable NSStringPtr; message_: nullable NSStringPtr; delegate: nullable id; cancelButtonTitle: nullable NSStringPtr; otherButtonTitles: nullable NSStringPtr): instancetype; message 'initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:';
    function initWithFrame (frame: CGRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: nonnull NSCoderPtr): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function addButtonWithTitle (title_: nullable NSStringPtr): NSInteger; message 'addButtonWithTitle:';
    function buttonTitleAtIndex (buttonIndex: NSInteger): nullable NSStringPtr; message 'buttonTitleAtIndex:';
    function numberOfButtons: NSInteger; message 'numberOfButtons';
    procedure setCancelButtonIndex(newValue: NSInteger); message 'setCancelButtonIndex:';
    function cancelButtonIndex: NSInteger; message 'cancelButtonIndex';
    function firstOtherButtonIndex: NSInteger; message 'firstOtherButtonIndex';
    function isVisible: boolean; message 'isVisible';
    procedure show; message 'show';
    procedure dismissWithClickedButtonIndex_animated (buttonIndex: NSInteger; animated: boolean); message 'dismissWithClickedButtonIndex:animated:';
    procedure setAlertViewStyle(newValue: UIAlertViewStyle); message 'setAlertViewStyle:';
    function alertViewStyle: UIAlertViewStyle; message 'alertViewStyle';
    function textFieldAtIndex (textFieldIndex: NSInteger): nullable UITextFieldPtr; message 'textFieldAtIndex:'; { available in 5_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAlertViewDelegateProtocol = objcprotocol external name 'UIAlertViewDelegate' (NSObjectProtocol)
  optional
    procedure alertView_clickedButtonAtIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:clickedButtonAtIndex:'; deprecated 'in 2_0, 9_0';
    procedure alertViewCancel (alertView: UIAlertView); message 'alertViewCancel:'; deprecated 'in 2_0, 9_0';
    procedure willPresentAlertView (alertView: UIAlertView); message 'willPresentAlertView:'; deprecated 'in 2_0, 9_0';
    procedure didPresentAlertView (alertView: UIAlertView); message 'didPresentAlertView:'; deprecated 'in 2_0, 9_0';
    procedure alertView_willDismissWithButtonIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:willDismissWithButtonIndex:'; deprecated 'in 2_0, 9_0';
    procedure alertView_didDismissWithButtonIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:didDismissWithButtonIndex:'; deprecated 'in 2_0, 9_0';
    function alertViewShouldEnableFirstOtherButton (alertView: UIAlertView): boolean; message 'alertViewShouldEnableFirstOtherButton:'; deprecated 'in 2_0, 9_0';
  end;
{$endif}

