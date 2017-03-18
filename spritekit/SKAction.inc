{ Parsed from SpriteKit.framework SKAction.h }

{$ifdef TYPES}
type
  SKActionPtr = ^SKAction;
{$endif}

{$ifdef TYPES}
type
  SKActionTimingMode = NSInteger;
  SKActionTimingModePtr = ^SKActionTimingMode;

const
  SKActionTimingLinear = 0;
  SKActionTimingEaseIn = 1;
  SKActionTimingEaseOut = 2;
  SKActionTimingEaseInEaseOut = 3;

type
  SKActionTimingFunction = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  SKAction = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingMode(newValue: SKActionTimingMode); message 'setTimingMode:';
    function timingMode: SKActionTimingMode; message 'timingMode';
    procedure setTimingFunction(newValue: SKActionTimingFunction); message 'setTimingFunction:';
    function timingFunction: SKActionTimingFunction; message 'timingFunction';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    function reversedAction: SKAction; message 'reversedAction';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;


type
  SKActions = objccategory external (SKAction)
    class function moveBy_duration (delta: CGVector; sec: NSTimeInterval): SKAction; message 'moveBy:duration:';
    class function moveByX_y_duration (deltaX: CGFloat; deltaY: CGFloat; sec: NSTimeInterval): SKAction; message 'moveByX:y:duration:';
    class function moveTo_duration (location: CGPoint; sec: NSTimeInterval): SKAction; message 'moveTo:duration:';
    class function moveToX_duration (x: CGFloat; sec: NSTimeInterval): SKAction; message 'moveToX:duration:';
    class function moveToY_duration (y: CGFloat; sec: NSTimeInterval): SKAction; message 'moveToY:duration:';
    class function rotateByAngle_duration (radians: CGFloat; sec: NSTimeInterval): SKAction; message 'rotateByAngle:duration:';
    class function rotateToAngle_duration (radians: CGFloat; sec: NSTimeInterval): SKAction; message 'rotateToAngle:duration:';
    class function rotateToAngle_duration_shortestUnitArc (radians: CGFloat; sec: NSTimeInterval; shortestUnitArc: boolean): SKAction; message 'rotateToAngle:duration:shortestUnitArc:';
    class function resizeByWidth_height_duration (width: CGFloat; height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeByWidth:height:duration:';
    class function resizeToWidth_height_duration (width: CGFloat; height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToWidth:height:duration:';
    class function resizeToWidth_duration (width: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToWidth:duration:';
    class function resizeToHeight_duration (height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToHeight:duration:';
    class function scaleBy_duration (scale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleBy:duration:';
    class function scaleXBy_y_duration (xScale: CGFloat; yScale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleXBy:y:duration:';
    class function scaleTo_duration (scale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleTo:duration:';
    class function scaleXTo_y_duration (xScale: CGFloat; yScale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleXTo:y:duration:';
    class function scaleXTo_duration (scale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleXTo:duration:';
    class function scaleYTo_duration (scale: CGFloat; sec: NSTimeInterval): SKAction; message 'scaleYTo:duration:';
    class function scaleToSize_duration (size: CGSize; sec: NSTimeInterval): SKAction; message 'scaleToSize:duration:'; { available in 10_12, 10_0 }
    class function sequence (actions: SKAction*ProtocolPtr): SKAction; message 'sequence:';
    class function group (actions: SKAction*ProtocolPtr): SKAction; message 'group:';
    class function repeatAction_count (action: SKAction; count: NSUInteger): SKAction; message 'repeatAction:count:';
    class function repeatActionForever (action: SKAction): SKAction; message 'repeatActionForever:';
    class function fadeInWithDuration (sec: NSTimeInterval): SKAction; message 'fadeInWithDuration:';
    class function fadeOutWithDuration (sec: NSTimeInterval): SKAction; message 'fadeOutWithDuration:';
    class function fadeAlphaBy_duration (factor: CGFloat; sec: NSTimeInterval): SKAction; message 'fadeAlphaBy:duration:';
    class function fadeAlphaTo_duration (alpha: CGFloat; sec: NSTimeInterval): SKAction; message 'fadeAlphaTo:duration:';
    class function hide: SKAction; message 'hide'; { available in 10_10, 8_0 }
    class function unhide: SKAction; message 'unhide'; { available in 10_10, 8_0 }
    class function setTexture (texture: SKTexture): SKAction; message 'setTexture:'; { available in 10_10, 7_1 }
    class function setNormalTexture (texture: SKTexture): SKAction; message 'setNormalTexture:'; { available in 10_11, 9_0 }
    class function setTexture_resize (texture: SKTexture; resize: boolean): SKAction; message 'setTexture:resize:'; { available in 10_10, 7_1 }
    class function setNormalTexture_resize (texture: SKTexture; resize: boolean): SKAction; message 'setNormalTexture:resize:'; { available in 10_11, 9_0 }
    class function animateWithTextures_timePerFrame (textures: SKTexture*ProtocolPtr; sec: NSTimeInterval): SKAction; message 'animateWithTextures:timePerFrame:';
    class function animateWithNormalTextures_timePerFrame (textures: SKTexture*ProtocolPtr; sec: NSTimeInterval): SKAction; message 'animateWithNormalTextures:timePerFrame:'; { available in 10_11, 9_0 }
    class function animateWithTextures_timePerFrame_resize_restore (textures: SKTexture*ProtocolPtr; sec: NSTimeInterval; resize: boolean; restore: boolean): SKAction; message 'animateWithTextures:timePerFrame:resize:restore:';
    class function animateWithNormalTextures_timePerFrame_resize_restore (textures: SKTexture*ProtocolPtr; sec: NSTimeInterval; resize: boolean; restore: boolean): SKAction; message 'animateWithNormalTextures:timePerFrame:resize:restore:'; { available in 10_11, 9_0 }
    class function playSoundFileNamed_waitForCompletion (soundFile: NSString; wait: boolean): SKAction; message 'playSoundFileNamed:waitForCompletion:';
    class function colorizeWithColor_colorBlendFactor_duration (color: SKColorPtr; colorBlendFactor: CGFloat; sec: NSTimeInterval): SKAction; message 'colorizeWithColor:colorBlendFactor:duration:';
    class function colorizeWithColorBlendFactor_duration (colorBlendFactor: CGFloat; sec: NSTimeInterval): SKAction; message 'colorizeWithColorBlendFactor:duration:';
    class function falloffTo_duration (falloff: single; sec: NSTimeInterval): SKAction; message 'falloffTo:duration:'; { available in 10_10, 8_0 }
    class function falloffBy_duration (falloff: single; sec: NSTimeInterval): SKAction; message 'falloffBy:duration:'; { available in 10_10, 8_0 }
    class function followPath_duration (path: CGPathRef; sec: NSTimeInterval): SKAction; message 'followPath:duration:';
    class function followPath_asOffset_orientToPath_duration (path: CGPathRef; offset: boolean; orient: boolean; sec: NSTimeInterval): SKAction; message 'followPath:asOffset:orientToPath:duration:';
    class function followPath_speed (path: CGPathRef; speed_: CGFloat): SKAction; message 'followPath:speed:';
    class function followPath_asOffset_orientToPath_speed (path: CGPathRef; offset: boolean; orient: boolean; speed_: CGFloat): SKAction; message 'followPath:asOffset:orientToPath:speed:';
    class function speedBy_duration (speed_: CGFloat; sec: NSTimeInterval): SKAction; message 'speedBy:duration:';
    class function speedTo_duration (speed_: CGFloat; sec: NSTimeInterval): SKAction; message 'speedTo:duration:';
    class function reachTo_rootNode_duration (position: CGPoint; root: SKNode; sec: NSTimeInterval): SKAction; message 'reachTo:rootNode:duration:'; { available in 10_10, 8_0 }
    class function reachTo_rootNode_velocity (position: CGPoint; root: SKNode; velocity: CGFloat): SKAction; message 'reachTo:rootNode:velocity:'; { available in 10_10, 8_0 }
    class function reachToNode_rootNode_duration (node: SKNode; root: SKNode; sec: NSTimeInterval): SKAction; message 'reachToNode:rootNode:duration:'; { available in 10_10, 8_0 }
    class function reachToNode_rootNode_velocity (node: SKNode; root: SKNode; velocity: CGFloat): SKAction; message 'reachToNode:rootNode:velocity:'; { available in 10_10, 8_0 }
    class function strengthTo_duration (strength: single; sec: NSTimeInterval): SKAction; message 'strengthTo:duration:'; { available in 10_10, 8_0 }
    class function strengthBy_duration (strength: single; sec: NSTimeInterval): SKAction; message 'strengthBy:duration:'; { available in 10_10, 8_0 }
    class function waitForDuration (sec: NSTimeInterval): SKAction; message 'waitForDuration:';
    class function waitForDuration_withRange (sec: NSTimeInterval; durationRange: NSTimeInterval): SKAction; message 'waitForDuration:withRange:';
    class function removeFromParent: SKAction; message 'removeFromParent';
    class function performSelector_onTarget (selector: SEL; target: id): SKAction; message 'performSelector:onTarget:';
    class function runBlock (block: dispatch_block_t): SKAction; message 'runBlock:';
    class function runBlock_queue (block: dispatch_block_t; queue: dispatch_queue_t): SKAction; message 'runBlock:queue:';
    class function runAction_onChildWithName (action: SKAction; name: NSString): SKAction; message 'runAction:onChildWithName:';
    class function customActionWithDuration_actionBlock (seconds: NSTimeInterval; block: OpaqueCBlock): SKAction; message 'customActionWithDuration:actionBlock:';
    class function actionNamed (name: NSString): nullable SKActionPtr; message 'actionNamed:'; { available in 10_11, 9_0 }
    class function actionNamed_duration (name: NSString; sec: NSTimeInterval): nullable SKActionPtr; message 'actionNamed:duration:'; { available in 10_11, 9_0 }
    class function actionNamed_fromURL (name: NSString; url: NSURL): nullable SKActionPtr; message 'actionNamed:fromURL:'; { available in 10_11, 9_0 }
    class function actionNamed_fromURL_duration (name: NSString; url: NSURL; sec: NSTimeInterval): nullable SKActionPtr; message 'actionNamed:fromURL:duration:'; { available in 10_11, 9_0 }
  end;

type
  NodeWithPhysicsBody = objccategory external (SKAction)
    class function changeChargeTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeChargeTo:duration:'; { available in 10_11, 9_0 }
    class function changeChargeBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeChargeBy:duration:'; { available in 10_11, 9_0 }
    class function changeMassTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeMassTo:duration:'; { available in 10_11, 9_0 }
    class function changeMassBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeMassBy:duration:'; { available in 10_11, 9_0 }
    class function applyForce_duration (force: CGVector; sec: NSTimeInterval): SKAction; message 'applyForce:duration:'; { available in 10_11, 9_0 }
    class function applyForce_atPoint_duration (force: CGVector; point: CGPoint; sec: NSTimeInterval): SKAction; message 'applyForce:atPoint:duration:'; { available in 10_11, 9_0 }
    class function applyTorque_duration (torque: CGFloat; sec: NSTimeInterval): SKAction; message 'applyTorque:duration:'; { available in 10_11, 9_0 }
    class function applyImpulse_duration (impulse: CGVector; sec: NSTimeInterval): SKAction; message 'applyImpulse:duration:'; { available in 10_11, 9_0 }
    class function applyImpulse_atPoint_duration (impulse: CGVector; point: CGPoint; sec: NSTimeInterval): SKAction; message 'applyImpulse:atPoint:duration:'; { available in 10_11, 9_0 }
    class function applyAngularImpulse_duration (impulse: CGFloat; sec: NSTimeInterval): SKAction; message 'applyAngularImpulse:duration:'; { available in 10_11, 9_0 }
  end;

type
  PlaybackControl = objccategory external (SKAction)
    class function play: SKAction; message 'play'; { available in 10_11, 9_0 }
    class function pause: SKAction; message 'pause'; { available in 10_11, 9_0 }
    class function stop: SKAction; message 'stop'; { available in 10_11, 9_0 }
    class function changePlaybackRateTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changePlaybackRateTo:duration:'; { available in 10_11, 9_0 }
    class function changePlaybackRateBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changePlaybackRateBy:duration:'; { available in 10_11, 9_0 }
  end;

type
  MixerControl = objccategory external (SKAction)
    class function changeVolumeTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeVolumeTo:duration:'; { available in 10_11, 9_0 }
    class function changeVolumeBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeVolumeBy:duration:'; { available in 10_11, 9_0 }
  end;
{$endif}

