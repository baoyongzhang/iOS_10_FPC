{ Parsed from NetworkExtension.framework NEAppProxyProvider.h }

{$ifdef TYPES}
type
  NEAppProxyProviderPtr = ^NEAppProxyProvider;
{$endif}

{$ifdef CLASSES}

type
  NEAppProxyProvider = objcclass external (NETunnelProvider)
  public
    procedure startProxyWithOptions_completionHandler (options: nullable NSDictionaryPtr; completionHandler: OpaqueCBlock); message 'startProxyWithOptions:completionHandler:'; { available in 10_11, 9_0 }
    procedure stopProxyWithReason_completionHandler (reason: NEProviderStopReason; completionHandler: OpaqueCBlock); message 'stopProxyWithReason:completionHandler:'; { available in 10_11, 9_0 }
    procedure cancelProxyWithError (error: nullable NSErrorPtr); message 'cancelProxyWithError:'; { available in 10_11, 9_0 }
    function handleNewFlow (flow: NEAppProxyFlow): boolean; message 'handleNewFlow:'; { available in 10_11, 9_0 }
  end;
{$endif}

