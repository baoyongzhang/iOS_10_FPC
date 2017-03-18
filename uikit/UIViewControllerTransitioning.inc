{ Parsed from UIKit.framework UIViewControllerTransitioning.h }

{ Types from UIViewControllerContextTransitioningProtocol }
{$ifdef TYPES}



{$endif}


{ Types from UIViewControllerInteractiveTransitioningProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIPercentDrivenInteractiveTransitionPtr = ^UIPercentDrivenInteractiveTransition;
  UIViewControllerContextTransitioningProtocolPtr = ^UIViewControllerContextTransitioningProtocol;
  UIViewControllerAnimatedTransitioningProtocolPtr = ^UIViewControllerAnimatedTransitioningProtocol;
  UIViewControllerInteractiveTransitioningProtocolPtr = ^UIViewControllerInteractiveTransitioningProtocol;
  UIViewControllerTransitioningDelegateProtocolPtr = ^UIViewControllerTransitioningDelegateProtocol;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef FUNCTIONS}
function NS_SWIFT_NAME____________(param1: from): UITransitionContextViewControllerKey  UITransitionContextFromViewControllerKey; cdecl; external; { available in 7_0 }
function NS_SWIFT_NAME_____________(param1: to): UITransitionContextViewControllerKey  UITransitionContextToViewControllerKey; cdecl; external; { available in 7_0 }
function NS_SWIFT_NAME______________(param1: from): UITransitionContextViewKey  UITransitionContextFromViewKey; cdecl; external; { available in 8_0 }
function NS_SWIFT_NAME_______________(param1: to): UITransitionContextViewKey  UITransitionContextToViewKey; cdecl; external; { available in 8_0 }
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  UITransitionContextFromViewControllerKey: UITransitionContextViewControllerKey { available in 7_0 }; cvar; external;
  UITransitionContextToViewControllerKey: UITransitionContextViewControllerKey { available in 7_0 }; cvar; external;
  UITransitionContextFromViewKey: UITransitionContextViewKey { available in 8_0 }; cvar; external;
  UITransitionContextToViewKey: UITransitionContextViewKey { available in 8_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  UIViewControllerContextTransitioningProtocol = objcprotocol external name 'UIViewControllerContextTransitioning' (NSObjectProtocol)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function containerView: UIView; message 'containerView';
    {$else}
    function containerView: UIView; message 'containerView';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isAnimated: boolean; message 'isAnimated';
    function isInteractive: boolean; message 'isInteractive';
    function transitionWasCancelled: boolean; message 'transitionWasCancelled';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    {$else}
    function isAnimated: boolean; message 'isAnimated';
    function isInteractive: boolean; message 'isInteractive';
    function transitionWasCancelled: boolean; message 'transitionWasCancelled';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    {$endif}
    procedure updateInteractiveTransition (percentComplete: CGFloat); message 'updateInteractiveTransition:';
    procedure finishInteractiveTransition; message 'finishInteractiveTransition';
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition';
    procedure pauseInteractiveTransition; message 'pauseInteractiveTransition'; { available in 10_0 }
    procedure completeTransition (didComplete: boolean); message 'completeTransition:';
    function viewControllerForKey (key: UITransitionContextViewControllerKey): nullable __kindof UIViewControllerPtr; message 'viewControllerForKey:';
    function viewForKey (key: UITransitionContextViewKey): nullable __kindof UIViewPtr; message 'viewForKey:'; { available in 8_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function targetTransform: CGAffineTransform; message 'targetTransform';
    {$else}
    function targetTransform: CGAffineTransform; message 'targetTransform'; { available in 8_0 }
    {$endif}
    function initialFrameForViewController (vc: UIViewController): CGRect; message 'initialFrameForViewController:';
    function finalFrameForViewController (vc: UIViewController): CGRect; message 'finalFrameForViewController:';
  end;

type
  UIViewControllerAnimatedTransitioningProtocol = objcprotocol external name 'UIViewControllerAnimatedTransitioning' (NSObjectProtocol)
    function transitionDuration (transitionContext: nullable UIViewControllerContextTransitioningProtocol): NSTimeInterval; message 'transitionDuration:';
    procedure animateTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'animateTransition:';
  optional
    function interruptibleAnimatorForTransition (transitionContext: UIViewControllerContextTransitioningProtocol): UIViewImplicitlyAnimatingProtocol; message 'interruptibleAnimatorForTransition:'; { available in 10_0 }
    procedure animationEnded (transitionCompleted: boolean); message 'animationEnded:';
  end;

type
  UIViewControllerInteractiveTransitioningProtocol = objcprotocol external name 'UIViewControllerInteractiveTransitioning' (NSObjectProtocol)
    procedure startInteractiveTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'startInteractiveTransition:';
  optional
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function completionSpeed: CGFloat; message 'completionSpeed';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    {$else}
    function completionSpeed: CGFloat; message 'completionSpeed';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    {$endif}
    function wantsInteractiveStart: boolean; message 'wantsInteractiveStart';
  end;

type
  UIViewControllerTransitioningDelegateProtocol = objcprotocol external name 'UIViewControllerTransitioningDelegate' (NSObjectProtocol)
  optional
    function animationControllerForPresentedController_presentingController_sourceController (presented: UIViewController; presenting: UIViewController; source: UIViewController): nullable UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForPresentedController:presentingController:sourceController:';
    function animationControllerForDismissedController (dismissed: UIViewController): nullable UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForDismissedController:';
    function interactionControllerForPresentation (animator: UIViewControllerAnimatedTransitioningProtocol): nullable UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForPresentation:';
    function interactionControllerForDismissal (animator: UIViewControllerAnimatedTransitioningProtocol): nullable UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForDismissal:';
    function presentationControllerForPresentedViewController_presentingViewController_sourceViewController (presented: UIViewController; presenting: nullable UIViewControllerPtr; source: UIViewController): nullable UIPresentationControllerPtr; message 'presentationControllerForPresentedViewController:presentingViewController:sourceViewController:'; { available in 8_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPercentDrivenInteractiveTransition = objcclass external (NSObject, UIViewControllerInteractiveTransitioningProtocol)
  public
    function duration: CGFloat; message 'duration';
    function percentComplete: CGFloat; message 'percentComplete';
    procedure setCompletionSpeed(newValue: CGFloat); message 'setCompletionSpeed:';
    function completionSpeed: CGFloat; message 'completionSpeed';
    procedure setCompletionCurve(newValue: UIViewAnimationCurve); message 'setCompletionCurve:';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    procedure setTimingCurve(newValue: UITimingCurveProviderProtocol); message 'setTimingCurve:';
    function timingCurve: UITimingCurveProviderProtocol; message 'timingCurve';
    procedure setWantsInteractiveStart(newValue: boolean); message 'setWantsInteractiveStart:';
    function wantsInteractiveStart: boolean; message 'wantsInteractiveStart';
    procedure pauseInteractiveTransition; message 'pauseInteractiveTransition'; { available in 10_0 }
    procedure updateInteractiveTransition (percentComplete_: CGFloat); message 'updateInteractiveTransition:';
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition';
    procedure finishInteractiveTransition; message 'finishInteractiveTransition';

    { Adopted protocols }
    procedure startInteractiveTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'startInteractiveTransition:';
  end;
{$endif}

