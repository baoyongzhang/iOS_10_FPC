{ Parsed from MetalPerformanceShaders.framework MPSImageThreshold.h }

{$ifdef TYPES}
type
  MPSImageThresholdBinaryPtr = ^MPSImageThresholdBinary;
  MPSImageThresholdBinaryInversePtr = ^MPSImageThresholdBinaryInverse;
  MPSImageThresholdTruncatePtr = ^MPSImageThresholdTruncate;
  MPSImageThresholdToZeroPtr = ^MPSImageThresholdToZero;
  MPSImageThresholdToZeroInversePtr = ^MPSImageThresholdToZeroInverse;
{$endif}

{$ifndef MPS_MPSImageThreshold_h}
{$ifdef CLASSES}

type
  MPSImageThresholdBinary = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_thresholdValue_maximumValue_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; thresholdValue: single; maximumValue: single; transform: float * __nullable): nonnull instancetype; message 'initWithDevice:thresholdValue:maximumValue:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function thresholdValue: single; message 'thresholdValue';
    function maximumValue: single; message 'maximumValue';
    function transform: psingle; message 'transform';
  end;

type
  MPSImageThresholdBinaryInverse = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_thresholdValue_maximumValue_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; thresholdValue: single; maximumValue: single; transform: float * __nullable): nonnull instancetype; message 'initWithDevice:thresholdValue:maximumValue:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function thresholdValue: single; message 'thresholdValue';
    function maximumValue: single; message 'maximumValue';
    function transform: psingle; message 'transform';
  end;

type
  MPSImageThresholdTruncate = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_thresholdValue_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; thresholdValue: single; transform: float * __nullable): nonnull instancetype; message 'initWithDevice:thresholdValue:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function thresholdValue: single; message 'thresholdValue';
    function transform: psingle; message 'transform';
  end;

type
  MPSImageThresholdToZero = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_thresholdValue_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; thresholdValue: single; transform: float * __nullable): nonnull instancetype; message 'initWithDevice:thresholdValue:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function thresholdValue: single; message 'thresholdValue';
    function transform: psingle; message 'transform';
  end;

type
  MPSImageThresholdToZeroInverse = objcclass external (MPSUnaryImageKernel)
  public
    function initWithDevice_thresholdValue_linearGrayColorTransform (device_: nonnull MTLDeviceProtocol; thresholdValue: single; transform: float * __nullable): nonnull instancetype; message 'initWithDevice:thresholdValue:linearGrayColorTransform:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function thresholdValue: single; message 'thresholdValue';
    function transform: psingle; message 'transform';
  end;
{$endif}

{$endif}
