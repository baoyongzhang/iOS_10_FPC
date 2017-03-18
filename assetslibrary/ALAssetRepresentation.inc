{ Parsed from AssetsLibrary.framework ALAssetRepresentation.h }

{$ifdef TYPES}
type
  ALAssetRepresentationPtr = ^ALAssetRepresentation;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef CLASSES}

type
  ALAssetRepresentation = objcclass external (NSObject)
  private
    _internal: id;
  public
    function UTI: NSString; message 'UTI'; deprecated 'in 4_0, 9_0, "Use requestImageDataForAsset:options:resultHandler: on PHImageManager for a PHAsset to request image data from the Photos framework and check the dataUTI passed to your result handler instead"';
    function dimensions: CGSize; message 'dimensions'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a targetSize of image for a PHAsset from the Photos framework instead"';
    function size: clonglong; message 'size'; deprecated 'in 4_0, 9_0, "Use requestImageDataForAsset:options:resultHandler: on PHImageManager to request image data for a PHAsset from the Photos framework instead"';
    function getBytes_fromOffset_length_error (buffer: pbyte; offset: clonglong; length: NSUInteger; error: NSErrorPtr): NSUInteger; message 'getBytes:fromOffset:length:error:'; deprecated 'in 4_0, 9_0, "Use requestImageDataForAsset:options:resultHandler: on PHImageManager to request image data for a PHAsset from the Photos framework instead"';
    function fullResolutionImage: CGImageRef; message 'fullResolutionImage'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a targetSize PHImageManagerMaximumSize for a PHAsset from the Photos framework instead"';
    function CGImageWithOptions (options: NSDictionary): CGImageRef; message 'CGImageWithOptions:'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a targetSize of image for a PHAsset from the Photos framework instead"';
    function fullScreenImage: CGImageRef; message 'fullScreenImage'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a targetSize of image for a PHAsset from the Photos framework instead"';
    function url: NSURL; message 'url'; deprecated 'in 4_0, 9_0, "Use PHImageRequestOptions with the PHImageManager instead"';
    function metadata                                                                       to retrieve metadata from an image returned by the PHImageManager from the Photos framework instead"): NSDictionary; message 'metadata                                                                       to retrieve metadata from an image returned by the PHImageManager from the Photos framework instead")'; deprecated 'in 4_0, 9_0, "Use CGImageSourceCopyPropertiesAtIndex(';
    function orientation: ALAssetOrientation; message 'orientation'; deprecated 'in 4_0, 9_0, "Use the orientation of the UIImage returned for a PHAsset from the PHImageManager from the Photos framework instead"';
    function scale: single; message 'scale'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a targetSize of image for a PHAsset from the Photos framework instead"';
    function filename: NSString; message 'filename'; deprecated 'in 5_0, 9_0, "Use the Photos framework instead"';
  end;
{$endif}

{$endif}
