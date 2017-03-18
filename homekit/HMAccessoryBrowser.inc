{ Parsed from HomeKit.framework HMAccessoryBrowser.h }

{$ifdef TYPES}
type
  HMAccessoryBrowserPtr = ^HMAccessoryBrowser;
  HMAccessoryBrowserDelegateProtocolPtr = ^HMAccessoryBrowserDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMAccessoryBrowser = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: HMAccessoryBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: HMAccessoryBrowserDelegateProtocol; message 'delegate';
    function discoveredAccessories: HMAccessory *ProtocolPtr; message 'discoveredAccessories';
    procedure startSearchingForNewAccessories; message 'startSearchingForNewAccessories';
    procedure stopSearchingForNewAccessories; message 'stopSearchingForNewAccessories';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMAccessoryBrowserDelegateProtocol = objcprotocol external name 'HMAccessoryBrowserDelegate' (NSObjectProtocol)
  optional
    procedure accessoryBrowser_didFindNewAccessory (browser: HMAccessoryBrowser; accessory: HMAccessory); message 'accessoryBrowser:didFindNewAccessory:';
    procedure accessoryBrowser_didRemoveNewAccessory (browser: HMAccessoryBrowser; accessory: HMAccessory); message 'accessoryBrowser:didRemoveNewAccessory:';
  end;
{$endif}

