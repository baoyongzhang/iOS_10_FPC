{ Parsed from WatchKit.framework WKAudioFilePlayer.h }

{$ifdef TYPES}
type
  WKAudioFilePlayerPtr = ^WKAudioFilePlayer;
  WKAudioFileQueuePlayerPtr = ^WKAudioFileQueuePlayer;
{$endif}

{$ifdef TYPES}
type
  WKAudioFilePlayerStatus = NSInteger;
  WKAudioFilePlayerStatusPtr = ^WKAudioFilePlayerStatus;

const
  WKAudioFilePlayerStatusUnknown = 0;
  WKAudioFilePlayerStatusReadyToPlay = 1;
  WKAudioFilePlayerStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  WKAudioFilePlayer = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    class function playerWithPlayerItem (item: WKAudioFilePlayerItem): instancetype; message 'playerWithPlayerItem:';
    procedure play; message 'play';
    procedure pause; message 'pause';
    procedure replaceCurrentItemWithPlayerItem (item: nullable WKAudioFilePlayerItemPtr); message 'replaceCurrentItemWithPlayerItem:';
    function currentItem: WKAudioFilePlayerItem; message 'currentItem';
    function status: WKAudioFilePlayerStatus; message 'status';
    function error: NSError; message 'error';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    function currentTime: NSTimeInterval; message 'currentTime';
  end;

type
  WKAudioFileQueuePlayer = objcclass external (WKAudioFilePlayer)
  public
    class function queuePlayerWithItems (items: WKAudioFilePlayerItem *ProtocolPtr): instancetype; message 'queuePlayerWithItems:';
    procedure advanceToNextItem; message 'advanceToNextItem';
    procedure appendItem (item: WKAudioFilePlayerItem); message 'appendItem:';
    procedure removeItem (item: WKAudioFilePlayerItem); message 'removeItem:';
    procedure removeAllItems; message 'removeAllItems';
    function items: WKAudioFilePlayerItem *ProtocolPtr; message 'items';
  end;
{$endif}

