{ Parsed from SystemConfiguration.framework SCNetwork.h }

{$ifndef _SCNETWORK_H}
{$ifdef TYPES}
const
  kSCNetworkFlagsTransientConnection = 1 shl 0;
  kSCNetworkFlagsReachable = 1 shl 1;
  kSCNetworkFlagsConnectionRequired = 1 shl 2;
  kSCNetworkFlagsConnectionAutomatic = 1 shl 3;
  kSCNetworkFlagsInterventionRequired = 1 shl 4;
  kSCNetworkFlagsIsLocalAddress = 1 shl 16;
  kSCNetworkFlagsIsDirect = 1 shl 17;

type
  SCNetworkConnectionFlags = cuint32;
  SCNetworkConnectionFlagsPtr = ^SCNetworkConnectionFlags;
{$endif}

{$endif}
