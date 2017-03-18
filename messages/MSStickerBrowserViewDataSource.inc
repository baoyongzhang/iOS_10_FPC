{ Parsed from Messages.framework MSStickerBrowserViewDataSource.h }

{$ifdef TYPES}
type
  MSStickerBrowserViewDataSourceProtocolPtr = ^MSStickerBrowserViewDataSourceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MSStickerBrowserViewDataSourceProtocol = objcprotocol external name 'MSStickerBrowserViewDataSource' (NSObjectProtocol)
    function numberOfStickersInStickerBrowserView (stickerBrowserView: MSStickerBrowserView): NSInteger; message 'numberOfStickersInStickerBrowserView:';
    function stickerBrowserView_stickerAtIndex (stickerBrowserView: MSStickerBrowserView; index: NSInteger): MSSticker; message 'stickerBrowserView:stickerAtIndex:';
  end;
{$endif}

