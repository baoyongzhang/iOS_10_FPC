{ Parsed from CoreImage.framework CIColor.h }

{$ifdef TYPES}
type
  CIColorPtr = ^CIColor;
{$endif}

{$ifdef CLASSES}

type
  CIColor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _priv: pointer;
    _pad:array[0..2] of pointer;
  public
    class function colorWithCGColor (c: CGColorRef): instancetype; message 'colorWithCGColor:';
    class function colorWithRed_green_blue_alpha (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat): instancetype; message 'colorWithRed:green:blue:alpha:';
    class function colorWithRed_green_blue (r: CGFloat; g: CGFloat; b: CGFloat): instancetype; message 'colorWithRed:green:blue:';
    class function colorWithRed_green_blue_alpha_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'colorWithRed:green:blue:alpha:colorSpace:'; { available in 10_12, 10_0 }
    class function colorWithRed_green_blue_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'colorWithRed:green:blue:colorSpace:'; { available in 10_12, 10_0 }
    class function colorWithString (representation: NSString): instancetype; message 'colorWithString:';
    function initWithCGColor (c: CGColorRef): instancetype; message 'initWithCGColor:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRed_green_blue_alpha (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat): instancetype; message 'initWithRed:green:blue:alpha:';
    function initWithRed_green_blue (r: CGFloat; g: CGFloat; b: CGFloat): instancetype; message 'initWithRed:green:blue:'; { available in 10_11, 9_0 }
    function initWithRed_green_blue_alpha_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'initWithRed:green:blue:alpha:colorSpace:'; { available in 10_12, 10_0 }
    function initWithRed_green_blue_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'initWithRed:green:blue:colorSpace:'; { available in 10_12, 10_0 }
    function numberOfComponents: size_t; message 'numberOfComponents';
    function components: CGFloatPtr; message 'components';
    function alpha: CGFloat; message 'alpha';
    function colorSpace: CGColorSpaceRef; message 'colorSpace';
    function red: CGFloat; message 'red';
    function green: CGFloat; message 'green';
    function blue: CGFloat; message 'blue';
    function stringRepresentation: NSString; message 'stringRepresentation';
    class function blackColor: instancetype; message 'blackColor'; { available in 10_12, 10_0 }
    class function whiteColor: instancetype; message 'whiteColor'; { available in 10_12, 10_0 }
    class function grayColor: instancetype; message 'grayColor'; { available in 10_12, 10_0 }
    class function redColor: instancetype; message 'redColor'; { available in 10_12, 10_0 }
    class function greenColor: instancetype; message 'greenColor'; { available in 10_12, 10_0 }
    class function blueColor: instancetype; message 'blueColor'; { available in 10_12, 10_0 }
    class function cyanColor: instancetype; message 'cyanColor'; { available in 10_12, 10_0 }
    class function magentaColor: instancetype; message 'magentaColor'; { available in 10_12, 10_0 }
    class function yellowColor: instancetype; message 'yellowColor'; { available in 10_12, 10_0 }
    class function clearColor: instancetype; message 'clearColor'; { available in 10_12, 10_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

