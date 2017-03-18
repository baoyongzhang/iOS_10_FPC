{ Parsed from Photos.framework PHAssetResource.h }

{$ifdef TYPES}
type
  PHAssetResourcePtr = ^PHAssetResource;
{$endif}

{$ifdef CLASSES}

type
  PHAssetResource = objcclass external (NSObject)
  public
    function type_: PHAssetResourceType; message 'type';
    function assetLocalIdentifier: NSString; message 'assetLocalIdentifier';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    function originalFilename: NSString; message 'originalFilename';
    class function assetResourcesForAsset (asset: PHAsset): PHAssetResource *ProtocolPtr; message 'assetResourcesForAsset:';
    class function assetResourcesForLivePhoto (livePhoto: PHLivePhoto): PHAssetResource *ProtocolPtr; message 'assetResourcesForLivePhoto:'; { available in 9_1, 10_0 }
  end;
{$endif}

