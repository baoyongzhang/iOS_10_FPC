{ Parsed from CFNetwork.framework CFHTTPMessage.h }

{$ifndef __CFHTTPMESSAGE__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFHTTPVersion1_0: CFStringRef { available in 10_1, 2_0 }; cvar; external;
  kCFHTTPVersion1_1: CFStringRef { available in 10_1, 2_0 }; cvar; external;
  kCFHTTPVersion2_0: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeBasic: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeDigest: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeNTLM: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeKerberos: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeNegotiate: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeNegotiate2: CFStringRef { available in 10_6, 3_0 }; cvar; external;
  kCFHTTPAuthenticationSchemeXMobileMeAuthToken: CFStringRef { available in 10_6, 4_3 }; cvar; external;
  kCFHTTPAuthenticationSchemeOAuth1: CFStringRef { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFHTTPMessageRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFHTTPMessageGetTypeID: CFTypeID; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCreateRequest(alloc: CFAllocatorRef; requestMethod: CFStringRef; url: CFURLRef; httpVersion: CFStringRef): CFHTTPMessageRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCreateResponse(alloc: CFAllocatorRef; statusCode: CFIndex; statusDescription: CFStringRef; httpVersion: CFStringRef): CFHTTPMessageRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCreateEmpty(alloc: CFAllocatorRef; isRequest: Boolean): CFHTTPMessageRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCreateCopy(alloc: CFAllocatorRef; message_: CFHTTPMessageRef): CFHTTPMessageRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageIsRequest(message_: CFHTTPMessageRef): Boolean; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyVersion(message_: CFHTTPMessageRef): CFStringRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyBody(message_: CFHTTPMessageRef): CFDataRef; cdecl; external; { available in 10_1, 2_0 }
procedure CFHTTPMessageSetBody(message_: CFHTTPMessageRef; bodyData: CFDataRef); cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyHeaderFieldValue(message_: CFHTTPMessageRef; headerField: CFStringRef): CFStringRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyAllHeaderFields(message_: CFHTTPMessageRef): CFDictionaryRef; cdecl; external; { available in 10_1, 2_0 }
procedure CFHTTPMessageSetHeaderFieldValue(message_: CFHTTPMessageRef; headerField: CFStringRef; value: CFStringRef); cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageAppendBytes(message_: CFHTTPMessageRef; newBytes: pointer; numBytes: CFIndex): Boolean; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageIsHeaderComplete(message_: CFHTTPMessageRef): Boolean; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopySerializedMessage(message_: CFHTTPMessageRef): CFDataRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyRequestURL(request: CFHTTPMessageRef): CFURLRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyRequestMethod(request: CFHTTPMessageRef): CFStringRef; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageAddAuthentication(request: CFHTTPMessageRef; authenticationFailureResponse: CFHTTPMessageRef; username: CFStringRef; password: CFStringRef; authenticationScheme: CFStringRef; forProxy: Boolean): Boolean; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageGetResponseStatusCode(response: CFHTTPMessageRef): CFIndex; cdecl; external; { available in 10_1, 2_0 }
function CFHTTPMessageCopyResponseStatusLine(response: CFHTTPMessageRef): CFStringRef; cdecl; external; { available in 10_1, 2_0 }
{$endif}

{$endif}
