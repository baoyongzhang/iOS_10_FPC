{ Parsed from NetworkExtension.framework NEAppProxyTCPFlow.h }

{$ifdef TYPES}
type
  NEAppProxyTCPFlowPtr = ^NEAppProxyTCPFlow;
{$endif}

{$ifdef CLASSES}

type
  NEAppProxyTCPFlow = objcclass external (NEAppProxyFlow)
  public
    procedure readDataWithCompletionHandler (completionHandler: OpaqueCBlock); message 'readDataWithCompletionHandler:'; { available in 10_11, 9_0 }
    procedure writeData_withCompletionHandler (data: NSData; completionHandler: OpaqueCBlock); message 'writeData:withCompletionHandler:'; { available in 10_11, 9_0 }
    function remoteEndpoint: NWEndpoint; message 'remoteEndpoint';
  end;
{$endif}

