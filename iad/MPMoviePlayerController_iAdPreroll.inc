{ Parsed from IAd.framework MPMoviePlayerController_iAdPreroll.h }

{$if defined(TARGET_OS_IOS) and defined(TARGET_OS_EMBEDDED)}
{$ifdef CLASSES}

type
  MPMoviePlayerController_iAdPreroll = objccategory external name 'iAdPreroll' (MPMoviePlayerController)
    class procedure preparePrerollAds; message 'preparePrerollAds'; { available in 7_0 }
    procedure playPrerollAdWithCompletionHandler (completionHandler: OpaqueCBlock); message 'playPrerollAdWithCompletionHandler:'; { available in 7_0 }
    procedure cancelPreroll; message 'cancelPreroll'; { available in 8_0 }
  end;
{$endif}

{$endif}
