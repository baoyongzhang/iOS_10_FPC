{ Parsed from MetalKit.framework MTKView.h }

{$ifdef TYPES}
type
  MTKViewPtr = ^MTKView;
  MTKViewDelegateProtocolPtr = ^MTKViewDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTKView = objcclass external (UIView, NSCodingProtocol, CALayerDelegateProtocol)
  public
    function initWithFrame_device (frameRect: CGRect; device: nullable MTLDeviceProtocol): nonnull instancetype; message 'initWithFrame:device:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: nonnull NSCoderPtr): nonnull instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: MTKViewDelegateProtocol); message 'setDelegate:';
    function delegate: MTKViewDelegateProtocol; message 'delegate';
    procedure setDevice(newValue: MTLDeviceProtocol); message 'setDevice:';
    function device: MTLDeviceProtocol; message 'device';
    function currentDrawable: CAMetalDrawableProtocol; message 'currentDrawable';
    procedure setFramebufferOnly(newValue: boolean); message 'setFramebufferOnly:';
    function framebufferOnly: boolean; message 'framebufferOnly';
    procedure setPresentsWithTransaction(newValue: boolean); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: boolean; message 'presentsWithTransaction';
    procedure setColorPixelFormat(newValue: MTLPixelFormat); message 'setColorPixelFormat:';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat';
    procedure setDepthStencilPixelFormat(newValue: MTLPixelFormat); message 'setDepthStencilPixelFormat:';
    function depthStencilPixelFormat: MTLPixelFormat; message 'depthStencilPixelFormat';
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:';
    function sampleCount: NSUInteger; message 'sampleCount';
    procedure setClearColor(newValue: MTLClearColor); message 'setClearColor:';
    function clearColor: MTLClearColor; message 'clearColor';
    procedure setClearDepth(newValue: double); message 'setClearDepth:';
    function clearDepth: double; message 'clearDepth';
    procedure setClearStencil(newValue: cuint32); message 'setClearStencil:';
    function clearStencil: cuint32; message 'clearStencil';
    function depthStencilTexture: MTLTextureProtocol; message 'depthStencilTexture';
    function multisampleColorTexture: MTLTextureProtocol; message 'multisampleColorTexture';
    procedure releaseDrawables; message 'releaseDrawables';
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:';
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond';
    procedure setEnableSetNeedsDisplay(newValue: boolean); message 'setEnableSetNeedsDisplay:';
    function enableSetNeedsDisplay: boolean; message 'enableSetNeedsDisplay';
    procedure setAutoResizeDrawable(newValue: boolean); message 'setAutoResizeDrawable:';
    function autoResizeDrawable: boolean; message 'autoResizeDrawable';
    procedure setDrawableSize(newValue: CGSize); message 'setDrawableSize:';
    function drawableSize: CGSize; message 'drawableSize';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setColorspace(newValue: CGColorSpaceRef); message 'setColorspace:';
    function colorspace: CGColorSpaceRef; message 'colorspace';
    procedure draw; message 'draw';

    { Adopted protocols }
    function actionForLayer_forKey (layer: CALayer; event: NSString): nullable CAActionProtocol; message 'actionForLayer:forKey:';
    procedure displayLayer (layer: CALayer); message 'displayLayer:';
    procedure drawLayer_inContext (layer: CALayer; ctx: CGContextRef); message 'drawLayer:inContext:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    procedure layerWillDraw (layer: CALayer); message 'layerWillDraw:'; { available starting in 10.12, 10.0, 10.0, 3.0 }
    procedure layoutSublayersOfLayer (layer: CALayer); message 'layoutSublayersOfLayer:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTKViewDelegateProtocol = objcprotocol external name 'MTKViewDelegate' (NSObjectProtocol)
    procedure mtkView_drawableSizeWillChange (view: nonnull MTKViewPtr; size: CGSize); message 'mtkView:drawableSizeWillChange:';
    procedure drawInMTKView (view: nonnull MTKViewPtr); message 'drawInMTKView:';
  end;
{$endif}

