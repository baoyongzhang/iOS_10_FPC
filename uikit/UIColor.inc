{ Parsed from UIKit.framework UIColor.h }

{ Types from UIColor }
{$ifdef TYPES}




{$endif}


{$ifdef TYPES}
type
  UIColorPtr = ^UIColor;
{$endif}

{$ifdef CLASSES}

type
  UIColor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function colorWithWhite_alpha (white: CGFloat; alpha: CGFloat): UIColor; message 'colorWithWhite:alpha:';
    class function colorWithHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): UIColor; message 'colorWithHue:saturation:brightness:alpha:';
    class function colorWithRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'colorWithRed:green:blue:alpha:';
    class function colorWithDisplayP3Red_green_blue_alpha (displayP3Red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'colorWithDisplayP3Red:green:blue:alpha:'; { available in 10_0 }
    class function colorWithCGColor (cgColor: CGColorRef): UIColor; message 'colorWithCGColor:';
    class function colorWithPatternImage (image: UIImage): UIColor; message 'colorWithPatternImage:';
    {$if defined(__NULL_MACRO__)}
    class function colorWithCIColor (ciColor_: CIColor): UIColor; message 'colorWithCIColor:'; { available in 5_0 }
    {$endif}
    function initWithWhite_alpha (white: CGFloat; alpha: CGFloat): UIColor; message 'initWithWhite:alpha:';
    function initWithHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): UIColor; message 'initWithHue:saturation:brightness:alpha:';
    function initWithRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'initWithRed:green:blue:alpha:';
    function initWithDisplayP3Red_green_blue_alpha (displayP3Red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'initWithDisplayP3Red:green:blue:alpha:'; { available in 10_0 }
    function initWithCGColor (cgColor: CGColorRef): UIColor; message 'initWithCGColor:';
    function initWithPatternImage (image: UIImage): UIColor; message 'initWithPatternImage:';
    {$if defined(__NULL_MACRO__)}
    function initWithCIColor (ciColor_: CIColor): UIColor; message 'initWithCIColor:'; { available in 5_0 }
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function blackColor: UIColor; message 'blackColor';
    function darkGrayColor: UIColor; message 'darkGrayColor';
    function lightGrayColor: UIColor; message 'lightGrayColor';
    function whiteColor: UIColor; message 'whiteColor';
    function grayColor: UIColor; message 'grayColor';
    function redColor: UIColor; message 'redColor';
    function greenColor: UIColor; message 'greenColor';
    function blueColor: UIColor; message 'blueColor';
    function cyanColor: UIColor; message 'cyanColor';
    function yellowColor: UIColor; message 'yellowColor';
    function magentaColor: UIColor; message 'magentaColor';
    function orangeColor: UIColor; message 'orangeColor';
    function purpleColor: UIColor; message 'purpleColor';
    function brownColor: UIColor; message 'brownColor';
    function clearColor: UIColor; message 'clearColor';
    {$else}
    class function blackColor: UIColor; message 'blackColor';
    class function darkGrayColor: UIColor; message 'darkGrayColor';
    class function lightGrayColor: UIColor; message 'lightGrayColor';
    class function whiteColor: UIColor; message 'whiteColor';
    class function grayColor: UIColor; message 'grayColor';
    class function redColor: UIColor; message 'redColor';
    class function greenColor: UIColor; message 'greenColor';
    class function blueColor: UIColor; message 'blueColor';
    class function cyanColor: UIColor; message 'cyanColor';
    class function yellowColor: UIColor; message 'yellowColor';
    class function magentaColor: UIColor; message 'magentaColor';
    class function orangeColor: UIColor; message 'orangeColor';
    class function purpleColor: UIColor; message 'purpleColor';
    class function brownColor: UIColor; message 'brownColor';
    class function clearColor: UIColor; message 'clearColor';
    {$endif}
    procedure set_; message 'set';
    procedure setFill; message 'setFill';
    procedure setStroke; message 'setStroke';
    function getWhite_alpha (white: nullable CGFloatPtr; alpha: nullable CGFloatPtr): boolean; message 'getWhite:alpha:'; { available in 5_0 }
    function getHue_saturation_brightness_alpha (hue: nullable CGFloatPtr; saturation: nullable CGFloatPtr; brightness: nullable CGFloatPtr; alpha: nullable CGFloatPtr): boolean; message 'getHue:saturation:brightness:alpha:'; { available in 5_0 }
    function getRed_green_blue_alpha (red: nullable CGFloatPtr; green: nullable CGFloatPtr; blue: nullable CGFloatPtr; alpha: nullable CGFloatPtr): boolean; message 'getRed:green:blue:alpha:'; { available in 5_0 }
    function colorWithAlphaComponent (alpha: CGFloat): UIColor; message 'colorWithAlphaComponent:';
    function CGColor: CGColorRef; message 'CGColor';
    function CGColor_: CGColorRef; message 'CGColor'; { CF_RETURNS_NOT_RETAINED }
    {$if defined(__NULL_MACRO__)}
    function CIColor_: CIColor; message 'CIColor';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  CIColor_UIKitAdditions = objccategory external name 'UIKitAdditions' (CIColor)
    function initWithColor (color: UIColor): instancetype; message 'initWithColor:'; { available in 5_0 }
  end;
{$endif}

{$endif}
