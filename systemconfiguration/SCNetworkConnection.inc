{ Parsed from SystemConfiguration.framework SCNetworkConnection.h }

{$ifndef _SCNETWORKCONNECTION_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCNetworkConnectionRef = OpaqueType;

type
  SCNetworkConnectionContext = record
    version: CFIndex;
    info: void *__nullable;
    info): void *__nonnull ( *__nullable retain)( voidPtr;
    info)_: void ( *__nullable release)( voidPtr;
    info)_: CFStringRef __nonnull ( *__nullable copyDescription)( voidPtr;
  end;
type
  SCNetworkConnectionContextPtr = ^SCNetworkConnectionContext;

type
  SCNetworkConnectionStatus = cint32;
  SCNetworkConnectionStatusPtr = ^SCNetworkConnectionStatus;

const
  kSCNetworkConnectionInvalid = -1;
  kSCNetworkConnectionDisconnected = 0;
  kSCNetworkConnectionConnecting = 1;
  kSCNetworkConnectionConnected = 2;
  kSCNetworkConnectionDisconnecting = 3;

type
  SCNetworkConnectionPPPStatus = cint32;
  SCNetworkConnectionPPPStatusPtr = ^SCNetworkConnectionPPPStatus;

const
  kSCNetworkConnectionPPPDisconnected = 0;
  kSCNetworkConnectionPPPInitializing = 1;
  kSCNetworkConnectionPPPConnectingLink = 2;
  kSCNetworkConnectionPPPDialOnTraffic = 3;
  kSCNetworkConnectionPPPNegotiatingLink = 4;
  kSCNetworkConnectionPPPAuthenticating = 5;
  kSCNetworkConnectionPPPWaitingForCallBack = 6;
  kSCNetworkConnectionPPPNegotiatingNetwork = 7;
  kSCNetworkConnectionPPPConnected = 8;
  kSCNetworkConnectionPPPTerminating = 9;
  kSCNetworkConnectionPPPDisconnectingLink = 10;
  kSCNetworkConnectionPPPHoldingLinkOff = 11;
  kSCNetworkConnectionPPPSuspended = 12;
  kSCNetworkConnectionPPPWaitingForRedial = 13;

type
  SCNetworkConnectionCallBack = procedure (connection: SCNetworkConnectionRef; status: SCNetworkConnectionStatus; info: void* __nullable); cdecl;

const
  kSCNetworkConnectionBytesIn = 'BytesIn'		;
  kSCNetworkConnectionBytesOut = 'BytesOut'		;
  kSCNetworkConnectionPacketsIn = 'PacketsIn'		;
  kSCNetworkConnectionPacketsOut = 'PacketsOut'		;
  kSCNetworkConnectionErrorsIn = 'ErrorsIn'		;
  kSCNetworkConnectionErrorsOut = 'ErrorsOut'		;
  kSCNetworkConnectionSelectionOptionOnDemandHostName = 'OnDemandHostName'	;
  kSCNetworkConnectionSelectionOptionOnDemandRetry = 'OnDemandRetry'		;
{$endif}

{$endif}
{$endif}
