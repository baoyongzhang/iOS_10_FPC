{ Parsed from MetalPerformanceShaders.framework MPSImage.h }

{$ifdef TYPES}
type
  MPSImageDescriptorPtr = ^MPSImageDescriptor;
  MPSImagePtr = ^MPSImage;
  MPSTemporaryImagePtr = ^MPSTemporaryImage;
{$endif}

{$ifndef MPSImage_h}

{$ifdef CLASSES}

type
  MPSImageDescriptor = objcclass external (NSObject)
  public
    procedure setWidth(newValue: NSUInteger); message 'setWidth:';
    function width: NSUInteger; message 'width';
    procedure setHeight(newValue: NSUInteger); message 'setHeight:';
    function height: NSUInteger; message 'height';
    procedure setFeatureChannels(newValue: NSUInteger); message 'setFeatureChannels:';
    function featureChannels: NSUInteger; message 'featureChannels';
    procedure setNumberOfImages(newValue: NSUInteger); message 'setNumberOfImages:';
    function numberOfImages: NSUInteger; message 'numberOfImages';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setChannelFormat(newValue: MPSImageFeatureChannelFormat); message 'setChannelFormat:';
    function channelFormat: MPSImageFeatureChannelFormat; message 'channelFormat';
    procedure setCpuCacheMode(newValue: MTLCPUCacheMode); message 'setCpuCacheMode:';
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode';
    procedure setStorageMode(newValue: MTLStorageMode); message 'setStorageMode:';
    function storageMode: MTLStorageMode; message 'storageMode';
    procedure setUsage(newValue: MTLTextureUsage); message 'setUsage:';
    function usage: MTLTextureUsage; message 'usage';
    class function imageDescriptorWithChannelFormat_width_height_featureChannels (channelFormat_: MPSImageFeatureChannelFormat; width_: NSUInteger; height_: NSUInteger; featureChannels_: NSUInteger): __nonnull instancetype; message 'imageDescriptorWithChannelFormat:width:height:featureChannels:';
    class function imageDescriptorWithChannelFormat_width_height_featureChannels_numberOfImages_usage (channelFormat_: MPSImageFeatureChannelFormat; width_: NSUInteger; height_: NSUInteger; featureChannels_: NSUInteger; numberOfImages_: NSUInteger; usage_: MTLTextureUsage): __nonnull instancetype; message 'imageDescriptorWithChannelFormat:width:height:featureChannels:numberOfImages:usage:';
  end;
{$endif}

{$ifdef TYPES}
type
  MPSPurgeableState = NSUInteger;
  MPSPurgeableStatePtr = ^MPSPurgeableState;

const
  MPSPurgeableStateAllocationDeferred = 0 { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSPurgeableStateKeepCurrent = MTLPurgeableStateKeepCurrent { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSPurgeableStateNonVolatile = MTLPurgeableStateNonVolatile { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSPurgeableStateVolatile = MTLPurgeableStateVolatile { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSPurgeableStateEmpty = MTLPurgeableStateEmpty { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
{$endif}

{$ifdef CLASSES}

type
  MPSImage = objcclass external (NSObject)
  public
    function device: MTLDeviceProtocol; message 'device';
    function width: NSUInteger; message 'width';
    function height: NSUInteger; message 'height';
    function featureChannels: NSUInteger; message 'featureChannels';
    function numberOfImages: NSUInteger; message 'numberOfImages';
    function textureType: MTLTextureType; message 'textureType';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    function precision: NSUInteger; message 'precision';
    function usage: MTLTextureUsage; message 'usage';
    function pixelSize: size_t; message 'pixelSize';
    function texture: MTLTextureProtocol; message 'texture';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function initWithDevice_imageDescriptor (device_: nonnull MTLDeviceProtocol; imageDescriptor: MPSImageDescriptor * __nonnull): nonnull instancetype; message 'initWithDevice:imageDescriptor:';
    function initWithTexture_featureChannels (texture_: nonnull MTLTextureProtocol; featureChannels_: NSUInteger): nonnull instancetype; message 'initWithTexture:featureChannels:';
    function init: nonnull instancetype; message 'init';
    function setPurgeableState (state: MPSPurgeableState): MPSPurgeableState; message 'setPurgeableState:';
  end;

type
  MPSTemporaryImage = objcclass external (MPSImage)
  public
    class function temporaryImageWithCommandBuffer_imageDescriptor (commandBuffer: nonnull MTLCommandBufferProtocol; imageDescriptor: MPSImageDescriptor * __nonnull): nonnull instancetype; message 'temporaryImageWithCommandBuffer:imageDescriptor:';
    class function temporaryImageWithCommandBuffer_textureDescriptor (commandBuffer: nonnull MTLCommandBufferProtocol; textureDescriptor: MTLTextureDescriptor * __nonnull): nonnull instancetype; message 'temporaryImageWithCommandBuffer:textureDescriptor:';
    class procedure prefetchStorageWithCommandBuffer_imageDescriptorList (commandBuffer: nonnull MTLCommandBufferProtocol; descriptorList: MPSImageDescriptor*Protocol * __nonnull); message 'prefetchStorageWithCommandBuffer:imageDescriptorList:';
    function initWithTexture_featureChannels (texture_: nonnull MTLTextureProtocol; featureChannels_: NSUInteger): nonnull instancetype; message 'initWithTexture:featureChannels:';
    function initWithDevice_imageDescriptor (device_: nonnull MTLDeviceProtocol; imageDescriptor: MPSImageDescriptor * __nonnull): nonnull instancetype; message 'initWithDevice:imageDescriptor:';
    procedure setReadCount(newValue: NSUInteger); message 'setReadCount:';
    function readCount: NSUInteger; message 'readCount';
  end;
{$endif}

{$endif}
