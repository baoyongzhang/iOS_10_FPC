{ Parsed from CoreImage.framework CIImage.h }

{ Types from CIImage }
{$ifdef TYPES}

type
  CIFormat = cint;
type
  CIFormatPtr = ^CIFormat;




{$endif}


{$ifdef TYPES}
type
  CIImagePtr = ^CIImage;
{$endif}

{$ifdef CLASSES}

type
  CIImage = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    {$if  not defined(TARGET_OS_IPHONE)}
    _state: pointer;
    {$endif}
    _priv: pointer;
  public
    class function imageWithCGImage (image: CGImageRef): CIImage; message 'imageWithCGImage:';
    class function imageWithCGImage_options (image: CGImageRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithCGImage:options:';
    class function imageWithCGLayer (layer: CGLayerRef): CIImage; message 'imageWithCGLayer:'; deprecated 'in 10_4,10_11';
    class function imageWithCGLayer_options (layer: CGLayerRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithCGLayer:options:'; deprecated 'in 10_4,10_11';
    class function imageWithBitmapData_bytesPerRow_size_format_colorSpace (data: NSData; bytesPerRow: size_t; size: CGSize; format: CIFormat; colorSpace: nullable CGColorSpaceRef): CIImage; message 'imageWithBitmapData:bytesPerRow:size:format:colorSpace:';
    class function imageWithTexture_size_flipped_colorSpace (name: cuint; size: CGSize; flipped: boolean; colorSpace: nullable CGColorSpaceRef): CIImage; message 'imageWithTexture:size:flipped:colorSpace:'; { available in 10_4, 6_0 }
    class function imageWithTexture_size_flipped_options (name: cuint; size: CGSize; flipped: boolean; options: nullable NSDictionaryPtr): CIImage; message 'imageWithTexture:size:flipped:options:'; { available in 10_9 }
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    class function imageWithMTLTexture_options (texture: MTLTextureProtocol; options: nullable NSDictionaryPtr): nullable CIImagePtr; message 'imageWithMTLTexture:options:'; { available in 10_11, 9_0 }
    {$else}
    class function imageWithMTLTexture_options (texture: MTLTextureProtocol; options: nullable NSDictionaryPtr): CIImage; message 'imageWithMTLTexture:options:'; { available in 10_11, 9_0 }
    {$endif}
    class function imageWithContentsOfURL (url: NSURL): nullable CIImagePtr; message 'imageWithContentsOfURL:';
    class function imageWithContentsOfURL_options (url: NSURL; options: nullable NSDictionaryPtr): nullable CIImagePtr; message 'imageWithContentsOfURL:options:';
    class function imageWithData (data: NSData): nullable CIImagePtr; message 'imageWithData:';
    class function imageWithData_options (data: NSData; options: nullable NSDictionaryPtr): nullable CIImagePtr; message 'imageWithData:options:';
    class function imageWithCVImageBuffer (imageBuffer: CVImageBufferRef): CIImage; message 'imageWithCVImageBuffer:'; { available in 10_4, 9_0 }
    class function imageWithCVImageBuffer_options (imageBuffer: CVImageBufferRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithCVImageBuffer:options:'; { available in 10_4, 9_0 }
    class function imageWithCVPixelBuffer (pixelBuffer: CVPixelBufferRef): CIImage; message 'imageWithCVPixelBuffer:'; { available in 10_11, 5_0 }
    class function imageWithCVPixelBuffer_options (pixelBuffer: CVPixelBufferRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithCVPixelBuffer:options:'; { available in 10_11, 5_0 }
    {$if  not defined(TARGET_OS_IPHONE)}
    class function imageWithIOSurface (surface: IOSurfaceRef): CIImage; message 'imageWithIOSurface:'; { available in 10_6 }
    class function imageWithIOSurface_options (surface: IOSurfaceRef; options: nullable NSDictionaryPtr): CIImage; message 'imageWithIOSurface:options:'; { available in 10_6 }
    {$endif}
    class function imageWithColor (color: CIColor): CIImage; message 'imageWithColor:';
    class function emptyImage: CIImage; message 'emptyImage';
    function initWithCGImage (image: CGImageRef): instancetype; message 'initWithCGImage:';
    function initWithCGImage_options (image: CGImageRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithCGImage:options:';
    function initWithCGLayer (layer: CGLayerRef): instancetype; message 'initWithCGLayer:'; deprecated 'in 10_4,10_11,"Use initWithCGImage: instead."';
    function initWithCGLayer_options (layer: CGLayerRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithCGLayer:options:'; deprecated 'in 10_4,10_11,"Use initWithCGImage:options instead."';
    function initWithData (data: NSData): nullable instancetype; message 'initWithData:';
    function initWithData_options (data: NSData; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithData:options:';
    function initWithBitmapData_bytesPerRow_size_format_colorSpace (data: NSData; bytesPerRow: size_t; size: CGSize; format: CIFormat; colorSpace: nullable CGColorSpaceRef): instancetype; message 'initWithBitmapData:bytesPerRow:size:format:colorSpace:';
    function initWithTexture_size_flipped_colorSpace (name: cuint; size: CGSize; flipped: boolean; colorSpace: nullable CGColorSpaceRef): instancetype; message 'initWithTexture:size:flipped:colorSpace:'; { available in 10_4, 6_0 }
    function initWithTexture_size_flipped_options (name: cuint; size: CGSize; flipped: boolean; options: nullable NSDictionaryPtr): instancetype; message 'initWithTexture:size:flipped:options:'; { available in 10_9 }
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    function initWithMTLTexture_options (texture: MTLTextureProtocol; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithMTLTexture:options:'; { available in 10_11, 9_0 }
    {$else}
    function initWithMTLTexture_options (texture: MTLTextureProtocol; options: nullable NSDictionaryPtr): instancetype; message 'initWithMTLTexture:options:'; { available in 10_11, 9_0 }
    {$endif}
    function initWithContentsOfURL (url: NSURL): nullable instancetype; message 'initWithContentsOfURL:';
    function initWithContentsOfURL_options (url: NSURL; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithContentsOfURL:options:';
    {$if  not defined(TARGET_OS_IPHONE)}
    function initWithIOSurface (surface: IOSurfaceRef): instancetype; message 'initWithIOSurface:'; { available in 10_6 }
    function initWithIOSurface_options (surface: IOSurfaceRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithIOSurface:options:'; { available in 10_6 }
    function initWithIOSurface_plane_format_options (surface: IOSurfaceRef; plane: size_t; format: CIFormat; options: nullable NSDictionaryPtr): instancetype; message 'initWithIOSurface:plane:format:options:'; deprecated 'in 10_9,10_11';
    {$endif}
    function initWithCVImageBuffer (imageBuffer: CVImageBufferRef): instancetype; message 'initWithCVImageBuffer:'; { available in 10_4, 9_0 }
    function initWithCVImageBuffer_options (imageBuffer: CVImageBufferRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithCVImageBuffer:options:'; { available in 10_4, 9_0 }
    function initWithCVPixelBuffer (pixelBuffer: CVPixelBufferRef): instancetype; message 'initWithCVPixelBuffer:'; { available in 10_11, 5_0 }
    function initWithCVPixelBuffer_options (pixelBuffer: CVPixelBufferRef; options: nullable NSDictionaryPtr): instancetype; message 'initWithCVPixelBuffer:options:'; { available in 10_11, 5_0 }
    function initWithColor (color: CIColor): instancetype; message 'initWithColor:';
    function imageByApplyingTransform (matrix: CGAffineTransform): CIImage; message 'imageByApplyingTransform:';
    function imageByApplyingOrientation (orientation: cint): CIImage; message 'imageByApplyingOrientation:'; { available in 10_10, 8_0 }
    function imageTransformForOrientation (orientation: cint): CGAffineTransform; message 'imageTransformForOrientation:'; { available in 10_10, 8_0 }
    function imageByCompositingOverImage (dest: CIImage): CIImage; message 'imageByCompositingOverImage:'; { available in 10_4, 8_0 }
    function imageByCroppingToRect (rect: CGRect): CIImage; message 'imageByCroppingToRect:';
    function imageByClampingToExtent: CIImage; message 'imageByClampingToExtent'; { available in 10_10, 8_0 }
    function imageByClampingToRect (rect: CGRect): CIImage; message 'imageByClampingToRect:'; { available in 10_12, 10_0 }
    function imageByApplyingFilter_withInputParameters (filterName: NSString; params: nullable NSDictionaryPtr): CIImage; message 'imageByApplyingFilter:withInputParameters:'; { available in 10_10, 8_0 }
    function imageByColorMatchingColorSpaceToWorkingSpace (colorSpace: CGColorSpaceRef): nullable CIImagePtr; message 'imageByColorMatchingColorSpaceToWorkingSpace:';
    function imageByColorMatchingWorkingSpaceToColorSpace (colorSpace: CGColorSpaceRef): nullable CIImagePtr; message 'imageByColorMatchingWorkingSpaceToColorSpace:';
    function imageByPremultiplyingAlpha: CIImage; message 'imageByPremultiplyingAlpha'; { available in 10_12, 10_0 }
    function imageByUnpremultiplyingAlpha: CIImage; message 'imageByUnpremultiplyingAlpha'; { available in 10_12, 10_0 }
    function imageBySettingAlphaOneInExtent (extent: CGRect): CIImage; message 'imageBySettingAlphaOneInExtent:'; { available in 10_12, 10_0 }
    function imageByApplyingGaussianBlurWithSigma (sigma: double): CIImage; message 'imageByApplyingGaussianBlurWithSigma:'; { available in 10_12, 10_0 }
    function imageBySettingProperties (properties: NSDictionary): CIImage; message 'imageBySettingProperties:'; { available in 10_12, 10_0 }
    function extent: CGRect; message 'extent';
    function properties: NSDictionary; message 'properties';
    function definition: CIFilterShape; message 'definition';
    function url: NSURL; message 'url';
    function colorSpace: CGColorSpaceRef; message 'colorSpace';
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function CGImage: CGImageRef; message 'CGImage';
    function regionOfInterestForImage_inRect (image: CIImage; rect: CGRect): CGRect; message 'regionOfInterestForImage:inRect:'; { available in 10_11, 6_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  AutoAdjustment = objccategory external (CIImage)
    function autoAdjustmentFilters: CIFilter *ProtocolPtr; message 'autoAdjustmentFilters'; { available in 10_8, 5_0 }
    function autoAdjustmentFiltersWithOptions (options: nullable NSDictionaryPtr): CIFilter *ProtocolPtr; message 'autoAdjustmentFiltersWithOptions:'; { available in 10_8, 5_0 }
  end;
{$endif}

