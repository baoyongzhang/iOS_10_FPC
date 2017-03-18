{ Parsed from SceneKit.framework SCNMaterialProperty.h }

{$ifdef TYPES}
type
  SCNMaterialPropertyPtr = ^SCNMaterialProperty;
{$endif}

{$ifdef TYPES}
type
  SCNFilterMode = NSInteger;
  SCNFilterModePtr = ^SCNFilterMode;

const
  SCNFilterModeNone = 0;
  SCNFilterModeNearest = 1;
  SCNFilterModeLinear = 2;

type
  SCNWrapMode = NSInteger;
  SCNWrapModePtr = ^SCNWrapMode;

const
  SCNWrapModeClamp = 1;
  SCNWrapModeRepeat = 2;
  SCNWrapModeClampToBorder = 3;
  SCNWrapModeMirror = 4;
{$endif}

{$ifdef CLASSES}

type
  SCNMaterialProperty = objcclass external (NSObject, SCNAnimatableProtocol, NSSecureCodingProtocol)
  public
    class function materialPropertyWithContents (contents: id): instancetype; message 'materialPropertyWithContents:'; { available in macosx(10.9 }
    procedure setContents(newValue: id); message 'setContents:';
    function contents: id; message 'contents';
    procedure set)(newValue: CGFloat intensity); message 'set):';
    function ): CGFloat intensity; message ')';
    procedure setMinificationFilter(newValue: SCNFilterMode); message 'setMinificationFilter:';
    function minificationFilter: SCNFilterMode; message 'minificationFilter';
    procedure setMagnificationFilter(newValue: SCNFilterMode); message 'setMagnificationFilter:';
    function magnificationFilter: SCNFilterMode; message 'magnificationFilter';
    procedure setMipFilter(newValue: SCNFilterMode); message 'setMipFilter:';
    function mipFilter: SCNFilterMode; message 'mipFilter';
    procedure setContentsTransform(newValue: SCNMatrix4); message 'setContentsTransform:';
    function contentsTransform: SCNMatrix4; message 'contentsTransform';
    procedure setWrapS(newValue: SCNWrapMode); message 'setWrapS:';
    function wrapS: SCNWrapMode; message 'wrapS';
    procedure setWrapT(newValue: SCNWrapMode); message 'setWrapT:';
    function wrapT: SCNWrapMode; message 'wrapT';
    procedure setBorderColor(newValue: id 10.0))); message 'setBorderColor:';
    function borderColor: id 10.0)); message 'borderColor';
    procedure set0(newValue: id 10.0))); message 'set0:';
    function 0: id 10.0)); message '0';

    procedure setWatchos(newValue: id 10.0))); message 'setWatchos:';
    function watchos: id 10.0)); message 'watchos';

    procedure setTvos)(newValue: id 10.0))); message 'setTvos):';
    function tvos): id 10.0)); message 'tvos)';
    procedure setMappingChannel(newValue: NSInteger); message 'setMappingChannel:';
    function mappingChannel: NSInteger; message 'mappingChannel';
    procedure set)_(newValue: CGFloat maxAnisotropy); message 'set):';
    function )_: CGFloat maxAnisotropy; message ')';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
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

