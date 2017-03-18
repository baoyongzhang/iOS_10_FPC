{ Parsed from IAd.framework AVPlayerViewController_iAdPreroll.h }
{$ifdef CLASSES}

type
  iAdPreroll = objccategory external (AVPlayerViewController)
    class procedure preparePrerollAds; message 'preparePrerollAds'; { available in 8_0 }
    procedure playPrerollAdWithCompletionHandler (completionHandler: OpaqueCBlock); message 'playPrerollAdWithCompletionHandler:'; { available in 8_0 }
    procedure cancelPreroll; message 'cancelPreroll'; { available in 8_0 }
  end;
{$endif}

