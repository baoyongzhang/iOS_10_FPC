{ Parsed from UIKit.framework NSStringDrawing.h }

{$ifdef TYPES}
type
  NSStringDrawingContextPtr = ^NSStringDrawingContext;
{$endif}

{$ifdef CLASSES}

type
  NSStringDrawingContext = objcclass external (NSObject)
  public
    procedure setMinimumScaleFactor(newValue: CGFloat); message 'setMinimumScaleFactor:';
    function minimumScaleFactor: CGFloat; message 'minimumScaleFactor';
    function actualScaleFactor: CGFloat; message 'actualScaleFactor';
    function totalBounds: CGRect; message 'totalBounds';
  end;


type
  NSString_NSStringDrawing = objccategory external name 'NSStringDrawing' (NSString)
    function sizeWithAttributes (attrs: nullable NSDictionaryPtr): CGSize; message 'sizeWithAttributes:'; { available in 10_0, 7_0 }
    procedure drawAtPoint_withAttributes (point: CGPoint; attrs: nullable NSDictionaryPtr); message 'drawAtPoint:withAttributes:'; { available in 10_0, 7_0 }
    procedure drawInRect_withAttributes (rect: CGRect; attrs: nullable NSDictionaryPtr); message 'drawInRect:withAttributes:'; { available in 10_0, 7_0 }
  end;

type
  NSStringDrawing = objccategory external (NSAttributedString)
    function size: CGSize; message 'size'; { available in 10_0, 6_0 }
    procedure drawAtPoint (point: CGPoint); message 'drawAtPoint:'; { available in 10_0, 6_0 }
    procedure drawInRect (rect: CGRect); message 'drawInRect:'; { available in 10_0, 6_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSStringDrawingOptions = NSInteger;
  NSStringDrawingOptionsPtr = ^NSStringDrawingOptions;

const
  NSStringDrawingUsesLineFragmentOrigin = 1 shl 0;
  NSStringDrawingUsesFontLeading = 1 shl 1;
  NSStringDrawingUsesDeviceMetrics = 1 shl 3;
  NSStringDrawingTruncatesLastVisibleLine = 1 shl 5 { available in 10_5, 6_0 };
{$endif}

{$ifdef CLASSES}

type
  NSString_NSExtendedStringDrawing = objccategory external name 'NSExtendedStringDrawing' (NSString)
    procedure drawWithRect_options_attributes_context (rect: CGRect; options: NSStringDrawingOptions; attributes: nullable NSDictionaryPtr; context: nullable NSStringDrawingContextPtr); message 'drawWithRect:options:attributes:context:'; { available in 10_11, 7_0 }
    function boundingRectWithSize_options_attributes_context (size: CGSize; options: NSStringDrawingOptions; attributes: nullable NSDictionaryPtr; context: nullable NSStringDrawingContextPtr): CGRect; message 'boundingRectWithSize:options:attributes:context:'; { available in 10_11, 7_0 }
  end;

type
  NSExtendedStringDrawing = objccategory external (NSAttributedString)
    procedure drawWithRect_options_context (rect: CGRect; options: NSStringDrawingOptions; context: nullable NSStringDrawingContextPtr); message 'drawWithRect:options:context:'; { available in 10_11, 6_0 }
    function boundingRectWithSize_options_context (size: CGSize; options: NSStringDrawingOptions; context: nullable NSStringDrawingContextPtr): CGRect; message 'boundingRectWithSize:options:context:'; { available in 10_11, 6_0 }
  end;

type
  NSStringDrawingContextDeprecated = objccategory external (NSStringDrawingContext)
    procedure set__TVOS_PROHIBITED(newValue: CGFloat minimumTrackingAdjustment); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: CGFloat minimumTrackingAdjustment; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: CGFloat actualTrackingAdjustment; message 'TVOS_PROHIBITED';
  end;
{$endif}

