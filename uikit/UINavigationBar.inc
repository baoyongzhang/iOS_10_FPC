{ Parsed from UIKit.framework UINavigationBar.h }

{$ifdef TYPES}
type
  UINavigationBarPtr = ^UINavigationBar;
  UINavigationItemPtr = ^UINavigationItem;
  UINavigationBarDelegateProtocolPtr = ^UINavigationBarDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UINavigationBar = objcclass external (UIView, NSCodingProtocol, UIBarPositioningProtocol)
  public
    procedure set__TVOS_PROHIBITED(newValue: UIBarStyle barStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIBarStyle barStyle; message 'TVOS_PROHIBITED';
    procedure setDelegate(newValue: UINavigationBarDelegateProtocol); message 'setDelegate:';
    function delegate: UINavigationBarDelegateProtocol; message 'delegate';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure pushNavigationItem_animated (item: UINavigationItem; animated: boolean); message 'pushNavigationItem:animated:';
    function popNavigationItemAnimated (animated: boolean): nullable UINavigationItemPtr; message 'popNavigationItemAnimated:';
    function topItem: UINavigationItem; message 'topItem';
    function backItem: UINavigationItem; message 'backItem';
    procedure setItems(newValue: UINavigationItem *ProtocolPtr); message 'setItems:';
    function items: UINavigationItem *ProtocolPtr; message 'items';
    procedure setItems_animated (items_: nullable UINavigationItem *ProtocolPtr; animated: boolean); message 'setItems:animated:';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setBackgroundImage_forBarPosition_barMetrics (backgroundImage: nullable UIImagePtr; barPosition: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarPosition:barMetrics:'; { available in 7_0 }
    function backgroundImageForBarPosition_barMetrics (barPosition: UIBarPosition; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForBarPosition:barMetrics:'; { available in 7_0 }
    procedure setBackgroundImage_forBarMetrics (backgroundImage: nullable UIImagePtr; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarMetrics:'; { available in 5_0 }
    function backgroundImageForBarMetrics (barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForBarMetrics:'; { available in 5_0 }
    procedure setShadowImage(newValue: UIImage); message 'setShadowImage:';
    function shadowImage: UIImage; message 'shadowImage';
    procedure setTitleTextAttributes(newValue: NSDictionary); message 'setTitleTextAttributes:';
    function titleTextAttributes: NSDictionary; message 'titleTextAttributes';
    procedure setTitleVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setTitleVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function titleVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'titleVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure set__TVOS_PROHIBITED_(newValue: UIImage *backIndicatorImage); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIImage *backIndicatorImage; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: UIImage *backIndicatorTransitionMaskImage); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: UIImage *backIndicatorTransitionMaskImage; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    function barPosition: UIBarPosition; message 'barPosition';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UINavigationBarDelegateProtocol = objcprotocol external name 'UINavigationBarDelegate' (UIBarPositioningDelegateProtocol)
  optional
    function navigationBar_shouldPushItem (navigationBar: UINavigationBar; item: UINavigationItem): boolean; message 'navigationBar:shouldPushItem:';
    procedure navigationBar_didPushItem (navigationBar: UINavigationBar; item: UINavigationItem); message 'navigationBar:didPushItem:';
    function navigationBar_shouldPopItem (navigationBar: UINavigationBar; item: UINavigationItem): boolean; message 'navigationBar:shouldPopItem:';
    procedure navigationBar_didPopItem (navigationBar: UINavigationBar; item: UINavigationItem); message 'navigationBar:didPopItem:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UINavigationItem = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithTitle (title: NSString): instancetype; message 'initWithTitle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setTitleView(newValue: UIView); message 'setTitleView:';
    function titleView: UIView; message 'titleView';
    procedure set__TVOS_PROHIBITED(newValue: NSString *prompt); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSString *prompt; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: UIBarButtonItem *backBarButtonItem); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIBarButtonItem *backBarButtonItem; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: BOOL hidesBackButton); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: BOOL hidesBackButton; message 'TVOS_PROHIBITED';
    procedure setHidesBackButton_animated (hidesBackButton: boolean; animated: boolean); message 'setHidesBackButton:animated:';
    procedure setLeftBarButtonItems(newValue: UIBarButtonItem *ProtocolPtr); message 'setLeftBarButtonItems:';
    function leftBarButtonItems: UIBarButtonItem *ProtocolPtr; message 'leftBarButtonItems';
    procedure setRightBarButtonItems(newValue: UIBarButtonItem *ProtocolPtr); message 'setRightBarButtonItems:';
    function rightBarButtonItems: UIBarButtonItem *ProtocolPtr; message 'rightBarButtonItems';
    procedure setLeftBarButtonItems_animated (items: nullable UIBarButtonItem *ProtocolPtr; animated: boolean); message 'setLeftBarButtonItems:animated:'; { available in 5_0 }
    procedure setRightBarButtonItems_animated (items: nullable UIBarButtonItem *ProtocolPtr; animated: boolean); message 'setRightBarButtonItems:animated:'; { available in 5_0 }
    procedure set__TVOS_PROHIBITED___(newValue: BOOL leftItemsSupplementBackButton); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: BOOL leftItemsSupplementBackButton; message 'TVOS_PROHIBITED';
    procedure setLeftBarButtonItem(newValue: UIBarButtonItem); message 'setLeftBarButtonItem:';
    function leftBarButtonItem: UIBarButtonItem; message 'leftBarButtonItem';
    procedure setRightBarButtonItem(newValue: UIBarButtonItem); message 'setRightBarButtonItem:';
    function rightBarButtonItem: UIBarButtonItem; message 'rightBarButtonItem';
    procedure setLeftBarButtonItem_animated (item: nullable UIBarButtonItemPtr; animated: boolean); message 'setLeftBarButtonItem:animated:';
    procedure setRightBarButtonItem_animated (item: nullable UIBarButtonItemPtr; animated: boolean); message 'setRightBarButtonItem:animated:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

