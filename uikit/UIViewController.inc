{ Parsed from UIKit.framework UIViewController.h }

{ Types from UIViewController }
{$ifdef TYPES}




{$endif}


{ Types from UIViewController }
{$ifdef TYPES}

{$endif}


{ Types from UIViewControllerRotation }
{$ifdef TYPES}

{$endif}


{ Types from UIViewControllerEditing }
{$ifdef TYPES}

{$endif}


{ Types from UIContainerViewControllerProtectedMethods }
{$ifdef TYPES}

{$endif}


{ Types from UIContainerViewControllerCallbacks }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIViewControllerPtr = ^UIViewController;
  UIPreviewActionPtr = ^UIPreviewAction;
  UIPreviewActionGroupPtr = ^UIPreviewActionGroup;
  UIContentContainerProtocolPtr = ^UIContentContainerProtocol;
  UIViewControllerPreviewingProtocolPtr = ^UIViewControllerPreviewingProtocol;
  UIViewControllerPreviewingDelegateProtocolPtr = ^UIViewControllerPreviewingDelegateProtocol;
  UIPreviewActionItemProtocolPtr = ^UIPreviewActionItemProtocol;
{$endif}

{$ifdef TYPES}
type
  UIModalTransitionStyle = NSInteger;
  UIModalTransitionStylePtr = ^UIModalTransitionStyle;

const
  UIModalTransitionStyleCoverVertical = 0;
  UIModalTransitionStyleFlipHorizontal = 1;
  UIModalTransitionStyleCrossDissolve = 3;
  UIModalTransitionStylePartialCurl = 4 { available in 3_2 };

type
  UIModalPresentationStyle = NSInteger;
  UIModalPresentationStylePtr = ^UIModalPresentationStyle;

const
  UIModalPresentationFullScreen = 0;
  UIModalPresentationPageSheet = 1 { available in 3_2 };
  UIModalPresentationFormSheet = 3 { available in 3_2 };
  UIModalPresentationCurrentContext = 5 { available in 3_2 };
  UIModalPresentationCustom = 6 { available in 7_0 };
  UIModalPresentationOverFullScreen = 7 { available in 8_0 };
  UIModalPresentationOverCurrentContext = 8 { available in 8_0 };
  UIModalPresentationPopover = 9 { available in 8_0 };
  UIModalPresentationNone = -1 { available in 7_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  UIContentContainerProtocol = objcprotocol external name 'UIContentContainer' (NSObjectProtocol)
    function preferredContentSize: CGSize; message 'preferredContentSize';
    procedure preferredContentSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'preferredContentSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    procedure systemLayoutFittingSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'systemLayoutFittingSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function sizeForChildContentContainer_withParentContainerSize (container: UIContentContainerProtocol; parentSize: CGSize): CGSize; message 'sizeForChildContentContainer:withParentContainerSize:'; { available in 8_0 }
    procedure viewWillTransitionToSize_withTransitionCoordinator (size: CGSize; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'viewWillTransitionToSize:withTransitionCoordinator:'; { available in 8_0 }
    procedure willTransitionToTraitCollection_withTransitionCoordinator (newCollection: UITraitCollection; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'willTransitionToTraitCollection:withTransitionCoordinator:'; { available in 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIViewControllerShowDetailTargetDidChangeNotification: NSNotificationName { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIViewController = objcclass external (UIResponder, NSCodingProtocol, UIAppearanceContainerProtocol, UITraitEnvironmentProtocol, UIContentContainerProtocol, UIFocusEnvironmentProtocol)
  public
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setView(newValue: UIView); message 'setView:';
    function view: UIView; message 'view';
    procedure loadView; message 'loadView';
    procedure loadViewIfNeeded; message 'loadViewIfNeeded'; { available in 9_0 }
    function viewIfLoaded: UIView; message 'viewIfLoaded';
    procedure viewWillUnload                            __TVOS_PROHIBITED; message 'viewWillUnload                            __TVOS_PROHIBITED'; deprecated 'in 5_0,6_0';
    procedure viewDidUnload                            __TVOS_PROHIBITED; message 'viewDidUnload                            __TVOS_PROHIBITED'; deprecated 'in 3_0,6_0';
    procedure viewDidLoad; message 'viewDidLoad';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isViewLoaded: boolean; message 'isViewLoaded';
    {$else}
    function isViewLoaded: boolean; message 'isViewLoaded'; { available in 3_0 }
    {$endif}
    function nibName: NSString; message 'nibName';
    function nibBundle: NSBundle; message 'nibBundle';
    function storyboard: UIStoryboard; message 'storyboard';
    procedure performSegueWithIdentifier_sender (identifier: NSString; sender: nullable id); message 'performSegueWithIdentifier:sender:'; { available in 5_0 }
    function shouldPerformSegueWithIdentifier_sender (identifier: NSString; sender: nullable id): boolean; message 'shouldPerformSegueWithIdentifier:sender:'; { available in 6_0 }
    procedure prepareForSegue_sender (segue: UIStoryboardSegue; sender: nullable id); message 'prepareForSegue:sender:'; { available in 5_0 }
    function canPerformUnwindSegueAction_fromViewController_withSender (action: SEL; fromViewController: UIViewController; sender: id): boolean; message 'canPerformUnwindSegueAction:fromViewController:withSender:'; { available in 6_0 }
    function allowedChildViewControllersForUnwindingFromSource (source: UIStoryboardUnwindSegueSource): UIViewController *ProtocolPtr; message 'allowedChildViewControllersForUnwindingFromSource:'; { available in 9_0 }
    function childViewControllerContainingSegueSource (source: UIStoryboardUnwindSegueSource): nullable UIViewControllerPtr; message 'childViewControllerContainingSegueSource:'; { available in 9_0 }
    function viewControllerForUnwindSegueAction_fromViewController_withSender (action: SEL; fromViewController: UIViewController; sender: nullable id): nullable UIViewControllerPtr; message 'viewControllerForUnwindSegueAction:fromViewController:withSender:'; deprecated 'in 6_0, 9_0';
    procedure unwindForSegue_towardsViewController (unwindSegue: UIStoryboardSegue; subsequentVC: UIViewController); message 'unwindForSegue:towardsViewController:'; { available in 9_0 }
    function segueForUnwindingToViewController_fromViewController_identifier (toViewController: UIViewController; fromViewController: UIViewController; identifier: nullable NSStringPtr): nullable UIStoryboardSeguePtr; message 'segueForUnwindingToViewController:fromViewController:identifier:'; deprecated 'in 6_0, 9_0';
    procedure viewWillAppear (animated: boolean); message 'viewWillAppear:';
    procedure viewDidAppear (animated: boolean); message 'viewDidAppear:';
    procedure viewWillDisappear (animated: boolean); message 'viewWillDisappear:';
    procedure viewDidDisappear (animated: boolean); message 'viewDidDisappear:';
    procedure viewWillLayoutSubviews; message 'viewWillLayoutSubviews'; { available in 5_0 }
    procedure viewDidLayoutSubviews; message 'viewDidLayoutSubviews'; { available in 5_0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure didReceiveMemoryWarning; message 'didReceiveMemoryWarning';
    function parentViewController: UIViewController; message 'parentViewController';
    function __TVOS_PROHIBITED_: UIViewController *modalViewController; message 'TVOS_PROHIBITED';
    function presentedViewController: UIViewController; message 'presentedViewController';
    function presentingViewController: UIViewController; message 'presentingViewController';
    procedure setDefinesPresentationContext(newValue: boolean); message 'setDefinesPresentationContext:';
    function definesPresentationContext: boolean; message 'definesPresentationContext';
    procedure setProvidesPresentationContextTransitionStyle(newValue: boolean); message 'setProvidesPresentationContextTransitionStyle:';
    function providesPresentationContextTransitionStyle: boolean; message 'providesPresentationContextTransitionStyle';
    procedure setRestoresFocusAfterTransition(newValue: boolean); message 'setRestoresFocusAfterTransition:';
    function restoresFocusAfterTransition: boolean; message 'restoresFocusAfterTransition';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isBeingPresented: boolean; message 'isBeingPresented';
    function isBeingDismissed: boolean; message 'isBeingDismissed';
    function isMovingToParentViewController: boolean; message 'isMovingToParentViewController';
    function isMovingFromParentViewController: boolean; message 'isMovingFromParentViewController';
    {$else}
    function isBeingPresented: boolean; message 'isBeingPresented'; { available in 5_0 }
    function isBeingDismissed: boolean; message 'isBeingDismissed'; { available in 5_0 }
    function isMovingToParentViewController: boolean; message 'isMovingToParentViewController'; { available in 5_0 }
    function isMovingFromParentViewController: boolean; message 'isMovingFromParentViewController'; { available in 5_0 }
    {$endif}
    procedure presentViewController_animated_completion (viewControllerToPresent: UIViewController; flag: boolean; completion: void (^ __nullable)(void)); message 'presentViewController:animated:completion:'; { available in 5_0 }
    procedure dismissViewControllerAnimated_completion (flag: boolean; completion: void (^ __nullable)(void)); message 'dismissViewControllerAnimated:completion:'; { available in 5_0 }
    procedure presentModalViewController_animated (modalViewController: UIViewController; animated: boolean); message 'presentModalViewController:animated:'; deprecated 'in 2_0, 6_0';
    procedure dismissModalViewControllerAnimated (animated: boolean); message 'dismissModalViewControllerAnimated:'; deprecated 'in 2_0, 6_0';
    procedure setModalTransitionStyle(newValue: UIModalTransitionStyle); message 'setModalTransitionStyle:';
    function modalTransitionStyle: UIModalTransitionStyle; message 'modalTransitionStyle';
    procedure setModalPresentationStyle(newValue: UIModalPresentationStyle); message 'setModalPresentationStyle:';
    function modalPresentationStyle: UIModalPresentationStyle; message 'modalPresentationStyle';
    procedure set__TVOS_PROHIBITED(newValue: BOOL modalPresentationCapturesStatusBarAppearance); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL modalPresentationCapturesStatusBarAppearance; message 'TVOS_PROHIBITED';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    procedure setDisablesAutomaticKeyboardDismissal(newValue: boolean); message 'setDisablesAutomaticKeyboardDismissal:';
    function disablesAutomaticKeyboardDismissal: boolean; message 'disablesAutomaticKeyboardDismissal';
    {$else}
    function disablesAutomaticKeyboardDismissal: boolean; message 'disablesAutomaticKeyboardDismissal'; { available in 4_3 }
    {$endif}
    procedure set__TVOS_PROHIBITED_(newValue: BOOL wantsFullScreenLayout); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: BOOL wantsFullScreenLayout; message 'TVOS_PROHIBITED';
    procedure setEdgesForExtendedLayout(newValue: UIRectEdge); message 'setEdgesForExtendedLayout:';
    function edgesForExtendedLayout: UIRectEdge; message 'edgesForExtendedLayout';
    procedure setExtendedLayoutIncludesOpaqueBars(newValue: boolean); message 'setExtendedLayoutIncludesOpaqueBars:';
    function extendedLayoutIncludesOpaqueBars: boolean; message 'extendedLayoutIncludesOpaqueBars';
    procedure setAutomaticallyAdjustsScrollViewInsets(newValue: boolean); message 'setAutomaticallyAdjustsScrollViewInsets:';
    function automaticallyAdjustsScrollViewInsets: boolean; message 'automaticallyAdjustsScrollViewInsets';
    procedure setPreferredContentSize(newValue: CGSize); message 'setPreferredContentSize:';
    function preferredContentSize: CGSize; message 'preferredContentSize';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED___: UIStatusBarStyle preferredStatusBarStyle; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: BOOL prefersStatusBarHidden; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_____: UIStatusBarAnimation preferredStatusBarUpdateAnimation; message 'TVOS_PROHIBITED';
    {$else}
    function preferredStatusBarStyle                       __TVOS_PROHIBITED: UIStatusBarStyle; message 'preferredStatusBarStyle                       __TVOS_PROHIBITED'; { available in 7_0 }
    function prefersStatusBarHidden                       __TVOS_PROHIBITED: boolean; message 'prefersStatusBarHidden                       __TVOS_PROHIBITED'; { available in 7_0 }
    function preferredStatusBarUpdateAnimation                       __TVOS_PROHIBITED: UIStatusBarAnimation; message 'preferredStatusBarUpdateAnimation                       __TVOS_PROHIBITED'; { available in 7_0 }
    {$endif}
    procedure setNeedsStatusBarAppearanceUpdate                       __TVOS_PROHIBITED; message 'setNeedsStatusBarAppearanceUpdate                       __TVOS_PROHIBITED'; { available in 7_0 }
    function targetViewControllerForAction_sender (action: SEL; sender: nullable id): nullable UIViewControllerPtr; message 'targetViewControllerForAction:sender:'; { available in 8_0 }
    procedure showViewController_sender (vc: UIViewController; sender: nullable id); message 'showViewController:sender:'; { available in 8_0 }
    procedure showDetailViewController_sender (vc: UIViewController; sender: nullable id); message 'showDetailViewController:sender:'; { available in 8_0 }

    { Adopted protocols }
    procedure didUpdateFocusInContext_withAnimationCoordinator (context: UIFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'didUpdateFocusInContext:withAnimationCoordinator:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure preferredContentSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'preferredContentSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function preferredFocusedView: UIView; message 'preferredFocusedView';
    function preferredFocusEnvironments: UIFocusEnvironmentProtocolProtocolPtr; message 'preferredFocusEnvironments';
    procedure setNeedsFocusUpdate; message 'setNeedsFocusUpdate';
    function shouldUpdateFocusInContext (context: UIFocusUpdateContext): boolean; message 'shouldUpdateFocusInContext:';
    function sizeForChildContentContainer_withParentContainerSize (container: UIContentContainerProtocol; parentSize: CGSize): CGSize; message 'sizeForChildContentContainer:withParentContainerSize:'; { available in 8_0 }
    procedure systemLayoutFittingSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'systemLayoutFittingSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: nullable UITraitCollectionPtr); message 'traitCollectionDidChange:'; { available in 8_0 }
    procedure updateFocusIfNeeded; message 'updateFocusIfNeeded';
    procedure viewWillTransitionToSize_withTransitionCoordinator (size: CGSize; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'viewWillTransitionToSize:withTransitionCoordinator:'; { available in 8_0 }
    procedure willTransitionToTraitCollection_withTransitionCoordinator (newCollection: UITraitCollection; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'willTransitionToTraitCollection:withTransitionCoordinator:'; { available in 8_0 }
  end;


type
  UIViewControllerRotation = objccategory external (UIViewController)
    class procedure attemptRotationToDeviceOrientation                       __TVOS_PROHIBITED; message 'attemptRotationToDeviceOrientation                       __TVOS_PROHIBITED'; { available in 5_0 }
    function shouldAutorotateToInterfaceOrientation (toInterfaceOrientation: UIInterfaceOrientation): boolean; message 'shouldAutorotateToInterfaceOrientation:'; deprecated 'in 2_0, 6_0';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_: BOOL shouldAutorotate; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: UIInterfaceOrientationMask supportedInterfaceOrientations; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: UIInterfaceOrientation preferredInterfaceOrientationForPresentation; message 'TVOS_PROHIBITED';
    {$else}
    function shouldAutorotate                       __TVOS_PROHIBITED: boolean; message 'shouldAutorotate                       __TVOS_PROHIBITED'; { available in 6_0 }
    function supportedInterfaceOrientations                       __TVOS_PROHIBITED: UIInterfaceOrientationMask; message 'supportedInterfaceOrientations                       __TVOS_PROHIBITED'; { available in 6_0 }
    function preferredInterfaceOrientationForPresentation                       __TVOS_PROHIBITED: UIInterfaceOrientation; message 'preferredInterfaceOrientationForPresentation                       __TVOS_PROHIBITED'; { available in 6_0 }
    {$endif}
    function rotatingHeaderView                                                                                                   __TVOS_PROHIBITED: nullable UIViewPtr; message 'rotatingHeaderView                                                                                                   __TVOS_PROHIBITED'; deprecated 'in 2_0,8_0, "Header views are animated along with the rest of the view hierarchy"';
    function rotatingFooterView                                                                                                   __TVOS_PROHIBITED: nullable UIViewPtr; message 'rotatingFooterView                                                                                                   __TVOS_PROHIBITED'; deprecated 'in 2_0,8_0, "Footer views are animated along with the rest of the view hierarchy"';
    function __TVOS_PROHIBITED___: UIInterfaceOrientation interfaceOrientation; message 'TVOS_PROHIBITED';
    procedure willRotateToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willRotateToInterfaceOrientation:duration:'; deprecated 'in 2_0,8_0, "Implement viewWillTransitionToSize:withTransitionCoordinator: instead"';
    procedure didRotateFromInterfaceOrientation (fromInterfaceOrientation: UIInterfaceOrientation); message 'didRotateFromInterfaceOrientation:'; deprecated 'in 2_0,8_0';
    procedure willAnimateRotationToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateRotationToInterfaceOrientation:duration:'; deprecated 'in 3_0,8_0, "Implement viewWillTransitionToSize:withTransitionCoordinator: instead"';
    procedure willAnimateFirstHalfOfRotationToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateFirstHalfOfRotationToInterfaceOrientation:duration:'; deprecated 'in 2_0, 5_0';
    procedure didAnimateFirstHalfOfRotationToInterfaceOrientation (toInterfaceOrientation: UIInterfaceOrientation); message 'didAnimateFirstHalfOfRotationToInterfaceOrientation:'; deprecated 'in 2_0, 5_0';
    procedure willAnimateSecondHalfOfRotationFromInterfaceOrientation_duration (fromInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateSecondHalfOfRotationFromInterfaceOrientation:duration:'; deprecated 'in 2_0, 5_0';
  end;

type
  UIViewControllerEditing = objccategory external (UIViewController)
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function isEditing: boolean; message 'isEditing';
    procedure setEditing_animated (editing: boolean; animated: boolean); message 'setEditing:animated:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function editButtonItem: UIBarButtonItem; message 'editButtonItem';
    {$else}
    function editButtonItem: UIBarButtonItem; message 'editButtonItem';
    {$endif}
  end;

type
  UISearchDisplayControllerSupport = objccategory external (UIViewController)
    function __TVOS_PROHIBITED_: UISearchDisplayController *searchDisplayController; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIViewControllerHierarchyInconsistencyException: NSExceptionName { available in 5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIContainerViewControllerProtectedMethods = objccategory external (UIViewController)
    function childViewControllers: __kindof UIViewController *ProtocolPtr; message 'childViewControllers';
    procedure addChildViewController (childController: UIViewController); message 'addChildViewController:'; { available in 5_0 }
    procedure removeFromParentViewController; message 'removeFromParentViewController'; { available in 5_0 }
    procedure transitionFromViewController_toViewController_duration_options_animations_completion (fromViewController: UIViewController; toViewController: UIViewController; duration: NSTimeInterval; options: UIViewAnimationOptions; animations: void (^ __nullable)(void); completion: void (^ __nullable)(BOOL finished)); message 'transitionFromViewController:toViewController:duration:options:animations:completion:'; { available in 5_0 }
    procedure beginAppearanceTransition_animated (isAppearing: boolean; animated: boolean); message 'beginAppearanceTransition:animated:'; { available starting in __MAC_NA,__IPHONE_5_0 }
    procedure endAppearanceTransition; message 'endAppearanceTransition'; { available starting in __MAC_NA,__IPHONE_5_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_: UIViewController *childViewControllerForStatusBarStyle; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: UIViewController *childViewControllerForStatusBarHidden; message 'TVOS_PROHIBITED';
    {$else}
    function childViewControllerForStatusBarStyle                       __TVOS_PROHIBITED: nullable UIViewControllerPtr; message 'childViewControllerForStatusBarStyle                       __TVOS_PROHIBITED'; { available in 7_0 }
    function childViewControllerForStatusBarHidden                       __TVOS_PROHIBITED: nullable UIViewControllerPtr; message 'childViewControllerForStatusBarHidden                       __TVOS_PROHIBITED'; { available in 7_0 }
    {$endif}
    procedure setOverrideTraitCollection_forChildViewController (collection: nullable UITraitCollectionPtr; childViewController: UIViewController); message 'setOverrideTraitCollection:forChildViewController:'; { available in 8_0 }
    function overrideTraitCollectionForChildViewController (childViewController: UIViewController): nullable UITraitCollectionPtr; message 'overrideTraitCollectionForChildViewController:'; { available in 8_0 }
  end;

type
  UIContainerViewControllerCallbacks = objccategory external (UIViewController)
    function automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers                            __TVOS_PROHIBITED: boolean; message 'automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers                            __TVOS_PROHIBITED'; deprecated 'in 5_0,6_0';
    function shouldAutomaticallyForwardRotationMethods                                                                                                                 __TVOS_PROHIBITED: boolean; message 'shouldAutomaticallyForwardRotationMethods                                                                                                                 __TVOS_PROHIBITED'; deprecated 'in 6_0,8_0, "Manually forward viewWillTransitionToSize:withTransitionCoordinator: if necessary"';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function shouldAutomaticallyForwardAppearanceMethods: boolean; message 'shouldAutomaticallyForwardAppearanceMethods';
    {$else}
    function shouldAutomaticallyForwardAppearanceMethods: boolean; message 'shouldAutomaticallyForwardAppearanceMethods'; { available in 6_0 }
    {$endif}
    procedure willMoveToParentViewController (parent: nullable UIViewControllerPtr); message 'willMoveToParentViewController:'; { available in 5_0 }
    procedure didMoveToParentViewController (parent: nullable UIViewControllerPtr); message 'didMoveToParentViewController:'; { available in 5_0 }
  end;

type
  UIStateRestoration = objccategory external (UIViewController)
    procedure setRestorationIdentifier(newValue: NSString); message 'setRestorationIdentifier:';
    function restorationIdentifier: NSString; message 'restorationIdentifier';
    procedure setRestorationClass(newValue: UIViewControllerRestorationProtocol); message 'setRestorationClass:';
    function restorationClass: UIViewControllerRestorationProtocol; message 'restorationClass';
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure decodeRestorableStateWithCoder (coder: NSCoder); message 'decodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure applicationFinishedRestoringState; message 'applicationFinishedRestoringState'; { available in 7_0 }
  end;

type
  UIConstraintBasedLayoutCoreMethods = objccategory external (UIViewController)
    procedure updateViewConstraints; message 'updateViewConstraints'; { available in 6_0 }
  end;

type
  UIViewControllerTransitioning = objccategory external (UIViewController)
    procedure setTransitioningDelegate(newValue: UIViewControllerTransitioningDelegateProtocol); message 'setTransitioningDelegate:';
    function transitioningDelegate: UIViewControllerTransitioningDelegateProtocol; message 'transitioningDelegate';
  end;

type
  UILayoutSupport = objccategory external (UIViewController)
    function topLayoutGuide: UILayoutSupportProtocol; message 'topLayoutGuide';
    function bottomLayoutGuide: UILayoutSupportProtocol; message 'bottomLayoutGuide';
  end;

type
  UIViewController_UIKeyCommand = objccategory external name 'UIKeyCommand' (UIViewController)
    procedure addKeyCommand (keyCommand: UIKeyCommand); message 'addKeyCommand:'; { available in 9_0 }
    procedure removeKeyCommand (keyCommand: UIKeyCommand); message 'removeKeyCommand:'; { available in 9_0 }
  end;

type
  NSExtensionAdditions = objccategory external (UIViewController)
    function extensionContext: NSExtensionContext; message 'extensionContext';
  end;

type
  UIAdaptivePresentations = objccategory external (UIViewController)
    function presentationController: UIPresentationController; message 'presentationController';
    function popoverPresentationController: UIPopoverPresentationController; message 'popoverPresentationController';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIViewControllerPreviewingProtocol = objcprotocol external name 'UIViewControllerPreviewing' (NSObjectProtocol)
    function previewingGestureRecognizerForFailureRelationship: UIGestureRecognizer; message 'previewingGestureRecognizerForFailureRelationship';
    function delegate: UIViewControllerPreviewingDelegateProtocol; message 'delegate';
    function sourceView: UIView; message 'sourceView';
    procedure setSourceRect(newValue: CGRect); message 'setSourceRect:';
    function sourceRect: CGRect; message 'sourceRect';
  end;

type
  UIViewControllerPreviewingDelegateProtocol = objcprotocol external name 'UIViewControllerPreviewingDelegate' (NSObjectProtocol)
    function previewingContext_viewControllerForLocation (previewingContext: UIViewControllerPreviewingProtocol; location: CGPoint): UIViewControllerPtr; message 'previewingContext:viewControllerForLocation:'; { available in 9_0 }
    procedure previewingContext_commitViewController (previewingContext: UIViewControllerPreviewingProtocol; viewControllerToCommit: UIViewController); message 'previewingContext:commitViewController:'; { available in 9_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIViewControllerPreviewingRegistration = objccategory external (UIViewController)
    function registerForPreviewingWithDelegate_sourceView (delegate: UIViewControllerPreviewingDelegateProtocol; sourceView: UIView): UIViewControllerPreviewingProtocol; message 'registerForPreviewingWithDelegate:sourceView:'; { available in 9_0 }
    procedure unregisterForPreviewingWithContext (previewing: UIViewControllerPreviewingProtocol); message 'unregisterForPreviewingWithContext:'; { available in 9_0 }
  end;


type
  UIViewController = objcclass external (NSObject)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function previewActionItems: UIPreviewActionItemProtocolProtocolPtr; message 'previewActionItems';
    {$else}
    function previewActionItems: id <UIPreviewActionItemProtocol>Ptr; message 'previewActionItems'; { available in 9_0 }
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPreviewActionItemProtocol = objcprotocol external name 'UIPreviewActionItem' (NSObjectProtocol)
    function title: NSString; message 'title';
  end;
{$endif}

{$ifdef TYPES}
type
  UIPreviewActionStyle = NSInteger;
  UIPreviewActionStylePtr = ^UIPreviewActionStyle;

const
  UIPreviewActionStyleDefault = 0;
  UIPreviewActionStyleSelected = 1;
  UIPreviewActionStyleDestructive = 2;
{$endif}

{$ifdef CLASSES}

type
  UIPreviewAction = objcclass external (NSObject, NSCopyingProtocol, UIPreviewActionItemProtocol)
  public
    procedure setHandler(newValue: OpaqueCBlock); message 'setHandler:';
    function handler: OpaqueCBlock; message 'handler';
    class function actionWithTitle_style_handler (title: NSString; style: UIPreviewActionStyle; handler_: OpaqueCBlock): instancetype; message 'actionWithTitle:style:handler:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function title: NSString; message 'title';
  end;

type
  UIPreviewActionGroup = objcclass external (NSObject, NSCopyingProtocol, UIPreviewActionItemProtocol)
  public
    class function actionGroupWithTitle_style_actions (title: NSString; style: UIPreviewActionStyle; actions: UIPreviewAction *ProtocolPtr): instancetype; message 'actionGroupWithTitle:style:actions:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function title: NSString; message 'title';
  end;
{$endif}

