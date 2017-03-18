{ Parsed from WatchKit.framework WKInterfaceSKScene.h }

{$ifdef TYPES}
type
  WKInterfaceSKScenePtr = ^WKInterfaceSKScene;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSKScene = objcclass external (WKInterfaceObject)
  public
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
    procedure presentScene (scene: nullable SKScenePtr); message 'presentScene:';
    procedure presentScene_transition (scene: SKScene; transition: SKTransition); message 'presentScene:transition:';
    function scene: SKScene; message 'scene';
    function textureFromNode (node: SKNode): nullable SKTexturePtr; message 'textureFromNode:';
    function textureFromNode_crop (node: SKNode; crop: CGRect): nullable SKTexturePtr; message 'textureFromNode:crop:';
  end;
{$endif}

