{ Parsed from NetworkExtension.framework NEAppProxyUDPFlow.h }

{$ifdef TYPES}
type
  NEAppProxyUDPFlowPtr = ^NEAppProxyUDPFlow;
{$endif}

{$ifdef CLASSES}

type
  NEAppProxyUDPFlow = objcclass external (NEAppProxyFlow)
  public
    procedure readDatagramsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'readDatagramsWithCompletionHandler:'; { available in 10_11, 9_0 }
    procedure writeDatagrams_sentByEndpoints_completionHandler (datagrams: NSData *ProtocolPtr; remoteEndpoints: NWEndpoint *ProtocolPtr; completionHandler: OpaqueCBlock); message 'writeDatagrams:sentByEndpoints:completionHandler:'; { available in 10_11, 9_0 }
    function localEndpoint: NWEndpoint; message 'localEndpoint';
  end;
{$endif}

