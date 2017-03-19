{ Parsed from UIKit.framework UISplitViewController.h }

{ Types from UISplitViewController }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UISplitViewControllerPtr = ^UISplitViewController;
  UISplitViewControllerDelegateProtocolPtr = ^UISplitViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UISplitViewControllerDisplayMode = NSInteger;
  UISplitViewControllerDisplayModePtr = ^UISplitViewControllerDisplayMode;

const
  UISplitViewControllerDisplayModeAutomatic = 0;
  UISplitViewControllerDisplayModePrimaryHidden = 1;
  UISplitViewControllerDisplayModeAllVisible = 2;
  UISplitViewControllerDisplayModePrimaryOverlay = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UISplitViewControllerAutomaticDimension: CGFloat { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UISplitViewController = objcclass external (UIViewController)
  public
    procedure setViewControllers(newValue: __kindof UIViewController *ProtocolPtr); message 'setViewControllers:';
    function viewControllers: __kindof UIViewController *ProtocolPtr; message 'viewControllers';
    procedure setDelegate(newValue: UISplitViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UISplitViewControllerDelegateProtocol; message 'delegate';
    procedure setPresentsWithGesture(newValue: boolean); message 'setPresentsWithGesture:';
    function presentsWithGesture: boolean; message 'presentsWithGesture';
    function isCollapsed: boolean; message 'isCollapsed';
    procedure setPreferredDisplayMode(newValue: UISplitViewControllerDisplayMode); message 'setPreferredDisplayMode:';
    function preferredDisplayMode: UISplitViewControllerDisplayMode; message 'preferredDisplayMode';
    function displayMode: UISplitViewControllerDisplayMode; message 'displayMode';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function displayModeButtonItem: UIBarButtonItem; message 'displayModeButtonItem';
    {$else}
    function displayModeButtonItem: UIBarButtonItem; message 'displayModeButtonItem'; { available in 8_0 }
    {$endif}
    procedure setPreferredPrimaryColumnWidthFraction(newValue: CGFloat); message 'setPreferredPrimaryColumnWidthFraction:';
    function preferredPrimaryColumnWidthFraction: CGFloat; message 'preferredPrimaryColumnWidthFraction';
    procedure setMinimumPrimaryColumnWidth(newValue: CGFloat); message 'setMinimumPrimaryColumnWidth:';
    function minimumPrimaryColumnWidth: CGFloat; message 'minimumPrimaryColumnWidth';
    procedure setMaximumPrimaryColumnWidth(newValue: CGFloat); message 'setMaximumPrimaryColumnWidth:';
    function maximumPrimaryColumnWidth: CGFloat; message 'maximumPrimaryColumnWidth';
    function primaryColumnWidth: CGFloat; message 'primaryColumnWidth';
    procedure showViewController_sender (vc: UIViewController; sender: id); message 'showViewController:sender:'; { available in 8_0 }
    procedure showDetailViewController_sender (vc: UIViewController; sender: id); message 'showDetailViewController:sender:'; { available in 8_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UISplitViewControllerDelegateProtocol = objcprotocol external name 'UISplitViewControllerDelegate'
  optional
    procedure splitViewController_willChangeToDisplayMode (svc: UISplitViewController; displayMode: UISplitViewControllerDisplayMode); message 'splitViewController:willChangeToDisplayMode:'; { available in 8_0 }
    function targetDisplayModeForActionInSplitViewController (svc: UISplitViewController): UISplitViewControllerDisplayMode; message 'targetDisplayModeForActionInSplitViewController:'; { available in 8_0 }
    function splitViewController_showViewController_sender (splitViewController: UISplitViewController; vc: UIViewController; sender: id): boolean; message 'splitViewController:showViewController:sender:'; { available in 8_0 }
    function splitViewController_showDetailViewController_sender (splitViewController: UISplitViewController; vc: UIViewController; sender: id): boolean; message 'splitViewController:showDetailViewController:sender:'; { available in 8_0 }
    function primaryViewControllerForCollapsingSplitViewController (splitViewController: UISplitViewController): UIViewControllerPtr; message 'primaryViewControllerForCollapsingSplitViewController:'; { available in 8_0 }
    function primaryViewControllerForExpandingSplitViewController (splitViewController: UISplitViewController): UIViewControllerPtr; message 'primaryViewControllerForExpandingSplitViewController:'; { available in 8_0 }
    function splitViewController_collapseSecondaryViewController_ontoPrimaryViewController (splitViewController: UISplitViewController; secondaryViewController: UIViewController; primaryViewController: UIViewController): boolean; message 'splitViewController:collapseSecondaryViewController:ontoPrimaryViewController:'; { available in 8_0 }
    function splitViewController_separateSecondaryViewControllerFromPrimaryViewController (splitViewController: UISplitViewController; primaryViewController: UIViewController): UIViewControllerPtr; message 'splitViewController:separateSecondaryViewControllerFromPrimaryViewController:'; { available in 8_0 }
    function splitViewControllerSupportedInterfaceOrientations (splitViewController: UISplitViewController): UIInterfaceOrientationMask; message 'splitViewControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function splitViewControllerPreferredInterfaceOrientationForPresentation (splitViewController: UISplitViewController): UIInterfaceOrientation; message 'splitViewControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
    procedure splitViewController_willHideViewController_withBarButtonItem_forPopoverController (svc: UISplitViewController; aViewController: UIViewController; barButtonItem: UIBarButtonItem; pc: UIPopoverController); message 'splitViewController:willHideViewController:withBarButtonItem:forPopoverController:'; deprecated 'in 2_0, 8_0, "Use splitViewController:willChangeToDisplayMode: and displayModeButtonItem instead"';
    procedure splitViewController_willShowViewController_invalidatingBarButtonItem (svc: UISplitViewController; aViewController: UIViewController; barButtonItem: UIBarButtonItem); message 'splitViewController:willShowViewController:invalidatingBarButtonItem:'; deprecated 'in 2_0, 8_0, "Use splitViewController:willChangeToDisplayMode: and displayModeButtonItem instead"';
    procedure splitViewController_popoverController_willPresentViewController (svc: UISplitViewController; pc: UIPopoverController; aViewController: UIViewController); message 'splitViewController:popoverController:willPresentViewController:'; deprecated 'in 2_0, 8_0, "Use splitViewController:willChangeToDisplayMode: instead"';
    function splitViewController_shouldHideViewController_inOrientation (svc: UISplitViewController; vc: UIViewController; orientation: UIInterfaceOrientation): boolean; message 'splitViewController:shouldHideViewController:inOrientation:'; deprecated 'in 5_0, 8_0, "Use preferredDisplayMode instead"';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIViewController_UISplitViewController = objccategory external name 'UISplitViewController' (UIViewController)
    function splitViewController: UISplitViewController; message 'splitViewController';
    procedure collapseSecondaryViewController_forSplitViewController (secondaryViewController: UIViewController; splitViewController_: UISplitViewController); message 'collapseSecondaryViewController:forSplitViewController:'; { available in 8_0 }
    function separateSecondaryViewControllerForSplitViewController (splitViewController_: UISplitViewController): UIViewControllerPtr; message 'separateSecondaryViewControllerForSplitViewController:'; { available in 8_0 }
  end;
{$endif}

