{ Parsed from CoreMIDI.framework MIDINetworkSession.h }

{$ifdef TYPES}
type
  MIDINetworkHostPtr = ^MIDINetworkHost;
  MIDINetworkConnectionPtr = ^MIDINetworkConnection;
  MIDINetworkSessionPtr = ^MIDINetworkSession;
{$endif}

{$ifdef __OBJC__}

{$ifdef EXTERNAL_SYMBOLS}
var
  MIDINetworkBonjourServiceType: NSString { available starting in __MAC_NA,__IPHONE_4_2 }; cvar; external;
  MIDINetworkNotificationContactsDidChange: NSString { available starting in __MAC_NA,__IPHONE_4_2 }; cvar; external;
  MIDINetworkNotificationSessionDidChange: NSString { available starting in __MAC_NA,__IPHONE_4_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MIDINetworkConnectionPolicy = NSUInteger;
  MIDINetworkConnectionPolicyPtr = ^MIDINetworkConnectionPolicy;

const
  MIDINetworkConnectionPolicy_NoOne = 0;
  MIDINetworkConnectionPolicy_HostsInContactList = 1;
  MIDINetworkConnectionPolicy_Anyone = 2;
{$endif}

{$ifdef CLASSES}

type
  MIDINetworkHost = objcclass external (NSObject)
  private
    _imp: pointer;
  public
    class function hostWithName_address_port (name: NSString; address: NSString; port: NSUInteger): instancetype; message 'hostWithName:address:port:';
    class function hostWithName_netService (name: NSString; netService: NSNetService): instancetype; message 'hostWithName:netService:';
    class function hostWithName_netServiceName_netServiceDomain (name: NSString; netServiceName: NSString; netServiceDomain: NSString): instancetype; message 'hostWithName:netServiceName:netServiceDomain:';
    function hasSameAddressAs (other: MIDINetworkHost): boolean; message 'hasSameAddressAs:';
    function name: NSString; message 'name';
    function address: NSString; message 'address';
    function port: NSUInteger; message 'port';
    function netServiceName: NSString; message 'netServiceName';
    function netServiceDomain: NSString; message 'netServiceDomain';
  end;

type
  MIDINetworkConnection = objcclass external (NSObject)
  private
    _imp: pointer;
  public
    class function connectionWithHost (host: MIDINetworkHost): instancetype; message 'connectionWithHost:';
    function host: MIDINetworkHost; message 'host';
  end;

type
  MIDINetworkSession = objcclass external (NSObject)
  private
    _imp: pointer;
  public
    class function defaultSession: MIDINetworkSession; message 'defaultSession';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function networkPort: NSUInteger; message 'networkPort';
    function networkName: NSString; message 'networkName';
    function localName: NSString; message 'localName';
    procedure setConnectionPolicy(newValue: MIDINetworkConnectionPolicy); message 'setConnectionPolicy:';
    function connectionPolicy: MIDINetworkConnectionPolicy; message 'connectionPolicy';
    function contacts: MIDINetworkHost *ProtocolPtr; message 'contacts';
    function addContact (contact: MIDINetworkHost): boolean; message 'addContact:';
    function removeContact (contact: MIDINetworkHost): boolean; message 'removeContact:';
    function connections: MIDINetworkConnection *ProtocolPtr; message 'connections';
    function addConnection (connection: MIDINetworkConnection): boolean; message 'addConnection:';
    function removeConnection (connection: MIDINetworkConnection): boolean; message 'removeConnection:';
    function sourceEndpoint: MIDIEndpointRef; message 'sourceEndpoint';
    function destinationEndpoint: MIDIEndpointRef; message 'destinationEndpoint';
  end;
{$endif}

{$endif}
