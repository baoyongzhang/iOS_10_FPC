{ Parsed from SystemConfiguration.framework SystemConfiguration.h }

{$ifndef _SYSTEMCONFIGURATION_H}
{$ifdef TYPES}
const
  kSCStatusOK = 0;
  kSCStatusFailed = 1001;
  kSCStatusInvalidArgument = 1002;
  kSCStatusAccessError = 1003;
  kSCStatusNoKey = 1004;
  kSCStatusKeyExists = 1005;
  kSCStatusLocked = 1006;
  kSCStatusNeedLock = 1007;
  kSCStatusNoStoreSession = 2001;
  kSCStatusNoStoreServer = 2002;
  kSCStatusNotifierActive = 2003;
  kSCStatusNoPrefsSession = 3001;
  kSCStatusPrefsBusy = 3002;
  kSCStatusNoConfigFile = 3003;
  kSCStatusNoLink = 3004;
  kSCStatusStale = 3005;
  kSCStatusMaxLink = 3006;
  kSCStatusReachabilityUnknown = 4001;
  kSCStatusConnectionNoService = 5001;
  kSCStatusConnectionIgnore = 5002;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFErrorDomainSystemConfiguration: CFStringRef { available starting in __MAC_10_5,__IPHONE_2_0 }; cvar; external;
{$endif}

{$endif}
