{ Parsed from AVFoundation.framework AVPlayerItemTrack.h }

{ Types from AVPlayerItemTrack }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVPlayerItemTrackPtr = ^AVPlayerItemTrack;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerItemTrack = objcclass external (NSObject)
  private
    _playerItemTrack: AVPlayerItemTrackInternal;
  public
    function assetTrack: AVAssetTrack; message 'assetTrack';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function currentVideoFrameRate: single; message 'currentVideoFrameRate';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure setVideoFieldMode(newValue: NSString); message 'setVideoFieldMode:';
    function videoFieldMode: NSString; message 'videoFieldMode';
    {$endif}
  end;
{$endif}

