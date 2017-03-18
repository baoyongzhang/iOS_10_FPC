{ Parsed from SceneKit.framework SCNPhysicsBody.h }

{$ifdef TYPES}
type
  SCNPhysicsBodyPtr = ^SCNPhysicsBody;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsBodyType = NSInteger;
  SCNPhysicsBodyTypePtr = ^SCNPhysicsBodyType;

const
  SCNPhysicsBodyTypeStatic = 0;
  SCNPhysicsBodyTypeDynamic = 1;
  SCNPhysicsBodyTypeKinematic = 2;

type
  SCNPhysicsCollisionCategory = NSUInteger;
  SCNPhysicsCollisionCategoryPtr = ^SCNPhysicsCollisionCategory;

const
  SCNPhysicsCollisionCategoryDefault = 1 shl 0;
  SCNPhysicsCollisionCategoryStatic = 1 shl 1;
  SCNPhysicsCollisionCategoryAll = not(0)UL;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsBody = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function staticBody: instancetype; message 'staticBody';
    class function dynamicBody: instancetype; message 'dynamicBody';
    class function kinematicBody: instancetype; message 'kinematicBody';
    class function bodyWithType_shape (type_: SCNPhysicsBodyType; shape: nullable SCNPhysicsShapePtr): instancetype; message 'bodyWithType:shape:';
    procedure setType(newValue: SCNPhysicsBodyType); message 'setType:';
    function type_: SCNPhysicsBodyType; message 'type';
    procedure setMass(newValue: CGFloat); message 'setMass:';
    function mass: CGFloat; message 'mass';
    procedure setMomentOfInertia(newValue: SCNVector3); message 'setMomentOfInertia:';
    function momentOfInertia: SCNVector3; message 'momentOfInertia';
    procedure setIos(9.0))(newValue: SCNVector3); message 'setIos(9.0)):';
    function ios(9.0)): SCNVector3; message 'ios(9.0))';
    procedure setUsesDefaultMomentOfInertia(newValue: boolean); message 'setUsesDefaultMomentOfInertia:';
    function usesDefaultMomentOfInertia: boolean; message 'usesDefaultMomentOfInertia';
    procedure setIos(9.0))_(newValue: boolean); message 'setIos(9.0)):';
    function ios(9.0))_: boolean; message 'ios(9.0))';
    procedure setCharge(newValue: CGFloat); message 'setCharge:';
    function charge: CGFloat; message 'charge';
    procedure setFriction(newValue: CGFloat); message 'setFriction:';
    function friction: CGFloat; message 'friction';
    procedure setRestitution(newValue: CGFloat); message 'setRestitution:';
    function restitution: CGFloat; message 'restitution';
    procedure setRollingFriction(newValue: CGFloat); message 'setRollingFriction:';
    function rollingFriction: CGFloat; message 'rollingFriction';
    procedure setPhysicsShape(newValue: SCNPhysicsShape); message 'setPhysicsShape:';
    function physicsShape: SCNPhysicsShape; message 'physicsShape';
    function isResting: boolean; message 'isResting';
    procedure setAllowsResting(newValue: boolean); message 'setAllowsResting:';
    function allowsResting: boolean; message 'allowsResting';
    procedure setVelocity(newValue: SCNVector3); message 'setVelocity:';
    function velocity: SCNVector3; message 'velocity';
    procedure setAngularVelocity(newValue: SCNVector4); message 'setAngularVelocity:';
    function angularVelocity: SCNVector4; message 'angularVelocity';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setAngularDamping(newValue: CGFloat); message 'setAngularDamping:';
    function angularDamping: CGFloat; message 'angularDamping';
    procedure setVelocityFactor(newValue: SCNVector3); message 'setVelocityFactor:';
    function velocityFactor: SCNVector3; message 'velocityFactor';
    procedure setAngularVelocityFactor(newValue: SCNVector3); message 'setAngularVelocityFactor:';
    function angularVelocityFactor: SCNVector3; message 'angularVelocityFactor';
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:';
    function categoryBitMask: NSUInteger; message 'categoryBitMask';
    procedure setCollisionBitMask(newValue: NSUInteger); message 'setCollisionBitMask:';
    function collisionBitMask: NSUInteger; message 'collisionBitMask';
    procedure setContactTestBitMask(newValue: NSUInteger); message 'setContactTestBitMask:';
    function contactTestBitMask: NSUInteger; message 'contactTestBitMask';
    procedure setIos(9.0))__(newValue: NSUInteger); message 'setIos(9.0)):';
    function ios(9.0))__: NSUInteger; message 'ios(9.0))';
    procedure setAffectedByGravity(newValue: boolean); message 'setAffectedByGravity:';
    function isAffectedByGravity: boolean; message 'isAffectedByGravity';
    procedure setIos(9.0))___(newValue: boolean); message 'setIos(9.0)):';
    function isAffectedByGravity_: boolean; message 'isAffectedByGravity';
    procedure applyForce_impulse (direction: SCNVector3; impulse: boolean); message 'applyForce:impulse:';
    procedure applyForce_atPosition_impulse (direction: SCNVector3; position: SCNVector3; impulse: boolean); message 'applyForce:atPosition:impulse:';
    procedure applyTorque_impulse (torque: SCNVector4; impulse: boolean); message 'applyTorque:impulse:';
    procedure clearAllForces; message 'clearAllForces';
    procedure resetTransform; message 'resetTransform';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

