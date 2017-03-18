{ Parsed from Photos.framework PHCollection.h }

{$ifdef TYPES}
type
  PHCollectionPtr = ^PHCollection;
  PHAssetCollectionPtr = ^PHAssetCollection;
  PHCollectionListPtr = ^PHCollectionList;
{$endif}

{$ifdef CLASSES}

type
  PHCollection = objcclass external (PHObject)
  public
    function canContainAssets: boolean; message 'canContainAssets';
    function canContainCollections: boolean; message 'canContainCollections';
    function localizedTitle: NSString; message 'localizedTitle';
    function canPerformEditOperation (anOperation: PHCollectionEditOperation): boolean; message 'canPerformEditOperation:';
    class function fetchCollectionsInCollectionList_options (collectionList: PHCollectionList; options: nullable PHFetchOptionsPtr): PHCollection *ProtocolPtr; message 'fetchCollectionsInCollectionList:options:';
    class function fetchTopLevelUserCollectionsWithOptions (options: nullable PHFetchOptionsPtr): PHCollection *ProtocolPtr; message 'fetchTopLevelUserCollectionsWithOptions:';
  end;

type
  PHAssetCollection = objcclass external (PHCollection)
  public
    function assetCollectionType: PHAssetCollectionType; message 'assetCollectionType';
    function assetCollectionSubtype: PHAssetCollectionSubtype; message 'assetCollectionSubtype';
    function estimatedAssetCount: NSUInteger; message 'estimatedAssetCount';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function approximateLocation: CLLocation; message 'approximateLocation';
    function localizedLocationNames: NSString *ProtocolPtr; message 'localizedLocationNames';
    class function fetchAssetCollectionsWithLocalIdentifiers_options (identifiers: NSString *ProtocolPtr; options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchAssetCollectionsWithLocalIdentifiers:options:';
    class function fetchAssetCollectionsWithType_subtype_options (type_: PHAssetCollectionType; subtype: PHAssetCollectionSubtype; options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchAssetCollectionsWithType:subtype:options:';
    class function fetchAssetCollectionsContainingAsset_withType_options (asset: PHAsset; type_: PHAssetCollectionType; options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchAssetCollectionsContainingAsset:withType:options:';
    class function fetchAssetCollectionsWithALAssetGroupURLs_options (assetGroupURLs: NSURL *ProtocolPtr; options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchAssetCollectionsWithALAssetGroupURLs:options:';
    class function fetchMomentsInMomentList_options (momentList: PHCollectionList; options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchMomentsInMomentList:options:';
    class function fetchMomentsWithOptions (options: nullable PHFetchOptionsPtr): PHAssetCollection *ProtocolPtr; message 'fetchMomentsWithOptions:';
    class function transientAssetCollectionWithAssets_title (assets: PHAsset *ProtocolPtr; title: nullable NSStringPtr): PHAssetCollection; message 'transientAssetCollectionWithAssets:title:';
    class function transientAssetCollectionWithAssetFetchResult_title (fetchResult: PHAsset *ProtocolPtr; title: nullable NSStringPtr): PHAssetCollection; message 'transientAssetCollectionWithAssetFetchResult:title:';
  end;

type
  PHCollectionList = objcclass external (PHCollection)
  public
    function collectionListType: PHCollectionListType; message 'collectionListType';
    function collectionListSubtype: PHCollectionListSubtype; message 'collectionListSubtype';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function localizedLocationNames: NSString *ProtocolPtr; message 'localizedLocationNames';
    class function fetchCollectionListsContainingCollection_options (collection: PHCollection; options: nullable PHFetchOptionsPtr): PHCollectionList *ProtocolPtr; message 'fetchCollectionListsContainingCollection:options:';
    class function fetchCollectionListsWithLocalIdentifiers_options (identifiers: NSString *ProtocolPtr; options: nullable PHFetchOptionsPtr): PHCollectionList *ProtocolPtr; message 'fetchCollectionListsWithLocalIdentifiers:options:';
    class function fetchCollectionListsWithType_subtype_options (collectionListType_: PHCollectionListType; subtype: PHCollectionListSubtype; options: nullable PHFetchOptionsPtr): PHCollectionList *ProtocolPtr; message 'fetchCollectionListsWithType:subtype:options:';
    class function fetchMomentListsWithSubtype_containingMoment_options (momentListSubtype: PHCollectionListSubtype; moment: PHAssetCollection; options: nullable PHFetchOptionsPtr): PHCollectionList *ProtocolPtr; message 'fetchMomentListsWithSubtype:containingMoment:options:';
    class function fetchMomentListsWithSubtype_options (momentListSubtype: PHCollectionListSubtype; options: nullable PHFetchOptionsPtr): PHCollectionList *ProtocolPtr; message 'fetchMomentListsWithSubtype:options:';
    class function transientCollectionListWithCollections_title (collections: PHCollection *ProtocolPtr; title: nullable NSStringPtr): PHCollectionList; message 'transientCollectionListWithCollections:title:';
    class function transientCollectionListWithCollectionsFetchResult_title (fetchResult: PHCollection *ProtocolPtr; title: nullable NSStringPtr): PHCollectionList; message 'transientCollectionListWithCollectionsFetchResult:title:';
  end;
{$endif}

