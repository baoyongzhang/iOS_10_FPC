{ Parsed from UIKit.framework UITimingParameters.h }

{$ifdef TYPES}
type
  UICubicTimingParametersPtr = ^UICubicTimingParameters;
  UISpringTimingParametersPtr = ^UISpringTimingParameters;
{$endif}

{$ifdef CLASSES}

type
  UICubicTimingParameters = objcclass external (NSObject, UITimingCurveProviderProtocol)
  public
    function animationCurve: UIViewAnimationCurve; message 'animationCurve';
    function controlPoint1: CGPoint; message 'controlPoint1';
    function controlPoint2: CGPoint; message 'controlPoint2';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAnimationCurve (curve: UIViewAnimationCurve): instancetype; message 'initWithAnimationCurve:'; { NS_DESIGNATED_INITIALIZER }
    function initWithControlPoint1_controlPoint2 (point1: CGPoint; point2: CGPoint): instancetype; message 'initWithControlPoint1:controlPoint2:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function cubicTimingParameters: UICubicTimingParameters; message 'cubicTimingParameters';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function springTimingParameters: UISpringTimingParameters; message 'springTimingParameters';
    function timingCurveType: UITimingCurveType; message 'timingCurveType';
  end;

type
  UISpringTimingParameters = objcclass external (NSObject, UITimingCurveProviderProtocol)
  public
    function initialVelocity: CGVector; message 'initialVelocity';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDampingRatio_initialVelocity (ratio: CGFloat; velocity: CGVector): instancetype; message 'initWithDampingRatio:initialVelocity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithMass_stiffness_damping_initialVelocity (mass: CGFloat; stiffness: CGFloat; damping: CGFloat; velocity: CGVector): instancetype; message 'initWithMass:stiffness:damping:initialVelocity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDampingRatio (ratio: CGFloat): instancetype; message 'initWithDampingRatio:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function cubicTimingParameters: UICubicTimingParameters; message 'cubicTimingParameters';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function springTimingParameters: UISpringTimingParameters; message 'springTimingParameters';
    function timingCurveType: UITimingCurveType; message 'timingCurveType';
  end;
{$endif}

