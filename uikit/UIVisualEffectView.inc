{ Parsed from UIKit.framework UIVisualEffectView.h }

{$ifdef TYPES}
type
  UIVisualEffectPtr = ^UIVisualEffect;
  UIBlurEffectPtr = ^UIBlurEffect;
  UIVibrancyEffectPtr = ^UIVibrancyEffect;
  UIVisualEffectViewPtr = ^UIVisualEffectView;
{$endif}

{$ifdef TYPES}
type
  UIBlurEffectStyle = NSInteger;
  UIBlurEffectStylePtr = ^UIBlurEffectStyle;

const
  UIBlurEffectStyleExtraLight = 0;
  UIBlurEffectStyleLight = 1;
  UIBlurEffectStyleDark = 2;
  UIBlurEffectStyleExtraDark = 3 { available in 10_0 };
  __IOS_PROHIBITED = 4 { available in 10_0 };
  __WATCHOS_PROHIBITED = 5 { available in 10_0 };
  UIBlurEffectStyleRegular = 6 { available in 10_0 };
  UIBlurEffectStyleProminent = 7 { available in 10_0 };
{$endif}

{$ifdef CLASSES}

type
  UIVisualEffect = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIBlurEffect = objcclass external (UIVisualEffect)
  public
    class function effectWithStyle (style: UIBlurEffectStyle): UIBlurEffect; message 'effectWithStyle:';
  end;

type
  UIVibrancyEffect = objcclass external (UIVisualEffect)
  public
    class function effectForBlurEffect (blurEffect: UIBlurEffect): UIVibrancyEffect; message 'effectForBlurEffect:';
  end;

type
  UIVisualEffectView = objcclass external (UIView, NSSecureCodingProtocol)
  public
    function contentView: UIView; message 'contentView';
    procedure setEffect(newValue: UIVisualEffect); message 'setEffect:';
    function effect: UIVisualEffect; message 'effect';
    function initWithEffect (effect_: nullable UIVisualEffectPtr): instancetype; message 'initWithEffect:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

