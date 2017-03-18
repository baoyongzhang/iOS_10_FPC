{ Parsed from ReplayKit.framework RPError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  RPRecordingErrorDomain: NSString *__nonnull { available in 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  RPRecordingErrorCode = NSInteger;
  RPRecordingErrorCodePtr = ^RPRecordingErrorCode;

const
  RPRecordingErrorUnknown = -5800;
  RPRecordingErrorUserDeclined = -5801;
  RPRecordingErrorDisabled = -5802;
  RPRecordingErrorFailedToStart = -5803;
  RPRecordingErrorFailed = -5804;
  RPRecordingErrorInsufficientStorage = -5805;
  RPRecordingErrorInterrupted = -5806;
  RPRecordingErrorContentResize = -5807;
  RPRecordingErrorBroadcastInvalidSession = -5808;
  RPRecordingErrorSystemDormancy = -5809;
{$endif}

