{ Parsed from NetworkExtension.framework NETunnelProviderSession.h }

{$ifdef TYPES}
type
  NETunnelProviderSessionPtr = ^NETunnelProviderSession;
{$endif}

{$ifdef CLASSES}

type
  NETunnelProviderSession = objcclass external (NEVPNConnection)
  public
    function startTunnelWithOptions_andReturnError (options: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'startTunnelWithOptions:andReturnError:'; { available in 10_11, 9_0 }
    procedure stopTunnel; message 'stopTunnel'; { available in 10_11, 9_0 }
    function sendProviderMessage_returnError_responseHandler (messageData: NSData; error: NSErrorPtr; responseHandler: OpaqueCBlock): boolean; message 'sendProviderMessage:returnError:responseHandler:'; { available in 10_11, 9_0 }
  end;
{$endif}

