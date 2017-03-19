{ Parsed from UIKit.framework UINavigationController.h }

{$ifdef TYPES}
type
  UINavigationControllerPtr = ^UINavigationController;
  UINavigationControllerDelegateProtocolPtr = ^UINavigationControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UINavigationControllerOperation = NSInteger;
  UINavigationControllerOperationPtr = ^UINavigationControllerOperation;

const
  UINavigationControllerOperationNone = 0;
  UINavigationControllerOperationPush = 1;
  UINavigationControllerOperationPop = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UINavigationControllerHideShowBarDuration: CGFloat; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UINavigationController = objcclass external (UIViewController)
  public
    function initWithNavigationBarClass_toolbarClass (navigationBarClass: nullable Class; toolbarClass: nullable Class): instancetype; message 'initWithNavigationBarClass:toolbarClass:'; { available in 5_0 }
    function initWithRootViewController (rootViewController: UIViewController): instancetype; message 'initWithRootViewController:';
    procedure pushViewController_animated (viewController: UIViewController; animated: boolean); message 'pushViewController:animated:';
    function popViewControllerAnimated (animated: boolean): nullable UIViewControllerPtr; message 'popViewControllerAnimated:';
    function popToViewController_animated (viewController: UIViewController; animated: boolean): nullable __kindof UIViewController *ProtocolPtr; message 'popToViewController:animated:';
    function popToRootViewControllerAnimated (animated: boolean): nullable __kindof UIViewController *ProtocolPtr; message 'popToRootViewControllerAnimated:';
    function topViewController: UIViewController; message 'topViewController';
    function visibleViewController: UIViewController; message 'visibleViewController';
    procedure setViewControllers(newValue: __kindof UIViewController *ProtocolPtr); message 'setViewControllers:';
    function viewControllers: __kindof UIViewController *ProtocolPtr; message 'viewControllers';
    procedure setViewControllers_animated (viewControllers_: UIViewController *ProtocolPtr; animated: boolean); message 'setViewControllers:animated:'; { available in 3_0 }
    procedure setNavigationBarHidden(newValue: boolean); message 'setNavigationBarHidden:';
    function isNavigationBarHidden: boolean; message 'isNavigationBarHidden';
    procedure setNavigationBarHidden_animated (hidden: boolean; animated: boolean); message 'setNavigationBarHidden:animated:';
    function navigationBar: UINavigationBar; message 'navigationBar';
    procedure set__TVOS_PROHIBITED(newValue: BOOL toolbarHidden); message 'set__TVOS_PROHIBITED:';
    function isToolbarHidden: BOOL toolbarHidden; message 'isToolbarHidden';
    procedure setToolbarHidden_animated (hidden: boolean; animated: boolean); message 'setToolbarHidden:animated:'; { available in 3_0 }
    function __TVOS_PROHIBITED_: UIToolbar *toolbar; message 'TVOS_PROHIBITED';
    procedure setDelegate(newValue: UINavigationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UINavigationControllerDelegateProtocol; message 'delegate';
    function __TVOS_PROHIBITED_: UIGestureRecognizer *interactivePopGestureRecognizer; message 'TVOS_PROHIBITED';
    procedure showViewController_sender (vc: UIViewController; sender: nullable id); message 'showViewController:sender:'; { available in 8_0 }
    procedure set__TVOS_PROHIBITED_(newValue: BOOL hidesBarsWhenKeyboardAppears); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: BOOL hidesBarsWhenKeyboardAppears; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: BOOL hidesBarsOnSwipe); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: BOOL hidesBarsOnSwipe; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: BOOL hidesBarsWhenVerticallyCompact); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_____: BOOL hidesBarsWhenVerticallyCompact; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: BOOL hidesBarsOnTap); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: BOOL hidesBarsOnTap; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_______: UITapGestureRecognizer *barHideOnTapGestureRecognizer; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UINavigationControllerDelegateProtocol = objcprotocol external name 'UINavigationControllerDelegate' (NSObjectProtocol)
  optional
    procedure navigationController_willShowViewController_animated (navigationController: UINavigationController; viewController: UIViewController; animated: boolean); message 'navigationController:willShowViewController:animated:';
    procedure navigationController_didShowViewController_animated (navigationController: UINavigationController; viewController: UIViewController; animated: boolean); message 'navigationController:didShowViewController:animated:';
    function navigationControllerSupportedInterfaceOrientations (navigationController: UINavigationController): UIInterfaceOrientationMask; message 'navigationControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function navigationControllerPreferredInterfaceOrientationForPresentation (navigationController: UINavigationController): UIInterfaceOrientation; message 'navigationControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
    function navigationController_interactionControllerForAnimationController (navigationController: UINavigationController; animationController: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'navigationController:interactionControllerForAnimationController:'; { available in 7_0 }
    function navigationController_animationControllerForOperation_fromViewController_toViewController (navigationController: UINavigationController; operation: UINavigationControllerOperation; fromVC: UIViewController; toVC: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'navigationController:animationControllerForOperation:fromViewController:toViewController:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UINavigationControllerItem = objccategory external (UIViewController)
    function navigationItem: UINavigationItem; message 'navigationItem';
    procedure set__TVOS_PROHIBITED(newValue: BOOL hidesBottomBarWhenPushed); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL hidesBottomBarWhenPushed; message 'TVOS_PROHIBITED';
    function navigationController: UINavigationController; message 'navigationController';
  end;

type
  UINavigationControllerContextualToolbarItems = objccategory external (UIViewController)
    procedure set__TVOS_PROHIBITED(newValue: __kindof UIBarButtonItem *Protocol *toolbarItems); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: __kindof UIBarButtonItem *Protocol *toolbarItems; message 'TVOS_PROHIBITED';
    procedure setToolbarItems_animated (toolbarItems: nullable UIBarButtonItem *ProtocolPtr; animated: boolean); message 'setToolbarItems:animated:'; { available in 3_0 }
  end;
{$endif}

