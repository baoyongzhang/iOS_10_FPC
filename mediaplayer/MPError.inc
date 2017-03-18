{ Parsed from MediaPlayer.framework MPError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  MPErrorDomain: NSString { available in 10_12_2, 9_3 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MPErrorCode = NSInteger;
  MPErrorCodePtr = ^MPErrorCode;

const
  MPErrorUnknown = 0;
  MPErrorPermissionDenied = 1;
  MPErrorCloudServiceCapabilityMissing = 2;
  MPErrorNetworkConnectionFailed = 3;
  MPErrorNotFound = 4;
  MPErrorNotSupported = 5;
  MPErrorCancelled = 6 { available in 10_1 };
{$endif}

