{ Parsed from HomeKit.framework HMHomeManager.h }

{$ifdef TYPES}
type
  HMHomeManagerPtr = ^HMHomeManager;
  HMHomeManagerDelegateProtocolPtr = ^HMHomeManagerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMHomeManager = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: HMHomeManagerDelegateProtocol); message 'setDelegate:';
    function delegate: HMHomeManagerDelegateProtocol; message 'delegate';
    function primaryHome: HMHome; message 'primaryHome';
    function homes: HMHome *ProtocolPtr; message 'homes';
    procedure updatePrimaryHome_completionHandler (home: HMHome; completion: OpaqueCBlock); message 'updatePrimaryHome:completionHandler:';
    procedure addHomeWithName_completionHandler (homeName: NSString; completion: OpaqueCBlock); message 'addHomeWithName:completionHandler:';
    procedure removeHome_completionHandler (home: HMHome; completion: OpaqueCBlock); message 'removeHome:completionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMHomeManagerDelegateProtocol = objcprotocol external name 'HMHomeManagerDelegate' (NSObjectProtocol)
  optional
    procedure homeManagerDidUpdateHomes (manager: HMHomeManager); message 'homeManagerDidUpdateHomes:';
    procedure homeManagerDidUpdatePrimaryHome (manager: HMHomeManager); message 'homeManagerDidUpdatePrimaryHome:';
    procedure homeManager_didAddHome (manager: HMHomeManager; home: HMHome); message 'homeManager:didAddHome:';
    procedure homeManager_didRemoveHome (manager: HMHomeManager; home: HMHome); message 'homeManager:didRemoveHome:';
  end;
{$endif}

