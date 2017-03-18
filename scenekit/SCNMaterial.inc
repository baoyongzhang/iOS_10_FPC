{ Parsed from SceneKit.framework SCNMaterial.h }

{$ifdef TYPES}
type
  SCNMaterialPtr = ^SCNMaterial;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNLightingModel;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNLightingModel = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNLightingModelPhong: SCNLightingModel; cvar; external;
  SCNLightingModelBlinn: SCNLightingModel; cvar; external;
  SCNLightingModelLambert: SCNLightingModel; cvar; external;
  SCNLightingModelConstant: SCNLightingModel; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNCullMode = NSInteger;
  SCNCullModePtr = ^SCNCullMode;

const
  SCNCullModeBack = 0;
  SCNCullModeFront = 1;

const
  SCNCullBack = SCNCullModeBack;
  SCNCullFront = SCNCullModeFront;

type
  SCNTransparencyMode = NSInteger;
  SCNTransparencyModePtr = ^SCNTransparencyMode;

const
  SCNTransparencyModeAOne = 0;
  SCNTransparencyModeRGBZero = 1;

type
  SCNBlendMode = NSInteger;
  SCNBlendModePtr = ^SCNBlendMode;

const
  SCNBlendModeAlpha = 0;
  SCNBlendModeAdd = 1;
  SCNBlendModeSubtract = 2;
  SCNBlendModeMultiply = 3;
  SCNBlendModeScreen = 4;
  SCNBlendModeReplace = 5;
{$endif}

{$ifdef CLASSES}

type
  SCNMaterial = objcclass external (NSObject, SCNAnimatableProtocol, SCNShadableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function material: instancetype; message 'material';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function diffuse: SCNMaterialProperty; message 'diffuse';
    function ambient: SCNMaterialProperty; message 'ambient';
    function specular: SCNMaterialProperty; message 'specular';
    function emission: SCNMaterialProperty; message 'emission';
    function transparent: SCNMaterialProperty; message 'transparent';
    function reflective: SCNMaterialProperty; message 'reflective';
    function multiply: SCNMaterialProperty; message 'multiply';
    function normal: SCNMaterialProperty; message 'normal';
    function ambientOcclusion: SCNMaterialProperty; message 'ambientOcclusion';
    function ios(9.0)): SCNMaterialProperty; message 'ios(9.0))';
    function selfIllumination: SCNMaterialProperty; message 'selfIllumination';
    function ios(9.0))_: SCNMaterialProperty; message 'ios(9.0))';
    function metalness: SCNMaterialProperty ios(10.0),Ptr; message 'metalness';
    function tvos(10.0)): SCNMaterialProperty ios(10.0),Ptr; message 'tvos(10.0))';
    function roughness: SCNMaterialProperty ios(10.0),Ptr; message 'roughness';
    function tvos(10.0))_: SCNMaterialProperty ios(10.0),Ptr; message 'tvos(10.0))';
    procedure setShininess(newValue: CGFloat); message 'setShininess:';
    function shininess: CGFloat; message 'shininess';
    procedure setTransparency(newValue: CGFloat); message 'setTransparency:';
    function transparency: CGFloat; message 'transparency';
    procedure setLightingModelName(newValue: SCNLightingModel); message 'setLightingModelName:';
    function lightingModelName: SCNLightingModel; message 'lightingModelName';
    procedure setLitPerPixel(newValue: boolean); message 'setLitPerPixel:';
    function isLitPerPixel: boolean; message 'isLitPerPixel';
    procedure setDoubleSided(newValue: boolean); message 'setDoubleSided:';
    function isDoubleSided: boolean; message 'isDoubleSided';
    procedure setCullMode(newValue: SCNCullMode); message 'setCullMode:';
    function cullMode: SCNCullMode; message 'cullMode';
    procedure setTransparencyMode(newValue: SCNTransparencyMode); message 'setTransparencyMode:';
    function transparencyMode: SCNTransparencyMode; message 'transparencyMode';
    procedure setLocksAmbientWithDiffuse(newValue: boolean); message 'setLocksAmbientWithDiffuse:';
    function locksAmbientWithDiffuse: boolean; message 'locksAmbientWithDiffuse';
    procedure setWritesToDepthBuffer(newValue: boolean); message 'setWritesToDepthBuffer:';
    function writesToDepthBuffer: boolean; message 'writesToDepthBuffer';
    procedure set)(newValue: BOOL readsFromDepthBuffer); message 'set):';
    function ): BOOL readsFromDepthBuffer; message ')';
    procedure set)_(newValue: CGFloat fresnelExponent); message 'set):';
    function )_: CGFloat fresnelExponent; message ')';
    procedure setBlendMode(newValue: SCNBlendMode); message 'setBlendMode:';
    function blendMode: SCNBlendMode; message 'blendMode';
    procedure setIos(9.0))(newValue: SCNBlendMode); message 'setIos(9.0)):';
    function ios(9.0))__: SCNBlendMode; message 'ios(9.0))';

    { Adopted protocols }
    procedure set__WATCHOS_PROHIBITED(newValue: SCNProgram *program); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: SCNProgram *program; message 'WATCHOS_PROHIBITED';
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in macosx(10.9 }
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in macosx(10.9 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in macosx(10.10 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in macosx(10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; { available in macosx(10.12 }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

