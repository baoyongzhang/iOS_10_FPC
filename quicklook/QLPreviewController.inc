{ Parsed from QuickLook.framework QLPreviewController.h }

{$ifdef TYPES}
type
  QLPreviewControllerPtr = ^QLPreviewController;
  QLPreviewControllerDataSourceProtocolPtr = ^QLPreviewControllerDataSourceProtocol;
  QLPreviewControllerDelegateProtocolPtr = ^QLPreviewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewController = objcclass external (UIViewController)
  public
    class function canPreviewItem (item: QLPreviewItemProtocol): boolean; message 'canPreviewItem:';
    procedure setDataSource(newValue: QLPreviewControllerDataSourceProtocol); message 'setDataSource:';
    function dataSource: QLPreviewControllerDataSourceProtocol; message 'dataSource';
    procedure reloadData; message 'reloadData';
    procedure refreshCurrentPreviewItem; message 'refreshCurrentPreviewItem';
    procedure setCurrentPreviewItemIndex(newValue: NSInteger); message 'setCurrentPreviewItemIndex:';
    function currentPreviewItemIndex: NSInteger; message 'currentPreviewItemIndex';
    function currentPreviewItem: QLPreviewItemProtocol; message 'currentPreviewItem';
    procedure setDelegate(newValue: QLPreviewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: QLPreviewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewControllerDataSourceProtocol = objcprotocol external name 'QLPreviewControllerDataSource'
  required
    function numberOfPreviewItemsInPreviewController (controller: QLPreviewController): NSInteger; message 'numberOfPreviewItemsInPreviewController:';
    function previewController_previewItemAtIndex (controller: QLPreviewController; index: NSInteger): QLPreviewItemProtocol; message 'previewController:previewItemAtIndex:';
  end;

type
  QLPreviewControllerDelegateProtocol = objcprotocol external name 'QLPreviewControllerDelegate' (NSObjectProtocol)
  optional
    procedure previewControllerWillDismiss (controller: QLPreviewController); message 'previewControllerWillDismiss:';
    procedure previewControllerDidDismiss (controller: QLPreviewController); message 'previewControllerDidDismiss:';
    function previewController_shouldOpenURL_forPreviewItem (controller: QLPreviewController; url: NSURL; item: QLPreviewItemProtocol): boolean; message 'previewController:shouldOpenURL:forPreviewItem:';
    function previewController_frameForPreviewItem_inSourceView (controller: QLPreviewController; item: QLPreviewItemProtocol; view: UIView * _Nullable * __nonnull): CGRect; message 'previewController:frameForPreviewItem:inSourceView:';
    function previewController_transitionImageForPreviewItem_contentRect (controller: QLPreviewController; item: QLPreviewItemProtocol; contentRect: CGRectPtr): UIImage; message 'previewController:transitionImageForPreviewItem:contentRect:';
    function previewController_transitionViewForPreviewItem (controller: QLPreviewController; item: QLPreviewItemProtocol): UIView* _Nullable; message 'previewController:transitionViewForPreviewItem:'; { available in 10_0 }
  end;
{$endif}

