{ Parsed from UIKit.framework UIWindow.h }

{$ifdef TYPES}
type
  UIWindowPtr = ^UIWindow;
{$endif}

{$ifdef TYPES}
type
  UIWindowLevel = CGFloat;
  UIWindowLevelPtr = ^UIWindowLevel;
{$endif}

{$ifdef CLASSES}

type
  UIWindow = objcclass external (UIView)
  public
    procedure setScreen(newValue: UIScreen); message 'setScreen:';
    function screen: UIScreen; message 'screen';
    procedure setWindowLevel(newValue: UIWindowLevel); message 'setWindowLevel:';
    function windowLevel: UIWindowLevel; message 'windowLevel';
    function isKeyWindow: boolean; message 'isKeyWindow';
    procedure becomeKeyWindow; message 'becomeKeyWindow';
    procedure resignKeyWindow; message 'resignKeyWindow';
    procedure makeKeyWindow; message 'makeKeyWindow';
    procedure makeKeyAndVisible; message 'makeKeyAndVisible';
    procedure setRootViewController(newValue: UIViewController); message 'setRootViewController:';
    function rootViewController: UIViewController; message 'rootViewController';
    procedure sendEvent (event: UIEvent); message 'sendEvent:';
    function convertPoint_toWindow (point: CGPoint; window: nullable UIWindowPtr): CGPoint; message 'convertPoint:toWindow:';
    function convertPoint_fromWindow (point: CGPoint; window: nullable UIWindowPtr): CGPoint; message 'convertPoint:fromWindow:';
    function convertRect_toWindow (rect: CGRect; window: nullable UIWindowPtr): CGRect; message 'convertRect:toWindow:';
    function convertRect_fromWindow (rect: CGRect; window: nullable UIWindowPtr): CGRect; message 'convertRect:fromWindow:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIWindowLevelNormal: UIWindowLevel; cvar; external;
  UIWindowLevelAlert: UIWindowLevel; cvar; external;
  __TVOS_PROHIBITED: UIWindowLevel UIWindowLevelStatusBar; cvar; external;
  UIWindowDidBecomeVisibleNotification: NSNotificationName; cvar; external;
  UIWindowDidBecomeHiddenNotification: NSNotificationName; cvar; external;
  UIWindowDidBecomeKeyNotification: NSNotificationName; cvar; external;
  UIWindowDidResignKeyNotification: NSNotificationName; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardWillShowNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardDidShowNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardWillHideNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardDidHideNotification; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardFrameBeginUserInfoKey { available in 3_2 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardFrameEndUserInfoKey { available in 3_2 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardAnimationDurationUserInfoKey { available in 3_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardAnimationCurveUserInfoKey { available in 3_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardIsLocalUserInfoKey { available in 9_0 }; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardWillChangeFrameNotification { available in 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIKeyboardDidChangeFrameNotification { available in 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardCenterBeginUserInfoKey deprecated 'in 2_0, 3_2'; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardCenterEndUserInfoKey deprecated 'in 2_0, 3_2'; cvar; external;
  __TVOS_PROHIBITED: NSString *UIKeyboardBoundsUserInfoKey deprecated 'in 2_0, 3_2'; cvar; external;
{$endif}

