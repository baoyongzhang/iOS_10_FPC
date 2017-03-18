{ Parsed from SpriteKit.framework SKNode.h }

{ Types from SKNode }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  SKNodePtr = ^SKNode;
{$endif}

{$ifdef TYPES}
type
  SKBlendMode = NSInteger;
  SKBlendModePtr = ^SKBlendMode;

const
  SKBlendModeAlpha = 0;
  SKBlendModeAdd = 1;
  SKBlendModeSubtract = 2;
  SKBlendModeMultiply = 3;
  SKBlendModeMultiplyX2 = 4;
  SKBlendModeScreen = 5;
  SKBlendModeReplace = 6;
{$endif}

{$ifdef CLASSES}

type
  SKNode = objcclass external (UIResponder, NSCopyingProtocol, NSCodingProtocol, UIFocusItemProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function node: instancetype; message 'node';
    class function nodeWithFileNamed (filename: NSString): nullable instancetype; message 'nodeWithFileNamed:';
    function frame: CGRect; message 'frame';
    function calculateAccumulatedFrame: CGRect; message 'calculateAccumulatedFrame';
    procedure setPosition(newValue: CGPoint); message 'setPosition:';
    function position: CGPoint; message 'position';
    procedure setZPosition(newValue: CGFloat); message 'setZPosition:';
    function zPosition: CGFloat; message 'zPosition';
    procedure setZRotation(newValue: CGFloat); message 'setZRotation:';
    function zRotation: CGFloat; message 'zRotation';
    procedure setXScale(newValue: CGFloat); message 'setXScale:';
    function xScale: CGFloat; message 'xScale';
    procedure setYScale(newValue: CGFloat); message 'setYScale:';
    function yScale: CGFloat; message 'yScale';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    function parent: SKNode; message 'parent';
    function children: SKNode *ProtocolPtr; message 'children';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function scene: SKScene; message 'scene';
    procedure setPhysicsBody(newValue: SKPhysicsBody); message 'setPhysicsBody:';
    function physicsBody: SKPhysicsBody; message 'physicsBody';
    procedure setUserData(newValue: NSMutableDictionary); message 'setUserData:';
    function userData: NSMutableDictionary; message 'userData';
    procedure setReachConstraints(newValue: SKReachConstraints); message 'setReachConstraints:';
    function reachConstraints: SKReachConstraints; message 'reachConstraints';
    procedure setConstraints(newValue: SKConstraint *ProtocolPtr); message 'setConstraints:';
    function constraints: SKConstraint *ProtocolPtr; message 'constraints';
    procedure setScale (scale: CGFloat); message 'setScale:';
    procedure addChild (node_: SKNode); message 'addChild:';
    procedure insertChild_atIndex (node_: SKNode; index: NSInteger); message 'insertChild:atIndex:';
    procedure removeChildrenInArray (nodes: SKNode*ProtocolPtr); message 'removeChildrenInArray:';
    procedure removeAllChildren; message 'removeAllChildren';
    procedure removeFromParent; message 'removeFromParent';
    procedure moveToParent (parent_: SKNode); message 'moveToParent:'; { available in 10_11, 9_0 }
    function childNodeWithName (name_: NSString): nullable SKNodePtr; message 'childNodeWithName:';
    procedure enumerateChildNodesWithName_usingBlock (name_: NSString; block: OpaqueCBlock); message 'enumerateChildNodesWithName:usingBlock:';
    function objectForKeyedSubscript (name_: NSString): SKNode*ProtocolPtr; message 'objectForKeyedSubscript:'; { available in 10_10, 8_0 }
    function inParentHierarchy (parent_: SKNode): boolean; message 'inParentHierarchy:';
    procedure runAction (action: SKAction); message 'runAction:';
    procedure runAction_completion (action: SKAction; block: OpaqueCBlock); message 'runAction:completion:';
    procedure runAction_withKey (action: SKAction; key: NSString); message 'runAction:withKey:';
    function hasActions: boolean; message 'hasActions';
    function actionForKey (key: NSString): nullable SKActionPtr; message 'actionForKey:';
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:';
    procedure removeAllActions; message 'removeAllActions';
    function containsPoint (p: CGPoint): boolean; message 'containsPoint:';
    function nodeAtPoint (p: CGPoint): SKNode; message 'nodeAtPoint:';
    function nodesAtPoint (p: CGPoint): SKNode*ProtocolPtr; message 'nodesAtPoint:';
    function convertPoint_fromNode (point: CGPoint; node_: SKNode): CGPoint; message 'convertPoint:fromNode:';
    function convertPoint_toNode (point: CGPoint; node_: SKNode): CGPoint; message 'convertPoint:toNode:';
    function intersectsNode (node_: SKNode): boolean; message 'intersectsNode:';
    function isEqualToNode (node_: SKNode): boolean; message 'isEqualToNode:';

    { Adopted protocols }
    function canBecomeFocused: boolean; message 'canBecomeFocused';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure didUpdateFocusInContext_withAnimationCoordinator (context: UIFocusUpdateContext; coordinator: UIFocusAnimationCoordinator); message 'didUpdateFocusInContext:withAnimationCoordinator:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function preferredFocusedView: UIView; message 'preferredFocusedView';
    function preferredFocusEnvironments: UIFocusEnvironmentProtocolProtocolPtr; message 'preferredFocusEnvironments';
    procedure setNeedsFocusUpdate; message 'setNeedsFocusUpdate';
    function shouldUpdateFocusInContext (context: UIFocusUpdateContext): boolean; message 'shouldUpdateFocusInContext:';
    procedure updateFocusIfNeeded; message 'updateFocusIfNeeded';
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  SKNodeTouches = objccategory external (UITouch)
    function locationInNode (node: SKNode): CGPoint; message 'locationInNode:';
    function previousLocationInNode (node: SKNode): CGPoint; message 'previousLocationInNode:';
  end;
{$endif}

{$endif}

{$else}
{$ifdef CLASSES}

type
  SKNodeEvent = objccategory external (NSEvent)
    function locationInNode (node: SKNode): CGPoint; message 'locationInNode:';
  end;
{$endif}

{$endif}
