{ Parsed from UIKit.framework UIMenuController.h }

{ Types from UIMenuController }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIMenuControllerPtr = ^UIMenuController;
  UIMenuItemPtr = ^UIMenuItem;
{$endif}

{$ifdef TYPES}
type
  UIMenuControllerArrowDirection = NSInteger;
  UIMenuControllerArrowDirectionPtr = ^UIMenuControllerArrowDirection;

const
  UIMenuControllerArrowDefault = 0;
  UIMenuControllerArrowUp = 1 { available in 3_2 };
  UIMenuControllerArrowDown = 2 { available in 3_2 };
  UIMenuControllerArrowLeft = 3 { available in 3_2 };
  UIMenuControllerArrowRight = 4 { available in 3_2 };
{$endif}

{$ifdef CLASSES}

type
  UIMenuController = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function sharedMenuController: UIMenuController; message 'sharedMenuController';
    {$else}
    class function sharedMenuController: UIMenuController; message 'sharedMenuController';
    {$endif}
    procedure setMenuVisible(newValue: boolean); message 'setMenuVisible:';
    function isMenuVisible: boolean; message 'isMenuVisible';
    procedure setMenuVisible_animated (menuVisible: boolean; animated: boolean); message 'setMenuVisible:animated:';
    procedure setTargetRect_inView (targetRect: CGRect; targetView: UIView); message 'setTargetRect:inView:';
    procedure setArrowDirection(newValue: UIMenuControllerArrowDirection); message 'setArrowDirection:';
    function arrowDirection: UIMenuControllerArrowDirection; message 'arrowDirection';
    procedure setMenuItems(newValue: UIMenuItem *ProtocolPtr); message 'setMenuItems:';
    function menuItems: UIMenuItem *ProtocolPtr; message 'menuItems';
    procedure update; message 'update';
    function menuFrame: CGRect; message 'menuFrame';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSNotificationName UIMenuControllerWillShowMenuNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIMenuControllerDidShowMenuNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIMenuControllerWillHideMenuNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIMenuControllerDidHideMenuNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIMenuControllerMenuFrameDidChangeNotification { available in 3_2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIMenuItem = objcclass external (NSObject)
  public
    function initWithTitle_action (title: NSString; action: SEL): instancetype; message 'initWithTitle:action:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
  end;
{$endif}

