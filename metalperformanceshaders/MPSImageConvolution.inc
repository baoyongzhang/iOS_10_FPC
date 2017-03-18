{ Parsed from MetalPerformanceShaders.framework MPSImageConvolution.h }

{$ifdef TYPES}
type
  MPSImageConvolutionPtr = ^MPSImageConvolution;
  MPSImageLaplacianPtr = ^MPSImageLaplacian;
  MPSImageBoxPtr = ^MPSImageBox;
  MPSImageTentPtr = ^MPSImageTent;
  MPSImageGaussianBlurPtr = ^MPSImageGaussianBlur;
  MPSImageSobelPtr = ^MPSImageSobel;
  MPSImagePyramidPtr = ^MPSImagePyramid;
  MPSImageGaussianPyramidPtr = ^MPSImageGaussianPyramid;
{$endif}

{$ifndef MPS_MSImageConvolution_h}
{$ifdef CLASSES}

type
  MPSImageConvolution = objcclass external (MPSUnaryImageKernel)
  public
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    procedure setBias(newValue: single); message 'setBias:';
    function bias: single; message 'bias';
    function initWithDevice_kernelWidth_kernelHeight_weights (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger; kernelWeights: float*__nonnull): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:weights:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  MPSImageLaplacian = objcclass external (MPSUnaryImageKernel)
  public
    procedure setBias(newValue: single); message 'setBias:';
    function bias: single; message 'bias';
  end;

type
  MPSImageBox = objcclass external (MPSUnaryImageKernel)
  public
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function initWithDevice_kernelWidth_kernelHeight (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSImageTent = objcclass external (MPSImageBox)
  end;

type
  MPSImageGaussianBlur = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_sigma (device_: nonnull MTLDeviceProtocol; sigma: single): nonnull instancetype; message 'initWithDevice:sigma:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function sigma: single; message 'sigma';
  end;

type
  MPSImageSobel = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function initWithDevice_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; transform: float * __nonnull): nonnull instancetype; message 'initWithDevice:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function colorTransform: psingle; message 'colorTransform';
  end;

type
  MPSImagePyramid = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function initWithDevice_centerWeight (device_: nonnull MTLDeviceProtocol; centerWeight: single): nonnull instancetype; message 'initWithDevice:centerWeight:';
    function initWithDevice_kernelWidth_kernelHeight_weights (device_: nonnull MTLDeviceProtocol; kernelWidth: NSUInteger; kernelHeight: NSUInteger; kernelWeights: float*__nonnull): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:weights:'; { NS_DESIGNATED_INITIALIZER }
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function kernelWidth: NSUInteger; message 'kernelWidth';
  end;

type
  MPSImageGaussianPyramid = objcclass external (MPSImagePyramid)
  end;
{$endif}

{$endif}
