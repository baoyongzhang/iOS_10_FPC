{ Parsed from MapKit.framework MKOverlayPathRenderer.h }

{ Types from MKOverlayPathRenderer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKOverlayPathRendererPtr = ^MKOverlayPathRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKOverlayPathRenderer = objcclass external (MKOverlayRenderer)
  public
    {$if defined(TARGET_OS_IPHONE)}
    procedure setFillColor(newValue: UIColor); message 'setFillColor:';
    function fillColor: UIColor; message 'fillColor';
    procedure setStrokeColor(newValue: UIColor); message 'setStrokeColor:';
    function strokeColor: UIColor; message 'strokeColor';
    {$else}
    procedure setFillColor_(newValue: NSColor); message 'setFillColor:';
    function fillColor_: NSColor; message 'fillColor';
    procedure setStrokeColor_(newValue: NSColor); message 'setStrokeColor:';
    function strokeColor_: NSColor; message 'strokeColor';
    {$endif}
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
    procedure setLineDashPattern(newValue: NSNumber *ProtocolPtr); message 'setLineDashPattern:';
    function lineDashPattern: NSNumber *ProtocolPtr; message 'lineDashPattern';
    procedure createPath; message 'createPath';
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure invalidatePath; message 'invalidatePath';
    procedure applyStrokePropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyStrokePropertiesToContext:atZoomScale:';
    procedure applyFillPropertiesToContext_atZoomScale (context: CGContextRef; zoomScale: MKZoomScale); message 'applyFillPropertiesToContext:atZoomScale:';
    procedure strokePath_inContext (path_: CGPathRef; context: CGContextRef); message 'strokePath:inContext:';
    procedure fillPath_inContext (path_: CGPathRef; context: CGContextRef); message 'fillPath:inContext:';
  end;
{$endif}

