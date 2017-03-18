{ Parsed from Messages.framework MSStickerBrowserView.h }

{$ifdef TYPES}
type
  MSStickerBrowserViewPtr = ^MSStickerBrowserView;
{$endif}

{$ifdef TYPES}
type
  MSStickerSize = NSInteger;
  MSStickerSizePtr = ^MSStickerSize;

const
  MSStickerSizeSmall = 0;
  MSStickerSizeRegular = 1;
  MSStickerSizeLarge = 2;
{$endif}

{$ifdef CLASSES}

type
  MSStickerBrowserView = objcclass external (UIView)
  public
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFrame_stickerSize (frame: CGRect; stickerSize: MSStickerSize): instancetype; message 'initWithFrame:stickerSize:'; { NS_DESIGNATED_INITIALIZER }
    function stickerSize: MSStickerSize; message 'stickerSize';
    procedure setDataSource(newValue: MSStickerBrowserViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: MSStickerBrowserViewDataSourceProtocol; message 'dataSource';
    procedure setContentOffset(newValue: CGPoint); message 'setContentOffset:';
    function contentOffset: CGPoint; message 'contentOffset';
    procedure setContentInset(newValue: UIEdgeInsets); message 'setContentInset:';
    function contentInset: UIEdgeInsets; message 'contentInset';
    procedure setContentOffset_animated (contentOffset_: CGPoint; animated: boolean); message 'setContentOffset:animated:';
    procedure reloadData; message 'reloadData';
  end;
{$endif}

