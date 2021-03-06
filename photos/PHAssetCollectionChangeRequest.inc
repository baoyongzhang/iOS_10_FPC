{ Parsed from Photos.framework PHAssetCollectionChangeRequest.h }

{$ifdef TYPES}
type
  PHAssetCollectionChangeRequestPtr = ^PHAssetCollectionChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  PHAssetCollectionChangeRequest = objcclass external (NSObject)
  public
    class function creationRequestForAssetCollectionWithTitle (title: NSString): instancetype; message 'creationRequestForAssetCollectionWithTitle:';
    function placeholderForCreatedAssetCollection: PHObjectPlaceholder; message 'placeholderForCreatedAssetCollection';
    class procedure deleteAssetCollections (assetCollections: NSFastEnumerationProtocol); message 'deleteAssetCollections:';
    class function changeRequestForAssetCollection (assetCollection: PHAssetCollection): nullable instancetype; message 'changeRequestForAssetCollection:';
    class function changeRequestForAssetCollection_assets (assetCollection: PHAssetCollection; assets: PHAsset *ProtocolPtr): nullable instancetype; message 'changeRequestForAssetCollection:assets:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure addAssets (assets: NSFastEnumerationProtocol); message 'addAssets:';
    procedure insertAssets_atIndexes (assets: NSFastEnumerationProtocol; indexes: NSIndexSet); message 'insertAssets:atIndexes:';
    procedure removeAssets (assets: NSFastEnumerationProtocol); message 'removeAssets:';
    procedure removeAssetsAtIndexes (indexes: NSIndexSet); message 'removeAssetsAtIndexes:';
    procedure replaceAssetsAtIndexes_withAssets (indexes: NSIndexSet; assets: NSFastEnumerationProtocol); message 'replaceAssetsAtIndexes:withAssets:';
    procedure moveAssetsAtIndexes_toIndex (fromIndexes: NSIndexSet; toIndex: NSUInteger); message 'moveAssetsAtIndexes:toIndex:';
  end;
{$endif}

