{ Parsed from SceneKit.framework SCNLight.h }

{$ifdef TYPES}
type
  SCNLightPtr = ^SCNLight;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNLightType;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNLightType = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNLightTypeAmbient: SCNLightType; cvar; external;
  SCNLightTypeOmni: SCNLightType; cvar; external;
  SCNLightTypeDirectional: SCNLightType; cvar; external;
  SCNLightTypeSpot: SCNLightType; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNShadowMode = NSInteger;
  SCNShadowModePtr = ^SCNShadowMode;

const
  SCNShadowModeForward = 0;
  SCNShadowModeDeferred = 1;
  SCNShadowModeModulated = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNLight = objcclass external (NSObject, SCNAnimatableProtocol, SCNTechniqueSupportProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function light: instancetype; message 'light';
    procedure setType(newValue: SCNLightType); message 'setType:';
    function type_: SCNLightType; message 'type';
    procedure setColor(newValue: id); message 'setColor:';
    function color: id; message 'color';
    procedure setTemperature(newValue: CGFloat ios(10.0),); message 'setTemperature:';
    function temperature: CGFloat ios(10.0),; message 'temperature';
    procedure setTvos(10.0))(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0)): CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setIntensity(newValue: CGFloat ios(10.0),); message 'setIntensity:';
    function intensity: CGFloat ios(10.0),; message 'intensity';
    procedure setTvos(10.0))_(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setCastsShadow(newValue: boolean); message 'setCastsShadow:';
    function castsShadow: boolean; message 'castsShadow';
    procedure setShadowColor(newValue: id); message 'setShadowColor:';
    function shadowColor: id; message 'shadowColor';
    procedure setShadowRadius(newValue: CGFloat); message 'setShadowRadius:';
    function shadowRadius: CGFloat; message 'shadowRadius';
    procedure set)(newValue: CGSize shadowMapSize); message 'set):';
    function ): CGSize shadowMapSize; message ')';
    procedure set)_(newValue: NSUInteger shadowSampleCount); message 'set):';
    function )_: NSUInteger shadowSampleCount; message ')';
    procedure set)__(newValue: SCNShadowMode shadowMode); message 'set):';
    function )__: SCNShadowMode shadowMode; message ')';
    procedure set)___(newValue: CGFloat shadowBias); message 'set):';
    function )___: CGFloat shadowBias; message ')';
    procedure set)____(newValue: CGFloat orthographicScale); message 'set):';
    function )____: CGFloat orthographicScale; message ')';
    procedure set)_____(newValue: CGFloat zNear); message 'set):';
    function )_____: CGFloat zNear; message ')';
    procedure set)______(newValue: CGFloat zFar); message 'set):';
    function )______: CGFloat zFar; message ')';
    procedure set)_______(newValue: CGFloat attenuationStartDistance); message 'set):';
    function )_______: CGFloat attenuationStartDistance; message ')';
    procedure set)________(newValue: CGFloat attenuationEndDistance); message 'set):';
    function )________: CGFloat attenuationEndDistance; message ')';
    procedure set)_________(newValue: CGFloat attenuationFalloffExponent); message 'set):';
    function )_________: CGFloat attenuationFalloffExponent; message ')';
    procedure set)__________(newValue: CGFloat spotInnerAngle); message 'set):';
    function )__________: CGFloat spotInnerAngle; message ')';
    procedure set)___________(newValue: CGFloat spotOuterAngle); message 'set):';
    function )___________: CGFloat spotOuterAngle; message ')';
    function )____________: SCNMaterialProperty *gobo; message ')';
    procedure setIESProfileURL(newValue: NSURL ios(10.0),Ptr); message 'setIESProfileURL:';
    function IESProfileURL: NSURL ios(10.0),Ptr; message 'IESProfileURL';
    procedure setTvos(10.0))__(newValue: NSURL ios(10.0),Ptr); message 'setTvos(10.0)):';
    function tvos(10.0))__: NSURL ios(10.0),Ptr; message 'tvos(10.0))';
    procedure set)____________(newValue: NSUInteger categoryBitMask); message 'set):';
    function )_____________: NSUInteger categoryBitMask; message ')';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
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

