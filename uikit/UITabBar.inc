{ Parsed from UIKit.framework UITabBar.h }

{ Types from UITabBar }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UITabBarPtr = ^UITabBar;
  UITabBarDelegateProtocolPtr = ^UITabBarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UITabBarItemPositioning = NSInteger;
  UITabBarItemPositioningPtr = ^UITabBarItemPositioning;

const
  UITabBarItemPositioningAutomatic = 0;
  UITabBarItemPositioningFill = 1;
  UITabBarItemPositioningCentered = 2;
{$endif}

{$ifdef CLASSES}

type
  UITabBar = objcclass external (UIView)
  public
    procedure setDelegate(newValue: UITabBarDelegateProtocol); message 'setDelegate:';
    function delegate: UITabBarDelegateProtocol; message 'delegate';
    procedure setItems(newValue: UITabBarItem *ProtocolPtr); message 'setItems:';
    function items: UITabBarItem *ProtocolPtr; message 'items';
    procedure setSelectedItem(newValue: UITabBarItem); message 'setSelectedItem:';
    function selectedItem: UITabBarItem; message 'selectedItem';
    procedure setItems_animated (items_: nullable UITabBarItem *ProtocolPtr; animated: boolean); message 'setItems:animated:';
    procedure beginCustomizingItems (items_: UITabBarItem *ProtocolPtr); message 'beginCustomizingItems:';
    function endCustomizingAnimated (animated: boolean): boolean; message 'endCustomizingAnimated:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isCustomizing: BOOL customizing; message 'isCustomizing';
    {$else}
    function isCustomizing __TVOS_PROHIBITED: boolean; message 'isCustomizing __TVOS_PROHIBITED';
    {$endif}
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setUnselectedItemTintColor(newValue: UIColor); message 'setUnselectedItemTintColor:';
    function unselectedItemTintColor: UIColor; message 'unselectedItemTintColor';
    procedure set__TVOS_PROHIBITED(newValue: UIColor *selectedImageTintColor); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIColor *selectedImageTintColor; message 'TVOS_PROHIBITED';
    procedure setBackgroundImage(newValue: UIImage); message 'setBackgroundImage:';
    function backgroundImage: UIImage; message 'backgroundImage';
    procedure setSelectionIndicatorImage(newValue: UIImage); message 'setSelectionIndicatorImage:';
    function selectionIndicatorImage: UIImage; message 'selectionIndicatorImage';
    procedure setShadowImage(newValue: UIImage); message 'setShadowImage:';
    function shadowImage: UIImage; message 'shadowImage';
    procedure set__TVOS_PROHIBITED_(newValue: UITabBarItemPositioning itemPositioning); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UITabBarItemPositioning itemPositioning; message 'TVOS_PROHIBITED';
    procedure setItemWidth(newValue: CGFloat); message 'setItemWidth:';
    function itemWidth: CGFloat; message 'itemWidth';
    procedure setItemSpacing(newValue: CGFloat); message 'setItemSpacing:';
    function itemSpacing: CGFloat; message 'itemSpacing';
    procedure set__TVOS_PROHIBITED__(newValue: UIBarStyle barStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: UIBarStyle barStyle; message 'TVOS_PROHIBITED';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITabBarDelegateProtocol = objcprotocol external name 'UITabBarDelegate' (NSObjectProtocol)
  optional
    procedure tabBar_didSelectItem (tabBar: UITabBar; item: UITabBarItem); message 'tabBar:didSelectItem:';
    procedure tabBar_willBeginCustomizingItems (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr); message 'tabBar:willBeginCustomizingItems:';
    procedure tabBar_didBeginCustomizingItems (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr); message 'tabBar:didBeginCustomizingItems:';
    procedure tabBar_willEndCustomizingItems_changed (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr; changed: boolean); message 'tabBar:willEndCustomizingItems:changed:';
    procedure tabBar_didEndCustomizingItems_changed (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr; changed: boolean); message 'tabBar:didEndCustomizingItems:changed:';
  end;
{$endif}

