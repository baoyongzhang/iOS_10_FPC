{ Parsed from SceneKit.framework SCNNode.h }

{$ifdef TYPES}
type
  SCNNodePtr = ^SCNNode;
  SCNNodeRendererDelegateProtocolPtr = ^SCNNodeRendererDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNModelTransform: NSString; cvar; external;
  SCNViewTransform: NSString; cvar; external;
  SCNProjectionTransform: NSString; cvar; external;
  SCNNormalTransform: NSString; cvar; external;
  SCNModelViewTransform: NSString; cvar; external;
  SCNModelViewProjectionTransform: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNMovabilityHint = NSInteger;
  SCNMovabilityHintPtr = ^SCNMovabilityHint;

const
  SCNMovabilityHintFixed = 0;
  SCNMovabilityHintMovable = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNNode = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, SCNAnimatableProtocol, SCNActionableProtocol, SCNBoundingVolumeProtocol)
  public
    class function node: instancetype; message 'node';
    class function nodeWithGeometry (geometry: nullable SCNGeometryPtr): SCNNode; message 'nodeWithGeometry:';
    function clone: instancetype; message 'clone';
    function flattenedClone                           ): instancetype; message 'flattenedClone                           )'; { available in macosx(10.9 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setLight(newValue: SCNLight); message 'setLight:';
    function light: SCNLight; message 'light';
    procedure setCamera(newValue: SCNCamera); message 'setCamera:';
    function camera: SCNCamera; message 'camera';
    procedure setGeometry(newValue: SCNGeometry); message 'setGeometry:';
    function geometry: SCNGeometry; message 'geometry';
    procedure set)(newValue: SCNSkinner *skinner); message 'set):';
    function ): SCNSkinner *skinner; message ')';
    procedure set)_(newValue: SCNMorpher *morpher); message 'set):';
    function )_: SCNMorpher *morpher; message ')';
    procedure setTransform(newValue: SCNMatrix4); message 'setTransform:';
    function transform: SCNMatrix4; message 'transform';
    procedure setPosition(newValue: SCNVector3); message 'setPosition:';
    function position: SCNVector3; message 'position';
    procedure setRotation(newValue: SCNVector4); message 'setRotation:';
    function rotation: SCNVector4; message 'rotation';
    procedure set)__(newValue: SCNQuaternion orientation); message 'set):';
    function )__: SCNQuaternion orientation; message ')';
    procedure set)___(newValue: SCNVector3 eulerAngles); message 'set):';
    function )___: SCNVector3 eulerAngles; message ')';
    procedure setScale(newValue: SCNVector3); message 'setScale:';
    function scale: SCNVector3; message 'scale';
    procedure setPivot(newValue: SCNMatrix4); message 'setPivot:';
    function pivot: SCNMatrix4; message 'pivot';
    function worldTransform: SCNMatrix4; message 'worldTransform';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setOpacity(newValue: CGFloat); message 'setOpacity:';
    function opacity: CGFloat; message 'opacity';
    procedure setRenderingOrder(newValue: NSInteger); message 'setRenderingOrder:';
    function renderingOrder: NSInteger; message 'renderingOrder';
    procedure set)____(newValue: BOOL castsShadow); message 'set):';
    function )____: BOOL castsShadow; message ')';
    procedure setMovabilityHint(newValue: SCNMovabilityHint ios(10.0),); message 'setMovabilityHint:';
    function movabilityHint: SCNMovabilityHint ios(10.0),; message 'movabilityHint';
    procedure setTvos(10.0))(newValue: SCNMovabilityHint ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0)): SCNMovabilityHint ios(10.0),; message 'tvos(10.0))';
    function parentNode: SCNNode; message 'parentNode';
    function childNodes: SCNNode *ProtocolPtr; message 'childNodes';
    procedure addChildNode (child: SCNNode); message 'addChildNode:';
    procedure insertChildNode_atIndex (child: SCNNode; index: NSUInteger); message 'insertChildNode:atIndex:';
    procedure removeFromParentNode; message 'removeFromParentNode';
    procedure replaceChildNode_with (oldChild: SCNNode; newChild: SCNNode); message 'replaceChildNode:with:';
    function childNodeWithName_recursively (name_: NSString; recursively: boolean): nullable SCNNodePtr; message 'childNodeWithName:recursively:';
    function childNodesPassingTest (predicate: OpaqueCBlock): SCNNode *ProtocolPtr; message 'childNodesPassingTest:';
    procedure enumerateChildNodesUsingBlock (block: OpaqueCBlock); message 'enumerateChildNodesUsingBlock:'; { available in macosx(10.10 }
    procedure enumerateHierarchyUsingBlock (block: OpaqueCBlock); message 'enumerateHierarchyUsingBlock:'; { available in macosx(10.12 }
    function convertPosition_toNode (position_: SCNVector3; node_: nullable SCNNodePtr): SCNVector3; message 'convertPosition:toNode:'; { available in macosx(10.9 }
    function convertPosition_fromNode (position_: SCNVector3; node_: nullable SCNNodePtr): SCNVector3; message 'convertPosition:fromNode:'; { available in macosx(10.9 }
    function convertTransform_toNode (transform_: SCNMatrix4; node_: nullable SCNNodePtr): SCNMatrix4; message 'convertTransform:toNode:'; { available in macosx(10.9 }
    function convertTransform_fromNode (transform_: SCNMatrix4; node_: nullable SCNNodePtr): SCNMatrix4; message 'convertTransform:fromNode:'; { available in macosx(10.9 }
    procedure set)_____(newValue: SCNPhysicsBody *physicsBody); message 'set):';
    function )_____: SCNPhysicsBody *physicsBody; message ')';
    procedure set)______(newValue: SCNPhysicsField *physicsField); message 'set):';
    function )______: SCNPhysicsField *physicsField; message ')';
    procedure set)_______(newValue: SCNConstraint *Protocol *constraints); message 'set):';
    function )_______: SCNConstraint *Protocol *constraints; message ')';
    procedure set__WATCHOS_PROHIBITED(newValue: CIFilter *Protocol *filters )); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: CIFilter *Protocol *filters ); message 'WATCHOS_PROHIBITED';
    function presentationNode: SCNNode; message 'presentationNode';
    procedure set)________(newValue: BOOL paused); message 'set):';
    function isPaused: BOOL paused; message 'isPaused';
    procedure setRendererDelegate(newValue: SCNNodeRendererDelegateProtocol); message 'setRendererDelegate:';
    function rendererDelegate: SCNNodeRendererDelegateProtocol; message 'rendererDelegate';
    function hitTestWithSegmentFromPoint_toPoint_options (pointA: SCNVector3; pointB: SCNVector3; options: nullable NSDictionaryPtr): SCNHitTestResult *ProtocolPtr; message 'hitTestWithSegmentFromPoint:toPoint:options:'; { available in macosx(10.9 }
    procedure set)_________(newValue: NSUInteger categoryBitMask); message 'set):';
    function )________: NSUInteger categoryBitMask; message ')';

    { Adopted protocols }
    function actionForKey (key: NSString): nullable SCNActionPtr; message 'actionForKey:'; { available in 10_10, 8_0 }
    function actionKeys: NSString *ProtocolPtr; message 'actionKeys';
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function getBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr): boolean; message 'getBoundingBoxMin:max:';
    function getBoundingSphereCenter_radius (center: nullable SCNVector3Ptr; radius: nullable CGFloatPtr): boolean; message 'getBoundingSphereCenter:radius:';
    function hasActions: boolean; message 'hasActions';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in macosx(10.9 }
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in macosx(10.9 }
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:'; { available in 10_10, 8_0 }
    procedure removeAllActions; message 'removeAllActions'; { available in 10_10, 8_0 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in macosx(10.10 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in macosx(10.9 }
    procedure runAction (action: SCNAction); message 'runAction:'; { available in 10_10, 8_0 }
    procedure runAction_completionHandler (action: SCNAction; block: OpaqueCBlock); message 'runAction:completionHandler:'; { available in 10_10, 8_0 }
    procedure runAction_forKey (action: SCNAction; key: nullable NSStringPtr); message 'runAction:forKey:'; { available in 10_10, 8_0 }
    procedure runAction_forKey_completionHandler (action: SCNAction; key: nullable NSStringPtr; block: OpaqueCBlock); message 'runAction:forKey:completionHandler:'; { available in 10_10, 8_0 }
    procedure setBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macosx(10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; { available in macosx(10.12 }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNNodeRendererDelegateProtocol = objcprotocol external name 'SCNNodeRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderNode_renderer_arguments (node: SCNNode; renderer: SCNRenderer; arguments: NSDictionary); message 'renderNode:renderer:arguments:';
  end;
{$endif}

