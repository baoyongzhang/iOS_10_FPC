{ Parsed from NetworkExtension.framework NWUDPSession.h }

{$ifdef TYPES}
type
  NWUDPSessionPtr = ^NWUDPSession;
{$endif}

{$ifndef __NWUDPSession_h_}
{$ifdef TYPES}
type
  NWUDPSessionState = NSInteger;
  NWUDPSessionStatePtr = ^NWUDPSessionState;

const
  NWUDPSessionStateInvalid = 0;
  NWUDPSessionStateWaiting = 1;
  NWUDPSessionStatePreparing = 2;
  NWUDPSessionStateReady = 3;
  NWUDPSessionStateFailed = 4;
  NWUDPSessionStateCancelled = 5;
{$endif}

{$ifdef CLASSES}

type
  NWUDPSession = objcclass external (NSObject)
  public
    function initWithUpgradeForSession (session: NWUDPSession): instancetype; message 'initWithUpgradeForSession:'; { available in 10_11, 9_0 }
    function state: NWUDPSessionState; message 'state';
    function endpoint: NWEndpoint; message 'endpoint';
    function resolvedEndpoint: NWEndpoint; message 'resolvedEndpoint';
    function isViable: boolean; message 'isViable';
    function hasBetterPath: boolean; message 'hasBetterPath';
    function currentPath: NWPath; message 'currentPath';
    procedure tryNextResolvedEndpoint; message 'tryNextResolvedEndpoint'; { available in 10_11, 9_0 }
    function maximumDatagramLength: NSUInteger; message 'maximumDatagramLength';
    procedure setReadHandler_maxDatagrams (handler: OpaqueCBlock; maxDatagrams: NSUInteger); message 'setReadHandler:maxDatagrams:'; { available in 10_11, 9_0 }
    procedure writeMultipleDatagrams_completionHandler (datagramArray: NSData *ProtocolPtr; completionHandler: OpaqueCBlock); message 'writeMultipleDatagrams:completionHandler:'; { available in 10_11, 9_0 }
    procedure writeDatagram_completionHandler (datagram: NSData; completionHandler: OpaqueCBlock); message 'writeDatagram:completionHandler:'; { available in 10_11, 9_0 }
    procedure cancel; message 'cancel'; { available in 10_11, 9_0 }
  end;
{$endif}

{$endif}
