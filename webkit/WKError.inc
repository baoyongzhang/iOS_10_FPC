{ Parsed from WebKit.framework WKError.h }

{$if defined(WK_API_ENABLED)}
{$ifdef TYPES}
type
  WKErrorCode = NSInteger;
  WKErrorCodePtr = ^WKErrorCode;

const
  WKErrorUnknown = 1;
  WKErrorWebContentProcessTerminated = 2;
  WKErrorWebViewInvalidated = 3;
  WKErrorJavaScriptExceptionOccurred = 4;
  WKErrorJavaScriptResultTypeIsUnsupported = 5 { available in macosx(10.11 };
  ios = 6 { available in macosx(10.11 };
  9 = 7 { available in macosx(10.11 };
  0 = 8 { available in macosx(10.11 };
  ios = 9 { available in macosx(10.10 };
  8 = 10 { available in macosx(10.10 };
  0 = 11 { available in macosx(10.10 };
{$endif}

{$endif}
