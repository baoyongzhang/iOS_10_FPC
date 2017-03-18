{ Parsed from UIKit.framework UITabBarController.h }

{$ifdef TYPES}
type
  UITabBarControllerPtr = ^UITabBarController;
  UITabBarControllerDelegateProtocolPtr = ^UITabBarControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UITabBarController = objcclass external (UIViewController, UITabBarDelegateProtocol, NSCodingProtocol)
  public
    procedure setViewControllers(newValue: __kindof UIViewController *ProtocolPtr); message 'setViewControllers:';
    function viewControllers: __kindof UIViewController *ProtocolPtr; message 'viewControllers';
    procedure setViewControllers_animated (viewControllers_: __kindof UIViewController *Protocol * __nullable; animated: boolean); message 'setViewControllers:animated:';
    procedure setSelectedViewController(newValue: __kindof UIViewControllerPtr); message 'setSelectedViewController:';
    function selectedViewController: __kindof UIViewControllerPtr; message 'selectedViewController';
    procedure setSelectedIndex(newValue: NSUInteger); message 'setSelectedIndex:';
    function selectedIndex: NSUInteger; message 'selectedIndex';
    function __TVOS_PROHIBITED_: UINavigationController *moreNavigationController; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED(newValue: __kindof UIViewController *Protocol *customizableViewControllers); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: __kindof UIViewController *Protocol *customizableViewControllers; message 'TVOS_PROHIBITED';
    function tabBar: UITabBar; message 'tabBar';
    procedure setDelegate(newValue: UITabBarControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UITabBarControllerDelegateProtocol; message 'delegate';

    { Adopted protocols }
    procedure tabBar_didBeginCustomizingItems (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr); message 'tabBar:didBeginCustomizingItems:';
    procedure tabBar_didEndCustomizingItems_changed (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr; changed: boolean); message 'tabBar:didEndCustomizingItems:changed:';
    procedure tabBar_didSelectItem (tabBar: UITabBar; item: UITabBarItem); message 'tabBar:didSelectItem:';
    procedure tabBar_willBeginCustomizingItems (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr); message 'tabBar:willBeginCustomizingItems:';
    procedure tabBar_willEndCustomizingItems_changed (tabBar: UITabBar; items: UITabBarItem *ProtocolPtr; changed: boolean); message 'tabBar:willEndCustomizingItems:changed:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITabBarControllerDelegateProtocol = objcprotocol external name 'UITabBarControllerDelegate' (NSObjectProtocol)
  optional
    function tabBarController_shouldSelectViewController (tabBarController: UITabBarController; viewController: UIViewController): boolean; message 'tabBarController:shouldSelectViewController:'; { available in 3_0 }
    procedure tabBarController_didSelectViewController (tabBarController: UITabBarController; viewController: UIViewController); message 'tabBarController:didSelectViewController:';
    procedure tabBarController_willBeginCustomizingViewControllers (tabBarController: UITabBarController; viewControllers: __kindof UIViewController *ProtocolPtr); message 'tabBarController:willBeginCustomizingViewControllers:'; { available in 3_0 }
    procedure tabBarController_willEndCustomizingViewControllers_changed (tabBarController: UITabBarController; viewControllers: __kindof UIViewController *ProtocolPtr; changed: boolean); message 'tabBarController:willEndCustomizingViewControllers:changed:'; { available in 3_0 }
    procedure tabBarController_didEndCustomizingViewControllers_changed (tabBarController: UITabBarController; viewControllers: __kindof UIViewController *ProtocolPtr; changed: boolean); message 'tabBarController:didEndCustomizingViewControllers:changed:';
    function tabBarControllerSupportedInterfaceOrientations (tabBarController: UITabBarController): UIInterfaceOrientationMask; message 'tabBarControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function tabBarControllerPreferredInterfaceOrientationForPresentation (tabBarController: UITabBarController): UIInterfaceOrientation; message 'tabBarControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
    function tabBarController_interactionControllerForAnimationController (tabBarController: UITabBarController; animationController: UIViewControllerAnimatedTransitioningProtocol): nullable UIViewControllerInteractiveTransitioningProtocol; message 'tabBarController:interactionControllerForAnimationController:'; { available in 7_0 }
    function tabBarController_animationControllerForTransitionFromViewController_toViewController (tabBarController: UITabBarController; fromVC: UIViewController; toVC: UIViewController): nullable UIViewControllerAnimatedTransitioningProtocol; message 'tabBarController:animationControllerForTransitionFromViewController:toViewController:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UITabBarControllerItem = objccategory external (UIViewController)
    procedure setTabBarItem(newValue: UITabBarItem); message 'setTabBarItem:';
    function tabBarItem: UITabBarItem; message 'tabBarItem';
    function tabBarController: UITabBarController; message 'tabBarController';
  end;
{$endif}

