{ Parsed from WatchConnectivity.framework WCError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  WCErrorDomain: NSString { available in 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WCErrorCode = NSInteger;
  WCErrorCodePtr = ^WCErrorCode;

const
  WCErrorCodeGenericError = 7001;
  WCErrorCodeSessionNotSupported = 7002;
  WCErrorCodeSessionMissingDelegate = 7003;
  WCErrorCodeSessionNotActivated = 7004;
  WCErrorCodeDeviceNotPaired = 7005;
  WCErrorCodeWatchAppNotInstalled = 7006;
  WCErrorCodeNotReachable = 7007;
  WCErrorCodeInvalidParameter = 7008;
  WCErrorCodePayloadTooLarge = 7009;
  WCErrorCodePayloadUnsupportedTypes = 7010;
  WCErrorCodeMessageReplyFailed = 7011;
  WCErrorCodeMessageReplyTimedOut = 7012;
  WCErrorCodeFileAccessDenied = 7013;
  WCErrorCodeDeliveryFailed = 7014;
  WCErrorCodeInsufficientSpace = 7015;
  WCErrorCodeSessionInactive = 7016 { available in 9.3 };
  WCErrorCodeTransferTimedOut = 7017 { available in 9.3 };
{$endif}

