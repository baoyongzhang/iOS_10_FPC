{ Parsed from UIKit.framework UISearchController.h }

{$ifdef TYPES}
type
  UISearchControllerPtr = ^UISearchController;
  UISearchControllerDelegateProtocolPtr = ^UISearchControllerDelegateProtocol;
  UISearchResultsUpdatingProtocolPtr = ^UISearchResultsUpdatingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UISearchControllerDelegateProtocol = objcprotocol external name 'UISearchControllerDelegate' (NSObjectProtocol)
  optional
    procedure willPresentSearchController (searchController: UISearchController); message 'willPresentSearchController:';
    procedure didPresentSearchController (searchController: UISearchController); message 'didPresentSearchController:';
    procedure willDismissSearchController (searchController: UISearchController); message 'willDismissSearchController:';
    procedure didDismissSearchController (searchController: UISearchController); message 'didDismissSearchController:';
    procedure presentSearchController (searchController: UISearchController); message 'presentSearchController:';
  end;

type
  UISearchResultsUpdatingProtocol = objcprotocol external name 'UISearchResultsUpdating' (NSObjectProtocol)
  required
    procedure updateSearchResultsForSearchController (searchController: UISearchController); message 'updateSearchResultsForSearchController:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UISearchController = objcclass external (UIViewController, UIViewControllerTransitioningDelegateProtocol, UIViewControllerAnimatedTransitioningProtocol)
  public
    function initWithSearchResultsController (searchResultsController: nullable UIViewControllerPtr): instancetype; message 'initWithSearchResultsController:';
    procedure setSearchResultsUpdater(newValue: UISearchResultsUpdatingProtocol); message 'setSearchResultsUpdater:';
    function searchResultsUpdater: UISearchResultsUpdatingProtocol; message 'searchResultsUpdater';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setDelegate(newValue: UISearchControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UISearchControllerDelegateProtocol; message 'delegate';
    procedure set__TVOS_PROHIBITED(newValue: BOOL dimsBackgroundDuringPresentation); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL dimsBackgroundDuringPresentation; message 'TVOS_PROHIBITED';
    procedure setObscuresBackgroundDuringPresentation(newValue: boolean); message 'setObscuresBackgroundDuringPresentation:';
    function obscuresBackgroundDuringPresentation: boolean; message 'obscuresBackgroundDuringPresentation';
    procedure setHidesNavigationBarDuringPresentation(newValue: boolean); message 'setHidesNavigationBarDuringPresentation:';
    function hidesNavigationBarDuringPresentation: boolean; message 'hidesNavigationBarDuringPresentation';
    function searchResultsController: UIViewController; message 'searchResultsController';
    function searchBar: UISearchBar; message 'searchBar';

    { Adopted protocols }
    procedure animateTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'animateTransition:';
    function animationControllerForDismissedController (dismissed: UIViewController): nullable UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForDismissedController:';
    function animationControllerForPresentedController_presentingController_sourceController (presented: UIViewController; presenting: UIViewController; source: UIViewController): nullable UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForPresentedController:presentingController:sourceController:';
    procedure animationEnded (transitionCompleted: boolean); message 'animationEnded:';
    function interactionControllerForDismissal (animator: UIViewControllerAnimatedTransitioningProtocol): nullable UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForDismissal:';
    function interactionControllerForPresentation (animator: UIViewControllerAnimatedTransitioningProtocol): nullable UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForPresentation:';
    function interruptibleAnimatorForTransition (transitionContext: UIViewControllerContextTransitioningProtocol): UIViewImplicitlyAnimatingProtocol; message 'interruptibleAnimatorForTransition:'; { available in 10_0 }
    function presentationControllerForPresentedViewController_presentingViewController_sourceViewController (presented: UIViewController; presenting: nullable UIViewControllerPtr; source: UIViewController): nullable UIPresentationControllerPtr; message 'presentationControllerForPresentedViewController:presentingViewController:sourceViewController:'; { available in 8_0 }
    function transitionDuration (transitionContext: nullable UIViewControllerContextTransitioningProtocol): NSTimeInterval; message 'transitionDuration:';
  end;
{$endif}

