{ Parsed from SystemConfiguration.framework SCNetworkReachability.h }

{$ifndef _SCNETWORKREACHABILITY_H}
{$ifdef TYPES}
type
  SCNetworkReachabilityRef = OpaqueType;

type
  SCNetworkReachabilityContext = record
    version: CFIndex;
    info: void *__nullable;
    info): void *__nonnull ( *__nullable retain)( voidPtr;
    info)_: void ( *__nullable release)( voidPtr;
    info)_: CFStringRef __nonnull ( *__nullable copyDescription)( voidPtr;
  end;
type
  SCNetworkReachabilityContextPtr = ^SCNetworkReachabilityContext;

type
  SCNetworkReachabilityFlags = cuint32;
  SCNetworkReachabilityFlagsPtr = ^SCNetworkReachabilityFlags;

const
  kSCNetworkReachabilityFlagsTransientConnection = 1 shl 0;
  kSCNetworkReachabilityFlagsReachable = 1 shl 1;
  kSCNetworkReachabilityFlagsConnectionRequired = 1 shl 2;
  kSCNetworkReachabilityFlagsConnectionOnTraffic = 1 shl 3;
  kSCNetworkReachabilityFlagsInterventionRequired = 1 shl 4;
  kSCNetworkReachabilityFlagsConnectionOnDemand = 1 shl 5;
  kSCNetworkReachabilityFlagsIsLocalAddress = 1 shl 16;
  kSCNetworkReachabilityFlagsIsDirect = 1 shl 17;
  {$if defined(TARGET_OS_IPHONE)}
  kSCNetworkReachabilityFlagsIsWWAN = 1 shl 18;
  {$endif}
  kSCNetworkReachabilityFlagsConnectionAutomatic = kSCNetworkReachabilityFlagsConnectionOnTraffic;

type
  SCNetworkReachabilityCallBack = procedure (target: SCNetworkReachabilityRef; flags: SCNetworkReachabilityFlags; info: void* __nullable); cdecl;
{$endif}

{$endif}
