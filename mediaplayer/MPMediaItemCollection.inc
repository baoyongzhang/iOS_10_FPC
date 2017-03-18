{ Parsed from MediaPlayer.framework MPMediaItemCollection.h }

{$ifdef TYPES}
type
  MPMediaItemCollectionPtr = ^MPMediaItemCollection;
{$endif}

{$ifdef CLASSES}

type
  MPMediaItemCollection = objcclass external (MPMediaEntity)
  public
    class function collectionWithItems (items: MPMediaItem *ProtocolPtr): MPMediaItemCollection; message 'collectionWithItems:';
    function initWithItems (items: MPMediaItem *ProtocolPtr): instancetype; message 'initWithItems:'; { NS_DESIGNATED_INITIALIZER }
    function items: MPMediaItem *ProtocolPtr; message 'items';
    function representativeItem: MPMediaItem; message 'representativeItem';
    function count: NSUInteger; message 'count';
    function mediaTypes: MPMediaType; message 'mediaTypes';
  end;
{$endif}

