{ Parsed from AssetsLibrary.framework ALAssetsLibrary.h }

{$ifdef TYPES}
type
  ALAssetsLibraryPtr = ^ALAssetsLibrary;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
type
  ALAssetOrientation = NSInteger;
  ALAssetOrientationPtr = ^ALAssetOrientation;

const
  ALAssetOrientationUp = 0 deprecated 'in 4_0, 9_0';
  ALAssetOrientationDown = 1 deprecated 'in 4_0, 9_0';
  ALAssetOrientationLeft = 2 deprecated 'in 4_0, 9_0';
  ALAssetOrientationRight = 3 deprecated 'in 4_0, 9_0';
  ALAssetOrientationUpMirrored = 4 deprecated 'in 4_0, 9_0';
  ALAssetOrientationDownMirrored = 5 deprecated 'in 4_0, 9_0';
  ALAssetOrientationLeftMirrored = 6 deprecated 'in 4_0, 9_0';
  ALAssetOrientationRightMirrored = 7 deprecated 'in 4_0, 9_0';
const
  ALAssetsGroupLibrary = 1 shl 0 deprecated 'in 4_0, 9_0';
  ALAssetsGroupAlbum = 1 shl 1 deprecated 'in 4_0, 9_0';
  ALAssetsGroupEvent = 1 shl 2 deprecated 'in 4_0, 9_0';
  ALAssetsGroupFaces = 1 shl 3 deprecated 'in 4_0, 9_0';
  ALAssetsGroupSavedPhotos = 1 shl 4 deprecated 'in 4_0, 9_0';
  {$if (__IPHONE_5_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ALAssetsGroupPhotoStream = 1 shl 5 deprecated 'in 5_0, 9_0';
  {$endif}
  ALAssetsGroupAll = $FFFFFFFF deprecated 'in 4_0, 9_0';

type
  ALAssetsGroupType = NSUInteger deprecated 'in 4_0, 9_0, "Use PHAssetCollectionType and PHAssetCollectionSubtype in the Photos framework instead"';
  ALAssetsGroupTypePtr = ^ALAssetsGroupType deprecated 'in 4_0, 9_0, "Use PHAssetCollectionType and PHAssetCollectionSubtype in the Photos framework instead"';
  ALAuthorizationStatus = NSInteger;
  ALAuthorizationStatusPtr = ^ALAuthorizationStatus;

const
  ALAuthorizationStatusNotDetermined = 0 deprecated 'in 6_0, 9_0';
  ALAuthorizationStatusRestricted = 1 deprecated 'in 6_0, 9_0';
  ALAuthorizationStatusDenied = 2 deprecated 'in 6_0, 9_0';
  ALAuthorizationStatusAuthorized = 3 deprecated 'in 6_0, 9_0';

type
  ALAssetsLibraryGroupsEnumerationResultsBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by fetchAssetCollectionsInCollectionList:options: on PHAssetCollection from the Photos framework to enumerate the asset collections in a collection list instead"';
  ALAssetsLibraryAssetForURLResultBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use fetchAssetsWithLocalIdentifiers:options: on PHAsset to fetch assets by local identifier (or to lookup PHAssets by a previously known ALAssetPropertyAssetURL use fetchAssetsWithALAssetURLs:options:';
  ALAssetsLibraryGroupResultBlock = OpaqueCBlock deprecated 'in 5_0, 9_0, "Use fetchAssetCollectionsWithLocalIdentifiers:options: on PHAssetCollection to fetch the asset collections by local identifier (or to lookup PHAssetCollections by a previously known ALAssetsGroupPropertyURL use fetchAssetCollectionsWithALAssetGroupURLs:options:';
  ALAssetsLibraryAccessFailureBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use the Photos framework instead"';
  ALAssetsLibraryWriteImageCompletionBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use performChanges:completionHandler: or performChangesAndWait: on the shared PHPhotoLibrary with a PHAssetChangeRequest from the Photos framework instead"';
  ALAssetsLibraryWriteVideoCompletionBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use performChanges:completionHandler: or performChangesAndWait: on the shared PHPhotoLibrary with a PHAssetChangeRequest from the Photos framework instead"';
{$endif}

{$ifdef CLASSES}

type
  ALAssetsLibrary = objcclass external (NSObject)
  private
    _internal: id;
  public
    procedure enumerateGroupsWithTypes_usingBlock_failureBlock (types: ALAssetsGroupType; enumerationBlock: ALAssetsLibraryGroupsEnumerationResultsBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'enumerateGroupsWithTypes:usingBlock:failureBlock:'; deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by one of the fetch... methods on PHAssetCollection from the Photos framework to enumerate asset collections instead"';
    procedure assetForURL_resultBlock_failureBlock (assetURL: NSURL; resultBlock: ALAssetsLibraryAssetForURLResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'assetForURL:resultBlock:failureBlock:'; deprecated 'in 4_0, 9_0, "Use fetchAssetsWithLocalIdentifiers:options: on PHAsset to fetch assets by local identifier (or to lookup PHAssets by a previously known ALAssetPropertyAssetURL use fetchAssetsWithALAssetURLs:options:';
    procedure groupForURL_resultBlock_failureBlock (groupURL: NSURL; resultBlock: ALAssetsLibraryGroupResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'groupForURL:resultBlock:failureBlock:'; deprecated 'in 5_0, 9_0, "Use fetchAssetCollectionsWithLocalIdentifiers:options: on PHAssetCollection to fetch the asset collections by local identifier (or to lookup PHAssetCollections by a previously known ALAssetsGroupPropertyURL use fetchAssetCollectionsWithALAssetGroupURLs:options:';
    procedure addAssetsGroupAlbumWithName_resultBlock_failureBlock (name: NSString; resultBlock: ALAssetsLibraryGroupResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'addAssetsGroupAlbumWithName:resultBlock:failureBlock:'; deprecated 'in 5_0, 9_0, "Use creationRequestForAssetCollectionWithTitle: on PHAssetCollectionChangeRequest from the Photos framework to create a new asset collection instead"';
    procedure writeImageToSavedPhotosAlbum_orientation_completionBlock (imageRef: CGImageRef; orientation: ALAssetOrientation; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageToSavedPhotosAlbum:orientation:completionBlock:'; deprecated 'in 4_0, 9_0, "Use creationRequestForAssetFromImage: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    procedure writeImageToSavedPhotosAlbum_metadata_completionBlock (imageRef: CGImageRef; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageToSavedPhotosAlbum:metadata:completionBlock:'; deprecated 'in 4_1, 9_0, "Use creationRequestForAssetFromImage: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    procedure writeImageDataToSavedPhotosAlbum_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageDataToSavedPhotosAlbum:metadata:completionBlock:'; deprecated 'in 4_1, 9_0, "Use creationRequestForAssetFromImageData: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    procedure writeVideoAtPathToSavedPhotosAlbum_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'writeVideoAtPathToSavedPhotosAlbum:completionBlock:'; deprecated 'in 4_0, 9_0, "Use creationRequestForAssetFromVideoAtFilePath: on PHAssetChangeRequest from the Photos framework to create a new asset instead"';
    function videoAtPathIsCompatibleWithSavedPhotosAlbum (videoPathURL: NSURL): boolean; message 'videoAtPathIsCompatibleWithSavedPhotosAlbum:'; deprecated 'in 5_0, 9_0';
    class function authorizationStatus: ALAuthorizationStatus; message 'authorizationStatus'; deprecated 'in 6_0, 9_0, "Use authorizationStatus on the shared PHPhotoLibrary from the Photos framework instead"';
    class procedure disableSharedPhotoStreamsSupport; message 'disableSharedPhotoStreamsSupport'; deprecated 'in 6_0, 9_0, "Use the Photos framework instead"';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ALAssetsLibraryChangedNotification: NSString deprecated 'in 4_0, 9_0, "Use photoLibraryDidChange: notification from the Photos framework instead"'; cvar; external;
  ALAssetLibraryUpdatedAssetsKey: NSString deprecated 'in 6_0, 9_0, "Use changeDetailsForFetchResult: and changeDetailsForObject: to get change details via the PHChange object included on photoLibraryDidChange: from the Photos framework instead"'; cvar; external;
  ALAssetLibraryInsertedAssetGroupsKey: NSString deprecated 'in 6_0, 9_0, "Use changeDetailsForFetchResult: and changeDetailsForObject: to get change details via the PHChange object included on photoLibraryDidChange: from the Photos framework instead"'; cvar; external;
  ALAssetLibraryUpdatedAssetGroupsKey: NSString deprecated 'in 6_0, 9_0, "Use changeDetailsForFetchResult: and changeDetailsForObject: to get change details via the PHChange object included on photoLibraryDidChange: from the Photos framework instead"'; cvar; external;
  ALAssetLibraryDeletedAssetGroupsKey: NSString deprecated 'in 6_0, 9_0, "Use changeDetailsForFetchResult: and changeDetailsForObject: to get change details via the PHChange object included on photoLibraryDidChange: from the Photos framework instead"'; cvar; external;
  ALAssetsLibraryErrorDomain: NSString deprecated 'in 4_0, 9_0, "Use the Photos framework instead"'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  ALAssetsLibraryUnknownError = -1;
  ALAssetsLibraryWriteFailedError = -3300;
  ALAssetsLibraryWriteBusyError = -3301;
  ALAssetsLibraryWriteInvalidDataError = -3302;
  ALAssetsLibraryWriteIncompatibleDataError = -3303;
  ALAssetsLibraryWriteDataEncodingError = -3304;
  ALAssetsLibraryWriteDiskSpaceError = -3305;
  ALAssetsLibraryDataUnavailableError = -3310;
  ALAssetsLibraryAccessUserDeniedError = -3311;
  ALAssetsLibraryAccessGloballyDeniedError = -3312;
{$endif}

{$endif}
