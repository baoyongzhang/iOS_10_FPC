{ Parsed from MetalPerformanceShaders.framework MPSImageKernel.h }

{$ifdef TYPES}
type
  MPSUnaryImageKernelPtr = ^MPSUnaryImageKernel;
  MPSBinaryImageKernelPtr = ^MPSBinaryImageKernel;
{$endif}

{$ifndef _MPS_MPSImageKernel_}
{$ifdef CLASSES}

type
  MPSUnaryImageKernel = objcclass external (MPSKernel)
  public
    procedure setOffset(newValue: MPSOffset); message 'setOffset:';
    function offset: MPSOffset; message 'offset';
    procedure setClipRect(newValue: MTLRegion); message 'setClipRect:';
    function clipRect: MTLRegion; message 'clipRect';
    procedure setEdgeMode(newValue: MPSImageEdgeMode); message 'setEdgeMode:';
    function edgeMode: MPSImageEdgeMode; message 'edgeMode';
    function encodeToCommandBuffer_inPlaceTexture_fallbackCopyAllocator_commandBuffer (commandBuffer: nonnull MTLCommandBufferProtocol; texture: __nonnull MTLTextureProtocol  * __nonnull; copyAllocator: nullable MPSCopyAllocator; inPlaceTexture: id): boolean; message 'encodeToCommandBuffer:inPlaceTexture:fallbackCopyAllocator:commandBuffer:';
    procedure encodeToCommandBuffer_sourceTexture_destinationTexture_commandBuffer (commandBuffer: nonnull MTLCommandBufferProtocol; sourceTexture: nonnull MTLTextureProtocol; destinationTexture: nonnull MTLTextureProtocol; sourceTexture4: id); message 'encodeToCommandBuffer:sourceTexture:destinationTexture:commandBuffer:';
    function sourceRegionForDestinationSize (destinationSize: MTLSize): MPSRegion; message 'sourceRegionForDestinationSize:';
  end;

type
  MPSBinaryImageKernel = objcclass external (MPSKernel)
  public
    procedure setPrimaryOffset(newValue: MPSOffset); message 'setPrimaryOffset:';
    function primaryOffset: MPSOffset; message 'primaryOffset';
    procedure setSecondaryOffset(newValue: MPSOffset); message 'setSecondaryOffset:';
    function secondaryOffset: MPSOffset; message 'secondaryOffset';
    procedure setPrimaryEdgeMode(newValue: MPSImageEdgeMode); message 'setPrimaryEdgeMode:';
    function primaryEdgeMode: MPSImageEdgeMode; message 'primaryEdgeMode';
    procedure setSecondaryEdgeMode(newValue: MPSImageEdgeMode); message 'setSecondaryEdgeMode:';
    function secondaryEdgeMode: MPSImageEdgeMode; message 'secondaryEdgeMode';
    procedure setClipRect(newValue: MTLRegion); message 'setClipRect:';
    function clipRect: MTLRegion; message 'clipRect';
    function encodeToCommandBuffer_primaryTexture_inPlaceSecondaryTexture_fallbackCopyAllocator (commandBuffer: nonnull MTLCommandBufferProtocol; primaryTexture: nonnull MTLTextureProtocol; inPlaceSecondaryTexture: __nonnull MTLTextureProtocol  * __nonnull; copyAllocator: nullable MPSCopyAllocator): boolean; message 'encodeToCommandBuffer:primaryTexture:inPlaceSecondaryTexture:fallbackCopyAllocator:';
    function encodeToCommandBuffer_inPlacePrimaryTexture_secondaryTexture_fallbackCopyAllocator (commandBuffer: nonnull MTLCommandBufferProtocol; inPlacePrimaryTexture: __nonnull MTLTextureProtocol  * __nonnull; secondaryTexture: nonnull MTLTextureProtocol; copyAllocator: nullable MPSCopyAllocator): boolean; message 'encodeToCommandBuffer:inPlacePrimaryTexture:secondaryTexture:fallbackCopyAllocator:';
    procedure encodeToCommandBuffer_primaryTexture_secondaryTexture_destinationTexture (commandBuffer: nonnull MTLCommandBufferProtocol; primaryTexture: nonnull MTLTextureProtocol; secondaryTexture: nonnull MTLTextureProtocol; destinationTexture: nonnull MTLTextureProtocol); message 'encodeToCommandBuffer:primaryTexture:secondaryTexture:destinationTexture:';
    function primarySourceRegionForDestinationSize (destinationSize: MTLSize): MPSRegion; message 'primarySourceRegionForDestinationSize:';
    function secondarySourceRegionForDestinationSize (destinationSize: MTLSize): MPSRegion; message 'secondarySourceRegionForDestinationSize:';
  end;
{$endif}

{$endif}
