{ Parsed from MetalPerformanceShaders.framework MPSImageMorphology.h }

{$ifdef TYPES}
type
  MPSImageAreaMaxPtr = ^MPSImageAreaMax;
  MPSImageAreaMinPtr = ^MPSImageAreaMin;
  MPSImageDilatePtr = ^MPSImageDilate;
  MPSImageErodePtr = ^MPSImageErode;
{$endif}

{$ifndef MPS_MPSImageMorphology_h}
{$ifdef CLASSES}

type
  MPSImageAreaMax = objcclass external (MPSUnaryImageKernel)
  public
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function initWithDevice_kernelWidth_kernelHeight (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSImageAreaMin = objcclass external (MPSImageAreaMax)
  end;

type
  MPSImageDilate = objcclass external (MPSUnaryImageKernel)
  public
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function initWithDevice_kernelWidth_kernelHeight_values (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger; values: float* __nonnull): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:values:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSImageErode = objcclass external (MPSImageDilate)
  end;
{$endif}

{$endif}
