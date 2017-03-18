{ Parsed from SafariServices.framework SFSafariViewController.h }

{$ifdef TYPES}
type
  SFSafariViewControllerPtr = ^SFSafariViewController;
  SFSafariViewControllerDelegateProtocolPtr = ^SFSafariViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SFSafariViewController = objcclass external (UIViewController)
  public
    function init: instancetype; message 'init';
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:';
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:';
    function initWithURL_entersReaderIfAvailable (URL: NSURL; entersReaderIfAvailable: boolean): instancetype; message 'initWithURL:entersReaderIfAvailable:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL (URL: NSURL): instancetype; message 'initWithURL:';
    procedure setDelegate(newValue: SFSafariViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: SFSafariViewControllerDelegateProtocol; message 'delegate';
    procedure setPreferredBarTintColor(newValue: UIColor); message 'setPreferredBarTintColor:';
    function preferredBarTintColor: UIColor; message 'preferredBarTintColor';
    procedure setPreferredControlTintColor(newValue: UIColor); message 'setPreferredControlTintColor:';
    function preferredControlTintColor: UIColor; message 'preferredControlTintColor';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SFSafariViewControllerDelegateProtocol = objcprotocol external name 'SFSafariViewControllerDelegate' (NSObjectProtocol)
  optional
    function safariViewController_activityItemsForURL_title (controller: SFSafariViewController; URL: NSURL; title: nullable NSStringPtr): UIActivity *ProtocolPtr; message 'safariViewController:activityItemsForURL:title:';
    procedure safariViewControllerDidFinish (controller: SFSafariViewController); message 'safariViewControllerDidFinish:';
    procedure safariViewController_didCompleteInitialLoad (controller: SFSafariViewController; didLoadSuccessfully: boolean); message 'safariViewController:didCompleteInitialLoad:';
  end;
{$endif}

