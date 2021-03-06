{ Parsed from CoreImage.framework CISampler.h }

{$ifdef TYPES}
type
  CISamplerPtr = ^CISampler;
{$endif}

{$ifdef CLASSES}

type
  CISampler = objcclass external (NSObject, NSCopyingProtocol)
  private
    _priv: pointer;
  public
    class function samplerWithImage (im: CIImage): instancetype; message 'samplerWithImage:';
    class function samplerWithImage_keysAndValues (im: CIImage; key0: id): instancetype; varargs; message 'samplerWithImage:keysAndValues:';
    class function samplerWithImage_options (im: CIImage; dict: nullable NSDictionaryPtr): instancetype; message 'samplerWithImage:options:';
    function initWithImage (im: CIImage): instancetype; message 'initWithImage:';
    function initWithImage_keysAndValues (im: CIImage; key0: id): instancetype; varargs; message 'initWithImage:keysAndValues:';
    function initWithImage_options (im: CIImage; dict: nullable NSDictionaryPtr): instancetype; message 'initWithImage:options:'; { NS_DESIGNATED_INITIALIZER }
    function definition: CIFilterShape; message 'definition';
    function extent: CGRect; message 'extent';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCISamplerAffineMatrix: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerWrapMode: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerFilterMode: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerWrapBlack: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerWrapClamp: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerFilterNearest: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerFilterLinear: NSString { available in 10_4, 9_0 }; cvar; external;
  kCISamplerColorSpace: NSString { available in 10_4, 9_0 }; cvar; external;
{$endif}

