{ Parsed from AssetsLibrary.framework ALAssetsGroup.h }

{$ifdef TYPES}
type
  ALAssetsGroupPtr = ^ALAssetsGroup;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
type
  ALAssetsGroupEnumerationResultsBlock = OpaqueCBlock deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by fetchAssetsInAssetCollection:options: on PHAsset from the Photos framework to enumerate the assets in an asset collection instead"';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ALAssetsGroupPropertyName: NSString deprecated 'in 4_0, 9_0, "Use the localizedTitle property on a PHAssetCollection from the Photos framework instead"'; cvar; external;
  ALAssetsGroupPropertyType: NSString deprecated 'in 4_0, 9_0, "Use the assetCollectionType and assetCollectionSubtype properties on a PHAssetCollection from the Photos framework instead"'; cvar; external;
  ALAssetsGroupPropertyPersistentID: NSString deprecated 'in 4_0, 9_0, "Use the localIdentifier property on a PHAssetCollection from the Photos framework instead"'; cvar; external;
  ALAssetsGroupPropertyURL: NSString deprecated 'in 5_0, 9_0, "Use the localIdentifier property on a PHAssetCollection from the Photos framework, or to lookup PHAssetCollections by a previously known ALAssetsGroupPropertyURL use fetchAssetCollectionsWithALAssetGroupURLs:options: instead"'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ALAssetsGroup = objcclass external (NSObject)
  private
    _internal: id;
  public
    function valueForProperty (property_: NSString): id; message 'valueForProperty:'; deprecated 'in 4_0, 9_0, "Use the class properties on a PHAssetCollection in the Photos framework instead"';
    function posterImage: CGImageRef; message 'posterImage'; deprecated 'in 4_0, 9_0, "Use fetchKeyAssetsInAssetCollection:options: on PHAsset, then use the PHImageManager to request image data for key assets in the asset collection from the Photos framework instead"';
    procedure setAssetsFilter (filter: ALAssetsFilter); message 'setAssetsFilter:'; deprecated 'in 4_0, 9_0, "Use fetchAssetsInAssetCollection:options: on PHAsset with a predicate in the PHFetchOptions from the Photos framework to filter the assets in an asset collection instead"';
    function numberOfAssets                                                                                                                                                                                    from the Photos framework instead"): NSInteger; message 'numberOfAssets                                                                                                                                                                                    from the Photos framework instead")'; deprecated 'in 4_0, 9_0, "Use the estimatedAssetCount on PHAssetCollection for a quick estimate of the total assets in a collection (or fetch the assets to get an exact value';
    procedure enumerateAssetsUsingBlock (enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsUsingBlock:'; deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by fetchAssetsInAssetCollection:options: on PHAsset to enumerate the assets in an asset collection from the Photos framework instead"';
    procedure enumerateAssetsWithOptions_usingBlock (options: NSEnumerationOptions; enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsWithOptions:usingBlock:'; deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by fetchAssetsInAssetCollection:options: on PHAsset to enumerate the assets in an asset collection from the Photos framework instead"';
    procedure enumerateAssetsAtIndexes_options_usingBlock (indexSet: NSIndexSet; options: NSEnumerationOptions; enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsAtIndexes:options:usingBlock:'; deprecated 'in 4_0, 9_0, "Use the PHFetchResult returned by fetchAssetsInAssetCollection:options: on PHAsset to enumerate the assets in an asset collection from the Photos framework instead"';
    function isEditable: boolean; message 'isEditable';
    function addAsset (asset: ALAsset): boolean; message 'addAsset:'; deprecated 'in 5_0, 9_0, "Use addAssets: on a PHAssetCollectionChangeRequest: created from a PHAssetCollection in the Photos framework instead"';
  end;
{$endif}

{$endif}
