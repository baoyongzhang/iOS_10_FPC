{ Parsed from UIKit.framework UIBezierPath.h }

{$ifdef TYPES}
type
  UIBezierPathPtr = ^UIBezierPath;
{$endif}

{$ifdef TYPES}
type
  UIRectCorner = NSUInteger;
  UIRectCornerPtr = ^UIRectCorner;

const
  UIRectCornerTopLeft = 1 shl 0;
  UIRectCornerTopRight = 1 shl 1;
  UIRectCornerBottomLeft = 1 shl 2;
  UIRectCornerBottomRight = 1 shl 3;
  UIRectCornerAllCorners = 0;
{$endif}

{$ifdef CLASSES}

type
  UIBezierPath = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function bezierPath: instancetype; message 'bezierPath';
    class function bezierPathWithRect (rect: CGRect): instancetype; message 'bezierPathWithRect:';
    class function bezierPathWithOvalInRect (rect: CGRect): instancetype; message 'bezierPathWithOvalInRect:';
    class function bezierPathWithRoundedRect_cornerRadius (rect: CGRect; cornerRadius: CGFloat): instancetype; message 'bezierPathWithRoundedRect:cornerRadius:';
    class function bezierPathWithRoundedRect_byRoundingCorners_cornerRadii (rect: CGRect; corners: UIRectCorner; cornerRadii: CGSize): instancetype; message 'bezierPathWithRoundedRect:byRoundingCorners:cornerRadii:';
    class function bezierPathWithArcCenter_radius_startAngle_endAngle_clockwise (center: CGPoint; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: boolean): instancetype; message 'bezierPathWithArcCenter:radius:startAngle:endAngle:clockwise:';
    class function bezierPathWithCGPath (CGPath: CGPathRef): instancetype; message 'bezierPathWithCGPath:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCGPath(newValue: CGPathRef); message 'setCGPath:';
    function CGPath: CGPathRef; message 'CGPath';
    function CGPath_: CGPathRef; message 'CGPath'; { CF_RETURNS_NOT_RETAINED }
    procedure moveToPoint (point: CGPoint); message 'moveToPoint:';
    procedure addLineToPoint (point: CGPoint); message 'addLineToPoint:';
    procedure addCurveToPoint_controlPoint1_controlPoint2 (endPoint: CGPoint; controlPoint1: CGPoint; controlPoint2: CGPoint); message 'addCurveToPoint:controlPoint1:controlPoint2:';
    procedure addQuadCurveToPoint_controlPoint (endPoint: CGPoint; controlPoint: CGPoint); message 'addQuadCurveToPoint:controlPoint:';
    procedure addArcWithCenter_radius_startAngle_endAngle_clockwise (center: CGPoint; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: boolean); message 'addArcWithCenter:radius:startAngle:endAngle:clockwise:'; { available in 4_0 }
    procedure closePath; message 'closePath';
    procedure removeAllPoints; message 'removeAllPoints';
    procedure appendPath (bezierPath_: UIBezierPath); message 'appendPath:';
    function bezierPathByReversingPath: UIBezierPath; message 'bezierPathByReversingPath'; { available in 6_0 }
    procedure applyTransform (transform: CGAffineTransform); message 'applyTransform:';
    function isEmpty: boolean; message 'isEmpty';
    function bounds: CGRect; message 'bounds';
    function currentPoint: CGPoint; message 'currentPoint';
    function containsPoint (point: CGPoint): boolean; message 'containsPoint:';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setLineCapStyle(newValue: CGLineCap); message 'setLineCapStyle:';
    function lineCapStyle: CGLineCap; message 'lineCapStyle';
    procedure setLineJoinStyle(newValue: CGLineJoin); message 'setLineJoinStyle:';
    function lineJoinStyle: CGLineJoin; message 'lineJoinStyle';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    procedure setFlatness(newValue: CGFloat); message 'setFlatness:';
    function flatness: CGFloat; message 'flatness';
    procedure setUsesEvenOddFillRule(newValue: boolean); message 'setUsesEvenOddFillRule:';
    function usesEvenOddFillRule: boolean; message 'usesEvenOddFillRule';
    procedure setLineDash_count_phase (pattern: nullable  CGFloatPtr; count: NSInteger; phase: CGFloat); message 'setLineDash:count:phase:';
    procedure getLineDash_count_phase (pattern: nullable CGFloatPtr; count: nullable NSIntegerPtr; phase: nullable CGFloatPtr); message 'getLineDash:count:phase:';
    procedure fill; message 'fill';
    procedure stroke; message 'stroke';
    procedure fillWithBlendMode_alpha (blendMode: CGBlendMode; alpha: CGFloat); message 'fillWithBlendMode:alpha:';
    procedure strokeWithBlendMode_alpha (blendMode: CGBlendMode; alpha: CGFloat); message 'strokeWithBlendMode:alpha:';
    procedure addClip; message 'addClip';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

