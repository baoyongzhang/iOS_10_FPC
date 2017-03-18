{ Parsed from GLKit.framework GLKView.h }

{$ifdef TYPES}
type
  GLKViewPtr = ^GLKView;
  GLKViewDelegateProtocolPtr = ^GLKViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GLKViewDrawableColorFormat = GLint;
  GLKViewDrawableColorFormatPtr = ^GLKViewDrawableColorFormat;

const
  GLKViewDrawableColorFormatRGBA8888 = 0;
  GLKViewDrawableColorFormatRGB565 = 1;
  GLKViewDrawableColorFormatSRGBA8888 = 2;

type
  GLKViewDrawableDepthFormat = GLint;
  GLKViewDrawableDepthFormatPtr = ^GLKViewDrawableDepthFormat;

const
  GLKViewDrawableDepthFormatNone = 0;
  GLKViewDrawableDepthFormat16 = 1;
  GLKViewDrawableDepthFormat24 = 2;

type
  GLKViewDrawableStencilFormat = GLint;
  GLKViewDrawableStencilFormatPtr = ^GLKViewDrawableStencilFormat;

const
  GLKViewDrawableStencilFormatNone = 0;
  GLKViewDrawableStencilFormat8 = 1;

type
  GLKViewDrawableMultisample = GLint;
  GLKViewDrawableMultisamplePtr = ^GLKViewDrawableMultisample;

const
  GLKViewDrawableMultisampleNone = 0;
  GLKViewDrawableMultisample4X = 1;
{$endif}

{$ifdef CLASSES}

type
  GLKView = objcclass external (UIView, NSCodingProtocol)
  private
  public
    function initWithFrame_context (frame: CGRect; context: EAGLContext): instancetype; message 'initWithFrame:context:';
    procedure setDelegate(newValue: GLKViewDelegateProtocol); message 'setDelegate:';
    function delegate: GLKViewDelegateProtocol; message 'delegate';
    procedure setContext(newValue: EAGLContext); message 'setContext:';
    function context: EAGLContext; message 'context';
    function drawableWidth: NSInteger; message 'drawableWidth';
    function drawableHeight: NSInteger; message 'drawableHeight';
    procedure setDrawableColorFormat(newValue: GLKViewDrawableColorFormat); message 'setDrawableColorFormat:';
    function drawableColorFormat: GLKViewDrawableColorFormat; message 'drawableColorFormat';
    procedure setDrawableDepthFormat(newValue: GLKViewDrawableDepthFormat); message 'setDrawableDepthFormat:';
    function drawableDepthFormat: GLKViewDrawableDepthFormat; message 'drawableDepthFormat';
    procedure setDrawableStencilFormat(newValue: GLKViewDrawableStencilFormat); message 'setDrawableStencilFormat:';
    function drawableStencilFormat: GLKViewDrawableStencilFormat; message 'drawableStencilFormat';
    procedure setDrawableMultisample(newValue: GLKViewDrawableMultisample); message 'setDrawableMultisample:';
    function drawableMultisample: GLKViewDrawableMultisample; message 'drawableMultisample';
    procedure bindDrawable; message 'bindDrawable';
    procedure deleteDrawable; message 'deleteDrawable';
    function snapshot: UIImage; message 'snapshot';
    procedure setEnableSetNeedsDisplay(newValue: boolean); message 'setEnableSetNeedsDisplay:';
    function enableSetNeedsDisplay: boolean; message 'enableSetNeedsDisplay';
    procedure display; message 'display';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GLKViewDelegateProtocol = objcprotocol external name 'GLKViewDelegate' (NSObjectProtocol)
  required
    procedure glkView_drawInRect (view: GLKView; rect: CGRect); message 'glkView:drawInRect:';
  end;
{$endif}

