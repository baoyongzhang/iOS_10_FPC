{ Parsed from UIKit.framework UIDocumentMenuViewController.h }

{$ifdef TYPES}
type
  UIDocumentMenuViewControllerPtr = ^UIDocumentMenuViewController;
  UIDocumentMenuDelegateProtocolPtr = ^UIDocumentMenuDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIDocumentMenuOrder = NSUInteger;
  UIDocumentMenuOrderPtr = ^UIDocumentMenuOrder;

const
  UIDocumentMenuOrderFirst = 0;
  UIDocumentMenuOrderLast = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDocumentMenuDelegateProtocol = objcprotocol external name 'UIDocumentMenuDelegate' (NSObjectProtocol)
    procedure documentMenu_didPickDocumentPicker (documentMenu: UIDocumentMenuViewController; documentPicker: UIDocumentPickerViewController); message 'documentMenu:didPickDocumentPicker:';
  optional
    procedure documentMenuWasCancelled (documentMenu: UIDocumentMenuViewController); message 'documentMenuWasCancelled:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentMenuViewController = objcclass external (UIViewController)
  public
    function initWithDocumentTypes_inMode (allowedUTIs: NSString *ProtocolPtr; mode: UIDocumentPickerMode): instancetype; message 'initWithDocumentTypes:inMode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL_inMode (url: NSURL; mode: UIDocumentPickerMode): instancetype; message 'initWithURL:inMode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure addOptionWithTitle_image_order_handler (title_: NSString; image: nullable UIImagePtr; order: UIDocumentMenuOrder; handler: OpaqueCBlock); message 'addOptionWithTitle:image:order:handler:';
    procedure setDelegate(newValue: UIDocumentMenuDelegateProtocol); message 'setDelegate:';
    function delegate: UIDocumentMenuDelegateProtocol; message 'delegate';
  end;
{$endif}

