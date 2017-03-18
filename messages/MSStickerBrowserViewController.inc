{ Parsed from Messages.framework MSStickerBrowserViewController.h }

{$ifdef TYPES}
type
  MSStickerBrowserViewControllerPtr = ^MSStickerBrowserViewController;
{$endif}

{$ifdef CLASSES}

type
  MSStickerBrowserViewController = objcclass external (UIViewController, MSStickerBrowserViewDataSourceProtocol)
  public
    function initWithStickerSize (stickerSize: MSStickerSize): instancetype; message 'initWithStickerSize:'; { NS_DESIGNATED_INITIALIZER }
    function stickerBrowserView: MSStickerBrowserView; message 'stickerBrowserView';
    function stickerSize: MSStickerSize; message 'stickerSize';

    { Adopted protocols }
    function numberOfStickersInStickerBrowserView (stickerBrowserView: MSStickerBrowserView): NSInteger; message 'numberOfStickersInStickerBrowserView:';
    function stickerBrowserView_stickerAtIndex (stickerBrowserView: MSStickerBrowserView; index: NSInteger): MSSticker; message 'stickerBrowserView:stickerAtIndex:';
  end;
{$endif}

