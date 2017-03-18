{ Parsed from SceneKit.framework SCNPhysicsWorld.h }

{$ifdef TYPES}
type
  SCNPhysicsWorldPtr = ^SCNPhysicsWorld;
  SCNPhysicsContactDelegateProtocolPtr = ^SCNPhysicsContactDelegateProtocol;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNPhysicsTestOption;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNPhysicsTestOption = ^NSString;
{$endif}

{$endif}
{$ifdef TYPES}
const
  SCNPhysicsTestOptionCollisionBitMask = SCNPhysicsTestCollisionBitMaskKey;
  SCNPhysicsTestOptionSearchMode = SCNPhysicsTestSearchModeKey;
  SCNPhysicsTestOptionBackfaceCulling = SCNPhysicsTestBackfaceCullingKey;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNPhysicsTestSearchMode;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNPhysicsTestSearchMode = ^NSString;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  SCNPhysicsContactDelegateProtocol = objcprotocol external name 'SCNPhysicsContactDelegate' (NSObjectProtocol)
  optional
    procedure physicsWorld_didBeginContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didBeginContact:';
    procedure physicsWorld_didUpdateContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didUpdateContact:';
    procedure physicsWorld_didEndContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didEndContact:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsWorld = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setGravity(newValue: SCNVector3); message 'setGravity:';
    function gravity: SCNVector3; message 'gravity';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setTimeStep(newValue: NSTimeInterval); message 'setTimeStep:';
    function timeStep: NSTimeInterval; message 'timeStep';
    procedure setContactDelegate(newValue: SCNPhysicsContactDelegateProtocol); message 'setContactDelegate:';
    function contactDelegate: SCNPhysicsContactDelegateProtocol; message 'contactDelegate';
    procedure addBehavior (behavior: SCNPhysicsBehavior); message 'addBehavior:';
    procedure removeBehavior (behavior: SCNPhysicsBehavior); message 'removeBehavior:';
    procedure removeAllBehaviors; message 'removeAllBehaviors';
    function allBehaviors: SCNPhysicsBehavior *ProtocolPtr; message 'allBehaviors';
    function rayTestWithSegmentFromPoint_toPoint_options (origin: SCNVector3; dest: SCNVector3; options: nullable NSDictionaryPtr): SCNHitTestResult *ProtocolPtr; message 'rayTestWithSegmentFromPoint:toPoint:options:';
    function contactTestBetweenBody_andBody_options (bodyA: SCNPhysicsBody; bodyB: SCNPhysicsBody; options: nullable NSDictionaryPtr): SCNPhysicsContact *ProtocolPtr; message 'contactTestBetweenBody:andBody:options:';
    function contactTestWithBody_options (body: SCNPhysicsBody; options: nullable NSDictionaryPtr): SCNPhysicsContact *ProtocolPtr; message 'contactTestWithBody:options:';
    function convexSweepTestWithShape_fromTransform_toTransform_options (shape: SCNPhysicsShape; from: SCNMatrix4; to_: SCNMatrix4; options: nullable NSDictionaryPtr): SCNPhysicsContact *ProtocolPtr; message 'convexSweepTestWithShape:fromTransform:toTransform:options:';
    procedure updateCollisionPairs; message 'updateCollisionPairs';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

