{ Parsed from StoreKit.framework SKCloudServiceSetupViewController.h }

{$ifdef TYPES}
type
  SKCloudServiceSetupViewControllerPtr = ^SKCloudServiceSetupViewController;
  SKCloudServiceSetupViewControllerDelegateProtocolPtr = ^SKCloudServiceSetupViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SKCloudServiceSetupOptionsKey;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$ifdef CLASSES}

type
  SKCloudServiceSetupViewController = objcclass external (UIViewController)
  public
    procedure setDelegate(newValue: SKCloudServiceSetupViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: SKCloudServiceSetupViewControllerDelegateProtocol; message 'delegate';
    procedure loadWithOptions_completionHandler (options: NSDictionary; completionHandler: OpaqueCBlock); message 'loadWithOptions:completionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKCloudServiceSetupViewControllerDelegateProtocol = objcprotocol external name 'SKCloudServiceSetupViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure cloudServiceSetupViewControllerDidDismiss (cloudServiceSetupViewController: SKCloudServiceSetupViewController); message 'cloudServiceSetupViewControllerDidDismiss:'; { available in 10_1 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function NS_SWIFT_NAME________________(param1: action): SKCloudServiceSetupOptionsKey  SKCloudServiceSetupOptionsActionKey; cdecl; external; { available in 10_1 }
function NS_SWIFT_NAME_________________(param1: iTunesItemIdentifier): SKCloudServiceSetupOptionsKey  SKCloudServiceSetupOptionsITunesItemIdentifierKey; cdecl; external; { available in 10_1 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKCloudServiceSetupActionSubscribe: SKCloudServiceSetupAction { available in 10_1 }; cvar; external;
{$endif}

