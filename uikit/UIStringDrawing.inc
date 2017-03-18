{ Parsed from UIKit.framework UIStringDrawing.h }

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UITextAttributeFont deprecated 'in 5_0, 7_0, "Use NSFontAttributeName"'; cvar; external;
  __TVOS_PROHIBITED: NSString *UITextAttributeTextColor deprecated 'in 5_0, 7_0, "Use NSForegroundColorAttributeName"'; cvar; external;
  __TVOS_PROHIBITED: NSString *UITextAttributeTextShadowColor deprecated 'in 5_0, 7_0, "Use NSShadowAttributeName with an NSShadow instance as the value"'; cvar; external;
  __TVOS_PROHIBITED: NSString *UITextAttributeTextShadowOffset deprecated 'in 5_0, 7_0, "Use NSShadowAttributeName with an NSShadow instance as the value"'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UILineBreakMode = NSInteger;
  UILineBreakModePtr = ^UILineBreakMode;

const
  UILineBreakModeWordWrap = 0;
  UILineBreakModeCharacterWrap = 1;
  UILineBreakModeClip = 2;
  UILineBreakModeHeadTruncation = 3;
  UILineBreakModeTailTruncation = 4;
  UILineBreakModeMiddleTruncation = 5;

type
  UITextAlignment = NSInteger;
  UITextAlignmentPtr = ^UITextAlignment;

const
  UITextAlignmentLeft = 0;
  UITextAlignmentCenter = 1;
  UITextAlignmentRight = 2;

type
  UIBaselineAdjustment = NSInteger;
  UIBaselineAdjustmentPtr = ^UIBaselineAdjustment;

const
  UIBaselineAdjustmentAlignBaselines = 0;
  UIBaselineAdjustmentAlignCenters = 1;
  UIBaselineAdjustmentNone = 2;
{$endif}

{$ifdef CLASSES}

type
  UIStringDrawing = objccategory external (NSString)
    function sizeWithFont (font: UIFont): CGSize; message 'sizeWithFont:'; deprecated 'in 2_0, 7_0, "Use -sizeWithAttributes:"';
    function sizeWithFont_forWidth_lineBreakMode (font: UIFont; width: CGFloat; lineBreakMode: NSLineBreakMode): CGSize; message 'sizeWithFont:forWidth:lineBreakMode:'; deprecated 'in 2_0, 7_0, "Use -boundingRectWithSize:options:attributes:context:"';
    function drawAtPoint_withFont (point: CGPoint; font: UIFont): CGSize; message 'drawAtPoint:withFont:'; deprecated 'in 2_0, 7_0, "Use -drawAtPoint:withAttributes:"';
    function drawAtPoint_forWidth_withFont_lineBreakMode (point: CGPoint; width: CGFloat; font: UIFont; lineBreakMode: NSLineBreakMode): CGSize; message 'drawAtPoint:forWidth:withFont:lineBreakMode:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
    function sizeWithFont_constrainedToSize (font: UIFont; size: CGSize): CGSize; message 'sizeWithFont:constrainedToSize:'; deprecated 'in 2_0, 7_0, "Use -boundingRectWithSize:options:attributes:context:"';
    function sizeWithFont_constrainedToSize_lineBreakMode (font: UIFont; size: CGSize; lineBreakMode: NSLineBreakMode): CGSize; message 'sizeWithFont:constrainedToSize:lineBreakMode:'; deprecated 'in 2_0, 7_0, "Use -boundingRectWithSize:options:attributes:context:"';
    function drawInRect_withFont (rect: CGRect; font: UIFont): CGSize; message 'drawInRect:withFont:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
    function drawInRect_withFont_lineBreakMode (rect: CGRect; font: UIFont; lineBreakMode: NSLineBreakMode): CGSize; message 'drawInRect:withFont:lineBreakMode:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
    function drawInRect_withFont_lineBreakMode_alignment (rect: CGRect; font: UIFont; lineBreakMode: NSLineBreakMode; alignment: NSTextAlignment): CGSize; message 'drawInRect:withFont:lineBreakMode:alignment:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
    function sizeWithFont_minFontSize_actualFontSize_forWidth_lineBreakMode (font: UIFont; minFontSize: CGFloat; actualFontSize: CGFloatPtr; width: CGFloat; lineBreakMode: NSLineBreakMode): CGSize; message 'sizeWithFont:minFontSize:actualFontSize:forWidth:lineBreakMode:'; deprecated 'in 2_0, 7_0';
    function drawAtPoint_forWidth_withFont_fontSize_lineBreakMode_baselineAdjustment (point: CGPoint; width: CGFloat; font: UIFont; fontSize: CGFloat; lineBreakMode: NSLineBreakMode; baselineAdjustment: UIBaselineAdjustment): CGSize; message 'drawAtPoint:forWidth:withFont:fontSize:lineBreakMode:baselineAdjustment:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
    function drawAtPoint_forWidth_withFont_minFontSize_actualFontSize_lineBreakMode_baselineAdjustment (point: CGPoint; width: CGFloat; font: UIFont; minFontSize: CGFloat; actualFontSize: CGFloatPtr; lineBreakMode: NSLineBreakMode; baselineAdjustment: UIBaselineAdjustment): CGSize; message 'drawAtPoint:forWidth:withFont:minFontSize:actualFontSize:lineBreakMode:baselineAdjustment:'; deprecated 'in 2_0, 7_0, "Use -drawInRect:withAttributes:"';
  end;
{$endif}

