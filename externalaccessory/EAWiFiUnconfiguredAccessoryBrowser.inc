{ Parsed from ExternalAccessory.framework EAWiFiUnconfiguredAccessoryBrowser.h }

{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryBrowserPtr = ^EAWiFiUnconfiguredAccessoryBrowser;
  EAWiFiUnconfiguredAccessoryBrowserDelegateProtocolPtr = ^EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryBrowserState = NSInteger;
  EAWiFiUnconfiguredAccessoryBrowserStatePtr = ^EAWiFiUnconfiguredAccessoryBrowserState;

const
  EAWiFiUnconfiguredAccessoryBrowserStateWiFiUnavailable = 0;
  EAWiFiUnconfiguredAccessoryBrowserStateStopped = 1;
  EAWiFiUnconfiguredAccessoryBrowserStateSearching = 2;
  EAWiFiUnconfiguredAccessoryBrowserStateConfiguring = 3;

type
  EAWiFiUnconfiguredAccessoryConfigurationStatus = NSInteger;
  EAWiFiUnconfiguredAccessoryConfigurationStatusPtr = ^EAWiFiUnconfiguredAccessoryConfigurationStatus;

const
  EAWiFiUnconfiguredAccessoryConfigurationStatusSuccess = 0;
  EAWiFiUnconfiguredAccessoryConfigurationStatusUserCancelledConfiguration = 1;
  EAWiFiUnconfiguredAccessoryConfigurationStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  EAWiFiUnconfiguredAccessoryBrowser = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol; message 'delegate';
    function unconfiguredAccessories: EAWiFiUnconfiguredAccessory *ProtocolPtr; message 'unconfiguredAccessories';
    function initWithDelegate_queue (delegate_: nullable EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol; queue: nullable dispatch_queue_t): instancetype; message 'initWithDelegate:queue:'; { available in 8.0 }
    procedure startSearchingForUnconfiguredAccessoriesMatchingPredicate (predicate: nullable NSPredicatePtr); message 'startSearchingForUnconfiguredAccessoriesMatchingPredicate:'; { available in 8.0 }
    procedure stopSearchingForUnconfiguredAccessories                      __OSX_UNAVAILABLE __WATCHOS_UNAVAILABLE __TVOS_UNAVAILABLE; message 'stopSearchingForUnconfiguredAccessories                      __OSX_UNAVAILABLE __WATCHOS_UNAVAILABLE __TVOS_UNAVAILABLE'; { available in 8.0 }
    procedure configureAccessory_withConfigurationUIOnViewController (accessory: EAWiFiUnconfiguredAccessory; viewController: UIViewController); message 'configureAccessory:withConfigurationUIOnViewController:'; { available in 8.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol = objcprotocol external name 'EAWiFiUnconfiguredAccessoryBrowserDelegate' (NSObjectProtocol)
    procedure accessoryBrowser_didUpdateState (browser: EAWiFiUnconfiguredAccessoryBrowser; state: EAWiFiUnconfiguredAccessoryBrowserState); message 'accessoryBrowser:didUpdateState:'; { available in 8.0 }
    procedure accessoryBrowser_didFindUnconfiguredAccessories (browser: EAWiFiUnconfiguredAccessoryBrowser; accessories: EAWiFiUnconfiguredAccessory *ProtocolPtr); message 'accessoryBrowser:didFindUnconfiguredAccessories:'; { available in 8.0 }
    procedure accessoryBrowser_didRemoveUnconfiguredAccessories (browser: EAWiFiUnconfiguredAccessoryBrowser; accessories: EAWiFiUnconfiguredAccessory *ProtocolPtr); message 'accessoryBrowser:didRemoveUnconfiguredAccessories:'; { available in 8.0 }
    procedure accessoryBrowser_didFinishConfiguringAccessory_withStatus (browser: EAWiFiUnconfiguredAccessoryBrowser; accessory: EAWiFiUnconfiguredAccessory; status: EAWiFiUnconfiguredAccessoryConfigurationStatus); message 'accessoryBrowser:didFinishConfiguringAccessory:withStatus:'; { available in 8.0 }
  end;
{$endif}

