{ Parsed from SceneKit.framework SCNAction.h }

{$ifdef TYPES}
type
  SCNActionPtr = ^SCNAction;
  SCNActionableProtocolPtr = ^SCNActionableProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNActionTimingMode = NSInteger;
  SCNActionTimingModePtr = ^SCNActionTimingMode;

const
  SCNActionTimingModeLinear = 0;
  SCNActionTimingModeEaseIn = 1;
  SCNActionTimingModeEaseOut = 2;
  SCNActionTimingModeEaseInEaseOut = 3;

type
  SCNActionTimingFunction = OpaqueCBlock;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNActionableProtocol = objcprotocol external name 'SCNActionable' (NSObjectProtocol)
    procedure runAction (action: SCNAction); message 'runAction:'; { available in 10_10, 8_0 }
    procedure runAction_completionHandler (action: SCNAction; block: OpaqueCBlock); message 'runAction:completionHandler:'; { available in 10_10, 8_0 }
    procedure runAction_forKey (action: SCNAction; key: nullable NSStringPtr); message 'runAction:forKey:'; { available in 10_10, 8_0 }
    procedure runAction_forKey_completionHandler (action: SCNAction; key: nullable NSStringPtr; block: OpaqueCBlock); message 'runAction:forKey:completionHandler:'; { available in 10_10, 8_0 }
    function hasActions: boolean; message 'hasActions';
    function actionForKey (key: NSString): nullable SCNActionPtr; message 'actionForKey:'; { available in 10_10, 8_0 }
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:'; { available in 10_10, 8_0 }
    procedure removeAllActions; message 'removeAllActions'; { available in 10_10, 8_0 }
    function actionKeys: NSString *ProtocolPtr; message 'actionKeys';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingMode(newValue: SCNActionTimingMode); message 'setTimingMode:';
    function timingMode: SCNActionTimingMode; message 'timingMode';
    procedure setTimingFunction(newValue: SCNActionTimingFunction); message 'setTimingFunction:';
    function timingFunction: SCNActionTimingFunction; message 'timingFunction';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    function reversedAction: SCNAction; message 'reversedAction';
    class function moveByX_y_z_duration (deltaX: CGFloat; deltaY: CGFloat; deltaZ: CGFloat; duration_: NSTimeInterval): SCNAction; message 'moveByX:y:z:duration:';
    class function moveBy_duration (delta: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'moveBy:duration:';
    class function moveTo_duration (location: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'moveTo:duration:';
    class function rotateByX_y_z_duration (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval): SCNAction; message 'rotateByX:y:z:duration:';
    class function rotateToX_y_z_duration (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval): SCNAction; message 'rotateToX:y:z:duration:';
    class function rotateToX_y_z_duration_shortestUnitArc (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval; shortestUnitArc: boolean): SCNAction; message 'rotateToX:y:z:duration:shortestUnitArc:';
    class function rotateByAngle_aroundAxis_duration (angle: CGFloat; axis: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'rotateByAngle:aroundAxis:duration:';
    class function rotateToAxisAngle_duration (axisAngle: SCNVector4; duration_: NSTimeInterval): SCNAction; message 'rotateToAxisAngle:duration:';
    class function scaleBy_duration (scale: CGFloat; sec: NSTimeInterval): SCNAction; message 'scaleBy:duration:';
    class function scaleTo_duration (scale: CGFloat; sec: NSTimeInterval): SCNAction; message 'scaleTo:duration:';
    class function sequence (actions: SCNAction *ProtocolPtr): SCNAction; message 'sequence:';
    class function group (actions: SCNAction *ProtocolPtr): SCNAction; message 'group:';
    class function repeatAction_count (action: SCNAction; count: NSUInteger): SCNAction; message 'repeatAction:count:';
    class function repeatActionForever (action: SCNAction): SCNAction; message 'repeatActionForever:';
    class function fadeInWithDuration (sec: NSTimeInterval): SCNAction; message 'fadeInWithDuration:';
    class function fadeOutWithDuration (sec: NSTimeInterval): SCNAction; message 'fadeOutWithDuration:';
    class function fadeOpacityBy_duration (factor: CGFloat; sec: NSTimeInterval): SCNAction; message 'fadeOpacityBy:duration:';
    class function fadeOpacityTo_duration (opacity: CGFloat; sec: NSTimeInterval): SCNAction; message 'fadeOpacityTo:duration:';
    class function hide: SCNAction; message 'hide'; { available in 10_11, 9_0 }
    class function unhide: SCNAction; message 'unhide'; { available in 10_11, 9_0 }
    class function waitForDuration (sec: NSTimeInterval): SCNAction; message 'waitForDuration:';
    class function waitForDuration_withRange (sec: NSTimeInterval; durationRange: NSTimeInterval): SCNAction; message 'waitForDuration:withRange:';
    class function removeFromParentNode: SCNAction; message 'removeFromParentNode';
    class function runBlock (block: OpaqueCBlock): SCNAction; message 'runBlock:';
    class function runBlock_queue (block: OpaqueCBlock; queue: dispatch_queue_t): SCNAction; message 'runBlock:queue:';
    class function javaScriptActionWithScript_duration (script: NSString; seconds: NSTimeInterval): SCNAction; message 'javaScriptActionWithScript:duration:';
    class function customActionWithDuration_actionBlock (seconds: NSTimeInterval; block: OpaqueCBlock): SCNAction; message 'customActionWithDuration:actionBlock:';
    class function playAudioSource_waitForCompletion (source: SCNAudioSource; wait: boolean): SCNAction; message 'playAudioSource:waitForCompletion:'; { available in 10_11, 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

