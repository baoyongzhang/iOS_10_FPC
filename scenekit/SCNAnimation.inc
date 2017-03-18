{ Parsed from SceneKit.framework SCNAnimation.h }

{$ifdef TYPES}
type
  SCNAnimationEventPtr = ^SCNAnimationEvent;
  SCNAnimatableProtocolPtr = ^SCNAnimatableProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNAnimationEventBlock = OpaqueCBlock { available in macosx(10.9 };
{$endif}

{$ifdef CLASSES}

type
  SCNAnimationEvent = objcclass external (NSObject)
  public
    class function animationEventWithKeyTime_block (time: CGFloat; eventBlock: SCNAnimationEventBlock): instancetype; message 'animationEventWithKeyTime:block:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNAnimatableProtocol = objcprotocol external name 'SCNAnimatable' (NSObjectProtocol)
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in macosx(10.9 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in macosx(10.9 }
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in macosx(10.9 }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in macosx(10.10 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; { available in macosx(10.12 }
  end;
{$endif}

{$ifdef CLASSES}

type
  SceneKitAdditions = objccategory external (CAAnimation)
    procedure setUsesSceneTimeBase(newValue: boolean); message 'setUsesSceneTimeBase:';
    function usesSceneTimeBase: boolean; message 'usesSceneTimeBase';
    procedure set)(newValue: CGFloat fadeInDuration); message 'set):';
    function ): CGFloat fadeInDuration; message ')';
    procedure set)_(newValue: CGFloat fadeOutDuration); message 'set):';
    function )_: CGFloat fadeOutDuration; message ')';
    procedure set)__(newValue: SCNAnimationEvent *Protocol *animationEvents); message 'set):';
    function )__: SCNAnimationEvent *Protocol *animationEvents; message ')';
  end;
{$endif}

