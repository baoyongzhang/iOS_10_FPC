{ Parsed from ReplayKit.framework RPBroadcast.h }

{$ifdef TYPES}
type
  RPBroadcastActivityViewControllerPtr = ^RPBroadcastActivityViewController;
  RPBroadcastControllerPtr = ^RPBroadcastController;
  RPBroadcastActivityViewControllerDelegateProtocolPtr = ^RPBroadcastActivityViewControllerDelegateProtocol;
  RPBroadcastControllerDelegateProtocolPtr = ^RPBroadcastControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastActivityViewController = objcclass external (UIViewController)
  public
    class procedure loadBroadcastActivityViewControllerWithHandler (handler: OpaqueCBlock); message 'loadBroadcastActivityViewControllerWithHandler:';
    procedure setDelegate(newValue: RPBroadcastActivityViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: RPBroadcastActivityViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPBroadcastActivityViewControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityViewControllerDelegate' (NSObjectProtocol)
    procedure broadcastActivityViewController_didFinishWithBroadcastController_error (broadcastActivityViewController: RPBroadcastActivityViewController; broadcastController: nullable RPBroadcastControllerPtr; error: nullable NSErrorPtr); message 'broadcastActivityViewController:didFinishWithBroadcastController:error:';
  end;
{$endif}

{$ifdef CLASSES}

type
  RPBroadcastController = objcclass external (NSObject)
  public
    function isBroadcasting: boolean; message 'isBroadcasting';
    function isPaused: boolean; message 'isPaused';
    function broadcastURL: NSURL; message 'broadcastURL';
    function serviceInfo: NSDictionary *>Ptr; message 'serviceInfo';
    procedure setDelegate(newValue: RPBroadcastControllerDelegateProtocol); message 'setDelegate:';
    function delegate: RPBroadcastControllerDelegateProtocol; message 'delegate';
    function broadcastExtensionBundleID: NSString; message 'broadcastExtensionBundleID';
    procedure startBroadcastWithHandler (handler: OpaqueCBlock); message 'startBroadcastWithHandler:';
    procedure pauseBroadcast; message 'pauseBroadcast';
    procedure resumeBroadcast; message 'resumeBroadcast';
    procedure finishBroadcastWithHandler (handler: OpaqueCBlock); message 'finishBroadcastWithHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPBroadcastControllerDelegateProtocol = objcprotocol external name 'RPBroadcastControllerDelegate' (NSObjectProtocol)
  optional
    procedure broadcastController_didFinishWithError (broadcastController: RPBroadcastController; error: NSError * __nullable); message 'broadcastController:didFinishWithError:';
    procedure broadcastController_didUpdateServiceInfo (broadcastController: RPBroadcastController; serviceInfo: NSDictionary *>Ptr); message 'broadcastController:didUpdateServiceInfo:';
  end;
{$endif}

