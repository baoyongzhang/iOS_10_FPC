{ Parsed from CoreImage.framework CIVector.h }

{$ifdef TYPES}
type
  CIVectorPtr = ^CIVector;
{$endif}

{$ifdef CLASSES}

type
  CIVector = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _count: size_t;
    _u: record
      case longint of
        0: (vec:array[0..3] of CGFloat);
        1: (ptr: CGFloatPtr);
    end;
  public
    class function vectorWithValues_count (values: CGFloatPtr; count: size_t): instancetype; message 'vectorWithValues:count:';
    class function vectorWithX (x: CGFloat): instancetype; message 'vectorWithX:';
    class function vectorWithX_Y (x: CGFloat; y: CGFloat): instancetype; message 'vectorWithX:Y:';
    class function vectorWithX_Y_Z (x: CGFloat; y: CGFloat; z: CGFloat): instancetype; message 'vectorWithX:Y:Z:';
    class function vectorWithX_Y_Z_W (x: CGFloat; y: CGFloat; z: CGFloat; w: CGFloat): instancetype; message 'vectorWithX:Y:Z:W:';
    class function vectorWithCGPoint (p: CGPoint): instancetype; message 'vectorWithCGPoint:'; { available in 10_9, 5_0 }
    class function vectorWithCGRect (r: CGRect): instancetype; message 'vectorWithCGRect:'; { available in 10_9, 5_0 }
    class function vectorWithCGAffineTransform (t: CGAffineTransform): instancetype; message 'vectorWithCGAffineTransform:'; { available in 10_9, 5_0 }
    class function vectorWithString (representation: NSString): instancetype; message 'vectorWithString:';
    function initWithValues_count (values: CGFloatPtr; count: size_t): instancetype; message 'initWithValues:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithX (x: CGFloat): instancetype; message 'initWithX:';
    function initWithX_Y (x: CGFloat; y: CGFloat): instancetype; message 'initWithX:Y:';
    function initWithX_Y_Z (x: CGFloat; y: CGFloat; z: CGFloat): instancetype; message 'initWithX:Y:Z:';
    function initWithX_Y_Z_W (x: CGFloat; y: CGFloat; z: CGFloat; w: CGFloat): instancetype; message 'initWithX:Y:Z:W:';
    function initWithCGPoint (p: CGPoint): instancetype; message 'initWithCGPoint:'; { available in 10_9, 5_0 }
    function initWithCGRect (r: CGRect): instancetype; message 'initWithCGRect:'; { available in 10_9, 5_0 }
    function initWithCGAffineTransform (r: CGAffineTransform): instancetype; message 'initWithCGAffineTransform:'; { available in 10_9, 5_0 }
    function initWithString (representation: NSString): instancetype; message 'initWithString:';
    function valueAtIndex (index: size_t): CGFloat; message 'valueAtIndex:';
    function count: size_t; message 'count';
    function X: CGFloat; message 'X';
    function Y: CGFloat; message 'Y';
    function Z: CGFloat; message 'Z';
    function W: CGFloat; message 'W';
    function CGPointValue: CGPoint; message 'CGPointValue';
    function CGRectValue: CGRect; message 'CGRectValue';
    function CGAffineTransformValue: CGAffineTransform; message 'CGAffineTransformValue';
    function stringRepresentation: NSString; message 'stringRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

