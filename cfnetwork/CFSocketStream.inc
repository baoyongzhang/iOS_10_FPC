{ Parsed from CFNetwork.framework CFSocketStream.h }

{$ifndef __CFSOCKETSTREAM__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertySSLContext: CFStringRef { available in 10_9, 5_0 }; cvar; external;
  kCFStreamPropertySSLPeerTrust: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFStreamSSLValidatesCertificateChain: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamPropertySSLSettings: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamSSLLevel: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamSSLPeerName: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamSSLCertificates: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamSSLIsServer: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamNetworkServiceType: CFStringRef { available in 10_7, 4_0 }; cvar; external;
  kCFStreamNetworkServiceTypeVideo: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFStreamNetworkServiceTypeVoice: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFStreamNetworkServiceTypeBackground: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFStreamNetworkServiceTypeCallSignaling: CFStringRef { available in 10_12, 10_0 }; cvar; external;
  kCFStreamNetworkServiceTypeVoIP: CFStringRef deprecated 'in 10_7, 10_11, 4_0, 9_0, "use PushKit for VoIP control purposes"'; cvar; external;
  kCFStreamPropertyNoCellular: CFStringRef { available in 10_8, 5_0 }; cvar; external;
  kCFStreamPropertyConnectionIsCellular: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCFStreamErrorDomainWinSock: CFIndex { available in 10_5, 2_0 }; cvar; external;
  kCFStreamErrorDomainSOCKS: cint { available in 10_0, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCFStreamErrorSOCKSSubDomainNone = 0;
  kCFStreamErrorSOCKSSubDomainVersionCode = 1;
  kCFStreamErrorSOCKS4SubDomainResponse = 2;
  kCFStreamErrorSOCKS5SubDomainUserPass = 3;
  kCFStreamErrorSOCKS5SubDomainMethod = 4;
  kCFStreamErrorSOCKS5SubDomainResponse = 5;
const
  kCFStreamErrorSOCKS5BadResponseAddr = 1;
  kCFStreamErrorSOCKS5BadState = 2;
  kCFStreamErrorSOCKSUnknownClientVersion = 3;
const
  kCFStreamErrorSOCKS4RequestFailed = 91;
  kCFStreamErrorSOCKS4IdentdFailed = 92;
  kCFStreamErrorSOCKS4IdConflict = 93;
const
  kSOCKS5NoAcceptableMethod = $FF;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertySOCKSProxy: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySOCKSProxyHost: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySOCKSProxyPort: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySOCKSVersion: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSOCKSVersion4: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSOCKSVersion5: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySOCKSUser: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySOCKSPassword: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyProxyLocalBypass: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFStreamErrorDomainSSL: cint { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySocketSecurityLevel: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSecurityLevelNone: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSecurityLevelSSLv2: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSecurityLevelSSLv3: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSecurityLevelTLSv1: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamSocketSecurityLevelNegotiatedSSL: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyShouldCloseNativeSocket: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertySocketRemoteHost: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertySocketRemoteNetService: CFStringRef { available in 10_3, 2_0 }; cvar; external;
  kCFStreamPropertySocketExtendedBackgroundIdleMode: CFStringRef { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
procedure CFStreamCreatePairWithSocketToCFHost(alloc: CFAllocatorRef; host: CFHostRef; port: SInt32; readStream: CFReadStreamRef; writeStream: CFWriteStreamRef); cdecl; external; { available in 10_3, 2_0 }
procedure CFStreamCreatePairWithSocketToNetService(alloc: CFAllocatorRef; service: CFNetServiceRef; readStream: CFReadStreamRef; writeStream: CFWriteStreamRef); cdecl; external; { available in 10_3, 2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertySSLPeerCertificates: CFStringRef deprecated 'in 10_4, 10_6, 2_0, 4_0'; cvar; external;
  kCFStreamSSLAllowsExpiredCertificates: CFStringRef deprecated 'in 10_4, 10_6, 2_0, 4_0'; cvar; external;
  kCFStreamSSLAllowsExpiredRoots: CFStringRef deprecated 'in 10_4, 10_6, 2_0, 4_0'; cvar; external;
  kCFStreamSSLAllowsAnyRoot: CFStringRef deprecated 'in 10_4, 10_6, 2_0, 4_0'; cvar; external;
{$endif}

{$endif}
