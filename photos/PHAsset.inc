{ Parsed from Photos.framework PHAsset.h }

{$ifdef TYPES}
type
  PHAssetPtr = ^PHAsset;
{$endif}

{$ifdef CLASSES}

type
  PHAsset = objcclass external (PHObject)
  public
    function mediaType: PHAssetMediaType; message 'mediaType';
    function mediaSubtypes: PHAssetMediaSubtype; message 'mediaSubtypes';
    function pixelWidth: NSUInteger; message 'pixelWidth';
    function pixelHeight: NSUInteger; message 'pixelHeight';
    function creationDate: NSDate; message 'creationDate';
    function modificationDate: NSDate; message 'modificationDate';
    function location: CLLocation; message 'location';
    function duration: NSTimeInterval; message 'duration';
    function isHidden: boolean; message 'isHidden';
    function isFavorite: boolean; message 'isFavorite';
    function burstIdentifier: NSString; message 'burstIdentifier';
    function burstSelectionTypes: PHAssetBurstSelectionType; message 'burstSelectionTypes';
    function representsBurst: boolean; message 'representsBurst';
    function sourceType: PHAssetSourceType; message 'sourceType';
    function canPerformEditOperation (editOperation: PHAssetEditOperation): boolean; message 'canPerformEditOperation:';
    class function fetchAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsInAssetCollection:options:';
    class function fetchAssetsWithLocalIdentifiers_options (identifiers: NSString *ProtocolPtr; options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsWithLocalIdentifiers:options:';
    class function fetchKeyAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: nullable PHFetchOptionsPtr): nullable PHAsset *ProtocolPtr; message 'fetchKeyAssetsInAssetCollection:options:';
    class function fetchAssetsWithBurstIdentifier_options (burstIdentifier_: NSString; options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsWithBurstIdentifier:options:';
    class function fetchAssetsWithOptions (options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsWithOptions:';
    class function fetchAssetsWithMediaType_options (mediaType_: PHAssetMediaType; options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsWithMediaType:options:';
    class function fetchAssetsWithALAssetURLs_options (assetURLs: NSURL *ProtocolPtr; options: nullable PHFetchOptionsPtr): PHAsset *ProtocolPtr; message 'fetchAssetsWithALAssetURLs:options:';
  end;
{$endif}

