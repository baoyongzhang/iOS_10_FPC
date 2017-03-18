{ Parsed from MetalPerformanceShaders.framework MPSCNN.h }

{$ifdef TYPES}
type
  MPSCNNKernelPtr = ^MPSCNNKernel;
  MPSCNNNeuronPtr = ^MPSCNNNeuron;
  MPSCNNNeuronLinearPtr = ^MPSCNNNeuronLinear;
  MPSCNNNeuronReLUPtr = ^MPSCNNNeuronReLU;
  MPSCNNNeuronSigmoidPtr = ^MPSCNNNeuronSigmoid;
  MPSCNNNeuronTanHPtr = ^MPSCNNNeuronTanH;
  MPSCNNNeuronAbsolutePtr = ^MPSCNNNeuronAbsolute;
  MPSCNNConvolutionDescriptorPtr = ^MPSCNNConvolutionDescriptor;
  MPSCNNConvolutionPtr = ^MPSCNNConvolution;
  MPSCNNFullyConnectedPtr = ^MPSCNNFullyConnected;
  MPSCNNPoolingPtr = ^MPSCNNPooling;
  MPSCNNPoolingMaxPtr = ^MPSCNNPoolingMax;
  MPSCNNPoolingAveragePtr = ^MPSCNNPoolingAverage;
  MPSCNNSpatialNormalizationPtr = ^MPSCNNSpatialNormalization;
  MPSCNNLocalContrastNormalizationPtr = ^MPSCNNLocalContrastNormalization;
  MPSCNNCrossChannelNormalizationPtr = ^MPSCNNCrossChannelNormalization;
  MPSCNNSoftMaxPtr = ^MPSCNNSoftMax;
  MPSCNNLogSoftMaxPtr = ^MPSCNNLogSoftMax;
{$endif}

{$ifndef MPS_MPSCNN_h}

{$ifdef CLASSES}

type
  MPSCNNKernel = objcclass external (MPSKernel)
  public
    procedure setOffset(newValue: MPSOffset); message 'setOffset:';
    function offset: MPSOffset; message 'offset';
    procedure setClipRect(newValue: MTLRegion); message 'setClipRect:';
    function clipRect: MTLRegion; message 'clipRect';
    procedure setDestinationFeatureChannelOffset(newValue: NSUInteger); message 'setDestinationFeatureChannelOffset:';
    function destinationFeatureChannelOffset: NSUInteger; message 'destinationFeatureChannelOffset';
    procedure setEdgeMode(newValue: MPSImageEdgeMode); message 'setEdgeMode:';
    function edgeMode: MPSImageEdgeMode; message 'edgeMode';
    procedure encodeToCommandBuffer_sourceImage_destinationImage_commandBuffer (commandBuffer: nonnull MTLCommandBufferProtocol; sourceImage: MPSImage * __nonnull; destinationImage: MPSImage * __nonnull; sourceImage4: id); message 'encodeToCommandBuffer:sourceImage:destinationImage:commandBuffer:';
    function sourceRegionForDestinationSize (destinationSize: MTLSize): MPSRegion; message 'sourceRegionForDestinationSize:';
  end;

type
  MPSCNNNeuron = objcclass external (MPSCNNKernel)
  end;

type
  MPSCNNNeuronLinear = objcclass external (MPSCNNNeuron)
  public
    function a: single; message 'a';
    function b: single; message 'b';
    function initWithDevice_a_b (device_: nonnull MTLDeviceProtocol; a_: single; b_: single): nonnull instancetype; message 'initWithDevice:a:b:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNNeuronReLU = objcclass external (MPSCNNNeuron)
  public
    function a: single; message 'a';
    function initWithDevice_a (device_: nonnull MTLDeviceProtocol; a_: single): nonnull instancetype; message 'initWithDevice:a:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNNeuronSigmoid = objcclass external (MPSCNNNeuron)
  public
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  MPSCNNNeuronTanH = objcclass external (MPSCNNNeuron)
  public
    function a: single; message 'a';
    function b: single; message 'b';
    function initWithDevice_a_b (device_: nonnull MTLDeviceProtocol; a_: single; b_: single): nonnull instancetype; message 'initWithDevice:a:b:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNNeuronAbsolute = objcclass external (MPSCNNNeuron)
  public
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  MPSCNNConvolutionDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setKernelWidth(newValue: NSUInteger); message 'setKernelWidth:';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    procedure setKernelHeight(newValue: NSUInteger); message 'setKernelHeight:';
    function kernelHeight: NSUInteger; message 'kernelHeight';
    procedure setInputFeatureChannels(newValue: NSUInteger); message 'setInputFeatureChannels:';
    function inputFeatureChannels: NSUInteger; message 'inputFeatureChannels';
    procedure setOutputFeatureChannels(newValue: NSUInteger); message 'setOutputFeatureChannels:';
    function outputFeatureChannels: NSUInteger; message 'outputFeatureChannels';
    procedure setStrideInPixelsX(newValue: NSUInteger); message 'setStrideInPixelsX:';
    function strideInPixelsX: NSUInteger; message 'strideInPixelsX';
    procedure setStrideInPixelsY(newValue: NSUInteger); message 'setStrideInPixelsY:';
    function strideInPixelsY: NSUInteger; message 'strideInPixelsY';
    procedure setGroups(newValue: NSUInteger); message 'setGroups:';
    function groups: NSUInteger; message 'groups';
    procedure setNeuron(newValue: MPSCNNNeuron *__nullable); message 'setNeuron:';
    function neuron: MPSCNNNeuron *__nullable; message 'neuron';
    class function cnnConvolutionDescriptorWithKernelWidth_kernelHeight_inputFeatureChannels_outputFeatureChannels_neuronFilter (kernelWidth_: NSUInteger; kernelHeight_: NSUInteger; inputFeatureChannels_: NSUInteger; outputFeatureChannels_: NSUInteger; neuronFilter: MPSCNNNeuron * __nullable): nonnull instancetype; message 'cnnConvolutionDescriptorWithKernelWidth:kernelHeight:inputFeatureChannels:outputFeatureChannels:neuronFilter:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$if (defined(DOXYGEN))}

{$else}
{$ifdef TYPES}
type
  MPSCNNConvolutionFlags = NSUInteger;
  MPSCNNConvolutionFlagsPtr = ^MPSCNNConvolutionFlags;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  MPSCNNConvolution = objcclass external (MPSCNNKernel)
  public
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function inputFeatureChannels: NSUInteger; message 'inputFeatureChannels';
    function outputFeatureChannels: NSUInteger; message 'outputFeatureChannels';
    function strideInPixelsX: NSUInteger; message 'strideInPixelsX';
    function strideInPixelsY: NSUInteger; message 'strideInPixelsY';
    function groups: NSUInteger; message 'groups';
    function neuron: MPSCNNNeuron *__nullable; message 'neuron';
    function initWithDevice_convolutionDescriptor_kernelWeights_biasTerms_flags (device_: nonnull MTLDeviceProtocol; convolutionDescriptor: MPSCNNConvolutionDescriptor * __nonnull; kernelWeights: float * __nonnull; biasTerms: float * __nullable; flags: MPSCNNConvolutionFlags): nonnull instancetype; message 'initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNFullyConnected = objcclass external (MPSCNNConvolution)
  public
    function initWithDevice_convolutionDescriptor_kernelWeights_biasTerms_flags (device_: nonnull MTLDeviceProtocol; fullyConnectedDescriptor: MPSCNNConvolutionDescriptor * __nonnull; kernelWeights: float * __nonnull; biasTerms: float * __nullable; flags: MPSCNNConvolutionFlags): nonnull instancetype; message 'initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNPooling = objcclass external (MPSCNNKernel)
  public
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function strideInPixelsX: NSUInteger; message 'strideInPixelsX';
    function strideInPixelsY: NSUInteger; message 'strideInPixelsY';
    function initWithDevice_kernelWidth_kernelHeight (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:';
    function initWithDevice_kernelWidth_kernelHeight_strideInPixelsX_strideInPixelsY (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger; strideInPixelsX_: NSUInteger; strideInPixelsY_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNPoolingMax = objcclass external (MPSCNNPooling)
  end;

type
  MPSCNNPoolingAverage = objcclass external (MPSCNNPooling)
  end;

type
  MPSCNNSpatialNormalization = objcclass external (MPSCNNKernel)
  public
    procedure setAlpha(newValue: single); message 'setAlpha:';
    function alpha: single; message 'alpha';
    procedure setBeta(newValue: single); message 'setBeta:';
    function beta: single; message 'beta';
    procedure setDelta(newValue: single); message 'setDelta:';
    function delta: single; message 'delta';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function initWithDevice_kernelWidth_kernelHeight (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNLocalContrastNormalization = objcclass external (MPSCNNKernel)
  public
    procedure setAlpha(newValue: single); message 'setAlpha:';
    function alpha: single; message 'alpha';
    procedure setBeta(newValue: single); message 'setBeta:';
    function beta: single; message 'beta';
    procedure setDelta(newValue: single); message 'setDelta:';
    function delta: single; message 'delta';
    procedure setP0(newValue: single); message 'setP0:';
    function p0: single; message 'p0';
    procedure setPm(newValue: single); message 'setPm:';
    function pm: single; message 'pm';
    procedure setPs(newValue: single); message 'setPs:';
    function ps: single; message 'ps';
    function kernelWidth: NSUInteger; message 'kernelWidth';
    function kernelHeight: NSUInteger; message 'kernelHeight';
    function initWithDevice_kernelWidth_kernelHeight (device_: nonnull MTLDeviceProtocol; kernelWidth_: NSUInteger; kernelHeight_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelWidth:kernelHeight:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNCrossChannelNormalization = objcclass external (MPSCNNKernel)
  public
    procedure setAlpha(newValue: single); message 'setAlpha:';
    function alpha: single; message 'alpha';
    procedure setBeta(newValue: single); message 'setBeta:';
    function beta: single; message 'beta';
    procedure setDelta(newValue: single); message 'setDelta:';
    function delta: single; message 'delta';
    function kernelSize: NSUInteger; message 'kernelSize';
    function initWithDevice_kernelSize (device_: nonnull MTLDeviceProtocol; kernelSize_: NSUInteger): nonnull instancetype; message 'initWithDevice:kernelSize:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
  end;

type
  MPSCNNSoftMax = objcclass external (MPSCNNKernel)
  end;

type
  MPSCNNLogSoftMax = objcclass external (MPSCNNKernel)
  end;
{$endif}

{$endif}
