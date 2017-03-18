{ Parsed from WatchKit.framework WKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  WatchKitErrorDomain: NSString { available in 8_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WatchKitErrorCode = NSInteger;
  WatchKitErrorCodePtr = ^WatchKitErrorCode;

const
  WatchKitUnknownError = 1;
  WatchKitApplicationDelegateWatchKitRequestReplyNotCalledError = 2;
  WatchKitInvalidArgumentError = 3;
  WatchKitMediaPlayerError = 4;
  WatchKitDownloadError = 5;
  WatchKitRecordingFailedError = 6;
{$endif}

