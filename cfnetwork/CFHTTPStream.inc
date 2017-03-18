{ Parsed from CFNetwork.framework CFHTTPStream.h }

{$ifndef __CFHTTPSTREAM__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainHTTP: SInt32 { available in 10_1, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFStreamErrorHTTP = cint;
  CFStreamErrorHTTPPtr = ^CFStreamErrorHTTP;

const
  kCFStreamErrorHTTPParseFailure = -1;
  kCFStreamErrorHTTPRedirectionLoop = -2;
  kCFStreamErrorHTTPBadURL = -3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertyHTTPResponseHeader: CFStringRef deprecated 'in 10_1, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPFinalURL: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPFinalRequest: CFStringRef deprecated 'in 10_5, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPProxy: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPProxyHost: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPProxyPort: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPSProxyHost: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPSProxyPort: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPShouldAutoredirect: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPAttemptPersistentConnection: CFStringRef deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
  kCFStreamPropertyHTTPRequestBytesWrittenCount: CFStringRef deprecated 'in 10_3, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamCreateForHTTPRequest(alloc: CFAllocatorRef; request: CFHTTPMessageRef): CFReadStreamRef; cdecl; external; deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"';
function CFReadStreamCreateForStreamedHTTPRequest(alloc: CFAllocatorRef; requestHeaders: CFHTTPMessageRef; requestBody: CFReadStreamRef): CFReadStreamRef; cdecl; external; deprecated 'in 10_2, 10_11, 2_0, 9_0, "Use NSURLSession API for http requests"';
procedure CFHTTPReadStreamSetRedirectsAutomatically(httpStream: CFReadStreamRef; shouldAutoRedirect: Boolean); cdecl; external; deprecated 'in 10_1, 10_3, NA, NA';
{$endif}

{$endif}
