{ Parsed from UIKit.framework UIDocumentPickerViewController.h }

{$ifdef TYPES}
type
  UIDocumentPickerViewControllerPtr = ^UIDocumentPickerViewController;
  UIDocumentPickerDelegateProtocolPtr = ^UIDocumentPickerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDocumentPickerDelegateProtocol = objcprotocol external name 'UIDocumentPickerDelegate' (NSObjectProtocol)
    procedure documentPicker_didPickDocumentAtURL (controller: UIDocumentPickerViewController; url: NSURL); message 'documentPicker:didPickDocumentAtURL:';
  optional
    procedure documentPickerWasCancelled (controller: UIDocumentPickerViewController); message 'documentPickerWasCancelled:';
  end;
{$endif}

{$ifdef TYPES}
type
  UIDocumentPickerMode = NSUInteger;
  UIDocumentPickerModePtr = ^UIDocumentPickerMode;

const
  UIDocumentPickerModeImport = 0;
  UIDocumentPickerModeOpen = 1;
  UIDocumentPickerModeExportToService = 2;
  UIDocumentPickerModeMoveToService = 3;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentPickerViewController = objcclass external (UIViewController)
  public
    function initWithDocumentTypes_inMode (allowedUTIs: NSString *ProtocolPtr; mode: UIDocumentPickerMode): instancetype; message 'initWithDocumentTypes:inMode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL_inMode (url: NSURL; mode: UIDocumentPickerMode): instancetype; message 'initWithURL:inMode:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: UIDocumentPickerDelegateProtocol); message 'setDelegate:';
    function delegate: UIDocumentPickerDelegateProtocol; message 'delegate';
    function documentPickerMode: UIDocumentPickerMode; message 'documentPickerMode';
  end;
{$endif}

