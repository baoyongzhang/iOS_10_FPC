{ Parsed from VideoSubscriberAccount.framework VSAccountManager.h }

{$ifdef TYPES}
type
  VSAccountManagerPtr = ^VSAccountManager;
  VSAccountManagerDelegateProtocolPtr = ^VSAccountManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  VSAccountAccessStatus = NSInteger;
  VSAccountAccessStatusPtr = ^VSAccountAccessStatus;

const
  VSAccountAccessStatusNotDetermined = 0;
  VSAccountAccessStatusRestricted = 1;
  VSAccountAccessStatusDenied = 2;
  VSAccountAccessStatusGranted = 3;

type
  tvos = function (param1: 10.0)): NSString* VSCheckAccessOption NS_STRING_ENUM ,; cdecl { available in ios(10.0 };
{$endif}

{$ifdef CLASSES}

type
  VSAccountManager = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: VSAccountManagerDelegateProtocol); message 'setDelegate:';
    function delegate: VSAccountManagerDelegateProtocol; message 'delegate';
    procedure checkAccessStatusWithOptions_completionHandler (options: NSDictionary; completionHandler: OpaqueCBlock); message 'checkAccessStatusWithOptions:completionHandler:';
    function enqueueAccountMetadataRequest_completionHandler (request: VSAccountMetadataRequest; completionHandler: OpaqueCBlock): VSAccountManagerResult; message 'enqueueAccountMetadataRequest:completionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  VSAccountManagerDelegateProtocol = objcprotocol external name 'VSAccountManagerDelegate' (NSObjectProtocol)
  required
    procedure accountManager_presentViewController (accountManager: VSAccountManager; viewController: UIViewController); message 'accountManager:presentViewController:';
    procedure accountManager_dismissViewController (accountManager: VSAccountManager; viewController: UIViewController); message 'accountManager:dismissViewController:';
  end;
{$endif}

