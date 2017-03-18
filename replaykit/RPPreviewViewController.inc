{ Parsed from ReplayKit.framework RPPreviewViewController.h }

{$ifdef TYPES}
type
  RPPreviewViewControllerPtr = ^RPPreviewViewController;
  RPPreviewViewControllerDelegateProtocolPtr = ^RPPreviewViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  RPPreviewViewControllerMode = NSInteger;
  RPPreviewViewControllerModePtr = ^RPPreviewViewControllerMode;

const
  RPPreviewViewControllerModePreview = 0;
  RPPreviewViewControllerModeShare = 1;
{$endif}

{$ifdef CLASSES}

type
  RPPreviewViewController = objcclass external (UIViewController)
  public
    procedure setPreviewControllerDelegate(newValue: RPPreviewViewControllerDelegateProtocol); message 'setPreviewControllerDelegate:';
    function previewControllerDelegate: RPPreviewViewControllerDelegateProtocol; message 'previewControllerDelegate';
    procedure set__IOS_PROHIBITED(newValue: RPPreviewViewControllerMode mode); message 'set__IOS_PROHIBITED:';
    function __IOS_PROHIBITED: RPPreviewViewControllerMode mode; message 'IOS_PROHIBITED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPPreviewViewControllerDelegateProtocol = objcprotocol external name 'RPPreviewViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure previewControllerDidFinish (previewController: RPPreviewViewController); message 'previewControllerDidFinish:';
    procedure previewController_didFinishWithActivityTypes (previewController: RPPreviewViewController; activityTypes: NSString *ProtocolPtr); message 'previewController:didFinishWithActivityTypes:';
  end;
{$endif}

