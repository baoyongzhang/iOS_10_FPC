{ Parsed from UIKit.framework UITraitCollection.h }

{$ifdef TYPES}
type
  UITraitCollectionPtr = ^UITraitCollection;
  UITraitEnvironmentProtocolPtr = ^UITraitEnvironmentProtocol;
{$endif}

{$ifdef CLASSES}

type
  UITraitCollection = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function containsTraitsInCollection (trait: nullable UITraitCollectionPtr): boolean; message 'containsTraitsInCollection:';
    class function traitCollectionWithTraitsFromCollections (traitCollections: UITraitCollection *ProtocolPtr): UITraitCollection; message 'traitCollectionWithTraitsFromCollections:';
    class function traitCollectionWithUserInterfaceIdiom (idiom: UIUserInterfaceIdiom): UITraitCollection; message 'traitCollectionWithUserInterfaceIdiom:';
    function userInterfaceIdiom: UIUserInterfaceIdiom; message 'userInterfaceIdiom';
    class function traitCollectionWithUserInterfaceStyle (userInterfaceStyle: UIUserInterfaceStyle): UITraitCollection; message 'traitCollectionWithUserInterfaceStyle:'; { available in 10_0 }
    function __IOS_PROHIBITED: UIUserInterfaceStyle userInterfaceStyle __WATCHOS_PROHIBITED; message 'IOS_PROHIBITED';
    class function traitCollectionWithLayoutDirection (layoutDirection: UITraitEnvironmentLayoutDirection): UITraitCollection; message 'traitCollectionWithLayoutDirection:'; { available in 10_0 }
    function layoutDirection: UITraitEnvironmentLayoutDirection; message 'layoutDirection';
    class function traitCollectionWithDisplayScale (scale: CGFloat): UITraitCollection; message 'traitCollectionWithDisplayScale:';
    function displayScale: CGFloat; message 'displayScale';
    class function traitCollectionWithHorizontalSizeClass (horizontalSizeClass: UIUserInterfaceSizeClass): UITraitCollection; message 'traitCollectionWithHorizontalSizeClass:';
    function horizontalSizeClass: UIUserInterfaceSizeClass; message 'horizontalSizeClass';
    class function traitCollectionWithVerticalSizeClass (verticalSizeClass: UIUserInterfaceSizeClass): UITraitCollection; message 'traitCollectionWithVerticalSizeClass:';
    function verticalSizeClass: UIUserInterfaceSizeClass; message 'verticalSizeClass';
    class function traitCollectionWithForceTouchCapability (capability: UIForceTouchCapability): UITraitCollection; message 'traitCollectionWithForceTouchCapability:'; { available in 9_0 }
    function forceTouchCapability: UIForceTouchCapability; message 'forceTouchCapability';
    class function traitCollectionWithPreferredContentSizeCategory (preferredContentSizeCategory: UIContentSizeCategory): UITraitCollection; message 'traitCollectionWithPreferredContentSizeCategory:'; { available in 10_0 }
    function preferredContentSizeCategory: UIContentSizeCategory; message 'preferredContentSizeCategory';
    class function traitCollectionWithDisplayGamut (displayGamut: UIDisplayGamut): UITraitCollection; message 'traitCollectionWithDisplayGamut:'; { available in 10_0 }
    function displayGamut: UIDisplayGamut; message 'displayGamut';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITraitEnvironmentProtocol = objcprotocol external name 'UITraitEnvironment' (NSObjectProtocol)
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollectionPtr); message 'traitCollectionDidChange:'; { available in 8_0 }
  end;
{$endif}

