{ Parsed from NetworkExtension.framework NEAppProxyFlow.h }

{$ifdef TYPES}
type
  NEAppProxyFlowPtr = ^NEAppProxyFlow;
{$endif}

{$ifdef TYPES}
type
  NEAppProxyFlowError = NSInteger;
  NEAppProxyFlowErrorPtr = ^NEAppProxyFlowError;

const
  NEAppProxyFlowErrorNotConnected = 1;
  NEAppProxyFlowErrorPeerReset = 2;
  NEAppProxyFlowErrorHostUnreachable = 3;
  NEAppProxyFlowErrorInvalidArgument = 4;
  NEAppProxyFlowErrorAborted = 5;
  NEAppProxyFlowErrorRefused = 6;
  NEAppProxyFlowErrorTimedOut = 7;
  NEAppProxyFlowErrorInternal = 8;
  NEAppProxyFlowErrorDatagramTooLarge = 9 { available in 10_11, 9_3 };
  NEAppProxyFlowErrorReadAlreadyPending = 10 { available in 10_11, 9_3 };
{$endif}

{$ifdef CLASSES}

type
  NEAppProxyFlow = objcclass external (NSObject)
  public
    procedure openWithLocalEndpoint_completionHandler (localEndpoint: nullable NWHostEndpointPtr; completionHandler: OpaqueCBlock); message 'openWithLocalEndpoint:completionHandler:'; { available in 10_11, 9_0 }
    procedure closeReadWithError (error: nullable NSErrorPtr); message 'closeReadWithError:'; { available in 10_11, 9_0 }
    procedure closeWriteWithError (error: nullable NSErrorPtr); message 'closeWriteWithError:'; { available in 10_11, 9_0 }
    function metaData: NEFlowMetaData; message 'metaData';
  end;
{$endif}

