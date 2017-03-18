{ Parsed from MapKit.framework MKOverlayPathView.h }

{$ifdef TYPES}
type
  MKOverlayPathViewPtr = ^MKOverlayPathView;
{$endif}

{$ifdef CLASSES}

type
  MKOverlayPathView = objcclass external (MKOverlayView)
  public
    procedure setFillColor(newValue: UIColor); message 'setFillColor:';
    function fillColor: UIColor; message 'fillColor';
    procedure setStrokeColor(newValue: UIColor); message 'setStrokeColor:';
    function strokeColor: UIColor; message 'strokeColor';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setLineJoin(newValue: CGLineJoin); message 'setLineJoin:';
    function lineJoin: CGLineJoin; message 'lineJoin';
    procedure setLineCap(newValue: CGLineCap); message 'setLineCap:';
    function lineCap: CGLineCap; message 'lineCap';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    procedure setLineDashPhase(newValue: CGFloat); message 'setLineDashPhase:';
    function lineDashPhase: CGFloat; message 'lineDashPhase';
    procedure setLineDashPattern(newValue: NSArray); message 'setLineDashPattern:';
    function lineDashPattern: NSArray; message 'lineDashPattern';
    procedure createPath; message 'createPath'; deprecated 'in 4_0, 7_0';
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure invalidatePath; message 'invalidatePath'; deprecated 'in 4_0, 7_0';
    procedure applyStrokePropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyStrokePropertiesToContext:atZoomScale:'; deprecated 'in 4_0, 7_0';
    procedure applyFillPropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyFillPropertiesToContext:atZoomScale:'; deprecated 'in 4_0, 7_0';
    procedure strokePath_inContext (path_: CGPathRef; context: CGContextRef); message 'strokePath:inContext:'; deprecated 'in 4_0, 7_0';
    procedure fillPath_inContext (path_: CGPathRef; context: CGContextRef); message 'fillPath:inContext:'; deprecated 'in 4_0, 7_0';
  end;
{$endif}

