{ Parsed from CoreFoundation.framework CFURLAccess.h }

{$if  not (defined(__COREFOUNDATION_CFURLACCESS__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFURLACCESS__ = 1;

type
  CFDictionaryRefPtr = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFURLCreateDataAndPropertiesFromResource(alloc: CFAllocatorRef; url: CFURLRef; resourceData: CFDataRef; properties: CFDictionaryRefPtr; desiredProperties: CFArrayRef; var errorCode: SInt32): Boolean; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0, "For resource data, use the CFReadStream API. For file resource properties, use CFURLCopyResourcePropertiesForKeys."';
function CFURLWriteDataAndPropertiesToResource(url: CFURLRef; dataToWrite: CFDataRef; propertiesToWrite: CFDictionaryRef; var errorCode: SInt32): Boolean; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0, "For resource data, use the CFWriteStream API. For file resource properties, use CFURLSetResourcePropertiesForKeys."';
function CFURLCreatePropertyFromResource(alloc: CFAllocatorRef; url: CFURLRef; property_: CFStringRef; var errorCode: SInt32): CFTypeRef; cdecl; external; deprecated 'in 10_0, 10_9, 2_0, 7_0, "For file resource properties, use CFURLCopyResourcePropertyForKey."';
{$endif}

{$ifdef TYPES}
type
  CFURLError = CFIndex;
  CFURLErrorPtr = ^CFURLError;

const
  kCFURLUnknownError = -10;
  kCFURLUnknownSchemeError = -11;
  kCFURLResourceNotFoundError = -12;
  kCFURLResourceAccessViolationError = -13;
  kCFURLRemoteHostUnavailableError = -14;
  kCFURLImproperArgumentsError = -15;
  kCFURLUnknownPropertyKeyError = -16;
  kCFURLPropertyKeyUnavailableError = -17;
  kCFURLTimeoutError = -18;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFURLFileExists: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use CFURLResourceIsReachable instead."'; cvar; external;
  kCFURLFileDirectoryContents: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use the CFURLEnumerator API instead."'; cvar; external;
  kCFURLFileLength: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use CFURLCopyResourcePropertyForKey with kCFURLFileSizeKey instead."'; cvar; external;
  kCFURLFileLastModificationTime: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use CFURLCopyResourcePropertyForKey with kCFURLContentModificationDateKey instead."'; cvar; external;
  kCFURLFilePOSIXMode: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use CFURLCopyResourcePropertyForKey with kCFURLFileSecurityKey and then the CFFileSecurity API instead."'; cvar; external;
  kCFURLFileOwnerID: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use CFURLCopyResourcePropertyForKey with kCFURLFileSecurityKey and then the CFFileSecurity API instead."'; cvar; external;
  kCFURLHTTPStatusCode: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use NSHTTPURLResponse methods instead."'; cvar; external;
  kCFURLHTTPStatusLine: CFStringRef deprecated 'in 10_0, 10_9, 2_0, 7_0, "Use NSHTTPURLResponse methods instead."'; cvar; external;
{$endif}

{$endif}
