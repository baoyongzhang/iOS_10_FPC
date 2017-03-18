{ Parsed from UIKit.framework UIGraphicsRenderer.h }

{$ifdef TYPES}
type
  UIGraphicsRendererFormatPtr = ^UIGraphicsRendererFormat;
  UIGraphicsRendererContextPtr = ^UIGraphicsRendererContext;
  UIGraphicsRendererPtr = ^UIGraphicsRenderer;
{$endif}

{$ifdef CLASSES}

type
  UIGraphicsRendererFormat = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function defaultFormat: instancetype; message 'defaultFormat';
    function bounds: CGRect; message 'bounds';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UIGraphicsRendererContext = objcclass external (NSObject)
  public
    function CGContext: CGContextRef; message 'CGContext';
    function format: __kindof UIGraphicsRendererFormatPtr; message 'format';
    procedure fillRect (rect: CGRect); message 'fillRect:';
    procedure fillRect_blendMode (rect: CGRect; blendMode: CGBlendMode); message 'fillRect:blendMode:';
    procedure strokeRect (rect: CGRect); message 'strokeRect:';
    procedure strokeRect_blendMode (rect: CGRect; blendMode: CGBlendMode); message 'strokeRect:blendMode:';
    procedure clipToRect (rect: CGRect); message 'clipToRect:';
  end;

type
  UIGraphicsRenderer = objcclass external (NSObject)
  public
    function initWithBounds (bounds: CGRect): instancetype; message 'initWithBounds:';
    function initWithBounds_format (bounds: CGRect; format: UIGraphicsRendererFormat): instancetype; message 'initWithBounds:format:'; { NS_DESIGNATED_INITIALIZER }
    function format: __kindof UIGraphicsRendererFormatPtr; message 'format';
    function allowsImageOutput: boolean; message 'allowsImageOutput';
  end;
{$endif}

