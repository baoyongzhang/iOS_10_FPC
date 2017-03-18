{ Parsed from NetworkExtension.framework NWTCPConnection.h }

{$ifdef TYPES}
type
  NWTCPConnectionPtr = ^NWTCPConnection;
  NWTCPConnectionAuthenticationDelegateProtocolPtr = ^NWTCPConnectionAuthenticationDelegateProtocol;
{$endif}

{$ifndef __NWTCPConnection_h_}
{$ifdef TYPES}
type
  NWTCPConnectionState = NSInteger;
  NWTCPConnectionStatePtr = ^NWTCPConnectionState;

const
  NWTCPConnectionStateInvalid = 0;
  NWTCPConnectionStateConnecting = 1;
  NWTCPConnectionStateWaiting = 2;
  NWTCPConnectionStateConnected = 3;
  NWTCPConnectionStateDisconnected = 4;
  NWTCPConnectionStateCancelled = 5;
{$endif}

{$ifdef CLASSES}

type
  NWTCPConnection = objcclass external (NSObject)
  public
    function initWithUpgradeForConnection (connection: NWTCPConnection): instancetype; message 'initWithUpgradeForConnection:'; { available in 10_11, 9_0 }
    function state: NWTCPConnectionState; message 'state';
    function isViable: boolean; message 'isViable';
    function hasBetterPath: boolean; message 'hasBetterPath';
    function endpoint: NWEndpoint; message 'endpoint';
    function connectedPath: NWPath; message 'connectedPath';
    function localAddress: NWEndpoint; message 'localAddress';
    function remoteAddress: NWEndpoint; message 'remoteAddress';
    function txtRecord: NSData; message 'txtRecord';
    function error: NSError; message 'error';
    procedure cancel; message 'cancel'; { available in 10_11, 9_0 }
    procedure readLength_completionHandler (length: NSUInteger; completion: OpaqueCBlock); message 'readLength:completionHandler:'; { available in 10_11, 9_0 }
    procedure readMinimumLength_maximumLength_completionHandler (minimum: NSUInteger; maximum: NSUInteger; completion: OpaqueCBlock); message 'readMinimumLength:maximumLength:completionHandler:'; { available in 10_11, 9_0 }
    procedure write_completionHandler (data: NSData; completion: OpaqueCBlock); message 'write:completionHandler:'; { available in 10_11, 9_0 }
    procedure writeClose; message 'writeClose'; { available in 10_11, 9_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NWTCPConnectionAuthenticationDelegateProtocol = objcprotocol external name 'NWTCPConnectionAuthenticationDelegate' (NSObjectProtocol)
  optional
    function shouldProvideIdentityForConnection (connection: NWTCPConnection): boolean; message 'shouldProvideIdentityForConnection:';
    procedure provideIdentityForConnection_completionHandler (connection: NWTCPConnection; completion: OpaqueCBlock); message 'provideIdentityForConnection:completionHandler:';
    function shouldEvaluateTrustForConnection (connection: NWTCPConnection): boolean; message 'shouldEvaluateTrustForConnection:';
    procedure evaluateTrustForConnection_peerCertificateChain_completionHandler (connection: NWTCPConnection; peerCertificateChain: idProtocolPtr; completion: OpaqueCBlock); message 'evaluateTrustForConnection:peerCertificateChain:completionHandler:';
  end;
{$endif}

{$endif}
