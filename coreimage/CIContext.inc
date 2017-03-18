{ Parsed from CoreImage.framework CIContext.h }

{ Types from CIContext }
{$ifdef TYPES}









{$endif}


{ Types from OfflineGPUSupport }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIContextPtr = ^CIContext;
{$endif}

{$ifdef CLASSES}

type
  CIContext = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    class function contextWithCGLContext_pixelFormat_colorSpace_options (cglctx: CGLContextObj; pixelFormat: nullable CGLPixelFormatObj; colorSpace: nullable CGColorSpaceRef; options: nullable NSDictionaryPtr): CIContext; message 'contextWithCGLContext:pixelFormat:colorSpace:options:'; { available in 10_6 }
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    class function contextWithCGLContext_pixelFormat_options (cglctx: CGLContextObj; pixelFormat: nullable CGLPixelFormatObj; options: nullable NSDictionaryPtr): CIContext; message 'contextWithCGLContext:pixelFormat:options:'; deprecated 'in 10_4,10_6';
    {$endif}
    class function contextWithCGContext_options (cgctx: CGContextRef; options: nullable NSDictionaryPtr): CIContext; message 'contextWithCGContext:options:'; { available in 10_4,9_0 }
    class function contextWithOptions (options: nullable NSDictionaryPtr): CIContext; message 'contextWithOptions:'; { available in 10_4,5_0 }
    class function context: CIContext; message 'context'; { available in 10_4,5_0 }
    function initWithOptions (options: nullable NSDictionaryPtr): instancetype; message 'initWithOptions:'; { available in 10_4,5_0 }
    function init: instancetype; message 'init'; { available in 10_4,5_0 }
    {$if defined(TARGET_OS_IPHONE)}
    class function contextWithEAGLContext (eaglContext_: EAGLContext): CIContext; message 'contextWithEAGLContext:'; { available in 5_0 }
    class function contextWithEAGLContext_options (eaglContext_: EAGLContext; options: nullable NSDictionaryPtr): CIContext; message 'contextWithEAGLContext:options:'; { available in 5_0 }
    {$endif}
    class function contextWithMTLDevice (device: MTLDeviceProtocol): CIContext; message 'contextWithMTLDevice:'; { available in 10_11,9_0 }
    class function contextWithMTLDevice_options (device: MTLDeviceProtocol; options: nullable NSDictionaryPtr): CIContext; message 'contextWithMTLDevice:options:'; { available in 10_11,9_0 }
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function workingColorSpace: CGColorSpaceRef; message 'workingColorSpace';
    {$else}
    function workingColorSpace_: CGColorSpaceRef; message 'workingColorSpace';
    {$endif}
    function workingFormat: CIFormat; message 'workingFormat';
    procedure drawImage_atPoint_fromRect (image: CIImage; atPoint: CGPoint; fromRect: CGRect); message 'drawImage:atPoint:fromRect:'; deprecated 'in 10_4,10_8, 5_0,6_0';
    procedure drawImage_inRect_fromRect (image: CIImage; inRect: CGRect; fromRect: CGRect); message 'drawImage:inRect:fromRect:';
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function createCGImage_fromRect (image: CIImage; fromRect: CGRect): nullable CGImageRef; message 'createCGImage:fromRect:';
    {$else}
    function createCGImage_fromRect (image: CIImage; fromRect: CGRect): CGImageRef; message 'createCGImage:fromRect:';
    {$endif}
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function createCGImage_fromRect_format_colorSpace (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: nullable CGColorSpaceRef): nullable CGImageRef; message 'createCGImage:fromRect:format:colorSpace:';
    {$else}
    function createCGImage_fromRect_format_colorSpace (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: nullable CGColorSpaceRef): CGImageRef; message 'createCGImage:fromRect:format:colorSpace:';
    {$endif}
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function createCGImage_fromRect_format_colorSpace_deferred (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: nullable CGColorSpaceRef; deferred: boolean): nullable CGImageRef; message 'createCGImage:fromRect:format:colorSpace:deferred:'; { available in 10_12,10_0 }
    {$else}
    function createCGImage_fromRect_format_colorSpace_deferred (image: CIImage; fromRect: CGRect; format: CIFormat; colorSpace: nullable CGColorSpaceRef; deferred: boolean): CGImageRef; message 'createCGImage:fromRect:format:colorSpace:deferred:'; { available in 10_12,10_0 }
    {$endif}
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function createCGLayerWithSize_info (size: CGSize; info: nullable CFDictionaryRef): nullable CGLayerRef; message 'createCGLayerWithSize:info:'; deprecated 'in 10_4,10_11';
    {$else}
    function createCGLayerWithSize_info (size: CGSize; info: nullable CFDictionaryRef): CGLayerRef; message 'createCGLayerWithSize:info:'; deprecated 'in 10_4,10_11';
    {$endif}
    procedure render_toBitmap_rowBytes_bounds_format_colorSpace (image: CIImage; data: pointer; rowBytes: ptrdiff_t; bounds: CGRect; format: CIFormat; colorSpace: nullable CGColorSpaceRef); message 'render:toBitmap:rowBytes:bounds:format:colorSpace:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure render_toIOSurface_bounds_colorSpace (image: CIImage; surface: IOSurfaceRef; bounds: CGRect; colorSpace: nullable CGColorSpaceRef); message 'render:toIOSurface:bounds:colorSpace:'; { available in 10_6 }
    {$endif}
    procedure render_toCVPixelBuffer (image: CIImage; buffer: CVPixelBufferRef); message 'render:toCVPixelBuffer:'; { available in 10_11,5_0 }
    procedure render_toCVPixelBuffer_bounds_colorSpace (image: CIImage; buffer: CVPixelBufferRef; bounds: CGRect; colorSpace: nullable CGColorSpaceRef); message 'render:toCVPixelBuffer:bounds:colorSpace:'; { available in 10_11,5_0 }
    procedure render_toMTLTexture_commandBuffer_bounds_colorSpace (image: CIImage; texture: MTLTextureProtocol; commandBuffer: nullable MTLCommandBufferProtocol; bounds: CGRect; colorSpace: CGColorSpaceRef); message 'render:toMTLTexture:commandBuffer:bounds:colorSpace:'; { available in 10_11,9_0 }
    procedure reclaimResources; message 'reclaimResources'; { available in 10_4 }
    procedure clearCaches; message 'clearCaches'; { available in 10_4,10_0 }
    function inputImageMaximumSize: CGSize; message 'inputImageMaximumSize'; { available in 5_0 }
    function outputImageMaximumSize: CGSize; message 'outputImageMaximumSize'; { available in 5_0 }
  end;


type
  OfflineGPUSupport = objccategory external (CIContext)
    class function offlineGPUCount: cuint; message 'offlineGPUCount'; { available in 10_10 }
    {$if  not defined(TARGET_OS_IPHONE)}
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    class function contextForOfflineGPUAtIndex (index: cuint): nullable CIContextPtr; message 'contextForOfflineGPUAtIndex:'; { available in 10_10 }
    class function contextForOfflineGPUAtIndex_colorSpace_options_sharedContext (index: cuint; colorSpace: nullable CGColorSpaceRef; options: nullable NSDictionaryPtr; sharedContext: nullable CGLContextObj): nullable CIContextPtr; message 'contextForOfflineGPUAtIndex:colorSpace:options:sharedContext:'; { available in 10_10 }
    {$else}
    class function contextForOfflineGPUAtIndex (index: cuint): CIContext; message 'contextForOfflineGPUAtIndex:'; { available in 10_10 }
    class function contextForOfflineGPUAtIndex_colorSpace_options_sharedContext (index: cuint; colorSpace: nullable CGColorSpaceRef; options: nullable NSDictionaryPtr; sharedContext: nullable CGLContextObj): CIContext; message 'contextForOfflineGPUAtIndex:colorSpace:options:sharedContext:'; { available in 10_10 }
    {$endif}
    {$endif}
  end;

type
  ImageRepresentation = objccategory external (CIContext)
    function TIFFRepresentationOfImage_format_colorSpace_options (image: CIImage; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary): nullable NSDataPtr; message 'TIFFRepresentationOfImage:format:colorSpace:options:'; { available in 10_12,10_0 }
    function JPEGRepresentationOfImage_colorSpace_options (image: CIImage; colorSpace: CGColorSpaceRef; options: NSDictionary): nullable NSDataPtr; message 'JPEGRepresentationOfImage:colorSpace:options:'; { available in 10_12,10_0 }
    function writeTIFFRepresentationOfImage_toURL_format_colorSpace_options_error (image: CIImage; url: NSURL; format: CIFormat; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): boolean; message 'writeTIFFRepresentationOfImage:toURL:format:colorSpace:options:error:'; { available in 10_12,10_0 }
    function writeJPEGRepresentationOfImage_toURL_colorSpace_options_error (image: CIImage; url: NSURL; colorSpace: CGColorSpaceRef; options: NSDictionary; errorPtr: NSErrorPtr): boolean; message 'writeJPEGRepresentationOfImage:toURL:colorSpace:options:error:'; { available in 10_12,10_0 }
  end;
{$endif}

