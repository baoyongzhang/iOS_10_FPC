{ Parsed from MediaPlayer.framework MPMusicPlayerController.h }

{$ifdef TYPES}
type
  MPMusicPlayerControllerPtr = ^MPMusicPlayerController;
{$endif}

{$ifdef TYPES}
type
  MPMusicPlaybackState = NSInteger;
  MPMusicPlaybackStatePtr = ^MPMusicPlaybackState;

const
  MPMusicPlaybackStateStopped = 0;
  MPMusicPlaybackStatePlaying = 1;
  MPMusicPlaybackStatePaused = 2;
  MPMusicPlaybackStateInterrupted = 3;
  MPMusicPlaybackStateSeekingForward = 4;
  MPMusicPlaybackStateSeekingBackward = 5;

type
  MPMusicRepeatMode = NSInteger;
  MPMusicRepeatModePtr = ^MPMusicRepeatMode;

const
  MPMusicRepeatModeDefault = 0;
  MPMusicRepeatModeNone = 1;
  MPMusicRepeatModeOne = 2;
  MPMusicRepeatModeAll = 3;

type
  MPMusicShuffleMode = NSInteger;
  MPMusicShuffleModePtr = ^MPMusicShuffleMode;

const
  MPMusicShuffleModeDefault = 0;
  MPMusicShuffleModeOff = 1;
  MPMusicShuffleModeSongs = 2;
  MPMusicShuffleModeAlbums = 3;
{$endif}

{$ifdef CLASSES}

type
  MPMusicPlayerController = objcclass external (NSObject, MPMediaPlaybackProtocol)
  public
    class function applicationMusicPlayer: MPMusicPlayerController; message 'applicationMusicPlayer';
    class function systemMusicPlayer: MPMusicPlayerController; message 'systemMusicPlayer';
    class function iPodMusicPlayer: MPMusicPlayerController; message 'iPodMusicPlayer'; deprecated 'in 3_0, 8_0, "Use +systemMusicPlayer instead."';

    { Adopted protocols }
    procedure beginSeekingBackward; message 'beginSeekingBackward';
    procedure beginSeekingForward; message 'beginSeekingForward';
    procedure setCurrentPlaybackRate(newValue: single); message 'setCurrentPlaybackRate:';
    function currentPlaybackRate: single; message 'currentPlaybackRate';
    procedure setCurrentPlaybackTime(newValue: NSTimeInterval); message 'setCurrentPlaybackTime:';
    function currentPlaybackTime: NSTimeInterval; message 'currentPlaybackTime';
    procedure endSeeking; message 'endSeeking';
    function isPreparedToPlay: boolean; message 'isPreparedToPlay';
    procedure pause; message 'pause';
    procedure play; message 'play';
    procedure prepareToPlay; message 'prepareToPlay';
    procedure stop; message 'stop';
  end;


type
  MPPlaybackControl = objccategory external (MPMusicPlayerController)
    function playbackState: MPMusicPlaybackState; message 'playbackState';
    procedure setRepeatMode(newValue: MPMusicRepeatMode); message 'setRepeatMode:';
    function repeatMode: MPMusicRepeatMode; message 'repeatMode';
    procedure setShuffleMode(newValue: MPMusicShuffleMode); message 'setShuffleMode:';
    function shuffleMode: MPMusicShuffleMode; message 'shuffleMode';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setNowPlayingItem(newValue: MPMediaItem); message 'setNowPlayingItem:';
    function nowPlayingItem: MPMediaItem; message 'nowPlayingItem';
    function indexOfNowPlayingItem: NSUInteger; message 'indexOfNowPlayingItem';
    procedure setQueueWithQuery (query: MPMediaQuery); message 'setQueueWithQuery:';
    procedure setQueueWithItemCollection (itemCollection: MPMediaItemCollection); message 'setQueueWithItemCollection:';
    procedure setQueueWithStoreIDs (storeIDs: NSString *ProtocolPtr); message 'setQueueWithStoreIDs:'; { available in 9_3 }
    procedure setQueueWithDescriptor (descriptor: MPMusicPlayerQueueDescriptor); message 'setQueueWithDescriptor:'; { available in 10_1 }
    procedure prepareToPlayWithCompletionHandler (completionHandler: OpaqueCBlock); message 'prepareToPlayWithCompletionHandler:'; { available in 10_1 }
    procedure skipToNextItem; message 'skipToNextItem';
    procedure skipToBeginning; message 'skipToBeginning';
    procedure skipToPreviousItem; message 'skipToPreviousItem';
    procedure beginGeneratingPlaybackNotifications; message 'beginGeneratingPlaybackNotifications';
    procedure endGeneratingPlaybackNotifications; message 'endGeneratingPlaybackNotifications';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMusicPlayerControllerPlaybackStateDidChangeNotification: __TVOS_PROHIBITED NSStringPtr; cvar; external;
  MPMusicPlayerControllerNowPlayingItemDidChangeNotification: __TVOS_PROHIBITED NSStringPtr; cvar; external;
  MPMusicPlayerControllerVolumeDidChangeNotification: __TVOS_PROHIBITED NSStringPtr; cvar; external;
{$endif}

