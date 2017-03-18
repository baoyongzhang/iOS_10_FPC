{ Parsed from SpriteKit.framework SK3DNode.h }

{$ifdef TYPES}
type
  SK3DNodePtr = ^SK3DNode;
{$endif}

{$ifdef CLASSES}

type
  SK3DNode = objcclass external (SKNode)
  public
    function initWithViewportSize (viewportSize: CGSize): instancetype; message 'initWithViewportSize:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function nodeWithViewportSize (viewportSize: CGSize): instancetype; message 'nodeWithViewportSize:';
    procedure setViewportSize(newValue: CGSize); message 'setViewportSize:';
    function viewportSize: CGSize; message 'viewportSize';
    procedure setScnScene(newValue: SCNScene); message 'setScnScene:';
    function scnScene: SCNScene; message 'scnScene';
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:';
    function sceneTime: NSTimeInterval; message 'sceneTime';
    function hitTest_options (point: CGPoint; options: nullable NSDictionaryPtr): SCNHitTestResult *ProtocolPtr; message 'hitTest:options:';
    function projectPoint (point: vector_float3): vector_float3; message 'projectPoint:';
    function unprojectPoint (point: vector_float3): vector_float3; message 'unprojectPoint:';
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
  end;
{$endif}

