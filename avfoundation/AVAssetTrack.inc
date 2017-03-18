{ Parsed from AVFoundation.framework AVAssetTrack.h }

{$ifdef TYPES}
type
  AVAssetTrackPtr = ^AVAssetTrack;
  AVFragmentedAssetTrackPtr = ^AVFragmentedAssetTrack;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrack = objcclass external (NSObject, NSCopyingProtocol, AVAsynchronousKeyValueLoadingProtocol)
  private
    _track: AVAssetTrackInternal;
  public
    function asset: AVAsset; message 'asset';
    function trackID: CMPersistentTrackID; message 'trackID';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSString *ProtocolPtr; handler: OpaqueCBlock); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function statusOfValueForKey_error (key: NSString; outError: NSError * _Nullable * _Nullable): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVAssetTrackBasicPropertiesAndCharacteristics = objccategory external (AVAssetTrack)
    function mediaType: NSString; message 'mediaType';
    function formatDescriptions: NSArray; message 'formatDescriptions';
    function isPlayable: boolean; message 'isPlayable';
    function isEnabled: boolean; message 'isEnabled';
    function isSelfContained: boolean; message 'isSelfContained';
    function totalSampleDataLength: clonglong; message 'totalSampleDataLength';
    function hasMediaCharacteristic (mediaCharacteristic: NSString): boolean; message 'hasMediaCharacteristic:';
  end;

type
  AVAssetTrackTemporalProperties = objccategory external (AVAssetTrack)
    function timeRange: CMTimeRange; message 'timeRange';
    function naturalTimeScale: CMTimeScale; message 'naturalTimeScale';
    function estimatedDataRate: single; message 'estimatedDataRate';
  end;

type
  AVAssetTrackLanguageProperties = objccategory external (AVAssetTrack)
    function languageCode: NSString; message 'languageCode';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
  end;

type
  AVAssetTrackPropertiesForVisualCharacteristic = objccategory external (AVAssetTrack)
    function naturalSize: CGSize; message 'naturalSize';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
  end;

type
  AVAssetTrackPropertiesForAudibleCharacteristic = objccategory external (AVAssetTrack)
    function preferredVolume: single; message 'preferredVolume';
  end;

type
  AVAssetTrackPropertiesForFrameBasedCharacteristic = objccategory external (AVAssetTrack)
    function nominalFrameRate: single; message 'nominalFrameRate';
    function minFrameDuration: CMTime; message 'minFrameDuration';
    function requiresFrameReordering: boolean; message 'requiresFrameReordering';
  end;

type
  AVAssetTrackSegments = objccategory external (AVAssetTrack)
    function segments: AVAssetTrackSegment *ProtocolPtr; message 'segments';
    function segmentForTrackTime (trackTime: CMTime): nullable AVAssetTrackSegmentPtr; message 'segmentForTrackTime:';
    function samplePresentationTimeForTrackTime (trackTime: CMTime): CMTime; message 'samplePresentationTimeForTrackTime:';
  end;

type
  AVAssetTrackMetadataReading = objccategory external (AVAssetTrack)
    function commonMetadata: AVMetadataItem *ProtocolPtr; message 'commonMetadata';
    function metadata: AVMetadataItem *ProtocolPtr; message 'metadata';
    function availableMetadataFormats: NSString *ProtocolPtr; message 'availableMetadataFormats';
    function metadataForFormat (format: NSString): AVMetadataItem *ProtocolPtr; message 'metadataForFormat:';
  end;

type
  AVAssetTrackTrackAssociations = objccategory external (AVAssetTrack)
    function availableTrackAssociationTypes: NSString *ProtocolPtr; message 'availableTrackAssociationTypes';
    function associatedTracksOfType (trackAssociationType: NSString): AVAssetTrack *ProtocolPtr; message 'associatedTracksOfType:'; { available in 10_9, 7_0 }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVAssetTrackSampleCursorProvision = objccategory external (AVAssetTrack)
    function canProvideSampleCursors: boolean; message 'canProvideSampleCursors';
    function makeSampleCursorWithPresentationTimeStamp (presentationTimeStamp: CMTime): nullable AVSampleCursorPtr; message 'makeSampleCursorWithPresentationTimeStamp:'; { available in 10_10 }
    function makeSampleCursorAtFirstSampleInDecodeOrder: nullable AVSampleCursorPtr; message 'makeSampleCursorAtFirstSampleInDecodeOrder'; { available in 10_10 }
    function makeSampleCursorAtLastSampleInDecodeOrder: nullable AVSampleCursorPtr; message 'makeSampleCursorAtLastSampleInDecodeOrder'; { available in 10_10 }
  end;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetTrackTimeRangeDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
  AVAssetTrackSegmentsDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
  AVAssetTrackTrackAssociationsDidChangeNotification: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVFragmentedAssetTrack = objcclass external (AVAssetTrack)
  private
    _fragmentedAssetTrack: AVFragmentedAssetTrackInternal;
  end;
{$endif}

