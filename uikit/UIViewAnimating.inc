{ Parsed from UIKit.framework UIViewAnimating.h }

{$ifdef TYPES}
type
  UIViewAnimatingProtocolPtr = ^UIViewAnimatingProtocol;
  UIViewImplicitlyAnimatingProtocolPtr = ^UIViewImplicitlyAnimatingProtocol;
{$endif}

{$ifdef TYPES}
type
  UIViewAnimatingState = NSInteger;
  UIViewAnimatingStatePtr = ^UIViewAnimatingState;

const
  UIViewAnimatingStateInactive = 0;
  UIViewAnimatingStateActive = 1;
  UIViewAnimatingStateStopped = 2;

type
  UIViewAnimatingPosition = NSInteger;
  UIViewAnimatingPositionPtr = ^UIViewAnimatingPosition;

const
  UIViewAnimatingPositionEnd = 0;
  UIViewAnimatingPositionStart = 1;
  UIViewAnimatingPositionCurrent = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UIViewAnimatingProtocol = objcprotocol external name 'UIViewAnimating' (NSObjectProtocol)
    function state: UIViewAnimatingState; message 'state';
    function isRunning: boolean; message 'isRunning';
    procedure setReversed(newValue: boolean); message 'setReversed:';
    function isReversed: boolean; message 'isReversed';
    procedure setFractionComplete(newValue: CGFloat); message 'setFractionComplete:';
    function fractionComplete: CGFloat; message 'fractionComplete';
    procedure startAnimation; message 'startAnimation';
    procedure startAnimationAfterDelay (delay: NSTimeInterval); message 'startAnimationAfterDelay:';
    procedure pauseAnimation; message 'pauseAnimation';
    procedure stopAnimation (withoutFinishing: boolean); message 'stopAnimation:';
    procedure finishAnimationAtPosition (finalPosition: UIViewAnimatingPosition); message 'finishAnimationAtPosition:';
  end;

type
  UIViewImplicitlyAnimatingProtocol = objcprotocol external name 'UIViewImplicitlyAnimating' (UIViewAnimatingProtocol)
  optional
    procedure addAnimations_delayFactor (animation: OpaqueCBlock; delayFactor: CGFloat); message 'addAnimations:delayFactor:';
    procedure addAnimations (animation: OpaqueCBlock); message 'addAnimations:';
    procedure addCompletion (completion: OpaqueCBlock); message 'addCompletion:';
    procedure continueAnimationWithTimingParameters_durationFactor (parameters: nullable UITimingCurveProviderProtocol; durationFactor: CGFloat); message 'continueAnimationWithTimingParameters:durationFactor:';
  end;
{$endif}

