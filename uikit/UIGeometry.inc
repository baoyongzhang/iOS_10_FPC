{ Parsed from UIKit.framework UIGeometry.h }

{ Types from NSValueUIGeometryExtensions }
{$ifdef TYPES}

{$endif}

{$ifdef TYPES}
type
  UIEdgeInsets = record
    top, left, bottom, right: CGFloat;
  end;
type
  UIEdgeInsetsPtr = ^UIEdgeInsets;
type
  UIOffset = record
    horizontal, vertical: CGFloat;
  end;
type
  UIOffsetPtr = ^UIOffset;

type
  UIRectEdge = NSUInteger;
  UIRectEdgePtr = ^UIRectEdge;

const
  UIRectEdgeNone = 0;
  UIRectEdgeTop = 1 shl 0;
  UIRectEdgeLeft = 1 shl 1;
  UIRectEdgeBottom = 1 shl 2;
  UIRectEdgeRight = 1 shl 3;
  UIRectEdgeAll = UIRectEdgeTop + UIRectEdgeLeft + UIRectEdgeBottom + UIRectEdgeRight;
{$endif}

{$if defined(UIKIT_REMOVE_ZERO_FROM_SWIFT)}
{$ifdef FUNCTIONS}
function NS_SWIFT_UNAVAILABLE____________: UIEdgeInsets UIEdgeInsetsZero; cdecl; external;
function NS_SWIFT_UNAVAILABLE_____________: UIOffset UIOffsetZero; cdecl; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIEdgeInsetsZero: UIEdgeInsets; cvar; external;
  UIOffsetZero: UIOffset; cvar; external;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function NSStringFromCGPoint(point: CGPoint): NSString; cdecl; external;
function NSStringFromCGVector(vector: CGVector): NSString; cdecl; external;
function NSStringFromCGSize(size: CGSize): NSString; cdecl; external;
function NSStringFromCGRect(rect: CGRect): NSString; cdecl; external;
function NSStringFromCGAffineTransform(transform: CGAffineTransform): NSString; cdecl; external;
function NSStringFromUIEdgeInsets(insets: UIEdgeInsets): NSString; cdecl; external;
function NSStringFromUIOffset(offset: UIOffset): NSString; cdecl; external;
function CGPointFromString(string_: NSString): CGPoint; cdecl; external;
function CGVectorFromString(string_: NSString): CGVector; cdecl; external;
function CGSizeFromString(string_: NSString): CGSize; cdecl; external;
function CGRectFromString(string_: NSString): CGRect; cdecl; external;
function CGAffineTransformFromString(string_: NSString): CGAffineTransform; cdecl; external;
function UIEdgeInsetsFromString(string_: NSString): UIEdgeInsets; cdecl; external;
function UIOffsetFromString(string_: NSString): UIOffset; cdecl; external;
{$endif}

{$ifdef CLASSES}

type
  NSValueUIGeometryExtensions = objccategory external (NSValue)
    class function valueWithCGPoint (point: CGPoint): NSValue; message 'valueWithCGPoint:';
    class function valueWithCGVector (vector: CGVector): NSValue; message 'valueWithCGVector:';
    class function valueWithCGSize (size: CGSize): NSValue; message 'valueWithCGSize:';
    class function valueWithCGRect (rect: CGRect): NSValue; message 'valueWithCGRect:';
    class function valueWithCGAffineTransform (transform: CGAffineTransform): NSValue; message 'valueWithCGAffineTransform:';
    class function valueWithUIEdgeInsets (insets: UIEdgeInsets): NSValue; message 'valueWithUIEdgeInsets:';
    class function valueWithUIOffset (insets: UIOffset): NSValue; message 'valueWithUIOffset:'; { available in 5_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function CGPointValue: CGPoint; message 'CGPointValue';
    function CGVectorValue: CGVector; message 'CGVectorValue';
    function CGSizeValue: CGSize; message 'CGSizeValue';
    function CGRectValue: CGRect; message 'CGRectValue';
    function CGAffineTransformValue: CGAffineTransform; message 'CGAffineTransformValue';
    function UIEdgeInsetsValue: UIEdgeInsets; message 'UIEdgeInsetsValue';
    function UIOffsetValue: UIOffset; message 'UIOffsetValue';
    {$else}
    function CGPointValue: CGPoint; message 'CGPointValue';
    function CGVectorValue: CGVector; message 'CGVectorValue';
    function CGSizeValue: CGSize; message 'CGSizeValue';
    function CGRectValue: CGRect; message 'CGRectValue';
    function CGAffineTransformValue: CGAffineTransform; message 'CGAffineTransformValue';
    function UIEdgeInsetsValue: UIEdgeInsets; message 'UIEdgeInsetsValue';
    function UIOffsetValue: UIOffset; message 'UIOffsetValue'; { available in 5_0 }
    {$endif}
  end;

type
  UIGeometryKeyedCoding = objccategory external (NSCoder)
    procedure encodeCGPoint_forKey (point: CGPoint; key: NSString); message 'encodeCGPoint:forKey:';
    procedure encodeCGVector_forKey (vector: CGVector; key: NSString); message 'encodeCGVector:forKey:';
    procedure encodeCGSize_forKey (size: CGSize; key: NSString); message 'encodeCGSize:forKey:';
    procedure encodeCGRect_forKey (rect: CGRect; key: NSString); message 'encodeCGRect:forKey:';
    procedure encodeCGAffineTransform_forKey (transform: CGAffineTransform; key: NSString); message 'encodeCGAffineTransform:forKey:';
    procedure encodeUIEdgeInsets_forKey (insets: UIEdgeInsets; key: NSString); message 'encodeUIEdgeInsets:forKey:';
    procedure encodeUIOffset_forKey (offset: UIOffset; key: NSString); message 'encodeUIOffset:forKey:'; { available in 5_0 }
    function decodeCGPointForKey (key: NSString): CGPoint; message 'decodeCGPointForKey:';
    function decodeCGVectorForKey (key: NSString): CGVector; message 'decodeCGVectorForKey:';
    function decodeCGSizeForKey (key: NSString): CGSize; message 'decodeCGSizeForKey:';
    function decodeCGRectForKey (key: NSString): CGRect; message 'decodeCGRectForKey:';
    function decodeCGAffineTransformForKey (key: NSString): CGAffineTransform; message 'decodeCGAffineTransformForKey:';
    function decodeUIEdgeInsetsForKey (key: NSString): UIEdgeInsets; message 'decodeUIEdgeInsetsForKey:';
    function decodeUIOffsetForKey (key: NSString): UIOffset; message 'decodeUIOffsetForKey:'; { available in 5_0 }
  end;
{$endif}

