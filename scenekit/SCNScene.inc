{ Parsed from SceneKit.framework SCNScene.h }

{$ifdef TYPES}
type
  SCNScenePtr = ^SCNScene;
  SCNSceneExportDelegateProtocolPtr = ^SCNSceneExportDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNSceneExportProgressHandler = OpaqueCBlock;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNSceneAttribute;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNSceneAttribute = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneStartTimeAttributeKey: SCNSceneAttribute; cvar; external;
  SCNSceneEndTimeAttributeKey: SCNSceneAttribute; cvar; external;
  SCNSceneFrameRateAttributeKey: SCNSceneAttribute; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNSceneAttributeUpAxis = SCNSceneUpAxisAttributeKey;
{$endif}

{$ifdef CLASSES}

type
  SCNScene = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function scene: instancetype; message 'scene';
    function rootNode: SCNNode; message 'rootNode';
    function ): SCNPhysicsWorld *physicsWorld; message ')';
    function attributeForKey (key: NSString): nullable id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: nullable id; key: NSString); message 'setAttribute:forKey:';
    function )_: SCNMaterialProperty *background; message ')';
    function lightingEnvironment: SCNMaterialProperty ios(10.0),Ptr; message 'lightingEnvironment';
    function tvos(10.0)): SCNMaterialProperty ios(10.0),Ptr; message 'tvos(10.0))';
    class function sceneNamed (name: NSString): nullable instancetype; message 'sceneNamed:'; { available in macosx(10.9 }
    class function sceneNamed_inDirectory_options (name: NSString; directory: nullable NSStringPtr; options: nullable NSDictionaryPtr): nullable instancetype; message 'sceneNamed:inDirectory:options:'; { available in macosx(10.10 }
    class function sceneWithURL_options_error (url: NSURL; options: nullable NSDictionaryPtr; error: NSErrorPtr): nullable instancetype; message 'sceneWithURL:options:error:';
    function writeToURL_options_delegate_progressHandler (url: NSURL; options: nullable NSDictionaryPtr; delegate: nullable SCNSceneExportDelegateProtocol; progressHandler: nullable SCNSceneExportProgressHandler): boolean; message 'writeToURL:options:delegate:progressHandler:'; { available in macosx(10.9 }
    procedure set)(newValue: CGFloat fogStartDistance); message 'set):';
    function )__: CGFloat fogStartDistance; message ')';
    procedure set)_(newValue: CGFloat fogEndDistance); message 'set):';
    function )___: CGFloat fogEndDistance; message ')';
    procedure set)__(newValue: CGFloat fogDensityExponent); message 'set):';
    function )____: CGFloat fogDensityExponent; message ')';
    procedure set)___(newValue: id fogColor); message 'set):';
    function )_____: id fogColor; message ')';
    procedure set)____(newValue: BOOL paused); message 'set):';
    function isPaused: BOOL paused; message 'isPaused';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneExportDelegateProtocol = objcprotocol external name 'SCNSceneExportDelegate' (NSObjectProtocol)
  optional
    function writeImage_withSceneDocumentURL_originalImageURL (image: UIImage; documentURL: NSURL; originalImageURL: nullable NSURLPtr): nullable NSURLPtr; message 'writeImage:withSceneDocumentURL:originalImageURL:'; { available in macosx(10.9 }
  end;
{$endif}

