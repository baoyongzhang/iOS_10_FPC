{ Parsed from GameKit.framework GKPeerPickerController.h }

{$ifdef TYPES}
type
  GKPeerPickerControllerPtr = ^GKPeerPickerController;
  GKPeerPickerControllerDelegateProtocolPtr = ^GKPeerPickerControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GKPeerPickerConnectionType = NSUInteger;
  GKPeerPickerConnectionTypePtr = ^GKPeerPickerConnectionType;

const
  GKPeerPickerConnectionTypeOnline = 1 shl 0;
  GKPeerPickerConnectionTypeNearby = 1 shl 1;
{$endif}

{$ifdef PROTOCOLS}

type
  GKPeerPickerControllerDelegateProtocol = objcprotocol external name 'GKPeerPickerControllerDelegate' (NSObjectProtocol)
  optional
    procedure peerPickerController_didSelectConnectionType (picker: GKPeerPickerController; type_: GKPeerPickerConnectionType); message 'peerPickerController:didSelectConnectionType:';
    function peerPickerController_sessionForConnectionType (picker: GKPeerPickerController; type_: GKPeerPickerConnectionType): GKSession; message 'peerPickerController:sessionForConnectionType:';
    procedure peerPickerController_didConnectPeer_toSession (picker: GKPeerPickerController; peerID: NSString; session: GKSession); message 'peerPickerController:didConnectPeer:toSession:';
    procedure peerPickerControllerDidCancel (picker: GKPeerPickerController); message 'peerPickerControllerDidCancel:';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKPeerPickerController = objcclass external (NSObject)
  private
    _picker: id;
  public
    procedure setConnectionTypesMask(newValue: GKPeerPickerConnectionType); message 'setConnectionTypesMask:';
    function connectionTypesMask: GKPeerPickerConnectionType; message 'connectionTypesMask';
    procedure setDelegate(newValue: GKPeerPickerControllerDelegateProtocol); message 'setDelegate:';
    function delegate: GKPeerPickerControllerDelegateProtocol; message 'delegate';
    procedure show; message 'show';
    procedure dismiss; message 'dismiss';
    function isVisible: boolean; message 'isVisible';
  end;
{$endif}

