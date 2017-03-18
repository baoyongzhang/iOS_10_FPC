{ Parsed from MetalPerformanceShaders.framework MPSImageHistogram.h }

{$ifdef TYPES}
type
  MPSImageHistogramPtr = ^MPSImageHistogram;
  MPSImageHistogramEqualizationPtr = ^MPSImageHistogramEqualization;
  MPSImageHistogramSpecificationPtr = ^MPSImageHistogramSpecification;
{$endif}

{$ifndef MPS_MPSImageHistogram_h}
{$ifdef TYPES}
type
  MPSImageHistogramInfo = record
    numberOfHistogramEntries: NSUInteger;
    histogramForAlpha: boolean;
    minPixelValue: vector_float4;
    maxPixelValue: vector_float4;
  end;
type
  MPSImageHistogramInfoPtr = ^MPSImageHistogramInfo;
{$endif}

{$ifdef CLASSES}

type
  MPSImageHistogram = objcclass external (MPSKernel)
  public
    procedure setClipRectSource(newValue: MTLRegion); message 'setClipRectSource:';
    function clipRectSource: MTLRegion; message 'clipRectSource';
    procedure setZeroHistogram(newValue: boolean); message 'setZeroHistogram:';
    function zeroHistogram: boolean; message 'zeroHistogram';
    function histogramInfo: MPSImageHistogramInfo; message 'histogramInfo';
    function initWithDevice_histogramInfo (device_: nonnull MTLDeviceProtocol; histogramInfo_: MPSImageHistogramInfo * __nonnull): nonnull instancetype; message 'initWithDevice:histogramInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure encodeToCommandBuffer_sourceTexture_histogram_histogramOffset (commandBuffer: nonnull MTLCommandBufferProtocol; source: nonnull MTLTextureProtocol; histogram: nonnull MTLBufferProtocol; histogramOffset: NSUInteger); message 'encodeToCommandBuffer:sourceTexture:histogram:histogramOffset:';
    function histogramSizeForSourceFormat (sourceFormat: MTLPixelFormat): size_t; message 'histogramSizeForSourceFormat:';
  end;

type
  MPSImageHistogramEqualization = objcclass external (MPSUnaryImageKernel)
  public
    function histogramInfo: MPSImageHistogramInfo; message 'histogramInfo';
    function initWithDevice_histogramInfo (device_: nonnull MTLDeviceProtocol; histogramInfo_: MPSImageHistogramInfo * __nonnull): nonnull instancetype; message 'initWithDevice:histogramInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure encodeTransformToCommandBuffer_sourceTexture_histogram_histogramOffset (commandBuffer: nonnull MTLCommandBufferProtocol; source: nonnull MTLTextureProtocol; histogram: nonnull MTLBufferProtocol; histogramOffset: NSUInteger); message 'encodeTransformToCommandBuffer:sourceTexture:histogram:histogramOffset:';
  end;

type
  MPSImageHistogramSpecification = objcclass external (MPSUnaryImageKernel)
  public
    function histogramInfo: MPSImageHistogramInfo; message 'histogramInfo';
    function initWithDevice_histogramInfo (device_: nonnull MTLDeviceProtocol; histogramInfo_: MPSImageHistogramInfo * __nonnull): nonnull instancetype; message 'initWithDevice:histogramInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure encodeTransformToCommandBuffer_sourceTexture_sourceHistogram_sourceHistogramOffset_desiredHistogram_desiredHistogramOffset (commandBuffer: nonnull MTLCommandBufferProtocol; source: nonnull MTLTextureProtocol; sourceHistogram: nonnull MTLBufferProtocol; sourceHistogramOffset: NSUInteger; desiredHistogram: nonnull MTLBufferProtocol; desiredHistogramOffset: NSUInteger); message 'encodeTransformToCommandBuffer:sourceTexture:sourceHistogram:sourceHistogramOffset:desiredHistogram:desiredHistogramOffset:';
  end;
{$endif}

{$endif}
