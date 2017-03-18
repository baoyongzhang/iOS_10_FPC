{ Parsed from AVFoundation.framework AVPlayerLooper.h }

{$ifdef TYPES}
type
  AVPlayerLooperPtr = ^AVPlayerLooper;
{$endif}

{$ifdef TYPES}
type
  AVPlayerLooperStatus = NSInteger;
  AVPlayerLooperStatusPtr = ^AVPlayerLooperStatus;

const
  AVPlayerLooperStatusUnknown = 0;
  AVPlayerLooperStatusReady = 1;
  AVPlayerLooperStatusFailed = 2;
  AVPlayerLooperStatusCancelled = 3;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerLooper = objcclass external (NSObject)
  private
    _looper: AVPlayerLooperInternal;
  public
    class function playerLooperWithPlayer_templateItem_timeRange (player: AVQueuePlayer; itemToLoop: AVPlayerItem; loopRange: CMTimeRange): instancetype; message 'playerLooperWithPlayer:templateItem:timeRange:';
    class function playerLooperWithPlayer_templateItem (player: AVQueuePlayer; itemToLoop: AVPlayerItem): instancetype; message 'playerLooperWithPlayer:templateItem:';
    function initWithPlayer_templateItem_timeRange (player: AVQueuePlayer; itemToLoop: AVPlayerItem; loopRange: CMTimeRange): instancetype; message 'initWithPlayer:templateItem:timeRange:'; { NS_DESIGNATED_INITIALIZER }
    function status: AVPlayerLooperStatus; message 'status';
    function error: NSError; message 'error';
    procedure disableLooping; message 'disableLooping';
    function loopCount: NSInteger; message 'loopCount';
    function loopingPlayerItems: AVPlayerItem *ProtocolPtr; message 'loopingPlayerItems';
  end;
{$endif}

