{ Parsed from MediaPlayer.framework MPMediaPlaylist.h }

{$ifdef TYPES}
type
  MPMediaPlaylistPtr = ^MPMediaPlaylist;
  MPMediaPlaylistCreationMetadataPtr = ^MPMediaPlaylistCreationMetadata;
{$endif}

{$ifdef TYPES}
type
  MPMediaPlaylistAttribute = NSUInteger;
  MPMediaPlaylistAttributePtr = ^MPMediaPlaylistAttribute;

const
  MPMediaPlaylistAttributeNone = 0;
  MPMediaPlaylistAttributeOnTheGo = 1 shl 0;
  MPMediaPlaylistAttributeSmart = 1 shl 1;
  MPMediaPlaylistAttributeGenius = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  MPMediaPlaylist = objcclass external (MPMediaItemCollection)
  public
    function persistentID: MPMediaEntityPersistentID; message 'persistentID';
    function name: NSString; message 'name';
    function playlistAttributes: MPMediaPlaylistAttribute; message 'playlistAttributes';
    function seedItems: MPMediaItem *ProtocolPtr; message 'seedItems';
    function descriptionText: NSString; message 'descriptionText';
    function authorDisplayName: NSString; message 'authorDisplayName';
    procedure addItemWithProductID_completionHandler (productID: NSString; completionHandler: OpaqueCBlock); message 'addItemWithProductID:completionHandler:'; { available in 9_3 }
    procedure addMediaItems_completionHandler (mediaItems: MPMediaItem *ProtocolPtr; completionHandler: OpaqueCBlock); message 'addMediaItems:completionHandler:'; { available in 9_3 }
  end;

type
  MPMediaPlaylistCreationMetadata = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function initWithName (name: NSString): instancetype; message 'initWithName:'; { NS_DESIGNATED_INITIALIZER }
    function name: NSString; message 'name';
    procedure setAuthorDisplayName(newValue: NSString); message 'setAuthorDisplayName:';
    function authorDisplayName: NSString; message 'authorDisplayName';
    procedure setDescriptionText(newValue: NSString); message 'setDescriptionText:';
    function descriptionText: NSString; message 'descriptionText';
  end;
{$endif}

