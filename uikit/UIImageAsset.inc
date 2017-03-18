{ Parsed from UIKit.framework UIImageAsset.h }

{$ifdef TYPES}
type
  UIImageAssetPtr = ^UIImageAsset;
{$endif}

{$ifdef CLASSES}

type
  UIImageAsset = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function imageWithTraitCollection (traitCollection: UITraitCollection): UIImage; message 'imageWithTraitCollection:';
    procedure registerImage_withTraitCollection (image: UIImage; traitCollection: UITraitCollection); message 'registerImage:withTraitCollection:';
    procedure unregisterImageWithTraitCollection (traitCollection: UITraitCollection); message 'unregisterImageWithTraitCollection:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

