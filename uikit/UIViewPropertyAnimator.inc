{ Parsed from UIKit.framework UIViewPropertyAnimator.h }

{$ifdef TYPES}
type
  UIViewPropertyAnimatorPtr = ^UIViewPropertyAnimator;
{$endif}

{$ifdef CLASSES}

type
  UIViewPropertyAnimator = objcclass external (NSObject, UIViewImplicitlyAnimatingProtocol, NSCopyingProtocol)
  public
    function timingParameters: UITimingCurveProviderProtocol; message 'timingParameters';
    function duration: NSTimeInterval; message 'duration';
    function delay: NSTimeInterval; message 'delay';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setManualHitTestingEnabled(newValue: boolean); message 'setManualHitTestingEnabled:';
    function isManualHitTestingEnabled: boolean; message 'isManualHitTestingEnabled';
    procedure setInterruptible(newValue: boolean); message 'setInterruptible:';
    function isInterruptible: boolean; message 'isInterruptible';
    function initWithDuration_timingParameters (duration_: NSTimeInterval; parameters: UITimingCurveProviderProtocol): instancetype; message 'initWithDuration:timingParameters:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDuration_curve_animations (duration_: NSTimeInterval; curve: UIViewAnimationCurve; animations: void (^ __nullable)(void)): instancetype; message 'initWithDuration:curve:animations:';
    function initWithDuration_controlPoint1_controlPoint2_animations (duration_: NSTimeInterval; point1: CGPoint; point2: CGPoint; animations: void (^ __nullable)(void)): instancetype; message 'initWithDuration:controlPoint1:controlPoint2:animations:';
    function initWithDuration_dampingRatio_animations (duration_: NSTimeInterval; ratio: CGFloat; animations: void (^ __nullable)(void)): instancetype; message 'initWithDuration:dampingRatio:animations:';
    class function runningPropertyAnimatorWithDuration_delay_options_animations_completion (duration_: NSTimeInterval; delay_: NSTimeInterval; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: void (^ __nullable)(UIViewAnimatingPosition finalPosition)): instancetype; message 'runningPropertyAnimatorWithDuration:delay:options:animations:completion:';
    procedure addAnimations_delayFactor (animation: OpaqueCBlock; delayFactor: CGFloat); message 'addAnimations:delayFactor:';
    procedure addAnimations (animation: OpaqueCBlock); message 'addAnimations:';
    procedure addCompletion (completion: OpaqueCBlock); message 'addCompletion:';
    procedure continueAnimationWithTimingParameters_durationFactor (parameters: nullable UITimingCurveProviderProtocol; durationFactor: CGFloat); message 'continueAnimationWithTimingParameters:durationFactor:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure finishAnimationAtPosition (finalPosition: UIViewAnimatingPosition); message 'finishAnimationAtPosition:';
    procedure setFractionComplete(newValue: CGFloat); message 'setFractionComplete:';
    function fractionComplete: CGFloat; message 'fractionComplete';
    procedure pauseAnimation; message 'pauseAnimation';
    procedure setReversed(newValue: boolean); message 'setReversed:';
    function isReversed: boolean; message 'isReversed';
    function isRunning: boolean; message 'isRunning';
    procedure startAnimation; message 'startAnimation';
    procedure startAnimationAfterDelay (delay: NSTimeInterval); message 'startAnimationAfterDelay:';
    function state: UIViewAnimatingState; message 'state';
    procedure stopAnimation (withoutFinishing: boolean); message 'stopAnimation:';
  end;
{$endif}

