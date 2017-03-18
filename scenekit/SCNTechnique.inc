{ Parsed from SceneKit.framework SCNTechnique.h }

{$ifdef TYPES}
type
  SCNTechniquePtr = ^SCNTechnique;
  SCNTechniqueSupportProtocolPtr = ^SCNTechniqueSupportProtocol;
{$endif}

{$ifdef CLASSES}

type
  SCNTechnique = objcclass external (NSObject, SCNAnimatableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function techniqueWithDictionary (dictionary: NSDictionary): nullable SCNTechniquePtr; message 'techniqueWithDictionary:';
    class function techniqueBySequencingTechniques (techniques: SCNTechnique *ProtocolPtr): nullable SCNTechniquePtr; message 'techniqueBySequencingTechniques:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    function objectForKeyedSubscript (key: id): nullable id; message 'objectForKeyedSubscript:'; { available in macosx(10.11 }
    procedure setObject_forKeyedSubscript (obj: nullable id; key: NSCopyingProtocol); message 'setObject:forKeyedSubscript:'; { available in macosx(10.11 }

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

{$ifdef PROTOCOLS}

type
  SCNTechniqueSupportProtocol = objcprotocol external name 'SCNTechniqueSupport' (NSObjectProtocol)
    procedure set)(newValue: SCNTechnique *technique); message 'set):';
    function ): SCNTechnique *technique; message ')';
  end;
{$endif}

