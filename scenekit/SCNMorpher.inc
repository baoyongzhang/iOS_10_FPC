{ Parsed from SceneKit.framework SCNMorpher.h }

{$ifdef TYPES}
type
  SCNMorpherPtr = ^SCNMorpher;
{$endif}

{$ifdef TYPES}
type
  SCNMorpherCalculationMode = NSInteger;
  SCNMorpherCalculationModePtr = ^SCNMorpherCalculationMode;

const
  SCNMorpherCalculationModeNormalized = 0;
  SCNMorpherCalculationModeAdditive = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNMorpher = objcclass external (NSObject, SCNAnimatableProtocol, NSSecureCodingProtocol)
  public
    procedure setTargets(newValue: SCNGeometry *ProtocolPtr); message 'setTargets:';
    function targets: SCNGeometry *ProtocolPtr; message 'targets';
    procedure setWeight_forTargetAtIndex (weight: CGFloat; targetIndex: NSUInteger); message 'setWeight:forTargetAtIndex:';
    function weightForTargetAtIndex (targetIndex: NSUInteger): CGFloat; message 'weightForTargetAtIndex:';
    procedure setCalculationMode(newValue: SCNMorpherCalculationMode); message 'setCalculationMode:';
    function calculationMode: SCNMorpherCalculationMode; message 'calculationMode';

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

