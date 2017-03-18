{ Parsed from SceneKit.framework SCNSceneRenderer.h }

{ Types from SCNSceneRendererProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNSceneRendererProtocolPtr = ^SCNSceneRendererProtocol;
  SCNSceneRendererDelegateProtocolPtr = ^SCNSceneRendererDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNAntialiasingMode = NSUInteger;
  SCNAntialiasingModePtr = ^SCNAntialiasingMode;

const
  SCNAntialiasingModeNone = 0;
  SCNAntialiasingModeMultisampling2X = 1;
  SCNAntialiasingModeMultisampling4X = 2;

type
  SCNRenderingAPI = NSUInteger;
  SCNRenderingAPIPtr = ^SCNRenderingAPI;

const
  SCNRenderingAPIMetal = 0;
  SCNRenderingAPIOpenGLES2 = 1;

type
  SCNDebugOptions = NSUInteger;
  SCNDebugOptionsPtr = ^SCNDebugOptions;

const
  SCNDebugOptionNone = 0;
  SCNDebugOptionShowPhysicsShapes = 1 shl 0;
  SCNDebugOptionShowBoundingBoxes = 1 shl 1;
  SCNDebugOptionShowLightInfluences = 1 shl 2;
  SCNDebugOptionShowLightExtents = 1 shl 3;
  SCNDebugOptionShowPhysicsFields = 1 shl 4;
  SCNDebugOptionShowWireframe = 1 shl 5;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneRendererProtocol = objcprotocol external name 'SCNSceneRenderer' (NSObjectProtocol)
  required
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: nullable SCNNodePtr; completionHandler: OpaqueCBlock); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macosx(10.11 }
    procedure set)(newValue: NSTimeInterval sceneTime); message 'set):';
    function ): NSTimeInterval sceneTime; message ')';
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function hitTest_options (point: CGPoint; options: nullable NSDictionaryPtr): SCNHitTestResult *ProtocolPtr; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): boolean; message 'isNodeInsideFrustum:withPointOfView:'; { available in macosx(10.9 }
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): SCNNode *ProtocolPtr; message 'nodesInsideFrustumWithPointOfView:'; { available in macosx(10.11 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macosx(10.9 }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macosx(10.9 }
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
    procedure setJitteringEnabled(newValue: boolean); message 'setJitteringEnabled:';
    function isJitteringEnabled: boolean; message 'isJitteringEnabled';
    function prepareObject_shouldAbortBlock (object_: id; block: OpaqueCBlock): boolean; message 'prepareObject:shouldAbortBlock:'; { available in macosx(10.9 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: OpaqueCBlock); message 'prepareObjects:withCompletionHandler:'; { available in macosx(10.10 }
    procedure set)_(newValue: BOOL showsStatistics); message 'set):';
    function )_: BOOL showsStatistics; message ')';
    procedure setDebugOptions(newValue: SCNDebugOptions); message 'setDebugOptions:';
    function debugOptions: SCNDebugOptions; message 'debugOptions';
    procedure setIos(9.0))(newValue: SCNDebugOptions); message 'setIos(9.0)):';
    function ios(9.0)): SCNDebugOptions; message 'ios(9.0))';
    procedure set)__(newValue: SKScene *overlaySKScene); message 'set):';
    function )__: SKScene *overlaySKScene; message ')';
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI';
    function ios(9.0))_: SCNRenderingAPI; message 'ios(9.0))';
    function context: pointer; message 'context';
    {$if defined(SCN_ENABLE_METAL)}
    function currentRenderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'currentRenderCommandEncoder';
    function ios(9.0))__: MTLRenderCommandEncoderProtocol; message 'ios(9.0))';
    function device: MTLDeviceProtocol; message 'device';
    function ios(9.0))___: MTLDeviceProtocol; message 'ios(9.0))';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat';
    function ios(9.0))____: MTLPixelFormat; message 'ios(9.0))';
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat';
    function ios(9.0))_____: MTLPixelFormat; message 'ios(9.0))';
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat';
    function ios(9.0))______: MTLPixelFormat; message 'ios(9.0))';
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue';
    function ios(9.0))_______: MTLCommandQueueProtocol; message 'ios(9.0))';
    {$endif}
    function audioEngine: AVAudioEngine; message 'audioEngine';
    function ios(9.0))________: AVAudioEngine; message 'ios(9.0))';
    function audioEnvironmentNode: AVAudioEnvironmentNode ios(9.0))Ptr; message 'audioEnvironmentNode';
    function __WATCHOS_PROHIBITED_: AVAudioEnvironmentNode ios(9.0))Ptr; message 'WATCHOS_PROHIBITED';
    procedure setAudioListener(newValue: SCNNode); message 'setAudioListener:';
    function audioListener: SCNNode; message 'audioListener';
    procedure setIos(9.0))_(newValue: SCNNode); message 'setIos(9.0)):';
    function ios(9.0))_________: SCNNode; message 'ios(9.0))';
  end;

type
  SCNSceneRendererDelegateProtocol = objcprotocol external name 'SCNSceneRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderer_updateAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:updateAtTime:'; { available in macosx(10.10 }
    procedure renderer_didApplyAnimationsAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didApplyAnimationsAtTime:'; { available in macosx(10.10 }
    procedure renderer_didSimulatePhysicsAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didSimulatePhysicsAtTime:'; { available in macosx(10.10 }
    procedure renderer_willRenderScene_atTime (renderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:willRenderScene:atTime:';
    procedure renderer_didRenderScene_atTime (renderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:didRenderScene:atTime:';
  end;
{$endif}

