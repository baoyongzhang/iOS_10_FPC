{ Parsed from UIKit.framework UIPresentationController.h }

{ Types from UIPresentationController }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  UIPresentationControllerPtr = ^UIPresentationController;
  UIAdaptivePresentationControllerDelegateProtocolPtr = ^UIAdaptivePresentationControllerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAdaptivePresentationControllerDelegateProtocol = objcprotocol external name 'UIAdaptivePresentationControllerDelegate' (NSObjectProtocol)
  optional
    function adaptivePresentationStyleForPresentationController (controller: UIPresentationController): UIModalPresentationStyle; message 'adaptivePresentationStyleForPresentationController:';
    function adaptivePresentationStyleForPresentationController_traitCollection (controller: UIPresentationController; traitCollection: UITraitCollection): UIModalPresentationStyle; message 'adaptivePresentationStyleForPresentationController:traitCollection:'; { available in 8_3 }
    function presentationController_viewControllerForAdaptivePresentationStyle (controller: UIPresentationController; style: UIModalPresentationStyle): nullable UIViewControllerPtr; message 'presentationController:viewControllerForAdaptivePresentationStyle:';
    procedure presentationController_willPresentWithAdaptiveStyle_transitionCoordinator (presentationController: UIPresentationController; style: UIModalPresentationStyle; transitionCoordinator: nullable UIViewControllerTransitionCoordinatorProtocol); message 'presentationController:willPresentWithAdaptiveStyle:transitionCoordinator:'; { available in 8_3 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPresentationController = objcclass external (NSObject, UIAppearanceContainerProtocol, UITraitEnvironmentProtocol, UIContentContainerProtocol, UIFocusEnvironmentProtocol)
  public
    function presentingViewController: UIViewController; message 'presentingViewController';
    function presentedViewController: UIViewController; message 'presentedViewController';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    function containerView: UIView; message 'containerView';
    procedure setDelegate(newValue: UIAdaptivePresentationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIAdaptivePresentationControllerDelegateProtocol; message 'delegate';
    function initWithPresentedViewController_presentingViewController (presentedViewController_: UIViewController; presentingViewController_: nullable UIViewControllerPtr): instancetype; message 'initWithPresentedViewController:presentingViewController:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function adaptivePresentationStyle: UIModalPresentationStyle; message 'adaptivePresentationStyle';
    {$else}
    function adaptivePresentationStyle: UIModalPresentationStyle; message 'adaptivePresentationStyle';
    {$endif}
    function adaptivePresentationStyleForTraitCollection (traitCollection: UITraitCollection): UIModalPresentationStyle; message 'adaptivePresentationStyleForTraitCollection:'; { available in 8_3 }
    procedure containerViewWillLayoutSubviews; message 'containerViewWillLayoutSubviews';
    procedure containerViewDidLayoutSubviews; message 'containerViewDidLayoutSubviews';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function presentedView: UIView; message 'presentedView';
    function frameOfPresentedViewInContainerView: CGRect; message 'frameOfPresentedViewInContainerView';
    function shouldPresentInFullscreen: boolean; message 'shouldPresentInFullscreen';
    function shouldRemovePresentersView: boolean; message 'shouldRemovePresentersView';
    {$else}
    function presentedView: nullable UIViewPtr; message 'presentedView';
    function frameOfPresentedViewInContainerView: CGRect; message 'frameOfPresentedViewInContainerView';
    function shouldPresentInFullscreen: boolean; message 'shouldPresentInFullscreen';
    function shouldRemovePresentersView: boolean; message 'shouldRemovePresentersView';
    {$endif}
    procedure presentationTransitionWillBegin; message 'presentationTransitionWillBegin';
    procedure presentationTransitionDidEnd (completed_: boolean); message 'presentationTransitionDidEnd:';
    procedure dismissalTransitionWillBegin; message 'dismissalTransitionWillBegin';
    procedure dismissalTransitionDidEnd (completed_: boolean); message 'dismissalTransitionDidEnd:';
    procedure setOverrideTraitCollection(newValue: UITraitCollection); message 'setOverrideTraitCollection:';
    function overrideTraitCollection: UITraitCollection; message 'overrideTraitCollection';

    { Adopted protocols }
    procedure didUpdateFocusInContext_withAnimationCoordinator (context: UIFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'didUpdateFocusInContext:withAnimationCoordinator:';
    function preferredContentSize: CGSize; message 'preferredContentSize';
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
{$endif}

