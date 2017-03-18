{ Parsed from AssetsLibrary.framework ALAsset.h }

{$ifdef TYPES}
type
  ALAssetPtr = ^ALAsset;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef EXTERNAL_SYMBOLS}
var
  ALErrorInvalidProperty: NSString deprecated 'in 4_0, 9_0, "Use PHAsset class properties from the Photos framework instead"'; cvar; external;
  ALAssetPropertyType: NSString deprecated 'in 4_0, 9_0, "Use the mediaType property on a PHAsset from the Photos framework instead"'; cvar; external;
  ALAssetPropertyLocation: NSString deprecated 'in 4_0, 9_0, "Use the location property on a PHAsset from the Photos framework instead"'; cvar; external;
  ALAssetPropertyDuration: NSString deprecated 'in 4_0, 9_0, "Use the duration property on a PHAsset from the Photos framework instead"'; cvar; external;
  ALAssetPropertyOrientation: NSString deprecated 'in 4_0, 9_0, "Use the orientation of the UIImage returned for a PHAsset via the PHImageManager from the Photos framework instead"'; cvar; external;
  ALAssetPropertyDate: NSString deprecated 'in 4_0, 9_0, "Use the creationDate property on a PHAsset from the Photos framework instead"'; cvar; external;
  ALAssetPropertyRepresentations: NSString deprecated 'in 4_0, 9_0, "Use PHImageRequestOptions with the PHImageManager from the Photos framework instead"'; cvar; external;
  ALAssetPropertyURLs: NSString deprecated 'in 4_0, 9_0, "Use PHImageRequestOptions with the PHImageManager from the Photos framework instead"'; cvar; external;
  ALAssetTypePhoto: NSString deprecated 'in 4_0, 9_0, "Use PHAssetMediaTypeImage from the Photos framework instead"'; cvar; external;
  ALAssetTypeVideo: NSString deprecated 'in 4_0, 9_0, "Use PHAssetMediaTypeVideo from the Photos framework instead"'; cvar; external;
  ALAssetTypeUnknown: NSString deprecated 'in 4_0, 9_0, "Use PHAssetMediaTypeAudio for audio or PHAssetMediaTypeUnknown for unknown media types from the Photos framework instead"'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ALAsset = objcclass external (NSObject)
  private
    _internal: id;
  public
    function valueForProperty (property_: NSString): id; message 'valueForProperty:'; deprecated 'in 4_0, 9_0, "Use PHAsset class properties from the Photos framework instead"';
    function defaultRepresentation: ALAssetRepresentation; message 'defaultRepresentation'; deprecated 'in 4_0, 9_0, "Use PHImageRequestOptions with the PHImageManager from the Photos framework instead"';
    function representationForUTI (representationUTI: NSString): ALAssetRepresentation; message 'representationForUTI:'; deprecated 'in 4_0, 9_0, "Use PHImageRequestOptions with the PHImageManager from the Photos framework instead"';
    function thumbnail: CGImageRef; message 'thumbnail'; deprecated 'in 4_0, 9_0, "Use requestImageForAsset:targetSize:contentMode:options:resultHandler: on PHImageManager to request a thumbnail sized image for a PHAsset from the Photos framework instead"';
    function aspectRatioThumbnail: CGImageRef; message 'aspectRatioThumbnail'; deprecated 'in 5_0, 9_0, "Use the PHImageContentMode options to request thumbnail aspect ratio in PHImageRequestOptions with the PHImageManager"';
    procedure writeModifiedImageDataToSavedPhotosAlbum_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeModifiedImageDataToSavedPhotosAlbum:metadata:completionBlock:'; deprecated 'in 5_0, 9_0, "Use creationRequestForAssetFromImage: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    procedure writeModifiedVideoAtPathToSavedPhotosAlbum_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'writeModifiedVideoAtPathToSavedPhotosAlbum:completionBlock:'; deprecated 'in 5_0, 9_0, "Use creationRequestForAssetFromVideoAtFileURL: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    function originalAsset: ALAsset; message 'originalAsset';
    function isEditable: boolean; message 'isEditable';
    procedure setImageData_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'setImageData:metadata:completionBlock:'; deprecated 'in 5_0, 9_0, "Use contentEditingOutput on a PHAssetChangeRequest from the Photos framework instead"';
    procedure setVideoAtPath_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'setVideoAtPath:completionBlock:'; deprecated 'in 5_0, 9_0, "Use contentEditingOutput on a PHAssetChangeRequest from the Photos framework instead"';
  end;
{$endif}

{$endif}
