{ Parsed from UIKit.framework UIFieldBehavior.h }

{$ifdef TYPES}
type
  UIFieldBehaviorPtr = ^UIFieldBehavior;
{$endif}

{$ifdef CLASSES}

type
  UIFieldBehavior = objcclass external (UIDynamicBehavior)
  public
    function init: instancetype; message 'init';
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: UIDynamicItemProtocolProtocolPtr; message 'items';
    procedure setPosition(newValue: CGPoint); message 'setPosition:';
    function position: CGPoint; message 'position';
    procedure setRegion(newValue: UIRegion); message 'setRegion:';
    function region: UIRegion; message 'region';
    procedure setStrength(newValue: CGFloat); message 'setStrength:';
    function strength: CGFloat; message 'strength';
    procedure setFalloff(newValue: CGFloat); message 'setFalloff:';
    function falloff: CGFloat; message 'falloff';
    procedure setMinimumRadius(newValue: CGFloat); message 'setMinimumRadius:';
    function minimumRadius: CGFloat; message 'minimumRadius';
    procedure setDirection(newValue: CGVector); message 'setDirection:';
    function direction: CGVector; message 'direction';
    procedure setSmoothness(newValue: CGFloat); message 'setSmoothness:';
    function smoothness: CGFloat; message 'smoothness';
    procedure setAnimationSpeed(newValue: CGFloat); message 'setAnimationSpeed:';
    function animationSpeed: CGFloat; message 'animationSpeed';
    class function dragField: instancetype; message 'dragField';
    class function vortexField: instancetype; message 'vortexField';
    class function radialGravityFieldWithPosition (position_: CGPoint): instancetype; message 'radialGravityFieldWithPosition:';
    class function linearGravityFieldWithVector (direction_: CGVector): instancetype; message 'linearGravityFieldWithVector:';
    class function velocityFieldWithVector (direction_: CGVector): instancetype; message 'velocityFieldWithVector:';
    class function noiseFieldWithSmoothness_animationSpeed (smoothness_: CGFloat; speed: CGFloat): instancetype; message 'noiseFieldWithSmoothness:animationSpeed:';
    class function turbulenceFieldWithSmoothness_animationSpeed (smoothness_: CGFloat; speed: CGFloat): instancetype; message 'turbulenceFieldWithSmoothness:animationSpeed:';
    class function springField: instancetype; message 'springField';
    class function electricField: instancetype; message 'electricField';
    class function magneticField: instancetype; message 'magneticField';
    class function fieldWithEvaluationBlock (block: OpaqueCBlock): instancetype; message 'fieldWithEvaluationBlock:';
  end;
{$endif}

