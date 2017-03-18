{ Parsed from MediaPlayer.framework MPRemoteCommandEvent.h }

{$ifdef TYPES}
type
  MPRemoteCommandEventPtr = ^MPRemoteCommandEvent;
  MPSkipIntervalCommandEventPtr = ^MPSkipIntervalCommandEvent;
  MPSeekCommandEventPtr = ^MPSeekCommandEvent;
  MPRatingCommandEventPtr = ^MPRatingCommandEvent;
  MPChangePlaybackRateCommandEventPtr = ^MPChangePlaybackRateCommandEvent;
  MPFeedbackCommandEventPtr = ^MPFeedbackCommandEvent;
  MPChangeLanguageOptionCommandEventPtr = ^MPChangeLanguageOptionCommandEvent;
  MPChangePlaybackPositionCommandEventPtr = ^MPChangePlaybackPositionCommandEvent;
  MPChangeShuffleModeCommandEventPtr = ^MPChangeShuffleModeCommandEvent;
  MPChangeRepeatModeCommandEventPtr = ^MPChangeRepeatModeCommandEvent;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommandEvent = objcclass external (NSObject)
  public
    function command: MPRemoteCommand; message 'command';
    function timestamp_: NSTimeInterval; message 'timestamp';
  end;

type
  MPSkipIntervalCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function interval: NSTimeInterval; message 'interval';
  end;
{$endif}

{$ifdef TYPES}
type
  MPSeekCommandEventType = NSUInteger;
  MPSeekCommandEventTypePtr = ^MPSeekCommandEventType;

const
  MPSeekCommandEventTypeBeginSeeking = 0;
  MPSeekCommandEventTypeEndSeeking = 1;
{$endif}

{$ifdef CLASSES}

type
  MPSeekCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function type_: MPSeekCommandEventType; message 'type';
  end;

type
  MPRatingCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function rating: single; message 'rating';
  end;

type
  MPChangePlaybackRateCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function playbackRate: single; message 'playbackRate';
  end;

type
  MPFeedbackCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function isNegative: boolean; message 'isNegative';
  end;

type
  MPChangeLanguageOptionCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function languageOption: MPNowPlayingInfoLanguageOption; message 'languageOption';
    function setting: MPChangeLanguageOptionSetting; message 'setting';
  end;

type
  MPChangePlaybackPositionCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function positionTime: NSTimeInterval; message 'positionTime';
  end;

type
  MPChangeShuffleModeCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function shuffleType: MPShuffleType; message 'shuffleType';
    function preservesShuffleMode: boolean; message 'preservesShuffleMode';
  end;

type
  MPChangeRepeatModeCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function repeatType: MPRepeatType; message 'repeatType';
    function preservesRepeatMode: boolean; message 'preservesRepeatMode';
  end;
{$endif}

