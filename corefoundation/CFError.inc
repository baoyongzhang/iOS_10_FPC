{ Parsed from CoreFoundation.framework CFError.h }

{$if  not (defined(__COREFOUNDATION_CFERROR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFERROR__ = 1;

type
  CFErrorRef = OpaqueType;
  CFErrorDomain = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFErrorDomainPOSIX: CFErrorDomain { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainOSStatus: CFErrorDomain { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainMach: CFErrorDomain { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainCocoa: CFErrorDomain { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedDescriptionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedFailureReasonKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedRecoverySuggestionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDescriptionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorUnderlyingErrorKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorURLKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFErrorFilePathKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFErrorCreate(allocator: CFAllocatorRef; domain: CFErrorDomain; code: CFIndex; userInfo: CFDictionaryRef): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCreateWithUserInfoKeysAndValues(allocator: CFAllocatorRef; domain: CFErrorDomain; code: CFIndex; userInfoKeys: pointer; userInfoValues: pointer; numUserInfoValues: CFIndex): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorGetDomain(err: CFErrorRef): CFErrorDomain; cdecl; external; { available in 10_5, 2_0 }
function CFErrorGetCode(err: CFErrorRef): CFIndex; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyUserInfo(err: CFErrorRef): CFDictionaryRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyDescription(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyFailureReason(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyRecoverySuggestion(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$endif}
