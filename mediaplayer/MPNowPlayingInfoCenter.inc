{ Parsed from MediaPlayer.framework MPNowPlayingInfoCenter.h }

{$ifdef TYPES}
type
  MPNowPlayingInfoCenterPtr = ^MPNowPlayingInfoCenter;
{$endif}

{$ifdef TYPES}
type
  MPNowPlayingInfoMediaType = NSUInteger;
  MPNowPlayingInfoMediaTypePtr = ^MPNowPlayingInfoMediaType;

const
  MPNowPlayingInfoMediaTypeNone = 0;
  MPNowPlayingInfoMediaTypeAudio = 1;
  MPNowPlayingInfoMediaTypeVideo = 2;

type
  MPNowPlayingPlaybackState = NSUInteger;
  MPNowPlayingPlaybackStatePtr = ^MPNowPlayingPlaybackState;

const
  MPNowPlayingPlaybackStateUnknown = 0;
  MPNowPlayingPlaybackStatePlaying = 1;
  MPNowPlayingPlaybackStatePaused = 2;
  MPNowPlayingPlaybackStateStopped = 3;
  MPNowPlayingPlaybackStateInterrupted = 4;
{$endif}

{$ifdef CLASSES}

type
  MPNowPlayingInfoCenter = objcclass external (NSObject)
  public
    class function defaultCenter: MPNowPlayingInfoCenter; message 'defaultCenter';
    procedure setNowPlayingInfo(newValue: NSDictionary); message 'setNowPlayingInfo:';
    function nowPlayingInfo: NSDictionary; message 'nowPlayingInfo';
    procedure setPlaybackState(newValue: MPNowPlayingPlaybackState); message 'setPlaybackState:';
    function playbackState: MPNowPlayingPlaybackState; message 'playbackState';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPNowPlayingInfoPropertyElapsedPlaybackTime: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackRate: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyDefaultPlaybackRate: NSString { available in 10_12_2, 8_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackQueueIndex: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackQueueCount: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyChapterNumber: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyChapterCount: NSString { available in 10_12_2, 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyIsLiveStream: NSString { available in 10_12_2, 10_0 }; cvar; external;
  MPNowPlayingInfoPropertyAvailableLanguageOptions: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPNowPlayingInfoPropertyCurrentLanguageOptions: NSString { available in 10_12_2, 9_0 }; cvar; external;
  MPNowPlayingInfoCollectionIdentifier: NSString { available in 10_12_2, 9_3 }; cvar; external;
  MPNowPlayingInfoPropertyExternalContentIdentifier: NSString { available in 10_12_2, 10_0 }; cvar; external;
  MPNowPlayingInfoPropertyExternalUserProfileIdentifier: NSString { available in 10_12_2, 10_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackProgress: NSString { available in 10_12_2, 10_0 }; cvar; external;
  MPNowPlayingInfoPropertyMediaType: NSString { available in 10_12_2, 10_0 }; cvar; external;
{$endif}

