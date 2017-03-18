{ Parsed from UIKit.framework UIGraphicsImageRenderer.h }

{$ifdef TYPES}
type
  UIGraphicsImageRendererFormatPtr = ^UIGraphicsImageRendererFormat;
  UIGraphicsImageRendererContextPtr = ^UIGraphicsImageRendererContext;
  UIGraphicsImageRendererPtr = ^UIGraphicsImageRenderer;
{$endif}

{$ifdef TYPES}
type
  UIGraphicsImageDrawingActions = OpaqueCBlock { available in 10_0 };
{$endif}

{$ifdef CLASSES}

type
  UIGraphicsImageRendererFormat = objcclass external (UIGraphicsRendererFormat)
  public
    procedure setScale(newValue: CGFloat); message 'setScale:';
    function scale: CGFloat; message 'scale';
    procedure setOpaque(newValue: boolean); message 'setOpaque:';
    function opaque: boolean; message 'opaque';
    procedure setPrefersExtendedRange(newValue: boolean); message 'setPrefersExtendedRange:';
    function prefersExtendedRange: boolean; message 'prefersExtendedRange';
  end;

type
  UIGraphicsImageRendererContext = objcclass external (UIGraphicsRendererContext)
  public
    function currentImage: UIImage; message 'currentImage';
  end;

type
  UIGraphicsImageRenderer = objcclass external (UIGraphicsRenderer)
  public
    function initWithSize (size: CGSize): instancetype; message 'initWithSize:';
    function initWithSize_format (size: CGSize; format_: UIGraphicsImageRendererFormat): instancetype; message 'initWithSize:format:'; { NS_DESIGNATED_INITIALIZER }
    function initWithBounds_format (bounds: CGRect; format_: UIGraphicsImageRendererFormat): instancetype; message 'initWithBounds:format:'; { NS_DESIGNATED_INITIALIZER }
    function imageWithActions (actions: NS_NOESCAPE UIGraphicsImageDrawingActions): UIImage; message 'imageWithActions:';
    function PNGDataWithActions (actions: NS_NOESCAPE UIGraphicsImageDrawingActions): NSData; message 'PNGDataWithActions:';
    function JPEGDataWithCompressionQuality_actions (compressionQuality: CGFloat; actions: NS_NOESCAPE UIGraphicsImageDrawingActions): NSData; message 'JPEGDataWithCompressionQuality:actions:';
  end;
{$endif}

