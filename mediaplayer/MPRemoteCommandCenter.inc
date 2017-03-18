{ Parsed from MediaPlayer.framework MPRemoteCommandCenter.h }

{$ifdef TYPES}
type
  MPRemoteCommandCenterPtr = ^MPRemoteCommandCenter;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommandCenter = objcclass external (NSObject)
  public
    function pauseCommand: MPRemoteCommand; message 'pauseCommand';
    function playCommand: MPRemoteCommand; message 'playCommand';
    function stopCommand: MPRemoteCommand; message 'stopCommand';
    function togglePlayPauseCommand: MPRemoteCommand; message 'togglePlayPauseCommand';
    function enableLanguageOptionCommand: MPRemoteCommand; message 'enableLanguageOptionCommand';
    function disableLanguageOptionCommand: MPRemoteCommand; message 'disableLanguageOptionCommand';
    function changePlaybackRateCommand: MPChangePlaybackRateCommand; message 'changePlaybackRateCommand';
    function changeRepeatModeCommand: MPChangeRepeatModeCommand; message 'changeRepeatModeCommand';
    function changeShuffleModeCommand: MPChangeShuffleModeCommand; message 'changeShuffleModeCommand';
    function nextTrackCommand: MPRemoteCommand; message 'nextTrackCommand';
    function previousTrackCommand: MPRemoteCommand; message 'previousTrackCommand';
    function skipForwardCommand: MPSkipIntervalCommand; message 'skipForwardCommand';
    function skipBackwardCommand: MPSkipIntervalCommand; message 'skipBackwardCommand';
    function seekForwardCommand: MPRemoteCommand; message 'seekForwardCommand';
    function seekBackwardCommand: MPRemoteCommand; message 'seekBackwardCommand';
    function changePlaybackPositionCommand: MPChangePlaybackPositionCommand; message 'changePlaybackPositionCommand';
    function ratingCommand: MPRatingCommand; message 'ratingCommand';
    function likeCommand: MPFeedbackCommand; message 'likeCommand';
    function dislikeCommand: MPFeedbackCommand; message 'dislikeCommand';
    function bookmarkCommand: MPFeedbackCommand; message 'bookmarkCommand';
    class function sharedCommandCenter: MPRemoteCommandCenter; message 'sharedCommandCenter';
    function init: id; message 'init';
  end;
{$endif}

