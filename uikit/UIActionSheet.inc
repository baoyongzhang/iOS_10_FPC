{ Parsed from UIKit.framework UIActionSheet.h }

{$ifdef TYPES}
type
  UIActionSheetPtr = ^UIActionSheet;
  UIActionSheetDelegateProtocolPtr = ^UIActionSheetDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIActionSheetStyle = NSInteger;
  UIActionSheetStylePtr = ^UIActionSheetStyle;

const
  UIActionSheetStyleAutomatic = -1;
  UIActionSheetStyleDefault = UIBarStyleDefault;
  UIActionSheetStyleBlackTranslucent = UIBarStyleBlackTranslucent;
  UIActionSheetStyleBlackOpaque = UIBarStyleBlackOpaque;
{$endif}

{$ifdef CLASSES}

type
  UIActionSheet = objcclass external (UIView)
  public
    function initWithTitle_delegate_cancelButtonTitle_destructiveButtonTitle_otherButtonTitles (title: nullable NSStringPtr; delegate: nullable UIActionSheetDelegateProtocol; cancelButtonTitle: nullable NSStringPtr; destructiveButtonTitle: nullable NSStringPtr; otherButtonTitles: nullable NSStringPtr): instancetype; message 'initWithTitle:delegate:cancelButtonTitle:destructiveButtonTitle:otherButtonTitles:';
    procedure setDelegate(newValue: UIActionSheetDelegateProtocol); message 'setDelegate:';
    function delegate: UIActionSheetDelegateProtocol; message 'delegate';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setActionSheetStyle(newValue: UIActionSheetStyle); message 'setActionSheetStyle:';
    function actionSheetStyle: UIActionSheetStyle; message 'actionSheetStyle';
    function addButtonWithTitle (title_: nullable NSStringPtr): NSInteger; message 'addButtonWithTitle:';
    function buttonTitleAtIndex (buttonIndex: NSInteger): nullable NSStringPtr; message 'buttonTitleAtIndex:';
    function numberOfButtons: NSInteger; message 'numberOfButtons';
    procedure setCancelButtonIndex(newValue: NSInteger); message 'setCancelButtonIndex:';
    function cancelButtonIndex: NSInteger; message 'cancelButtonIndex';
    procedure setDestructiveButtonIndex(newValue: NSInteger); message 'setDestructiveButtonIndex:';
    function destructiveButtonIndex: NSInteger; message 'destructiveButtonIndex';
    function firstOtherButtonIndex: NSInteger; message 'firstOtherButtonIndex';
    function isVisible: boolean; message 'isVisible';
    procedure showFromToolbar (view: UIToolbar); message 'showFromToolbar:';
    procedure showFromTabBar (view: UITabBar); message 'showFromTabBar:';
    procedure showFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean); message 'showFromBarButtonItem:animated:'; { available in 3_2 }
    procedure showFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean); message 'showFromRect:inView:animated:'; { available in 3_2 }
    procedure showInView (view: UIView); message 'showInView:';
    procedure dismissWithClickedButtonIndex_animated (buttonIndex: NSInteger; animated: boolean); message 'dismissWithClickedButtonIndex:animated:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIActionSheetDelegateProtocol = objcprotocol external name 'UIActionSheetDelegate' (NSObjectProtocol)
  optional
    procedure actionSheet_clickedButtonAtIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:clickedButtonAtIndex:'; deprecated 'in 2_0, 8_3';
    procedure actionSheetCancel (actionSheet: UIActionSheet); message 'actionSheetCancel:'; deprecated 'in 2_0, 8_3';
    procedure willPresentActionSheet (actionSheet: UIActionSheet); message 'willPresentActionSheet:'; deprecated 'in 2_0, 8_3';
    procedure didPresentActionSheet (actionSheet: UIActionSheet); message 'didPresentActionSheet:'; deprecated 'in 2_0, 8_3';
    procedure actionSheet_willDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:willDismissWithButtonIndex:'; deprecated 'in 2_0, 8_3';
    procedure actionSheet_didDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:didDismissWithButtonIndex:'; deprecated 'in 2_0, 8_3';
  end;
{$endif}

