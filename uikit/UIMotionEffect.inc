{ Parsed from UIKit.framework UIMotionEffect.h }

{$ifdef TYPES}
type
  UIMotionEffectPtr = ^UIMotionEffect;
  UIInterpolatingMotionEffectPtr = ^UIInterpolatingMotionEffect;
  UIMotionEffectGroupPtr = ^UIMotionEffectGroup;
{$endif}

{$ifdef CLASSES}

type
  UIMotionEffect = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function keyPathsAndRelativeValuesForViewerOffset (viewerOffset: UIOffset): nullable NSDictionaryPtr; message 'keyPathsAndRelativeValuesForViewerOffset:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  UIInterpolatingMotionEffectType = NSInteger;
  UIInterpolatingMotionEffectTypePtr = ^UIInterpolatingMotionEffectType;

const
  UIInterpolatingMotionEffectTypeTiltAlongHorizontalAxis = 0;
  UIInterpolatingMotionEffectTypeTiltAlongVerticalAxis = 1;
{$endif}

{$ifdef CLASSES}

type
  UIInterpolatingMotionEffect = objcclass external (UIMotionEffect)
  public
    function initWithKeyPath_type (keyPath: NSString; type_: UIInterpolatingMotionEffectType): instancetype; message 'initWithKeyPath:type:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function keyPath: NSString; message 'keyPath';
    function type_: UIInterpolatingMotionEffectType; message 'type';
    procedure setMinimumRelativeValue(newValue: id); message 'setMinimumRelativeValue:';
    function minimumRelativeValue: id; message 'minimumRelativeValue';
    procedure setMaximumRelativeValue(newValue: id); message 'setMaximumRelativeValue:';
    function maximumRelativeValue: id; message 'maximumRelativeValue';
  end;

type
  UIMotionEffectGroup = objcclass external (UIMotionEffect)
  public
    procedure setMotionEffects(newValue: __kindof UIMotionEffect *ProtocolPtr); message 'setMotionEffects:';
    function motionEffects: __kindof UIMotionEffect *ProtocolPtr; message 'motionEffects';
  end;
{$endif}

