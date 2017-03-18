{ Parsed from QuartzCore.framework CAMetalLayer.h }

{$ifdef TYPES}
type
  CAMetalLayerPtr = ^CAMetalLayer;
  CAMetalDrawableProtocolPtr = ^CAMetalDrawableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CAMetalDrawableProtocol = objcprotocol external name 'CAMetalDrawable' (MTLDrawableProtocol)
    function texture: MTLTextureProtocol; message 'texture';
    function layer: CAMetalLayer; message 'layer';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAMetalLayer = objcclass external (CALayer)
  private
    _priv: _CAMetalLayerPrivatePtr;
  public
    procedure setDevice(newValue: MTLDeviceProtocol); message 'setDevice:';
    function device: MTLDeviceProtocol; message 'device';
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setFramebufferOnly(newValue: boolean); message 'setFramebufferOnly:';
    function framebufferOnly: boolean; message 'framebufferOnly';
    procedure setDrawableSize(newValue: CGSize); message 'setDrawableSize:';
    function drawableSize: CGSize; message 'drawableSize';
    function nextDrawable: nullable CAMetalDrawableProtocol; message 'nextDrawable';
    procedure setPresentsWithTransaction(newValue: boolean); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: boolean; message 'presentsWithTransaction';
  end;
{$endif}

