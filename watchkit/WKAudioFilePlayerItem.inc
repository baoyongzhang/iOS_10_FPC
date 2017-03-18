{ Parsed from WatchKit.framework WKAudioFilePlayerItem.h }

{$ifdef TYPES}
type
  WKAudioFilePlayerItemPtr = ^WKAudioFilePlayerItem;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WKAudioFilePlayerItemTimeJumpedNotification: NSString { available in 2.0 }; cvar; external;
  WKAudioFilePlayerItemDidPlayToEndTimeNotification: NSString { available in 2.0 }; cvar; external;
  WKAudioFilePlayerItemFailedToPlayToEndTimeNotification: NSString { available in 2.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WKAudioFilePlayerItemStatus = NSInteger;
  WKAudioFilePlayerItemStatusPtr = ^WKAudioFilePlayerItemStatus;

const
  WKAudioFilePlayerItemStatusUnknown = 0;
  WKAudioFilePlayerItemStatusReadyToPlay = 1;
  WKAudioFilePlayerItemStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  WKAudioFilePlayerItem = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    class function playerItemWithAsset (asset: WKAudioFileAsset): WKAudioFilePlayerItem; message 'playerItemWithAsset:';
    function asset: WKAudioFileAsset; message 'asset';
    function status: WKAudioFilePlayerItemStatus; message 'status';
    function error: NSError; message 'error';
    function currentTime: NSTimeInterval; message 'currentTime';
  end;
{$endif}

