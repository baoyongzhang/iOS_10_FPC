{ Parsed from CFNetwork.framework CFHost.h }

{$ifndef __CFHOST__}

{$ifdef TYPES}
type
  CFHostRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainNetDB: SInt32 { available in 10_3, 2_0 }; cvar; external;
  kCFStreamErrorDomainSystemConfiguration: SInt32 { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFHostInfoType = cint;
  CFHostInfoTypePtr = ^CFHostInfoType;

const
  kCFHostAddresses = 0;
  kCFHostNames = 1;
  kCFHostReachability = 2;

type
  CFHostClientContext = record
    version: CFIndex;
    info: pointer;
    retain: CFAllocatorRetainCallBack;
    release: CFAllocatorReleaseCallBack;
    copyDescription: CFAllocatorCopyDescriptionCallBack;
  end;
type
  CFHostClientContextPtr = ^CFHostClientContext;

type
   CFHostClientCallBack = procedure (theHost: CFHostRef; typeInfo: CFHostInfoType; error: CFStreamError; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFHostGetTypeID: CFTypeID; cdecl; external; { available in 10_3, 2_0 }
function CFHostCreateWithName(allocator: CFAllocatorRef; hostname: CFStringRef): CFHostRef; cdecl; external; { available in 10_3, 2_0 }
function CFHostCreateWithAddress(allocator: CFAllocatorRef; addr: CFDataRef): CFHostRef; cdecl; external; { available in 10_3, 2_0 }
function CFHostCreateCopy(alloc: CFAllocatorRef; host: CFHostRef): CFHostRef; cdecl; external; { available in 10_3, 2_0 }
function CFHostStartInfoResolution(theHost: CFHostRef; info: CFHostInfoType; error: CFStreamError): Boolean; cdecl; external; { available in 10_3, 2_0 }
function CFHostGetAddressing(theHost: CFHostRef; var hasBeenResolved: Boolean): CFArrayRef; cdecl; external; { available in 10_3, 2_0 }
function CFHostGetNames(theHost: CFHostRef; var hasBeenResolved: Boolean):  CFArrayRef; cdecl; external; { available in 10_3, 2_0 }
function CFHostGetReachability(theHost: CFHostRef; hasBeenResolved: Boolean):  CFDataRef; cdecl; external; { available in 10_3, 2_0 }
procedure CFHostCancelInfoResolution(theHost: CFHostRef; info: CFHostInfoType); cdecl; external; { available in 10_3, 2_0 }
function CFHostSetClient(theHost: CFHostRef; clientCB: CFHostClientCallBack; clientContext: CFHostClientContext): Boolean; cdecl; external; { available in 10_3, 2_0 }
procedure CFHostScheduleWithRunLoop(theHost: CFHostRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_3, 2_0 }
procedure CFHostUnscheduleFromRunLoop(theHost: CFHostRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_3, 2_0 }
{$endif}

{$endif}
