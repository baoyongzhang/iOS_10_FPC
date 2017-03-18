{ Parsed from AVFoundation.framework AVPlayerItem.h }

{$ifdef TYPES}
type
  AVPlayerItemPtr = ^AVPlayerItem;
  AVPlayerItemAccessLogPtr = ^AVPlayerItemAccessLog;
  AVPlayerItemErrorLogPtr = ^AVPlayerItemErrorLog;
  AVPlayerItemAccessLogEventPtr = ^AVPlayerItemAccessLogEvent;
  AVPlayerItemErrorLogEventPtr = ^AVPlayerItemErrorLogEvent;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVPlayerItemTimeJumpedNotification: NSString { available in 10_7, 5_0 }; cvar; external;
  AVPlayerItemDidPlayToEndTimeNotification: NSString { available in 10_7, 4_0 }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeNotification: NSString { available in 10_7, 4_3 }; cvar; external;
  AVPlayerItemPlaybackStalledNotification: NSString { available in 10_9, 6_0 }; cvar; external;
  AVPlayerItemNewAccessLogEntryNotification: NSString { available in 10_9, 6_0 }; cvar; external;
  AVPlayerItemNewErrorLogEntryNotification: NSString { available in 10_9, 6_0 }; cvar; external;
  AVPlayerItemFailedToPlayToEndTimeErrorKey: NSString { available in 10_7, 4_3 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVPlayerItemStatus = NSInteger;
  AVPlayerItemStatusPtr = ^AVPlayerItemStatus;

const
  AVPlayerItemStatusUnknown = 0;
  AVPlayerItemStatusReadyToPlay = 1;
  AVPlayerItemStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerItem = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItem: AVPlayerItemInternal;
  public
    class function playerItemWithURL (URL: NSURL): instancetype; message 'playerItemWithURL:';
    class function playerItemWithAsset (asset: AVAsset): instancetype; message 'playerItemWithAsset:';
    class function playerItemWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: nullable NSString *ProtocolPtr): instancetype; message 'playerItemWithAsset:automaticallyLoadedAssetKeys:'; { available in 10_9, 7_0 }
    function initWithURL (URL: NSURL): instancetype; message 'initWithURL:';
    function initWithAsset (asset: AVAsset): instancetype; message 'initWithAsset:';
    function initWithAsset_automaticallyLoadedAssetKeys (asset: AVAsset; automaticallyLoadedAssetKeys: nullable NSString *ProtocolPtr): instancetype; message 'initWithAsset:automaticallyLoadedAssetKeys:'; { available in 10_9, 7_0 }
    function status: AVPlayerItemStatus; message 'status';
    function error: NSError; message 'error';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVPlayerItemInspection = objccategory external (AVPlayerItem)
    function asset: AVAsset; message 'asset';
    function tracks: AVPlayerItemTrack *ProtocolPtr; message 'tracks';
    function duration: CMTime; message 'duration';
    function presentationSize: CGSize; message 'presentationSize';
    function timedMetadata: AVMetadataItem *ProtocolPtr; message 'timedMetadata';
    function automaticallyLoadedAssetKeys: NSString *ProtocolPtr; message 'automaticallyLoadedAssetKeys';
  end;

type
  AVPlayerItemRateAndSteppingSupport = objccategory external (AVPlayerItem)
    function canPlayFastForward: boolean; message 'canPlayFastForward';
    function canPlaySlowForward: boolean; message 'canPlaySlowForward';
    function canPlayReverse: boolean; message 'canPlayReverse';
    function canPlaySlowReverse: boolean; message 'canPlaySlowReverse';
    function canPlayFastReverse: boolean; message 'canPlayFastReverse';
    function canStepForward: boolean; message 'canStepForward';
    function canStepBackward: boolean; message 'canStepBackward';
  end;

type
  AVPlayerItemTimeControl = objccategory external (AVPlayerItem)
    function currentTime: CMTime; message 'currentTime';
    procedure setForwardPlaybackEndTime(newValue: CMTime); message 'setForwardPlaybackEndTime:';
    function forwardPlaybackEndTime: CMTime; message 'forwardPlaybackEndTime';
    procedure setReversePlaybackEndTime(newValue: CMTime); message 'setReversePlaybackEndTime:';
    function reversePlaybackEndTime: CMTime; message 'reversePlaybackEndTime';
    function seekableTimeRanges: NSValue *ProtocolPtr; message 'seekableTimeRanges';
    procedure seekToTime (time: CMTime); message 'seekToTime:';
    procedure seekToTime_completionHandler (time: CMTime; completionHandler: OpaqueCBlock); message 'seekToTime:completionHandler:'; { available in 10_7, 5_0 }
    procedure seekToTime_toleranceBefore_toleranceAfter (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime); message 'seekToTime:toleranceBefore:toleranceAfter:';
    procedure seekToTime_toleranceBefore_toleranceAfter_completionHandler (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime; completionHandler: OpaqueCBlock); message 'seekToTime:toleranceBefore:toleranceAfter:completionHandler:'; { available in 10_7, 5_0 }
    procedure cancelPendingSeeks; message 'cancelPendingSeeks'; { available in 10_7, 5_0 }
    function currentDate: nullable NSDatePtr; message 'currentDate';
    function seekToDate (date: NSDate): boolean; message 'seekToDate:';
    function seekToDate_completionHandler (date: NSDate; completionHandler: OpaqueCBlock): boolean; message 'seekToDate:completionHandler:'; { available in 10_9, 6_0 }
    procedure stepByCount (stepCount: NSInteger); message 'stepByCount:';
    function timebase: CMTimebaseRef; message 'timebase';
  end;

type
  AVPlayerItemVisualPresentation = objccategory external (AVPlayerItem)
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor';
    procedure setSeekingWaitsForVideoCompositionRendering(newValue: boolean); message 'setSeekingWaitsForVideoCompositionRendering:';
    function seekingWaitsForVideoCompositionRendering: boolean; message 'seekingWaitsForVideoCompositionRendering';
    procedure setTextStyleRules(newValue: AVTextStyleRule *ProtocolPtr); message 'setTextStyleRules:';
    function textStyleRules: AVTextStyleRule *ProtocolPtr; message 'textStyleRules';
  end;

type
  AVPlayerItemAudioProcessing = objccategory external (AVPlayerItem)
    procedure setAudioTimePitchAlgorithm(newValue: NSString); message 'setAudioTimePitchAlgorithm:';
    function audioTimePitchAlgorithm: NSString; message 'audioTimePitchAlgorithm';
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
  end;

type
  AVPlayerItemPlayability = objccategory external (AVPlayerItem)
    function loadedTimeRanges: NSValue *ProtocolPtr; message 'loadedTimeRanges';
    function isPlaybackLikelyToKeepUp: boolean; message 'isPlaybackLikelyToKeepUp';
    function isPlaybackBufferFull: boolean; message 'isPlaybackBufferFull';
    function isPlaybackBufferEmpty: boolean; message 'isPlaybackBufferEmpty';
    procedure setCanUseNetworkResourcesForLiveStreamingWhilePaused(newValue: boolean); message 'setCanUseNetworkResourcesForLiveStreamingWhilePaused:';
    function canUseNetworkResourcesForLiveStreamingWhilePaused: boolean; message 'canUseNetworkResourcesForLiveStreamingWhilePaused';
    procedure setPreferredForwardBufferDuration(newValue: NSTimeInterval); message 'setPreferredForwardBufferDuration:';
    function preferredForwardBufferDuration: NSTimeInterval; message 'preferredForwardBufferDuration';
  end;

type
  AVPlayerItemBitRateControl = objccategory external (AVPlayerItem)
    procedure setPreferredPeakBitRate(newValue: double); message 'setPreferredPeakBitRate:';
    function preferredPeakBitRate: double; message 'preferredPeakBitRate';
  end;

type
  AVPlayerItemMediaSelection = objccategory external (AVPlayerItem)
    procedure selectMediaOption_inMediaSelectionGroup (mediaSelectionOption: nullable AVMediaSelectionOptionPtr; mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOption:inMediaSelectionGroup:'; { available in 10_8, 5_0 }
    procedure selectMediaOptionAutomaticallyInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOptionAutomaticallyInMediaSelectionGroup:'; { available in 10_9, 7_0 }
    function selectedMediaOptionInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): nullable AVMediaSelectionOptionPtr; message 'selectedMediaOptionInMediaSelectionGroup:'; { available in 10_8, 5_0 }
    function currentMediaSelection: AVMediaSelection; message 'currentMediaSelection';
  end;

type
  AVPlayerItemLogging = objccategory external (AVPlayerItem)
    function accessLog: nullable AVPlayerItemAccessLogPtr; message 'accessLog'; { available in 10_7, 4_3 }
    function errorLog: nullable AVPlayerItemErrorLogPtr; message 'errorLog'; { available in 10_7, 4_3 }
  end;

type
  AVPlayerItemOutputs = objccategory external (AVPlayerItem)
    procedure addOutput (output: AVPlayerItemOutput); message 'addOutput:'; { available in 10_8, 6_0 }
    procedure removeOutput (output: AVPlayerItemOutput); message 'removeOutput:'; { available in 10_8, 6_0 }
    function outputs: AVPlayerItemOutput *ProtocolPtr; message 'outputs';
  end;

type
  AVPlayerItemMediaDataCollectors = objccategory external (AVPlayerItem)
    procedure addMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'addMediaDataCollector:'; { available in 10_11_3, 9_3 }
    procedure removeMediaDataCollector (collector: AVPlayerItemMediaDataCollector); message 'removeMediaDataCollector:'; { available in 10_11_3, 9_3 }
    function mediaDataCollectors: AVPlayerItemMediaDataCollector *ProtocolPtr; message 'mediaDataCollectors';
  end;


type
  AVPlayerItemAccessLog = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemAccessLog: AVPlayerItemAccessLogInternal;
  public
    function extendedLogData: nullable NSDataPtr; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: AVPlayerItemAccessLogEvent *ProtocolPtr; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemErrorLog = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemErrorLog: AVPlayerItemErrorLogInternal;
  public
    function extendedLogData: nullable NSDataPtr; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: AVPlayerItemErrorLogEvent *ProtocolPtr; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemAccessLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemAccessLogEvent: AVPlayerItemAccessLogEventInternal;
  public
    function numberOfSegmentsDownloaded: NSInteger; message 'numberOfSegmentsDownloaded';
    function numberOfMediaRequests: NSInteger; message 'numberOfMediaRequests';
    function playbackStartDate: NSDate; message 'playbackStartDate';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function numberOfServerAddressChanges: NSInteger; message 'numberOfServerAddressChanges';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function playbackStartOffset: NSTimeInterval; message 'playbackStartOffset';
    function segmentsDownloadedDuration: NSTimeInterval; message 'segmentsDownloadedDuration';
    function durationWatched: NSTimeInterval; message 'durationWatched';
    function numberOfStalls: NSInteger; message 'numberOfStalls';
    function numberOfBytesTransferred: clonglong; message 'numberOfBytesTransferred';
    function transferDuration: NSTimeInterval; message 'transferDuration';
    function observedBitrate: double; message 'observedBitrate';
    function indicatedBitrate: double; message 'indicatedBitrate';
    function indicatedAverageBitrate: double; message 'indicatedAverageBitrate';
    function averageVideoBitrate: double; message 'averageVideoBitrate';
    function averageAudioBitrate: double; message 'averageAudioBitrate';
    function numberOfDroppedVideoFrames: NSInteger; message 'numberOfDroppedVideoFrames';
    function startupTime: NSTimeInterval; message 'startupTime';
    function downloadOverdue: NSInteger; message 'downloadOverdue';
    function observedMaxBitrate: double; message 'observedMaxBitrate';
    function observedMinBitrate: double; message 'observedMinBitrate';
    function observedBitrateStandardDeviation: double; message 'observedBitrateStandardDeviation';
    function playbackType: NSString; message 'playbackType';
    function mediaRequestsWWAN: NSInteger; message 'mediaRequestsWWAN';
    function switchBitrate: double; message 'switchBitrate';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVPlayerItemErrorLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  private
    _playerItemErrorLogEvent: AVPlayerItemErrorLogEventInternal;
  public
    function date: NSDate; message 'date';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function errorStatusCode: NSInteger; message 'errorStatusCode';
    function errorDomain: NSString; message 'errorDomain';
    function errorComment: NSString; message 'errorComment';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

