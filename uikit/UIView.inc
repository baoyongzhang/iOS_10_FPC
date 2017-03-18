{ Parsed from UIKit.framework UIView.h }

{ Types from UIView }
{$ifdef TYPES}


{$endif}


{ Types from UIViewAnimation }
{$ifdef TYPES}


{$endif}


{ Types from UIConstraintBasedCompatibility }
{$ifdef TYPES}

{$endif}


{ Types from UIConstraintBasedLayoutLayering }
{$ifdef TYPES}


{$endif}


{ Types from UIView_UIConstraintBasedLayoutDebugging }
{$ifdef TYPES}

{$endif}


{ Types from UIConstraintBasedLayoutDebugging }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIViewPtr = ^UIView;
  UICoordinateSpaceProtocolPtr = ^UICoordinateSpaceProtocol;
{$endif}

{$ifdef TYPES}
type
  UIViewAnimationCurve = NSInteger;
  UIViewAnimationCurvePtr = ^UIViewAnimationCurve;

const
  UIViewAnimationCurveEaseInOut = 0;
  UIViewAnimationCurveEaseIn = 1;
  UIViewAnimationCurveEaseOut = 2;
  UIViewAnimationCurveLinear = 3;

type
  UIViewContentMode = NSInteger;
  UIViewContentModePtr = ^UIViewContentMode;

const
  UIViewContentModeScaleToFill = 0;
  UIViewContentModeScaleAspectFit = 1;
  UIViewContentModeScaleAspectFill = 2;
  UIViewContentModeRedraw = 3;
  UIViewContentModeCenter = 4;
  UIViewContentModeTop = 5;
  UIViewContentModeBottom = 6;
  UIViewContentModeLeft = 7;
  UIViewContentModeRight = 8;
  UIViewContentModeTopLeft = 9;
  UIViewContentModeTopRight = 10;
  UIViewContentModeBottomLeft = 11;
  UIViewContentModeBottomRight = 12;

type
  UIViewAnimationTransition = NSInteger;
  UIViewAnimationTransitionPtr = ^UIViewAnimationTransition;

const
  UIViewAnimationTransitionNone = 0;
  UIViewAnimationTransitionFlipFromLeft = 1;
  UIViewAnimationTransitionFlipFromRight = 2;
  UIViewAnimationTransitionCurlUp = 3;
  UIViewAnimationTransitionCurlDown = 4;

type
  UIViewAutoresizing = NSUInteger;
  UIViewAutoresizingPtr = ^UIViewAutoresizing;

const
  UIViewAutoresizingNone = 0;
  UIViewAutoresizingFlexibleLeftMargin = 1 shl 0;
  UIViewAutoresizingFlexibleWidth = 1 shl 1;
  UIViewAutoresizingFlexibleRightMargin = 1 shl 2;
  UIViewAutoresizingFlexibleTopMargin = 1 shl 3;
  UIViewAutoresizingFlexibleHeight = 1 shl 4;
  UIViewAutoresizingFlexibleBottomMargin = 1 shl 5;

type
  UIViewAnimationOptions = NSUInteger;
  UIViewAnimationOptionsPtr = ^UIViewAnimationOptions;

const
  UIViewAnimationOptionLayoutSubviews = 1 shl 0;
  UIViewAnimationOptionAllowUserInteraction = 1 shl 1;
  UIViewAnimationOptionBeginFromCurrentState = 1 shl 2;
  UIViewAnimationOptionRepeat = 1 shl 3;
  UIViewAnimationOptionAutoreverse = 1 shl 4;
  UIViewAnimationOptionOverrideInheritedDuration = 1 shl 5;
  UIViewAnimationOptionOverrideInheritedCurve = 1 shl 6;
  UIViewAnimationOptionAllowAnimatedContent = 1 shl 7;
  UIViewAnimationOptionShowHideTransitionViews = 1 shl 8;
  UIViewAnimationOptionOverrideInheritedOptions = 1 shl 9;
  UIViewAnimationOptionCurveEaseInOut = 0 shl 16;
  UIViewAnimationOptionCurveEaseIn = 1 shl 16;
  UIViewAnimationOptionCurveEaseOut = 2 shl 16;
  UIViewAnimationOptionCurveLinear = 3 shl 16;
  UIViewAnimationOptionTransitionNone = 0 shl 20;
  UIViewAnimationOptionTransitionFlipFromLeft = 1 shl 20;
  UIViewAnimationOptionTransitionFlipFromRight = 2 shl 20;
  UIViewAnimationOptionTransitionCurlUp = 3 shl 20;
  UIViewAnimationOptionTransitionCurlDown = 4 shl 20;
  UIViewAnimationOptionTransitionCrossDissolve = 5 shl 20;
  UIViewAnimationOptionTransitionFlipFromTop = 6 shl 20;
  UIViewAnimationOptionTransitionFlipFromBottom = 7 shl 20;

type
  UIViewKeyframeAnimationOptions = NSUInteger;
  UIViewKeyframeAnimationOptionsPtr = ^UIViewKeyframeAnimationOptions;

const
  UIViewKeyframeAnimationOptionLayoutSubviews = UIViewAnimationOptionLayoutSubviews;
  UIViewKeyframeAnimationOptionAllowUserInteraction = UIViewAnimationOptionAllowUserInteraction;
  UIViewKeyframeAnimationOptionBeginFromCurrentState = UIViewAnimationOptionBeginFromCurrentState;
  UIViewKeyframeAnimationOptionRepeat = UIViewAnimationOptionRepeat;
  UIViewKeyframeAnimationOptionAutoreverse = UIViewAnimationOptionAutoreverse;
  UIViewKeyframeAnimationOptionOverrideInheritedDuration = UIViewAnimationOptionOverrideInheritedDuration;
  UIViewKeyframeAnimationOptionOverrideInheritedOptions = UIViewAnimationOptionOverrideInheritedOptions;
  UIViewKeyframeAnimationOptionCalculationModeLinear = 0 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeDiscrete = 1 shl 10;
  UIViewKeyframeAnimationOptionCalculationModePaced = 2 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeCubic = 3 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeCubicPaced = 4 shl 10;

type
  UISystemAnimation = NSUInteger;
  UISystemAnimationPtr = ^UISystemAnimation;

const
  UISystemAnimationDelete = 0;

type
  UIViewTintAdjustmentMode = NSInteger;
  UIViewTintAdjustmentModePtr = ^UIViewTintAdjustmentMode;

const
  UIViewTintAdjustmentModeAutomatic = 0;
  UIViewTintAdjustmentModeNormal = 1;
  UIViewTintAdjustmentModeDimmed = 2;

type
  UISemanticContentAttribute = NSInteger;
  UISemanticContentAttributePtr = ^UISemanticContentAttribute;

const
  UISemanticContentAttributeUnspecified = 0;
  UISemanticContentAttributePlayback = 1;
  UISemanticContentAttributeSpatial = 2;
  UISemanticContentAttributeForceLeftToRight = 3;
  UISemanticContentAttributeForceRightToLeft = 4;
{$endif}

{$ifdef PROTOCOLS}

type
  UICoordinateSpaceProtocol = objcprotocol external name 'UICoordinateSpace' (NSObjectProtocol)
    function convertPoint_toCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:toCoordinateSpace:'; { available in 8_0 }
    function convertPoint_fromCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:fromCoordinateSpace:'; { available in 8_0 }
    function convertRect_toCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:toCoordinateSpace:'; { available in 8_0 }
    function convertRect_fromCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:fromCoordinateSpace:'; { available in 8_0 }
    function bounds: CGRect; message 'bounds';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIView = objcclass external (UIResponder, NSCodingProtocol, UIAppearanceProtocol, UIAppearanceContainerProtocol, UIDynamicItemProtocol, UITraitEnvironmentProtocol, UICoordinateSpaceProtocol, UIFocusItemProtocol, CALayerDelegateProtocol)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function layerClass: pobjc_class; message 'layerClass';
    {$else}
    class function layerClass: pobjc_class; message 'layerClass';
    {$endif}
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    function layer: CALayer; message 'layer';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function canBecomeFocused: boolean; message 'canBecomeFocused';
    {$else}
    function canBecomeFocused: boolean; message 'canBecomeFocused'; { available in 9_0 }
    {$endif}
    function isFocused: boolean; message 'isFocused';
    procedure setSemanticContentAttribute(newValue: UISemanticContentAttribute); message 'setSemanticContentAttribute:';
    function semanticContentAttribute: UISemanticContentAttribute; message 'semanticContentAttribute';
    class function userInterfaceLayoutDirectionForSemanticContentAttribute (attribute: UISemanticContentAttribute): UIUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirectionForSemanticContentAttribute:'; { available in 9_0 }
    class function userInterfaceLayoutDirectionForSemanticContentAttribute_relativeToLayoutDirection (semanticContentAttribute_: UISemanticContentAttribute; layoutDirection: UIUserInterfaceLayoutDirection): UIUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirectionForSemanticContentAttribute:relativeToLayoutDirection:'; { available in 10_0 }
    function effectiveUserInterfaceLayoutDirection: UIUserInterfaceLayoutDirection; message 'effectiveUserInterfaceLayoutDirection';

    { Adopted protocols }
    class function appearance: instancetype; message 'appearance';
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: nullable UIAppearanceContainerProtocol): instancetype; message 'appearanceForTraitCollection:whenContainedIn:'; deprecated 'in 8_0, 9_0, "Use +appearanceForTraitCollection:whenContainedInInstancesOfClasses: instead"';
    class function appearanceForTraitCollection_whenContainedInInstancesOfClasses (trait: UITraitCollection; containerTypes: Class <UIAppearanceContainerProtocol>Ptr): instancetype; message 'appearanceForTraitCollection:whenContainedInInstancesOfClasses:'; { available in 9_0 }
    class function appearanceWhenContainedIn (ContainerClass: nullable UIAppearanceContainerProtocol): instancetype; message 'appearanceWhenContainedIn:'; deprecated 'in 5_0, 9_0, "Use +appearanceWhenContainedInInstancesOfClasses: instead"';
    class function appearanceWhenContainedInInstancesOfClasses (containerTypes: Class <UIAppearanceContainerProtocol>Ptr): instancetype; message 'appearanceWhenContainedInInstancesOfClasses:'; { available in 9_0 }
    function bounds: CGRect; message 'bounds';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    function collisionBoundingPath: UIBezierPath; message 'collisionBoundingPath';
    function collisionBoundsType: UIDynamicItemCollisionBoundsType; message 'collisionBoundsType';
    function convertPoint_fromCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:fromCoordinateSpace:'; { available in 8_0 }
    function convertPoint_toCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:toCoordinateSpace:'; { available in 8_0 }
    function convertRect_fromCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:fromCoordinateSpace:'; { available in 8_0 }
    function convertRect_toCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:toCoordinateSpace:'; { available in 8_0 }
    procedure didUpdateFocusInContext_withAnimationCoordinator (context: UIFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'didUpdateFocusInContext:withAnimationCoordinator:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function preferredFocusedView: UIView; message 'preferredFocusedView';
    function preferredFocusEnvironments: UIFocusEnvironmentProtocolProtocolPtr; message 'preferredFocusEnvironments';
    procedure setNeedsFocusUpdate; message 'setNeedsFocusUpdate';
    function shouldUpdateFocusInContext (context: UIFocusUpdateContext): boolean; message 'shouldUpdateFocusInContext:';
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: nullable UITraitCollectionPtr); message 'traitCollectionDidChange:'; { available in 8_0 }
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
    procedure updateFocusIfNeeded; message 'updateFocusIfNeeded';
  end;


type
  UIViewGeometry = objccategory external (UIView)
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
    procedure setContentScaleFactor(newValue: CGFloat); message 'setContentScaleFactor:';
    function contentScaleFactor: CGFloat; message 'contentScaleFactor';
    procedure set__TVOS_PROHIBITED(newValue: BOOL multipleTouchEnabled); message 'set__TVOS_PROHIBITED:';
    function isMultipleTouchEnabled: BOOL multipleTouchEnabled; message 'isMultipleTouchEnabled';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL exclusiveTouch); message 'set__TVOS_PROHIBITED:';
    function isExclusiveTouch: BOOL exclusiveTouch; message 'isExclusiveTouch';
    function hitTest_withEvent (point: CGPoint; event: nullable UIEventPtr): nullable UIViewPtr; message 'hitTest:withEvent:';
    function pointInside_withEvent (point: CGPoint; event: nullable UIEventPtr): boolean; message 'pointInside:withEvent:';
    function convertPoint_toView (point: CGPoint; view: nullable UIViewPtr): CGPoint; message 'convertPoint:toView:';
    function convertPoint_fromView (point: CGPoint; view: nullable UIViewPtr): CGPoint; message 'convertPoint:fromView:';
    function convertRect_toView (rect: CGRect; view: nullable UIViewPtr): CGRect; message 'convertRect:toView:';
    function convertRect_fromView (rect: CGRect; view: nullable UIViewPtr): CGRect; message 'convertRect:fromView:';
    procedure setAutoresizesSubviews(newValue: boolean); message 'setAutoresizesSubviews:';
    function autoresizesSubviews: boolean; message 'autoresizesSubviews';
    procedure setAutoresizingMask(newValue: UIViewAutoresizing); message 'setAutoresizingMask:';
    function autoresizingMask: UIViewAutoresizing; message 'autoresizingMask';
    function sizeThatFits (size: CGSize): CGSize; message 'sizeThatFits:';
    procedure sizeToFit; message 'sizeToFit';
  end;

type
  UIViewHierarchy = objccategory external (UIView)
    function superview: UIView; message 'superview';
    function subviews: __kindof UIView *ProtocolPtr; message 'subviews';
    function window: UIWindow; message 'window';
    procedure removeFromSuperview; message 'removeFromSuperview';
    procedure insertSubview_atIndex (view: UIView; index: NSInteger); message 'insertSubview:atIndex:';
    procedure exchangeSubviewAtIndex_withSubviewAtIndex (index1: NSInteger; index2: NSInteger); message 'exchangeSubviewAtIndex:withSubviewAtIndex:';
    procedure addSubview (view: UIView); message 'addSubview:';
    procedure insertSubview_belowSubview (view: UIView; siblingSubview: UIView); message 'insertSubview:belowSubview:';
    procedure insertSubview_aboveSubview (view: UIView; siblingSubview: UIView); message 'insertSubview:aboveSubview:';
    procedure bringSubviewToFront (view: UIView); message 'bringSubviewToFront:';
    procedure sendSubviewToBack (view: UIView); message 'sendSubviewToBack:';
    procedure didAddSubview (subview: UIView); message 'didAddSubview:';
    procedure willRemoveSubview (subview: UIView); message 'willRemoveSubview:';
    procedure willMoveToSuperview (newSuperview: nullable UIViewPtr); message 'willMoveToSuperview:';
    procedure didMoveToSuperview; message 'didMoveToSuperview';
    procedure willMoveToWindow (newWindow: nullable UIWindowPtr); message 'willMoveToWindow:';
    procedure didMoveToWindow; message 'didMoveToWindow';
    function isDescendantOfView (view: UIView): boolean; message 'isDescendantOfView:';
    function viewWithTag (tag_: NSInteger): nullable __kindof UIViewPtr; message 'viewWithTag:';
    procedure setNeedsLayout; message 'setNeedsLayout';
    procedure layoutIfNeeded; message 'layoutIfNeeded';
    procedure layoutSubviews; message 'layoutSubviews';
    procedure setLayoutMargins(newValue: UIEdgeInsets); message 'setLayoutMargins:';
    function layoutMargins: UIEdgeInsets; message 'layoutMargins';
    procedure setPreservesSuperviewLayoutMargins(newValue: boolean); message 'setPreservesSuperviewLayoutMargins:';
    function preservesSuperviewLayoutMargins: boolean; message 'preservesSuperviewLayoutMargins';
    procedure layoutMarginsDidChange; message 'layoutMarginsDidChange'; { available in 8_0 }
    function layoutMarginsGuide: UILayoutGuide; message 'layoutMarginsGuide';
    function readableContentGuide: UILayoutGuide; message 'readableContentGuide';
  end;

type
  UIViewRendering = objccategory external (UIView)
    procedure drawRect (rect: CGRect); message 'drawRect:';
    procedure setNeedsDisplay; message 'setNeedsDisplay';
    procedure setNeedsDisplayInRect (rect: CGRect); message 'setNeedsDisplayInRect:';
    procedure setClipsToBounds(newValue: boolean); message 'setClipsToBounds:';
    function clipsToBounds: boolean; message 'clipsToBounds';
    procedure setBackgroundColor(newValue: UIColor); message 'setBackgroundColor:';
    function backgroundColor: UIColor; message 'backgroundColor';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setOpaque(newValue: boolean); message 'setOpaque:';
    function isOpaque: boolean; message 'isOpaque';
    procedure setClearsContextBeforeDrawing(newValue: boolean); message 'setClearsContextBeforeDrawing:';
    function clearsContextBeforeDrawing: boolean; message 'clearsContextBeforeDrawing';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setContentMode(newValue: UIViewContentMode); message 'setContentMode:';
    function contentMode: UIViewContentMode; message 'contentMode';
    procedure set__TVOS_PROHIBITED(newValue: CGRect contentStretch); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: CGRect contentStretch; message 'TVOS_PROHIBITED';
    procedure setMaskView(newValue: UIView); message 'setMaskView:';
    function maskView: UIView; message 'maskView';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setTintAdjustmentMode(newValue: UIViewTintAdjustmentMode); message 'setTintAdjustmentMode:';
    function tintAdjustmentMode: UIViewTintAdjustmentMode; message 'tintAdjustmentMode';
    procedure tintColorDidChange; message 'tintColorDidChange'; { available in 7_0 }
  end;

type
  UIViewAnimation = objccategory external (UIView)
    class procedure beginAnimations_context (animationID: nullable NSStringPtr; context: nullable voidPtr); message 'beginAnimations:context:';
    class procedure commitAnimations; message 'commitAnimations';
    class procedure setAnimationDelegate (delegate: nullable id); message 'setAnimationDelegate:';
    class procedure setAnimationWillStartSelector (selector: nullable SEL); message 'setAnimationWillStartSelector:';
    class procedure setAnimationDidStopSelector (selector: nullable SEL); message 'setAnimationDidStopSelector:';
    class procedure setAnimationDuration (duration: NSTimeInterval); message 'setAnimationDuration:';
    class procedure setAnimationDelay (delay: NSTimeInterval); message 'setAnimationDelay:';
    class procedure setAnimationStartDate (startDate: NSDate); message 'setAnimationStartDate:';
    class procedure setAnimationCurve (curve: UIViewAnimationCurve); message 'setAnimationCurve:';
    class procedure setAnimationRepeatCount (repeatCount: single); message 'setAnimationRepeatCount:';
    class procedure setAnimationRepeatAutoreverses (repeatAutoreverses: boolean); message 'setAnimationRepeatAutoreverses:';
    class procedure setAnimationBeginsFromCurrentState (fromCurrentState: boolean); message 'setAnimationBeginsFromCurrentState:';
    class procedure setAnimationTransition_forView_cache (transition: UIViewAnimationTransition; view: UIView; cache: boolean); message 'setAnimationTransition:forView:cache:';
    class procedure setAnimationsEnabled (enabled: boolean); message 'setAnimationsEnabled:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function areAnimationsEnabled: boolean; message 'areAnimationsEnabled';
    {$else}
    class function areAnimationsEnabled: boolean; message 'areAnimationsEnabled';
    {$endif}
    class procedure performWithoutAnimation (actionsWithoutAnimation: void (NS_NOESCAPE ^)(void)); message 'performWithoutAnimation:'; { available in 7_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function inheritedAnimationDuration: NSTimeInterval; message 'inheritedAnimationDuration';
    {$else}
    class function inheritedAnimationDuration: NSTimeInterval; message 'inheritedAnimationDuration'; { available in 9_0 }
    {$endif}
  end;

type
  UIViewAnimationWithBlocks = objccategory external (UIView)
    class procedure animateWithDuration_delay_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: void (^ __nullable)(BOOL finished)); message 'animateWithDuration:delay:options:animations:completion:'; { available in 4_0 }
    class procedure animateWithDuration_animations_completion (duration: NSTimeInterval; animations: OpaqueCBlock; completion: void (^ __nullable)(BOOL finished)); message 'animateWithDuration:animations:completion:'; { available in 4_0 }
    class procedure animateWithDuration_animations (duration: NSTimeInterval; animations: OpaqueCBlock); message 'animateWithDuration:animations:'; { available in 4_0 }
    class procedure animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; dampingRatio: CGFloat; velocity: CGFloat; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: void (^ __nullable)(BOOL finished)); message 'animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:'; { available in 7_0 }
    class procedure transitionWithView_duration_options_animations_completion (view: UIView; duration: NSTimeInterval; options: UIViewAnimationOptions; animations: void (^ __nullable)(void); completion: void (^ __nullable)(BOOL finished)); message 'transitionWithView:duration:options:animations:completion:'; { available in 4_0 }
    class procedure transitionFromView_toView_duration_options_completion (fromView: UIView; toView: UIView; duration: NSTimeInterval; options: UIViewAnimationOptions; completion: void (^ __nullable)(BOOL finished)); message 'transitionFromView:toView:duration:options:completion:'; { available in 4_0 }
    class procedure performSystemAnimation_onViews_options_animations_completion (animation: UISystemAnimation; views: __kindof UIView *ProtocolPtr; options: UIViewAnimationOptions; parallelAnimations: void (^ __nullable)(void); completion: void (^ __nullable)(BOOL finished)); message 'performSystemAnimation:onViews:options:animations:completion:'; { available in 7_0 }
  end;

type
  UIViewKeyframeAnimations = objccategory external (UIView)
    class procedure animateKeyframesWithDuration_delay_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; options: UIViewKeyframeAnimationOptions; animations: OpaqueCBlock; completion: void (^ __nullable)(BOOL finished)); message 'animateKeyframesWithDuration:delay:options:animations:completion:'; { available in 7_0 }
    class procedure addKeyframeWithRelativeStartTime_relativeDuration_animations (frameStartTime: double; frameDuration: double; animations: OpaqueCBlock); message 'addKeyframeWithRelativeStartTime:relativeDuration:animations:'; { available in 7_0 }
  end;

type
  UIViewGestureRecognizers = objccategory external (UIView)
    procedure setGestureRecognizers(newValue: __kindof UIGestureRecognizer *ProtocolPtr); message 'setGestureRecognizers:';
    function gestureRecognizers: __kindof UIGestureRecognizer *ProtocolPtr; message 'gestureRecognizers';
    procedure addGestureRecognizer (gestureRecognizer: UIGestureRecognizer); message 'addGestureRecognizer:'; { available in 3_2 }
    procedure removeGestureRecognizer (gestureRecognizer: UIGestureRecognizer); message 'removeGestureRecognizer:'; { available in 3_2 }
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:'; { available in 6_0 }
  end;

type
  UIViewMotionEffects = objccategory external (UIView)
    procedure addMotionEffect (effect: UIMotionEffect); message 'addMotionEffect:'; { available in 7_0 }
    procedure removeMotionEffect (effect: UIMotionEffect); message 'removeMotionEffect:'; { available in 7_0 }
    procedure setMotionEffects(newValue: __kindof UIMotionEffect *ProtocolPtr); message 'setMotionEffects:';
    function motionEffects: __kindof UIMotionEffect *ProtocolPtr; message 'motionEffects';
  end;
{$endif}

{$ifdef TYPES}
type
  UILayoutConstraintAxis = NSInteger;
  UILayoutConstraintAxisPtr = ^UILayoutConstraintAxis;

const
  UILayoutConstraintAxisHorizontal = 0;
  UILayoutConstraintAxisVertical = 1;
{$endif}

{$ifdef CLASSES}

type
  UIConstraintBasedLayoutInstallingConstraints = objccategory external (UIView)
    function constraints: __kindof NSLayoutConstraint *ProtocolPtr; message 'constraints';
    procedure addConstraint (constraint: NSLayoutConstraint); message 'addConstraint:'; { available in 6_0 }
    procedure addConstraints (constraints_: __kindof NSLayoutConstraint *ProtocolPtr); message 'addConstraints:'; { available in 6_0 }
    procedure removeConstraint (constraint: NSLayoutConstraint); message 'removeConstraint:'; { available in 6_0 }
    procedure removeConstraints (constraints_: __kindof NSLayoutConstraint *ProtocolPtr); message 'removeConstraints:'; { available in 6_0 }
  end;

type
  UIView_UIConstraintBasedLayoutCoreMethods = objccategory external name 'UIConstraintBasedLayoutCoreMethods' (UIView)
    procedure updateConstraintsIfNeeded; message 'updateConstraintsIfNeeded'; { available in 6_0 }
    procedure updateConstraints; message 'updateConstraints'; { available in 6_0 }
    function needsUpdateConstraints: boolean; message 'needsUpdateConstraints'; { available in 6_0 }
    procedure setNeedsUpdateConstraints; message 'setNeedsUpdateConstraints'; { available in 6_0 }
  end;

type
  UIConstraintBasedCompatibility = objccategory external (UIView)
    procedure setTranslatesAutoresizingMaskIntoConstraints(newValue: boolean); message 'setTranslatesAutoresizingMaskIntoConstraints:';
    function translatesAutoresizingMaskIntoConstraints: boolean; message 'translatesAutoresizingMaskIntoConstraints';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function requiresConstraintBasedLayout: boolean; message 'requiresConstraintBasedLayout';
    {$else}
    class function requiresConstraintBasedLayout: boolean; message 'requiresConstraintBasedLayout'; { available in 6_0 }
    {$endif}
  end;

type
  UIConstraintBasedLayoutLayering = objccategory external (UIView)
    function alignmentRectForFrame (frame: CGRect): CGRect; message 'alignmentRectForFrame:'; { available in 6_0 }
    function frameForAlignmentRect (alignmentRect: CGRect): CGRect; message 'frameForAlignmentRect:'; { available in 6_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function alignmentRectInsets: UIEdgeInsets; message 'alignmentRectInsets';
    {$else}
    function alignmentRectInsets: UIEdgeInsets; message 'alignmentRectInsets'; { available in 6_0 }
    {$endif}
    function viewForBaselineLayout                                                                                                                           __TVOS_PROHIBITED: UIView; message 'viewForBaselineLayout                                                                                                                           __TVOS_PROHIBITED'; deprecated 'in 6_0, 9_0, "Override -viewForFirstBaselineLayout or -viewForLastBaselineLayout as appropriate, instead"';
    function viewForFirstBaselineLayout: UIView; message 'viewForFirstBaselineLayout';
    function viewForLastBaselineLayout: UIView; message 'viewForLastBaselineLayout';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function intrinsicContentSize: CGSize; message 'intrinsicContentSize';
    {$else}
    function intrinsicContentSize: CGSize; message 'intrinsicContentSize'; { available in 6_0 }
    {$endif}
    procedure invalidateIntrinsicContentSize; message 'invalidateIntrinsicContentSize'; { available in 6_0 }
    function contentHuggingPriorityForAxis (axis: UILayoutConstraintAxis): UILayoutPriority; message 'contentHuggingPriorityForAxis:'; { available in 6_0 }
    procedure setContentHuggingPriority_forAxis (priority: UILayoutPriority; axis: UILayoutConstraintAxis); message 'setContentHuggingPriority:forAxis:'; { available in 6_0 }
    function contentCompressionResistancePriorityForAxis (axis: UILayoutConstraintAxis): UILayoutPriority; message 'contentCompressionResistancePriorityForAxis:'; { available in 6_0 }
    procedure setContentCompressionResistancePriority_forAxis (priority: UILayoutPriority; axis: UILayoutConstraintAxis); message 'setContentCompressionResistancePriority:forAxis:'; { available in 6_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UILayoutFittingCompressedSize: CGSize { available in 6_0 }; cvar; external;
  UILayoutFittingExpandedSize: CGSize { available in 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIConstraintBasedLayoutFittingSize = objccategory external (UIView)
    function systemLayoutSizeFittingSize (targetSize: CGSize): CGSize; message 'systemLayoutSizeFittingSize:'; { available in 6_0 }
    function systemLayoutSizeFittingSize_withHorizontalFittingPriority_verticalFittingPriority (targetSize: CGSize; horizontalFittingPriority: UILayoutPriority; verticalFittingPriority: UILayoutPriority): CGSize; message 'systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:'; { available in 8_0 }
  end;

type
  UILayoutGuideSupport = objccategory external (UIView)
    function layoutGuides: __kindof UILayoutGuide *ProtocolPtr; message 'layoutGuides';
    procedure addLayoutGuide (layoutGuide: UILayoutGuide); message 'addLayoutGuide:'; { available in 9_0 }
    procedure removeLayoutGuide (layoutGuide: UILayoutGuide); message 'removeLayoutGuide:'; { available in 9_0 }
  end;

type
  UIViewLayoutConstraintCreation = objccategory external (UIView)
    function leadingAnchor: NSLayoutXAxisAnchor; message 'leadingAnchor';
    function trailingAnchor: NSLayoutXAxisAnchor; message 'trailingAnchor';
    function leftAnchor: NSLayoutXAxisAnchor; message 'leftAnchor';
    function rightAnchor: NSLayoutXAxisAnchor; message 'rightAnchor';
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor';
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor';
    function widthAnchor: NSLayoutDimension; message 'widthAnchor';
    function heightAnchor: NSLayoutDimension; message 'heightAnchor';
    function centerXAnchor: NSLayoutXAxisAnchor; message 'centerXAnchor';
    function centerYAnchor: NSLayoutYAxisAnchor; message 'centerYAnchor';
    function firstBaselineAnchor: NSLayoutYAxisAnchor; message 'firstBaselineAnchor';
    function lastBaselineAnchor: NSLayoutYAxisAnchor; message 'lastBaselineAnchor';
  end;

type
  UIView_UIConstraintBasedLayoutDebugging = objccategory external name 'UIConstraintBasedLayoutDebugging' (UIView)
    function constraintsAffectingLayoutForAxis (axis: UILayoutConstraintAxis): __kindof NSLayoutConstraint *ProtocolPtr; message 'constraintsAffectingLayoutForAxis:'; { available in 6_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function hasAmbiguousLayout: boolean; message 'hasAmbiguousLayout';
    {$else}
    function hasAmbiguousLayout: boolean; message 'hasAmbiguousLayout'; { available in 6_0 }
    {$endif}
    procedure exerciseAmbiguityInLayout; message 'exerciseAmbiguityInLayout'; { available in 6_0 }
  end;

type
  UIConstraintBasedLayoutDebugging = objccategory external (UILayoutGuide)
    function constraintsAffectingLayoutForAxis (axis: UILayoutConstraintAxis): __kindof NSLayoutConstraint *ProtocolPtr; message 'constraintsAffectingLayoutForAxis:'; { available in 10_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function hasAmbiguousLayout: boolean; message 'hasAmbiguousLayout';
    {$else}
    function hasAmbiguousLayout: boolean; message 'hasAmbiguousLayout'; { available in 10_0 }
    {$endif}
  end;

type
  UIView_UIStateRestoration = objccategory external name 'UIStateRestoration' (UIView)
    procedure setRestorationIdentifier(newValue: NSString); message 'setRestorationIdentifier:';
    function restorationIdentifier: NSString; message 'restorationIdentifier';
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure decodeRestorableStateWithCoder (coder: NSCoder); message 'decodeRestorableStateWithCoder:'; { available in 6_0 }
  end;

type
  UIView_UISnapshotting = objccategory external name 'UISnapshotting' (UIView)
    function snapshotViewAfterScreenUpdates (afterUpdates: boolean): nullable UIViewPtr; message 'snapshotViewAfterScreenUpdates:'; { available in 7_0 }
    function resizableSnapshotViewFromRect_afterScreenUpdates_withCapInsets (rect: CGRect; afterUpdates: boolean; capInsets: UIEdgeInsets): nullable UIViewPtr; message 'resizableSnapshotViewFromRect:afterScreenUpdates:withCapInsets:'; { available in 7_0 }
    function drawViewHierarchyInRect_afterScreenUpdates (rect: CGRect; afterUpdates: boolean): boolean; message 'drawViewHierarchyInRect:afterScreenUpdates:'; { available in 7_0 }
  end;
{$endif}

