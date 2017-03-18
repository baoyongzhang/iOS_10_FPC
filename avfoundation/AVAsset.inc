{ Parsed from AVFoundation.framework AVAsset.h }

{ Types from AVAsset_AVAssetReferenceRestrictions }
{$ifdef TYPES}

type
  AVAssetReferenceRestrictions = NSUInteger;
type
  AVAssetReferenceRestrictionsPtr = ^AVAssetReferenceRestrictions;

const
  AVAssetReferenceRestrictionForbidNone = 0;
  AVAssetReferenceRestrictionForbidRemoteReferenceToLocal = 1 shl 0;
  AVAssetReferenceRestrictionForbidLocalReferenceToRemote = 1 shl 1;
  AVAssetReferenceRestrictionForbidCrossSiteReference = 1 shl 2;
  AVAssetReferenceRestrictionForbidLocalReferenceToLocal = 1 shl 3;
  AVAssetReferenceRestrictionForbidAll = $FFFF;
{$endif}


{ Types from AVAssetUsability }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAssetPtr = ^AVAsset;
  AVURLAssetPtr = ^AVURLAsset;
  AVFragmentedAssetPtr = ^AVFragmentedAsset;
  AVFragmentedAssetMinderPtr = ^AVFragmentedAssetMinder;
  AVFragmentMindingProtocolPtr = ^AVFragmentMindingProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAsset = objcclass external (NSObject, NSCopyingProtocol, AVAsynchronousKeyValueLoadingProtocol)
  private
    _asset: AVAssetInternal;
  public
    class function assetWithURL (URL: NSURL): instancetype; message 'assetWithURL:';
    function duration: CMTime; message 'duration';
    function preferredRate: single; message 'preferredRate';
    function preferredVolume: single; message 'preferredVolume';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
    function naturalSize: CGSize; message 'naturalSize';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSString *ProtocolPtr; handler: OpaqueCBlock); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function statusOfValueForKey_error (key: NSString; outError: NSError * _Nullable * _Nullable): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVAssetAsynchronousLoading = objccategory external (AVAsset)
    function providesPreciseDurationAndTiming: boolean; message 'providesPreciseDurationAndTiming';
    procedure cancelLoading; message 'cancelLoading';
  end;

type
  AVAsset_AVAssetReferenceRestrictions = objccategory external name 'AVAssetReferenceRestrictions' (AVAsset)
    function referenceRestrictions: AVAssetReferenceRestrictions; message 'referenceRestrictions';
  end;

type
  AVAssetTrackInspection = objccategory external (AVAsset)
    function tracks: AVAssetTrack *ProtocolPtr; message 'tracks';
    function trackWithTrackID (trackID: CMPersistentTrackID): nullable AVAssetTrackPtr; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: NSString): AVAssetTrack *ProtocolPtr; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: NSString): AVAssetTrack *ProtocolPtr; message 'tracksWithMediaCharacteristic:';
    function trackGroups: AVAssetTrackGroup *ProtocolPtr; message 'trackGroups';
  end;

type
  AVAssetMetadataReading = objccategory external (AVAsset)
    function creationDate: AVMetadataItem; message 'creationDate';
    function lyrics: NSString; message 'lyrics';
    function commonMetadata: AVMetadataItem *ProtocolPtr; message 'commonMetadata';
    function metadata: AVMetadataItem *ProtocolPtr; message 'metadata';
    function availableMetadataFormats: NSString *ProtocolPtr; message 'availableMetadataFormats';
    function metadataForFormat (format: NSString): AVMetadataItem *ProtocolPtr; message 'metadataForFormat:';
  end;

type
  AVAssetChapterInspection = objccategory external (AVAsset)
    function availableChapterLocales: NSLocale *ProtocolPtr; message 'availableChapterLocales';
    function chapterMetadataGroupsWithTitleLocale_containingItemsWithCommonKeys (locale: NSLocale; commonKeys: nullable NSString *ProtocolPtr): AVTimedMetadataGroup *ProtocolPtr; message 'chapterMetadataGroupsWithTitleLocale:containingItemsWithCommonKeys:'; { available in 10_7, 4_3 }
    function chapterMetadataGroupsBestMatchingPreferredLanguages (preferredLanguages: NSString *ProtocolPtr): AVTimedMetadataGroup *ProtocolPtr; message 'chapterMetadataGroupsBestMatchingPreferredLanguages:'; { available in 10_8, 6_0 }
  end;

type
  AVAssetMediaSelection = objccategory external (AVAsset)
    function availableMediaCharacteristicsWithMediaSelectionOptions: NSString *ProtocolPtr; message 'availableMediaCharacteristicsWithMediaSelectionOptions';
    function mediaSelectionGroupForMediaCharacteristic (mediaCharacteristic: NSString): nullable AVMediaSelectionGroupPtr; message 'mediaSelectionGroupForMediaCharacteristic:'; { available in 10_8, 5_0 }
    function preferredMediaSelection: AVMediaSelection; message 'preferredMediaSelection';
  end;

type
  AVAssetProtectedContent = objccategory external (AVAsset)
    function hasProtectedContent: boolean; message 'hasProtectedContent';
  end;

type
  AVAssetFragments = objccategory external (AVAsset)
    function canContainFragments: boolean; message 'canContainFragments';
    function containsFragments: boolean; message 'containsFragments';
    function overallDurationHint: CMTime; message 'overallDurationHint';
  end;

type
  AVAssetUsability = objccategory external (AVAsset)
    function isPlayable: boolean; message 'isPlayable';
    function isExportable: boolean; message 'isExportable';
    function isReadable: boolean; message 'isReadable';
    function isComposable: boolean; message 'isComposable';
    {$if defined(TARGET_OS_IPHONE)}
    function isCompatibleWithSavedPhotosAlbum: boolean; message 'isCompatibleWithSavedPhotosAlbum';
    {$endif}
    function isCompatibleWithAirPlayVideo: boolean; message 'isCompatibleWithAirPlayVideo';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVURLAssetPreferPreciseDurationAndTimingKey: NSString { available in 10_7, 4_0 }; cvar; external;
  AVURLAssetReferenceRestrictionsKey: NSString { available in 10_7, 5_0 }; cvar; external;
  AVURLAssetHTTPCookiesKey: NSString { available in 8_0 }; cvar; external;
  AVURLAssetAllowsCellularAccessKey: NSString { available in 10_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVURLAsset = objcclass external (AVAsset)
  private
    _URLAsset: AVURLAssetInternal;
  public
    class function audiovisualTypes: NSString *ProtocolPtr; message 'audiovisualTypes'; { available in 10_7, 5_0 }
    class function audiovisualMIMETypes: NSString *ProtocolPtr; message 'audiovisualMIMETypes'; { available in 10_7, 5_0 }
    class function isPlayableExtendedMIMEType (extendedMIMEType: NSString): boolean; message 'isPlayableExtendedMIMEType:'; { available in 10_7, 5_0 }
    class function URLAssetWithURL_options (URL: NSURL; options: nullable NSDictionaryPtr): instancetype; message 'URLAssetWithURL:options:';
    function initWithURL_options (URL: NSURL; options: nullable NSDictionaryPtr): instancetype; message 'initWithURL:options:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
  end;


type
  AVURLAssetURLHandling = objccategory external (AVURLAsset)
    function resourceLoader: AVAssetResourceLoader; message 'resourceLoader';
  end;

type
  AVURLAssetCache = objccategory external (AVURLAsset)
    function assetCache: AVAssetCache; message 'assetCache';
  end;

type
  AVAssetCompositionUtility = objccategory external (AVURLAsset)
    function compatibleTrackForCompositionTrack (compositionTrack: AVCompositionTrack): nullable AVAssetTrackPtr; message 'compatibleTrackForCompositionTrack:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetDurationDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
  AVAssetContainsFragmentsDidChangeNotification: NSString { available in 10_11 }; cvar; external;
  AVAssetWasDefragmentedNotification: NSString { available in 10_11 }; cvar; external;
  AVAssetChapterMetadataGroupsDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
  AVAssetMediaSelectionGroupsDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  AVFragmentMindingProtocol = objcprotocol external name 'AVFragmentMinding'
    function isAssociatedWithFragmentMinder: boolean; message 'isAssociatedWithFragmentMinder';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedAsset = objcclass external (AVURLAsset, AVFragmentMindingProtocol)
  private
    _fragmentedAsset: AVFragmentedAssetInternal;
  public
    class function fragmentedAssetWithURL_options (URL_: NSURL; options: nullable NSDictionaryPtr): instancetype; message 'fragmentedAssetWithURL:options:';
    function tracks: AVFragmentedAssetTrack *ProtocolPtr; message 'tracks';

    { Adopted protocols }
    function isAssociatedWithFragmentMinder: boolean; message 'isAssociatedWithFragmentMinder';
  end;


type
  AVFragmentedAssetTrackInspection = objccategory external (AVFragmentedAsset)
    function trackWithTrackID (trackID: CMPersistentTrackID): nullable AVFragmentedAssetTrackPtr; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: NSString): AVFragmentedAssetTrack *ProtocolPtr; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: NSString): AVFragmentedAssetTrack *ProtocolPtr; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVFragmentedAssetMinder = objcclass external (NSObject)
  private
    _fragmentedAssetMinder: AVFragmentedAssetMinderInternal;
  public
    class function fragmentedAssetMinderWithAsset_mindingInterval (asset: AVFragmentMindingProtocol; mindingInterval: NSTimeInterval): instancetype; message 'fragmentedAssetMinderWithAsset:mindingInterval:';
    procedure setMindingInterval(newValue: NSTimeInterval); message 'setMindingInterval:';
    function mindingInterval: NSTimeInterval; message 'mindingInterval';
    function assets: AVFragmentMindingProtocol *ProtocolPtr; message 'assets';
    procedure addFragmentedAsset (asset: AVFragmentMindingProtocol); message 'addFragmentedAsset:';
    procedure removeFragmentedAsset (asset: AVFragmentMindingProtocol); message 'removeFragmentedAsset:';
  end;
{$endif}

