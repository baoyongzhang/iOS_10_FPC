{ Parsed from SpriteKit.framework SKView.h }

{ Types from SKView }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  SKViewPtr = ^SKView;
  SKViewDelegateProtocolPtr = ^SKViewDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  SKView = objcclass external (UIView)
  public
    {$else}
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setShowsFPS(newValue: boolean); message 'setShowsFPS:';
    function showsFPS: boolean; message 'showsFPS';
    procedure setShowsDrawCount(newValue: boolean); message 'setShowsDrawCount:';
    function showsDrawCount: boolean; message 'showsDrawCount';
    procedure setShowsNodeCount(newValue: boolean); message 'setShowsNodeCount:';
    function showsNodeCount: boolean; message 'showsNodeCount';
    procedure setShowsQuadCount(newValue: boolean); message 'setShowsQuadCount:';
    function showsQuadCount: boolean; message 'showsQuadCount';
    procedure setShowsPhysics(newValue: boolean); message 'setShowsPhysics:';
    function showsPhysics: boolean; message 'showsPhysics';
    procedure setShowsFields(newValue: boolean); message 'setShowsFields:';
    function showsFields: boolean; message 'showsFields';
    procedure setAsynchronous(newValue: boolean); message 'setAsynchronous:';
    function isAsynchronous: boolean; message 'isAsynchronous';
    procedure setAllowsTransparency(newValue: boolean); message 'setAllowsTransparency:';
    function allowsTransparency: boolean; message 'allowsTransparency';
    procedure setIgnoresSiblingOrder(newValue: boolean); message 'setIgnoresSiblingOrder:';
    function ignoresSiblingOrder: boolean; message 'ignoresSiblingOrder';
    procedure setShouldCullNonVisibleNodes(newValue: boolean); message 'setShouldCullNonVisibleNodes:';
    function shouldCullNonVisibleNodes: boolean; message 'shouldCullNonVisibleNodes';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
    procedure setDelegate(newValue: SKViewDelegateProtocol); message 'setDelegate:';
    function delegate: SKViewDelegateProtocol; message 'delegate';
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:';
    function frameInterval: NSInteger; message 'frameInterval';
    procedure setPreferredFrameRate(newValue: single); message 'setPreferredFrameRate:';
    function preferredFrameRate: single; message 'preferredFrameRate';
    procedure presentScene (scene: nullable SKScenePtr); message 'presentScene:';
    procedure presentScene_transition (scene: SKScene; transition: SKTransition); message 'presentScene:transition:';
    function scene: SKScene; message 'scene';
    function textureFromNode (node: SKNode): nullable SKTexturePtr; message 'textureFromNode:';
    function textureFromNode_crop (node: SKNode; crop: CGRect): nullable SKTexturePtr; message 'textureFromNode:crop:';
    function convertPoint_toScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:toScene:';
    function convertPoint_fromScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:fromScene:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKViewDelegateProtocol = objcprotocol external name 'SKViewDelegate' (NSObjectProtocol)
  optional
    function view_shouldRenderAtTime (view: SKView; time: NSTimeInterval): boolean; message 'view:shouldRenderAtTime:';
  end;
{$endif}

{$endif}
