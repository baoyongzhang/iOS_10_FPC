{ Parsed from MediaPlayer.framework AVFoundation+MPNowPlayingInfoLanguageOptionAdditions.h }
{$ifdef CLASSES}

type
  AVMediaSelectionOption_MPNowPlayingInfoLanguageOptionAdditions = objccategory external name 'MPNowPlayingInfoLanguageOptionAdditions' (AVMediaSelectionOption)
    function makeNowPlayingInfoLanguageOption: nullable MPNowPlayingInfoLanguageOptionPtr; message 'makeNowPlayingInfoLanguageOption';
  end;

type
  MPNowPlayingInfoLanguageOptionAdditions = objccategory external (AVMediaSelectionGroup)
    function makeNowPlayingInfoLanguageOptionGroup: MPNowPlayingInfoLanguageOptionGroup; message 'makeNowPlayingInfoLanguageOptionGroup';
  end;
{$endif}

