{ Parsed from Photos.framework PHFetchOptions.h }

{$ifdef TYPES}
type
  PHFetchOptionsPtr = ^PHFetchOptions;
{$endif}

{$ifdef CLASSES}

type
  PHFetchOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSSortDescriptor *ProtocolPtr); message 'setSortDescriptors:';
    function sortDescriptors: NSSortDescriptor *ProtocolPtr; message 'sortDescriptors';
    procedure setIncludeHiddenAssets(newValue: boolean); message 'setIncludeHiddenAssets:';
    function includeHiddenAssets: boolean; message 'includeHiddenAssets';
    procedure setIncludeAllBurstAssets(newValue: boolean); message 'setIncludeAllBurstAssets:';
    function includeAllBurstAssets: boolean; message 'includeAllBurstAssets';
    procedure setIncludeAssetSourceTypes(newValue: PHAssetSourceType); message 'setIncludeAssetSourceTypes:';
    function includeAssetSourceTypes: PHAssetSourceType; message 'includeAssetSourceTypes';
    procedure setFetchLimit(newValue: NSUInteger); message 'setFetchLimit:';
    function fetchLimit: NSUInteger; message 'fetchLimit';
    procedure setWantsIncrementalChangeDetails(newValue: boolean); message 'setWantsIncrementalChangeDetails:';
    function wantsIncrementalChangeDetails: boolean; message 'wantsIncrementalChangeDetails';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

