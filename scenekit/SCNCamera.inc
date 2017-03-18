{ Parsed from SceneKit.framework SCNCamera.h }

{$ifdef TYPES}
type
  SCNCameraPtr = ^SCNCamera;
{$endif}

{$ifdef CLASSES}

type
  SCNCamera = objcclass external (NSObject, SCNAnimatableProtocol, SCNTechniqueSupportProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function camera: instancetype; message 'camera';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setXFov(newValue: double); message 'setXFov:';
    function xFov: double; message 'xFov';
    procedure setYFov(newValue: double); message 'setYFov:';
    function yFov: double; message 'yFov';
    procedure setZNear(newValue: double); message 'setZNear:';
    function zNear: double; message 'zNear';
    procedure setZFar(newValue: double); message 'setZFar:';
    function zFar: double; message 'zFar';
    procedure set)(newValue: BOOL automaticallyAdjustsZRange); message 'set):';
    function ): BOOL automaticallyAdjustsZRange; message ')';
    procedure setUsesOrthographicProjection(newValue: boolean); message 'setUsesOrthographicProjection:';
    function usesOrthographicProjection: boolean; message 'usesOrthographicProjection';
    procedure set)_(newValue: double orthographicScale); message 'set):';
    function )_: double orthographicScale; message ')';
    procedure setProjectionTransform(newValue: SCNMatrix4); message 'setProjectionTransform:';
    function projectionTransform: SCNMatrix4; message 'projectionTransform';
    procedure set)__(newValue: CGFloat focalDistance); message 'set):';
    function )__: CGFloat focalDistance; message ')';
    procedure set)___(newValue: CGFloat focalSize); message 'set):';
    function )___: CGFloat focalSize; message ')';
    procedure set)____(newValue: CGFloat focalBlurRadius); message 'set):';
    function )____: CGFloat focalBlurRadius; message ')';
    procedure set)_____(newValue: CGFloat aperture); message 'set):';
    function )_____: CGFloat aperture; message ')';
    procedure setMotionBlurIntensity(newValue: CGFloat ios(10.0),); message 'setMotionBlurIntensity:';
    function motionBlurIntensity: CGFloat ios(10.0),; message 'motionBlurIntensity';
    procedure setTvos(10.0))(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0)): CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setWantsHDR(newValue: BOOL ios(10.0),); message 'setWantsHDR:';
    function wantsHDR: BOOL ios(10.0),; message 'wantsHDR';
    procedure setTvos(10.0))_(newValue: BOOL ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_: BOOL ios(10.0),; message 'tvos(10.0))';
    procedure setExposureOffset(newValue: CGFloat ios(10.0),); message 'setExposureOffset:';
    function exposureOffset: CGFloat ios(10.0),; message 'exposureOffset';
    procedure setTvos(10.0))__(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))__: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setAverageGray(newValue: CGFloat ios(10.0),); message 'setAverageGray:';
    function averageGray: CGFloat ios(10.0),; message 'averageGray';
    procedure setTvos(10.0))___(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))___: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setWhitePoint(newValue: CGFloat ios(10.0),); message 'setWhitePoint:';
    function whitePoint: CGFloat ios(10.0),; message 'whitePoint';
    procedure setTvos(10.0))____(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))____: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setWantsExposureAdaptation(newValue: BOOL ios(10.0),); message 'setWantsExposureAdaptation:';
    function wantsExposureAdaptation: BOOL ios(10.0),; message 'wantsExposureAdaptation';
    procedure setTvos(10.0))_____(newValue: BOOL ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_____: BOOL ios(10.0),; message 'tvos(10.0))';
    procedure setExposureAdaptationBrighteningSpeedFactor(newValue: CGFloat ios(10.0),); message 'setExposureAdaptationBrighteningSpeedFactor:';
    function exposureAdaptationBrighteningSpeedFactor: CGFloat ios(10.0),; message 'exposureAdaptationBrighteningSpeedFactor';
    procedure setTvos(10.0))______(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))______: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setExposureAdaptationDarkeningSpeedFactor(newValue: CGFloat ios(10.0),); message 'setExposureAdaptationDarkeningSpeedFactor:';
    function exposureAdaptationDarkeningSpeedFactor: CGFloat ios(10.0),; message 'exposureAdaptationDarkeningSpeedFactor';
    procedure setTvos(10.0))_______(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_______: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setMinimumExposure(newValue: CGFloat ios(10.0),); message 'setMinimumExposure:';
    function minimumExposure: CGFloat ios(10.0),; message 'minimumExposure';
    procedure setTvos(10.0))________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setMaximumExposure(newValue: CGFloat ios(10.0),); message 'setMaximumExposure:';
    function maximumExposure: CGFloat ios(10.0),; message 'maximumExposure';
    procedure setTvos(10.0))_________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setBloomThreshold(newValue: CGFloat ios(10.0),); message 'setBloomThreshold:';
    function bloomThreshold: CGFloat ios(10.0),; message 'bloomThreshold';
    procedure setTvos(10.0))__________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))__________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setBloomIntensity(newValue: CGFloat ios(10.0),); message 'setBloomIntensity:';
    function bloomIntensity: CGFloat ios(10.0),; message 'bloomIntensity';
    procedure setTvos(10.0))___________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))___________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setBloomBlurRadius(newValue: CGFloat ios(10.0),); message 'setBloomBlurRadius:';
    function bloomBlurRadius: CGFloat ios(10.0),; message 'bloomBlurRadius';
    procedure setTvos(10.0))____________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))____________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setVignettingPower(newValue: CGFloat ios(10.0),); message 'setVignettingPower:';
    function vignettingPower: CGFloat ios(10.0),; message 'vignettingPower';
    procedure setTvos(10.0))_____________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_____________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setVignettingIntensity(newValue: CGFloat ios(10.0),); message 'setVignettingIntensity:';
    function vignettingIntensity: CGFloat ios(10.0),; message 'vignettingIntensity';
    procedure setTvos(10.0))______________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))______________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setColorFringeStrength(newValue: CGFloat ios(10.0),); message 'setColorFringeStrength:';
    function colorFringeStrength: CGFloat ios(10.0),; message 'colorFringeStrength';
    procedure setTvos(10.0))_______________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_______________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setColorFringeIntensity(newValue: CGFloat ios(10.0),); message 'setColorFringeIntensity:';
    function colorFringeIntensity: CGFloat ios(10.0),; message 'colorFringeIntensity';
    procedure setTvos(10.0))________________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))________________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setSaturation(newValue: CGFloat ios(10.0),); message 'setSaturation:';
    function saturation: CGFloat ios(10.0),; message 'saturation';
    procedure setTvos(10.0))_________________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))_________________: CGFloat ios(10.0),; message 'tvos(10.0))';
    procedure setContrast(newValue: CGFloat ios(10.0),); message 'setContrast:';
    function contrast: CGFloat ios(10.0),; message 'contrast';
    procedure setTvos(10.0))__________________(newValue: CGFloat ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0))__________________: CGFloat ios(10.0),; message 'tvos(10.0))';
    function colorGrading: SCNMaterialProperty ios(10.0),Ptr; message 'colorGrading';
    function tvos(10.0))___________________: SCNMaterialProperty ios(10.0),Ptr; message 'tvos(10.0))';
    procedure set)______(newValue: NSUInteger categoryBitMask); message 'set):';
    function )______: NSUInteger categoryBitMask; message ')';

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

