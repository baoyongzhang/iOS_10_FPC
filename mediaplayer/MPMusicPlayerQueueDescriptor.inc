{ Parsed from MediaPlayer.framework MPMusicPlayerQueueDescriptor.h }

{$ifdef TYPES}
type
  MPMusicPlayerQueueDescriptorPtr = ^MPMusicPlayerQueueDescriptor;
  MPMusicPlayerMediaItemQueueDescriptorPtr = ^MPMusicPlayerMediaItemQueueDescriptor;
  MPMusicPlayerStoreQueueDescriptorPtr = ^MPMusicPlayerStoreQueueDescriptor;
{$endif}

{$ifdef CLASSES}

type
  MPMusicPlayerQueueDescriptor = objcclass external (NSObject, NSSecureCodingProtocol)

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  MPMusicPlayerMediaItemQueueDescriptor = objcclass external (MPMusicPlayerQueueDescriptor)
  public
    function initWithQuery (query: MPMediaQuery): instancetype; message 'initWithQuery:';
    function initWithItemCollection (itemCollection: MPMediaItemCollection): instancetype; message 'initWithItemCollection:';
    function query: MPMediaQuery; message 'query';
    function itemCollection: MPMediaItemCollection; message 'itemCollection';
    procedure setStartItem(newValue: MPMediaItem); message 'setStartItem:';
    function startItem: MPMediaItem; message 'startItem';
    procedure setStartTime_forItem (startTime: NSTimeInterval; mediaItem: MPMediaItem); message 'setStartTime:forItem:';
    procedure setEndTime_forItem (endTime: NSTimeInterval; mediaItem: MPMediaItem); message 'setEndTime:forItem:';
  end;

type
  MPMusicPlayerStoreQueueDescriptor = objcclass external (MPMusicPlayerQueueDescriptor)
  public
    function initWithStoreIDs (storeIDs: NSString *ProtocolPtr): instancetype; message 'initWithStoreIDs:';
    procedure setStoreIDs(newValue: NSString *ProtocolPtr); message 'setStoreIDs:';
    function storeIDs: NSString *ProtocolPtr; message 'storeIDs';
    procedure setStartItemID(newValue: NSString); message 'setStartItemID:';
    function startItemID: NSString; message 'startItemID';
    procedure setStartTime_forItemWithStoreID (startTime: NSTimeInterval; storeID: NSString); message 'setStartTime:forItemWithStoreID:';
    procedure setEndTime_forItemWithStoreID (endTime: NSTimeInterval; storeID: NSString); message 'setEndTime:forItemWithStoreID:';
  end;
{$endif}

