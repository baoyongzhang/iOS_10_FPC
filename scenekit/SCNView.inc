{ Parsed from SceneKit.framework SCNView.h }

{$ifdef TYPES}
type
  SCNViewPtr = ^SCNView;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNViewOption;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNViewOption = ^NSString;
{$endif}

{$endif}
{$ifdef TYPES}
const
  SCNViewOptionPreferredRenderingAPI = SCNPreferredRenderingAPIKey;
  SCNViewOptionPreferredDevice = SCNPreferredDeviceKey;
  SCNViewOptionPreferLowPowerDevice = SCNPreferLowPowerDeviceKey;
{$endif}

{$ifdef CLASSES}

type
  SCNView = objcclass external (UIView, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  public
    function initWithFrame_options (frame: CGRect; options: nullable NSDictionaryPtr): instancetype; message 'initWithFrame:options:';
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure setAllowsCameraControl(newValue: boolean); message 'setAllowsCameraControl:';
    function allowsCameraControl: boolean; message 'allowsCameraControl';
    function snapshot                            ): UIImage; message 'snapshot                            )'; { available in macosx(10.10 }
    procedure play (sender: nullable id); message 'play:';
    procedure pause (sender: nullable id); message 'pause:';
    procedure stop (sender: nullable id); message 'stop:';
    procedure set)(newValue: NSInteger preferredFramesPerSecond); message 'set):';
    function ): NSInteger preferredFramesPerSecond; message ')';
    procedure setEaglContext(newValue: EAGLContext); message 'setEaglContext:';
    function eaglContext: EAGLContext; message 'eaglContext';
    procedure set)_(newValue: SCNAntialiasingMode antialiasingMode); message 'set):';
    function )_: SCNAntialiasingMode antialiasingMode; message ')';

    { Adopted protocols }
    function audioEngine: AVAudioEngine; message 'audioEngine';
    function ios(9.0))________: AVAudioEngine; message 'ios(9.0))';
    function audioEnvironmentNode: AVAudioEnvironmentNode ios(9.0))Ptr; message 'audioEnvironmentNode';
    function __WATCHOS_PROHIBITED_: AVAudioEnvironmentNode ios(9.0))Ptr; message 'WATCHOS_PROHIBITED';
    procedure setAudioListener(newValue: SCNNode); message 'setAudioListener:';
    function audioListener: SCNNode; message 'audioListener';
    procedure setIos(9.0))_(newValue: SCNNode); message 'setIos(9.0)):';
    function ios(9.0))_________: SCNNode; message 'ios(9.0))';
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat';
    function ios(9.0))____: MTLPixelFormat; message 'ios(9.0))';
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue';
    function ios(9.0))_______: MTLCommandQueueProtocol; message 'ios(9.0))';
    function context: pointer; message 'context';
    function currentRenderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'currentRenderCommandEncoder';
    function ios(9.0))__: MTLRenderCommandEncoderProtocol; message 'ios(9.0))';
    procedure setDebugOptions(newValue: SCNDebugOptions); message 'setDebugOptions:';
    function debugOptions: SCNDebugOptions; message 'debugOptions';
    procedure setIos(9.0))(newValue: SCNDebugOptions); message 'setIos(9.0)):';
    function ios(9.0)): SCNDebugOptions; message 'ios(9.0))';
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat';
    function ios(9.0))_____: MTLPixelFormat; message 'ios(9.0))';
    function device: MTLDeviceProtocol; message 'device';
    function ios(9.0))___: MTLDeviceProtocol; message 'ios(9.0))';
    function hitTest_options (point: CGPoint; options: nullable NSDictionaryPtr): SCNHitTestResult *ProtocolPtr; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): boolean; message 'isNodeInsideFrustum:withPointOfView:'; { available in macosx(10.9 }
    procedure setJitteringEnabled(newValue: boolean); message 'setJitteringEnabled:';
    function isJitteringEnabled: boolean; message 'isJitteringEnabled';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): SCNNode *ProtocolPtr; message 'nodesInsideFrustumWithPointOfView:'; { available in macosx(10.11 }
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    function prepareObject_shouldAbortBlock (object_: id; block: OpaqueCBlock): boolean; message 'prepareObject:shouldAbortBlock:'; { available in macosx(10.9 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: OpaqueCBlock); message 'prepareObjects:withCompletionHandler:'; { available in macosx(10.10 }
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: nullable SCNNodePtr; completionHandler: OpaqueCBlock); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macosx(10.11 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macosx(10.9 }
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI';
    function ios(9.0))_: SCNRenderingAPI; message 'ios(9.0))';
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat';
    function ios(9.0))______: MTLPixelFormat; message 'ios(9.0))';
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macosx(10.9 }
  end;
{$endif}

