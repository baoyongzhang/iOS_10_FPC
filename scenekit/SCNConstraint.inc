{ Parsed from SceneKit.framework SCNConstraint.h }

{$ifdef TYPES}
type
  SCNConstraintPtr = ^SCNConstraint;
  SCNLookAtConstraintPtr = ^SCNLookAtConstraint;
  SCNBillboardConstraintPtr = ^SCNBillboardConstraint;
  SCNTransformConstraintPtr = ^SCNTransformConstraint;
  SCNIKConstraintPtr = ^SCNIKConstraint;
{$endif}

{$ifdef CLASSES}

type
  SCNConstraint = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, SCNAnimatableProtocol)
  public
    procedure set)(newValue: CGFloat influenceFactor); message 'set):';
    function ): CGFloat influenceFactor; message ')';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in macosx(10.9 }
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in macosx(10.9 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in macosx(10.10 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in macosx(10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; { available in macosx(10.12 }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  SCNLookAtConstraint = objcclass external (SCNConstraint)
  public
    class function lookAtConstraintWithTarget (target: nullable SCNNodePtr): instancetype; message 'lookAtConstraintWithTarget:';
    procedure setTarget(newValue: SCNNode); message 'setTarget:';
    function target: SCNNode; message 'target';
    function target_: nullable SCNNodePtr; message 'target';
    procedure setTarget (target__: nullable SCNNodePtr); message 'setTarget:'; { available in macosx(10.12 }
    procedure setGimbalLockEnabled(newValue: boolean); message 'setGimbalLockEnabled:';
    function gimbalLockEnabled: boolean; message 'gimbalLockEnabled';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNBillboardAxis = NSUInteger;
  SCNBillboardAxisPtr = ^SCNBillboardAxis;

const
  SCNBillboardAxisX = $1 shl 0;
  SCNBillboardAxisY = $1 shl 1;
  SCNBillboardAxisZ = $1 shl 2;
  SCNBillboardAxisAll = SCNBillboardAxisX + SCNBillboardAxisY + SCNBillboardAxisZ;
{$endif}

{$ifdef CLASSES}

type
  SCNBillboardConstraint = objcclass external (SCNConstraint)
  public
    class function billboardConstraint: instancetype; message 'billboardConstraint';
    procedure setFreeAxes(newValue: SCNBillboardAxis); message 'setFreeAxes:';
    function freeAxes: SCNBillboardAxis; message 'freeAxes';
  end;

type
  SCNTransformConstraint = objcclass external (SCNConstraint)
  public
    class function transformConstraintInWorldSpace_withBlock (world: boolean; block: OpaqueCBlock): instancetype; message 'transformConstraintInWorldSpace:withBlock:';
  end;

type
  SCNIKConstraint = objcclass external (SCNConstraint)
  public
    function initWithChainRootNode (chainRootNode: SCNNode): instancetype; message 'initWithChainRootNode:'; { available in macosx(10.11 }
    class function inverseKinematicsConstraintWithChainRootNode (chainRootNode: SCNNode): instancetype; message 'inverseKinematicsConstraintWithChainRootNode:';
    function chainRootNode: SCNNode; message 'chainRootNode';
    procedure setTargetPosition(newValue: SCNVector3); message 'setTargetPosition:';
    function targetPosition: SCNVector3; message 'targetPosition';
    procedure setMaxAllowedRotationAngle_forJoint (angle: CGFloat; node: SCNNode); message 'setMaxAllowedRotationAngle:forJoint:';
    function maxAllowedRotationAngleForJoint (node: SCNNode): CGFloat; message 'maxAllowedRotationAngleForJoint:';
  end;
{$endif}

