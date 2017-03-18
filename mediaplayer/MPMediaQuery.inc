{ Parsed from MediaPlayer.framework MPMediaQuery.h }

{$ifdef TYPES}
type
  MPMediaQueryPtr = ^MPMediaQuery;
  MPMediaPredicatePtr = ^MPMediaPredicate;
  MPMediaPropertyPredicatePtr = ^MPMediaPropertyPredicate;
{$endif}

{$ifdef TYPES}
type
  MPMediaGrouping = NSInteger;
  MPMediaGroupingPtr = ^MPMediaGrouping;

const
  MPMediaGroupingTitle = 0;
  MPMediaGroupingAlbum = 1;
  MPMediaGroupingArtist = 2;
  MPMediaGroupingAlbumArtist = 3;
  MPMediaGroupingComposer = 4;
  MPMediaGroupingGenre = 5;
  MPMediaGroupingPlaylist = 6;
  MPMediaGroupingPodcastTitle = 7;
{$endif}

{$ifdef CLASSES}

type
  MPMediaQuery = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithFilterPredicates (filterPredicates: nullable MPMediaPredicate *ProtocolPtr): instancetype; message 'initWithFilterPredicates:'; { NS_DESIGNATED_INITIALIZER }
    procedure setFilterPredicates(newValue: MPMediaPredicate *ProtocolPtr); message 'setFilterPredicates:';
    function filterPredicates: MPMediaPredicate *ProtocolPtr; message 'filterPredicates';
    procedure addFilterPredicate (predicate: MPMediaPredicate); message 'addFilterPredicate:';
    procedure removeFilterPredicate (predicate: MPMediaPredicate); message 'removeFilterPredicate:';
    function items: MPMediaItem *ProtocolPtr; message 'items';
    function collections: MPMediaItemCollection *ProtocolPtr; message 'collections';
    procedure setGroupingType(newValue: MPMediaGrouping); message 'setGroupingType:';
    function groupingType: MPMediaGrouping; message 'groupingType';
    function itemSections: MPMediaQuerySection *ProtocolPtr; message 'itemSections';
    function collectionSections: MPMediaQuerySection *ProtocolPtr; message 'collectionSections';
    class function albumsQuery: MPMediaQuery; message 'albumsQuery';
    class function artistsQuery: MPMediaQuery; message 'artistsQuery';
    class function songsQuery: MPMediaQuery; message 'songsQuery';
    class function playlistsQuery: MPMediaQuery; message 'playlistsQuery';
    class function podcastsQuery: MPMediaQuery; message 'podcastsQuery';
    class function audiobooksQuery: MPMediaQuery; message 'audiobooksQuery';
    class function compilationsQuery: MPMediaQuery; message 'compilationsQuery';
    class function composersQuery: MPMediaQuery; message 'composersQuery';
    class function genresQuery: MPMediaQuery; message 'genresQuery';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  MPMediaPredicate = objcclass external (NSObject, NSSecureCodingProtocol)
  private

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  MPMediaPredicateComparison = NSInteger;
  MPMediaPredicateComparisonPtr = ^MPMediaPredicateComparison;

const
  MPMediaPredicateComparisonEqualTo = 0;
  MPMediaPredicateComparisonContains = 1;
{$endif}

{$ifdef CLASSES}

type
  MPMediaPropertyPredicate = objcclass external (MPMediaPredicate)
  public
    class function predicateWithValue_forProperty (value: nullable id; property_: NSString): MPMediaPropertyPredicate; message 'predicateWithValue:forProperty:';
    class function predicateWithValue_forProperty_comparisonType (value: nullable id; property_: NSString; comparisonType: MPMediaPredicateComparison): MPMediaPropertyPredicate; message 'predicateWithValue:forProperty:comparisonType:';
    function property_: NSString; message 'property';
    function value: id; message 'value';
    function comparisonType: MPMediaPredicateComparison; message 'comparisonType';
  end;


type
  MPMediaQueryAdditions = objccategory external (MPMediaItem)
    class function persistentIDPropertyForGroupingType (groupingType: MPMediaGrouping): NSString; message 'persistentIDPropertyForGroupingType:'; { available in 4_2 }
    class function titlePropertyForGroupingType (groupingType: MPMediaGrouping): NSString; message 'titlePropertyForGroupingType:'; { available in 4_2 }
  end;
{$endif}

