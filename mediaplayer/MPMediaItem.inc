{ Parsed from MediaPlayer.framework MPMediaItem.h }

{ Types from MPMediaItemArtwork }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  MPMediaItemPtr = ^MPMediaItem;
  MPMediaItemArtworkPtr = ^MPMediaItemArtwork;
{$endif}

{$ifdef TYPES}
type
  MPMediaType = NSUInteger;
  MPMediaTypePtr = ^MPMediaType;

const
  MPMediaTypeMusic = 1 shl 0;
  MPMediaTypePodcast = 1 shl 1;
  MPMediaTypeAudioBook = 1 shl 2;
  MPMediaTypeAudioITunesU = 1 shl 3 { available in 10_12_2, 5_0 };
  MPMediaTypeAnyAudio = $00ff;
  MPMediaTypeMovie = 1 shl 8 { available in 10_12_2, 5_0 };
  MPMediaTypeTVShow = 1 shl 9 { available in 10_12_2, 5_0 };
  MPMediaTypeVideoPodcast = 1 shl 10 { available in 10_12_2, 5_0 };
  MPMediaTypeMusicVideo = 1 shl 11 { available in 10_12_2, 5_0 };
  MPMediaTypeVideoITunesU = 1 shl 12 { available in 10_12_2, 5_0 };
  MPMediaTypeHomeVideo = 1 shl 13 { available in 10_12_2, 7_0 };
  MPMediaTypeAnyVideo = $ff00 { available in 10_12_2, 5_0 };
  MPMediaTypeAny = not(0)UL;
{$endif}

{$ifdef CLASSES}

type
  MPMediaItem = objcclass external (MPMediaEntity)
  public
    function persistentID: MPMediaEntityPersistentID; message 'persistentID';
    function mediaType: MPMediaType; message 'mediaType';
    function title: NSString; message 'title';
    function albumTitle: NSString; message 'albumTitle';
    function albumPersistentID: MPMediaEntityPersistentID; message 'albumPersistentID';
    function artist: NSString; message 'artist';
    function artistPersistentID: MPMediaEntityPersistentID; message 'artistPersistentID';
    function albumArtist: NSString; message 'albumArtist';
    function albumArtistPersistentID: MPMediaEntityPersistentID; message 'albumArtistPersistentID';
    function genre: NSString; message 'genre';
    function genrePersistentID: MPMediaEntityPersistentID; message 'genrePersistentID';
    function composer: NSString; message 'composer';
    function composerPersistentID: MPMediaEntityPersistentID; message 'composerPersistentID';
    function playbackDuration: NSTimeInterval; message 'playbackDuration';
    function albumTrackNumber: NSUInteger; message 'albumTrackNumber';
    function albumTrackCount: NSUInteger; message 'albumTrackCount';
    function discNumber: NSUInteger; message 'discNumber';
    function discCount: NSUInteger; message 'discCount';
    function artwork: MPMediaItemArtwork; message 'artwork';
    function isExplicitItem: boolean; message 'isExplicitItem';
    function lyrics: NSString; message 'lyrics';
    function isCompilation: boolean; message 'isCompilation';
    function releaseDate: NSDate; message 'releaseDate';
    function beatsPerMinute: NSUInteger; message 'beatsPerMinute';
    function comments: NSString; message 'comments';
    function assetURL: NSURL; message 'assetURL';
    function isCloudItem: boolean; message 'isCloudItem';
    function hasProtectedAsset: boolean; message 'hasProtectedAsset';
    function podcastTitle: NSString; message 'podcastTitle';
    function podcastPersistentID: MPMediaEntityPersistentID; message 'podcastPersistentID';
    function playCount: NSUInteger; message 'playCount';
    function skipCount: NSUInteger; message 'skipCount';
    function rating: NSUInteger; message 'rating';
    function lastPlayedDate: NSDate; message 'lastPlayedDate';
    function userGrouping: NSString; message 'userGrouping';
    function bookmarkTime: NSTimeInterval; message 'bookmarkTime';
    function dateAdded: NSDate; message 'dateAdded';
  end;

type
  MPMediaItemArtwork = objcclass external (NSObject)
  public
    {$if defined(TARGET_OS_IPHONE)}
    function initWithBoundsSize_requestHandler (boundsSize: CGSize; requestHandler: OpaqueCBlock): instancetype; message 'initWithBoundsSize:requestHandler:'; { available in 10_0 }
    function imageWithSize (size: CGSize): nullable UIImagePtr; message 'imageWithSize:';
    {$else}
    function initWithBoundsSize_requestHandler (boundsSize: CGSize; requestHandler: OpaqueCBlock): instancetype; message 'initWithBoundsSize:requestHandler:'; { available in 10_12_2 }
    function imageWithSize (size: CGSize): nullable NSImagePtr; message 'imageWithSize:'; { available in 10_12_2 }
    {$endif}
    function bounds: CGRect; message 'bounds';
    function imageCropRect: CGRect; message 'imageCropRect';
    {$if defined(TARGET_OS_IPHONE)}
    function initWithImage (image: UIImage): instancetype; message 'initWithImage:'; deprecated 'in 5_0, 10_0';
    {$endif}
    function init: id; message 'init';
  end;
{$endif}

