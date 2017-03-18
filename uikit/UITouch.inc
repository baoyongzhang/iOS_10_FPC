{ Parsed from UIKit.framework UITouch.h }

{$ifdef TYPES}
type
  UITouchPtr = ^UITouch;
{$endif}

{$ifdef TYPES}
type
  UITouchPhase = NSInteger;
  UITouchPhasePtr = ^UITouchPhase;

const
  UITouchPhaseBegan = 0;
  UITouchPhaseMoved = 1;
  UITouchPhaseStationary = 2;
  UITouchPhaseEnded = 3;
  UITouchPhaseCancelled = 4;

type
  UIForceTouchCapability = NSInteger;
  UIForceTouchCapabilityPtr = ^UIForceTouchCapability;

const
  UIForceTouchCapabilityUnknown = 0;
  UIForceTouchCapabilityUnavailable = 1;
  UIForceTouchCapabilityAvailable = 2;

type
  UITouchType = NSInteger;
  UITouchTypePtr = ^UITouchType;

const
  UITouchTypeDirect = 0;
  UITouchTypeIndirect = 1;
  UITouchTypeStylus = 2 { available in 9_1 };

type
  UITouchProperties = NSInteger;
  UITouchPropertiesPtr = ^UITouchProperties;

const
  UITouchPropertyForce = 1 shl 0;
  UITouchPropertyAzimuth = 1 shl 1;
  UITouchPropertyAltitude = 1 shl 2;
  UITouchPropertyLocation = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  UITouch = objcclass external (NSObject)
  public
    function timestamp_: NSTimeInterval; message 'timestamp';
    function phase: UITouchPhase; message 'phase';
    function tapCount: NSUInteger; message 'tapCount';
    function type_: UITouchType; message 'type';
    function majorRadius: CGFloat; message 'majorRadius';
    function majorRadiusTolerance: CGFloat; message 'majorRadiusTolerance';
    function window: UIWindow; message 'window';
    function view: UIView; message 'view';
    function gestureRecognizers: UIGestureRecognizer *ProtocolPtr; message 'gestureRecognizers';
    function locationInView (view_: nullable UIViewPtr): CGPoint; message 'locationInView:';
    function previousLocationInView (view_: nullable UIViewPtr): CGPoint; message 'previousLocationInView:';
    function preciseLocationInView (view_: nullable UIViewPtr): CGPoint; message 'preciseLocationInView:'; { available in 9_1 }
    function precisePreviousLocationInView (view_: nullable UIViewPtr): CGPoint; message 'precisePreviousLocationInView:'; { available in 9_1 }
    function force: CGFloat; message 'force';
    function maximumPossibleForce: CGFloat; message 'maximumPossibleForce';
    function azimuthAngleInView (view_: nullable UIViewPtr): CGFloat; message 'azimuthAngleInView:'; { available in 9_1 }
    function azimuthUnitVectorInView (view_: nullable UIViewPtr): CGVector; message 'azimuthUnitVectorInView:'; { available in 9_1 }
    function altitudeAngle: CGFloat; message 'altitudeAngle';
    function estimationUpdateIndex: NSNumber *_Nullable; message 'estimationUpdateIndex';
    function estimatedProperties: UITouchProperties; message 'estimatedProperties';
    function estimatedPropertiesExpectingUpdates: UITouchProperties; message 'estimatedPropertiesExpectingUpdates';
  end;
{$endif}

