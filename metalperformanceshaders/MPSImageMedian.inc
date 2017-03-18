{ Parsed from MetalPerformanceShaders.framework MPSImageMedian.h }

{$ifdef TYPES}
type
  MPSImageMedianPtr = ^MPSImageMedian;
{$endif}

{$ifndef MPS_MPSImageMedian_h}
{$ifdef CLASSES}

type
  MPSImageMedian = objcclass external (MPSUnaryImageKernel)
  public
    function kernelDiameter: NSUInteger; message 'kernelDiameter';
    function initWithDevice_kernelDiameter (device_: nonnull MTLDeviceProtocol; kernelDiameter_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelDiameter:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    class function maxKernelDiameter: NSUInteger; message 'maxKernelDiameter';
    class function minKernelDiameter: NSUInteger; message 'minKernelDiameter';
  end;
{$endif}

{$endif}
