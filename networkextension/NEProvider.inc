{ Parsed from NetworkExtension.framework NEProvider.h }

{$ifdef TYPES}
type
  NEProviderPtr = ^NEProvider;
{$endif}

{$ifdef TYPES}
type
  NEProviderStopReason = NSInteger;
  NEProviderStopReasonPtr = ^NEProviderStopReason;

const
  NEProviderStopReasonNone = 0;
  NEProviderStopReasonUserInitiated = 1;
  NEProviderStopReasonProviderFailed = 2;
  NEProviderStopReasonNoNetworkAvailable = 3;
  NEProviderStopReasonUnrecoverableNetworkChange = 4;
  NEProviderStopReasonProviderDisabled = 5;
  NEProviderStopReasonAuthenticationCanceled = 6;
  NEProviderStopReasonConfigurationFailed = 7;
  NEProviderStopReasonIdleTimeout = 8;
  NEProviderStopReasonConfigurationDisabled = 9;
  NEProviderStopReasonConfigurationRemoved = 10;
  NEProviderStopReasonSuperceded = 11;
  NEProviderStopReasonUserLogout = 12;
  NEProviderStopReasonUserSwitch = 13;
  NEProviderStopReasonConnectionFailed = 14;
{$endif}

{$ifdef CLASSES}

type
  NEProvider = objcclass external (NSObject)
  public
    procedure sleepWithCompletionHandler (completionHandler: OpaqueCBlock); message 'sleepWithCompletionHandler:'; { available in 10_11, 9_0 }
    procedure wake; message 'wake'; { available in 10_11, 9_0 }
    function createTCPConnectionToEndpoint_enableTLS_TLSParameters_delegate (remoteEndpoint: NWEndpoint; enableTLS: boolean; TLSParameters: nullable NWTLSParametersPtr; delegate: nullable id): NWTCPConnection; message 'createTCPConnectionToEndpoint:enableTLS:TLSParameters:delegate:'; { available in 10_11, 9_0 }
    function createUDPSessionToEndpoint_fromEndpoint (remoteEndpoint: NWEndpoint; localEndpoint: nullable NWHostEndpointPtr): NWUDPSession; message 'createUDPSessionToEndpoint:fromEndpoint:'; { available in 10_11, 9_0 }
    procedure displayMessage_completionHandler (message_: NSString; completionHandler: OpaqueCBlock); message 'displayMessage:completionHandler:'; { available in 10_12, 10_0 }
    function defaultPath: NWPath; message 'defaultPath';
  end;
{$endif}

