{ Parsed from AVFoundation.framework AVPlayer.h }

{ Types from AVPlayerPlaybackControl }
{$ifdef TYPES}

type
  AVPlayerTimeControlStatus = NSInteger;
type
  AVPlayerTimeControlStatusPtr = ^AVPlayerTimeControlStatus;

const
  AVPlayerTimeControlStatusPaused = 0;
  AVPlayerTimeControlStatusWaitingToPlayAtSpecifiedRate = 1;
  AVPlayerTimeControlStatusPlaying = 2;
{$endif}


{ Types from AVPlayerItemControl }
{$ifdef TYPES}

type
  AVPlayerActionAtItemEnd = NSInteger;
type
  AVPlayerActionAtItemEndPtr = ^AVPlayerActionAtItemEnd;

const
  AVPlayerActionAtItemEndAdvance = 0;
  AVPlayerActionAtItemEndPause = 1;
  AVPlayerActionAtItemEndNone = 2;
{$endif}


{$ifdef TYPES}
type
  AVPlayerPtr = ^AVPlayer;
  AVQueuePlayerPtr = ^AVQueuePlayer;
{$endif}

{$ifdef TYPES}
type
  AVPlayerStatus = NSInteger;
  AVPlayerStatusPtr = ^AVPlayerStatus;

const
  AVPlayerStatusUnknown = 0;
  AVPlayerStatusReadyToPlay = 1;
  AVPlayerStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  AVPlayer = objcclass external (NSObject)
  private
    _player: AVPlayerInternal;
  public
    class function playerWithURL (URL: NSURL): instancetype; message 'playerWithURL:';
    class function playerWithPlayerItem (item: nullable AVPlayerItemPtr): instancetype; message 'playerWithPlayerItem:';
    function initWithURL (URL: NSURL): instancetype; message 'initWithURL:';
    function initWithPlayerItem (item: nullable AVPlayerItemPtr): instancetype; message 'initWithPlayerItem:';
    function status: AVPlayerStatus; message 'status';
    function error: NSError; message 'error';
  end;


type
  AVPlayerPlaybackControl = objccategory external (AVPlayer)
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure play; message 'play';
    procedure pause; message 'pause';
    function timeControlStatus: AVPlayerTimeControlStatus; message 'timeControlStatus';
    function reasonForWaitingToPlay: NSString; message 'reasonForWaitingToPlay';
    procedure playImmediatelyAtRate (rate_: single); message 'playImmediatelyAtRate:'; { available in 10_12, 10_0 }
  end;

type
  AVPlayerItemControl = objccategory external (AVPlayer)
    function currentItem: AVPlayerItem; message 'currentItem';
    procedure replaceCurrentItemWithPlayerItem (item: nullable AVPlayerItemPtr); message 'replaceCurrentItemWithPlayerItem:';
    procedure setActionAtItemEnd(newValue: AVPlayerActionAtItemEnd); message 'setActionAtItemEnd:';
    function actionAtItemEnd: AVPlayerActionAtItemEnd; message 'actionAtItemEnd';
  end;

type
  AVPlayerTimeControl = objccategory external (AVPlayer)
    function currentTime: CMTime; message 'currentTime';
    procedure seekToDate (date: NSDate); message 'seekToDate:';
    procedure seekToDate_completionHandler (date: NSDate; completionHandler: OpaqueCBlock); message 'seekToDate:completionHandler:'; { available in 10_7, 5_0 }
    procedure seekToTime (time: CMTime); message 'seekToTime:';
    procedure seekToTime_toleranceBefore_toleranceAfter (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime); message 'seekToTime:toleranceBefore:toleranceAfter:';
    procedure seekToTime_completionHandler (time: CMTime; completionHandler: OpaqueCBlock); message 'seekToTime:completionHandler:'; { available in 10_7, 5_0 }
    procedure seekToTime_toleranceBefore_toleranceAfter_completionHandler (time: CMTime; toleranceBefore: CMTime; toleranceAfter: CMTime; completionHandler: OpaqueCBlock); message 'seekToTime:toleranceBefore:toleranceAfter:completionHandler:'; { available in 10_7, 5_0 }
  end;

type
  AVPlayerAdvancedRateControl = objccategory external (AVPlayer)
    procedure setAutomaticallyWaitsToMinimizeStalling(newValue: boolean); message 'setAutomaticallyWaitsToMinimizeStalling:';
    function automaticallyWaitsToMinimizeStalling: boolean; message 'automaticallyWaitsToMinimizeStalling';
    procedure setRate_time_atHostTime (rate: single; itemTime: CMTime; hostClockTime: CMTime); message 'setRate:time:atHostTime:'; { available in 10_8, 6_0 }
    procedure prerollAtRate_completionHandler (rate: single; completionHandler: OpaqueCBlock); message 'prerollAtRate:completionHandler:'; { available in 10_8, 6_0 }
    procedure cancelPendingPrerolls; message 'cancelPendingPrerolls'; { available in 10_8, 6_0 }
    procedure setMasterClock(newValue: CMClockRef); message 'setMasterClock:';
    function masterClock: CMClockRef; message 'masterClock';
  end;

type
  AVPlayerTimeObservation = objccategory external (AVPlayer)
    function addPeriodicTimeObserverForInterval_queue_usingBlock (interval: CMTime; queue: nullable dispatch_queue_t; block: OpaqueCBlock): id; message 'addPeriodicTimeObserverForInterval:queue:usingBlock:';
    function addBoundaryTimeObserverForTimes_queue_usingBlock (times: NSValue *ProtocolPtr; queue: nullable dispatch_queue_t; block: OpaqueCBlock): id; message 'addBoundaryTimeObserverForTimes:queue:usingBlock:';
    procedure removeTimeObserver (observer: id); message 'removeTimeObserver:';
  end;

type
  AVPlayerMediaControl = objccategory external (AVPlayer)
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setMuted(newValue: boolean); message 'setMuted:';
    function isMuted: boolean; message 'isMuted';
    procedure setClosedCaptionDisplayEnabled(newValue: boolean); message 'setClosedCaptionDisplayEnabled:';
    function isClosedCaptionDisplayEnabled: boolean; message 'isClosedCaptionDisplayEnabled';
  end;

type
  AVPlayerAutomaticMediaSelection = objccategory external (AVPlayer)
    procedure setAppliesMediaSelectionCriteriaAutomatically(newValue: boolean); message 'setAppliesMediaSelectionCriteriaAutomatically:';
    function appliesMediaSelectionCriteriaAutomatically: boolean; message 'appliesMediaSelectionCriteriaAutomatically';
    procedure setMediaSelectionCriteria_forMediaCharacteristic (criteria: nullable AVPlayerMediaSelectionCriteriaPtr; mediaCharacteristic: NSString); message 'setMediaSelectionCriteria:forMediaCharacteristic:'; { available in 10_9, 7_0 }
    function mediaSelectionCriteriaForMediaCharacteristic (mediaCharacteristic: NSString): nullable AVPlayerMediaSelectionCriteriaPtr; message 'mediaSelectionCriteriaForMediaCharacteristic:'; { available in 10_9, 7_0 }
  end;

type
  AVPlayerAudioDeviceSupport = objccategory external (AVPlayer)
    procedure setAudioOutputDeviceUniqueID(newValue: NSString); message 'setAudioOutputDeviceUniqueID:';
    function audioOutputDeviceUniqueID: NSString; message 'audioOutputDeviceUniqueID';
  end;

type
  AVPlayerExternalPlaybackSupport = objccategory external (AVPlayer)
    procedure setAllowsExternalPlayback(newValue: boolean); message 'setAllowsExternalPlayback:';
    function allowsExternalPlayback: boolean; message 'allowsExternalPlayback';
    function isExternalPlaybackActive: boolean; message 'isExternalPlaybackActive';
    procedure setUsesExternalPlaybackWhileExternalScreenIsActive(newValue: boolean); message 'setUsesExternalPlaybackWhileExternalScreenIsActive:';
    function usesExternalPlaybackWhileExternalScreenIsActive: boolean; message 'usesExternalPlaybackWhileExternalScreenIsActive';
    procedure setExternalPlaybackVideoGravity(newValue: NSString); message 'setExternalPlaybackVideoGravity:';
    function externalPlaybackVideoGravity: NSString; message 'externalPlaybackVideoGravity';
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVPlayerAirPlaySupport = objccategory external (AVPlayer)
    procedure setAllowsAirPlayVideo(newValue: boolean); message 'setAllowsAirPlayVideo:';
    function allowsAirPlayVideo: boolean; message 'allowsAirPlayVideo';
    function isAirPlayVideoActive: boolean; message 'isAirPlayVideoActive';
    procedure setUsesAirPlayVideoWhileAirPlayScreenIsActive(newValue: boolean); message 'setUsesAirPlayVideoWhileAirPlayScreenIsActive:';
    function usesAirPlayVideoWhileAirPlayScreenIsActive: boolean; message 'usesAirPlayVideoWhileAirPlayScreenIsActive';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVPlayerProtectedContent = objccategory external (AVPlayer)
    function outputObscuredDueToInsufficientExternalProtection: boolean; message 'outputObscuredDueToInsufficientExternalProtection';
  end;


type
  AVQueuePlayer = objcclass external (AVPlayer)
  private
    _queuePlayer: AVQueuePlayerInternal;
  public
    class function queuePlayerWithItems (items: AVPlayerItem *ProtocolPtr): instancetype; message 'queuePlayerWithItems:';
    function initWithItems (items: AVPlayerItem *ProtocolPtr): AVQueuePlayer; message 'initWithItems:';
    function items: AVPlayerItem *ProtocolPtr; message 'items';
    procedure advanceToNextItem; message 'advanceToNextItem';
    function canInsertItem_afterItem (item: AVPlayerItem; afterItem: nullable AVPlayerItemPtr): boolean; message 'canInsertItem:afterItem:';
    procedure insertItem_afterItem (item: AVPlayerItem; afterItem: nullable AVPlayerItemPtr); message 'insertItem:afterItem:';
    procedure removeItem (item: AVPlayerItem); message 'removeItem:';
    procedure removeAllItems; message 'removeAllItems';
  end;
{$endif}

