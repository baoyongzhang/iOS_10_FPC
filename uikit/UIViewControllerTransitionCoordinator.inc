{ Parsed from UIKit.framework UIViewControllerTransitionCoordinator.h }

{ Types from UIViewController_UIViewControllerTransitionCoordinator }
{$ifdef TYPES}

{$endif}


{ Types from UIViewControllerTransitionCoordinatorContextProtocol }
{$ifdef TYPES}









{$endif}


{$ifdef TYPES}
type
  UIViewControllerTransitionCoordinatorContextProtocolPtr = ^UIViewControllerTransitionCoordinatorContextProtocol;
  UIViewControllerTransitionCoordinatorProtocolPtr = ^UIViewControllerTransitionCoordinatorProtocol;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UITransitionContextViewControllerKey;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
  NS_EXTENSIBLE_STRING_ENUM = NSString *UITransitionContextViewKey;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  UITransitionContextViewControllerKey = ^NSString;
  UITransitionContextViewKey = ^NSString;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  UIViewControllerTransitionCoordinatorContextProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinatorContext' (NSObjectProtocol)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isAnimated: boolean; message 'isAnimated';
    {$else}
    function isAnimated: boolean; message 'isAnimated';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    {$else}
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function initiallyInteractive: boolean; message 'initiallyInteractive';
    {$else}
    function initiallyInteractive: boolean; message 'initiallyInteractive';
    {$endif}
    function isInterruptible: boolean; message 'isInterruptible';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isInteractive: boolean; message 'isInteractive';
    {$else}
    function isInteractive: boolean; message 'isInteractive';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isCancelled: boolean; message 'isCancelled';
    {$else}
    function isCancelled: boolean; message 'isCancelled';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function transitionDuration: NSTimeInterval; message 'transitionDuration';
    {$else}
    function transitionDuration: NSTimeInterval; message 'transitionDuration';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function percentComplete: CGFloat; message 'percentComplete';
    function completionVelocity: CGFloat; message 'completionVelocity';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    {$else}
    function percentComplete: CGFloat; message 'percentComplete';
    function completionVelocity: CGFloat; message 'completionVelocity';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    {$endif}
    function viewControllerForKey (key: UITransitionContextViewControllerKey): UIViewControllerPtr; message 'viewControllerForKey:';
    function viewForKey (key: UITransitionContextViewKey): UIViewPtr; message 'viewForKey:'; { available in 8_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function containerView: UIView; message 'containerView';
    {$else}
    function containerView: UIView; message 'containerView';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function targetTransform: CGAffineTransform; message 'targetTransform';
    {$else}
    function targetTransform: CGAffineTransform; message 'targetTransform'; { available in 8_0 }
    {$endif}
  end;

type
  UIViewControllerTransitionCoordinatorContextProtocolcontext = OpaqueType;
  TMethodUIViewControllerTransitionCoordinatorContextProtocolcontext = procedure (u: UIViewControllerTransitionCoordinatorContextProtocolcontext);
  UIViewControllerTransitionCoordinatorProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinator' (UIViewControllerTransitionCoordinatorContextProtocol)
    function animateAlongsideTransition_completion (animation: TMethodUIViewControllerTransitionCoordinatorContextProtocolcontext; completion: TMethodUIViewControllerTransitionCoordinatorContextProtocolcontext): boolean; message 'animateAlongsideTransition:completion:';
    function animateAlongsideTransitionInView_animation_completion (view: UIViewPtr; animation: TMethodUIViewControllerTransitionCoordinatorContextProtocolcontext; completion: TMethodUIViewControllerTransitionCoordinatorContextProtocolcontext): boolean; message 'animateAlongsideTransitionInView:animation:completion:';
    procedure notifyWhenInteractionEndsUsingBlock (handler: OpaqueCBlock); message 'notifyWhenInteractionEndsUsingBlock:'; deprecated 'in 7_0, 10_0,"Use notifyWhenInteractionChangesUsingBlock"';
    procedure notifyWhenInteractionChangesUsingBlock (handler: OpaqueCBlock); message 'notifyWhenInteractionChangesUsingBlock:'; { available in 10_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIViewController_UIViewControllerTransitionCoordinator = objccategory external name 'UIViewControllerTransitionCoordinator' (UIViewController)
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function transitionCoordinator: UIViewControllerTransitionCoordinatorProtocol; message 'transitionCoordinator';
    {$else}
    function transitionCoordinator: nullable UIViewControllerTransitionCoordinatorProtocol; message 'transitionCoordinator'; { available in 7_0 }
    {$endif}
  end;
{$endif}

