{ Parsed from UIKit.framework UIGraphicsPDFRenderer.h }

{$ifdef TYPES}
type
  UIGraphicsPDFRendererFormatPtr = ^UIGraphicsPDFRendererFormat;
  UIGraphicsPDFRendererContextPtr = ^UIGraphicsPDFRendererContext;
  UIGraphicsPDFRendererPtr = ^UIGraphicsPDFRenderer;
{$endif}

{$ifdef TYPES}
type
  UIGraphicsPDFDrawingActions = OpaqueCBlock { available in 10_0 };
{$endif}

{$ifdef CLASSES}

type
  UIGraphicsPDFRendererFormat = objcclass external (UIGraphicsRendererFormat)
  public
    procedure setDocumentInfo(newValue: NSDictionary); message 'setDocumentInfo:';
    function documentInfo: NSDictionary; message 'documentInfo';
  end;

type
  UIGraphicsPDFRendererContext = objcclass external (UIGraphicsRendererContext)
  public
    function pdfContextBounds: CGRect; message 'pdfContextBounds';
    procedure beginPage; message 'beginPage';
    procedure beginPageWithBounds_pageInfo (bounds: CGRect; pageInfo: NSDictionary); message 'beginPageWithBounds:pageInfo:';
    procedure setURL_forRect (url: NSURL; rect: CGRect); message 'setURL:forRect:';
    procedure addDestinationWithName_atPoint (name: NSString; point: CGPoint); message 'addDestinationWithName:atPoint:';
    procedure setDestinationWithName_forRect (name: NSString; rect: CGRect); message 'setDestinationWithName:forRect:';
  end;

type
  UIGraphicsPDFRenderer = objcclass external (UIGraphicsRenderer)
  public
    function initWithBounds_format (bounds: CGRect; format_: UIGraphicsPDFRendererFormat): instancetype; message 'initWithBounds:format:'; { NS_DESIGNATED_INITIALIZER }
    function writePDFToURL_withActions_error (url: NSURL; actions: NS_NOESCAPE UIGraphicsPDFDrawingActions; error: NSErrorPtr): boolean; message 'writePDFToURL:withActions:error:';
    function PDFDataWithActions (actions: NS_NOESCAPE UIGraphicsPDFDrawingActions): NSData; message 'PDFDataWithActions:';
  end;
{$endif}

