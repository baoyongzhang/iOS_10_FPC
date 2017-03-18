{ Parsed from NetworkExtension.framework NEPacketTunnelProvider.h }

{$ifdef TYPES}
type
  NEPacketTunnelProviderPtr = ^NEPacketTunnelProvider;
{$endif}

{$ifdef CLASSES}

type
  NEPacketTunnelProvider = objcclass external (NETunnelProvider)
  public
    procedure startTunnelWithOptions_completionHandler (options: nullable NSDictionaryPtr; completionHandler: OpaqueCBlock); message 'startTunnelWithOptions:completionHandler:'; { available in 10_11, 9_0 }
    procedure stopTunnelWithReason_completionHandler (reason: NEProviderStopReason; completionHandler: OpaqueCBlock); message 'stopTunnelWithReason:completionHandler:'; { available in 10_11, 9_0 }
    procedure cancelTunnelWithError (error: nullable NSErrorPtr); message 'cancelTunnelWithError:'; { available in 10_11, 9_0 }
    function packetFlow: NEPacketTunnelFlow; message 'packetFlow';
    function createTCPConnectionThroughTunnelToEndpoint_enableTLS_TLSParameters_delegate (remoteEndpoint: NWEndpoint; enableTLS: boolean; TLSParameters: nullable NWTLSParametersPtr; delegate: nullable id): NWTCPConnection; message 'createTCPConnectionThroughTunnelToEndpoint:enableTLS:TLSParameters:delegate:'; { available in 10_11, 9_0 }
    function createUDPSessionThroughTunnelToEndpoint_fromEndpoint (remoteEndpoint: NWEndpoint; localEndpoint: nullable NWHostEndpointPtr): NWUDPSession; message 'createUDPSessionThroughTunnelToEndpoint:fromEndpoint:'; { available in 10_11, 9_0 }
  end;
{$endif}

