{ Parsed from CFNetwork.framework CFNetServices.h }

{$ifndef __CFNETSERVICES__}

{$ifdef TYPES}
type
  CFNetServiceRef = OpaqueType;
  CFNetServiceMonitorRef = OpaqueType;
  CFNetServiceBrowserRef = OpaqueType;
{$endif}

{$ifdef __MACH__}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainMach: SInt32 { available in 10_2, 2_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainNetServices: SInt32 { available in 10_2, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFNetServicesError = cint;
  CFNetServicesErrorPtr = ^CFNetServicesError;

const
  kCFNetServicesErrorUnknown = -72000;
  kCFNetServicesErrorCollision = -72001;
  kCFNetServicesErrorNotFound = -72002;
  kCFNetServicesErrorInProgress = -72003;
  kCFNetServicesErrorBadArgument = -72004;
  kCFNetServicesErrorCancel = -72005;
  kCFNetServicesErrorInvalid = -72006;
  kCFNetServicesErrorTimeout = -72007;

type
  CFNetServiceMonitorType = cint;
  CFNetServiceMonitorTypePtr = ^CFNetServiceMonitorType;

const
  kCFNetServiceMonitorTXT = 1;

type
  CFNetServiceRegisterFlags = CFOptionFlags;
  CFNetServiceRegisterFlagsPtr = ^CFNetServiceRegisterFlags;

const
  kCFNetServiceFlagNoAutoRename = 1;

type
  CFNetServiceBrowserFlags = CFOptionFlags;
  CFNetServiceBrowserFlagsPtr = ^CFNetServiceBrowserFlags;

const
  kCFNetServiceFlagMoreComing = 1;
  kCFNetServiceFlagIsDomain = 2;
  kCFNetServiceFlagIsDefault = 4;
  kCFNetServiceFlagIsRegistrationDomain = 4 deprecated 'in 10_2, 10_4, 2_0, 2_0';
  kCFNetServiceFlagRemove = 8;

type
  CFNetServiceClientContext = record
    version: CFIndex;
    info: pointer;
    retain: CFAllocatorRetainCallBack;
    release: CFAllocatorReleaseCallBack;
    copyDescription: CFAllocatorCopyDescriptionCallBack;
  end;
type
  CFNetServiceClientContextPtr = ^CFNetServiceClientContext;

type
   CFNetServiceClientCallBack = procedure (theService: CFNetServiceRef; error: CFStreamError; info: pointer); cdecl;
   CFNetServiceMonitorClientCallBack = procedure (theMonitor: CFNetServiceMonitorRef; theService: CFNetServiceRef; typeInfo: CFNetServiceMonitorType; rdata: CFDataRef; error: CFStreamError; info: pointer); cdecl;
   CFNetServiceBrowserClientCallBack = procedure (browser: CFNetServiceBrowserRef; flags: CFOptionFlags; domainOrService: CFTypeRef; error: CFStreamError; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFNetServiceGetTypeID: CFTypeID; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceMonitorGetTypeID: CFTypeID; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceBrowserGetTypeID: CFTypeID; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceCreate(alloc: CFAllocatorRef; domain: CFStringRef; serviceType: CFStringRef; name: CFStringRef; port: SInt32): CFNetServiceRef; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceCreateCopy(alloc: CFAllocatorRef; service: CFNetServiceRef): CFNetServiceRef; cdecl; external; { available in 10_3, 2_0 }
function CFNetServiceGetDomain(theService: CFNetServiceRef): CFStringRef; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceGetType(theService: CFNetServiceRef): CFStringRef; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceGetName(theService: CFNetServiceRef): CFStringRef; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceRegisterWithOptions(theService: CFNetServiceRef; options: CFOptionFlags; error: CFStreamError): Boolean; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceResolveWithTimeout(theService: CFNetServiceRef; timeout: CFTimeInterval; error: CFStreamError): Boolean; cdecl; external; { available in 10_4, 2_0 }
procedure CFNetServiceCancel(theService: CFNetServiceRef); cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceGetTargetHost(theService: CFNetServiceRef): CFStringRef; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceGetPortNumber(theService: CFNetServiceRef): SInt32; cdecl; external; { available in 10_5, 2_0 }
function CFNetServiceGetAddressing(theService: CFNetServiceRef): CFArrayRef; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceGetTXTData(theService: CFNetServiceRef): CFDataRef; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceSetTXTData(theService: CFNetServiceRef; txtRecord: CFDataRef): Boolean; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceCreateDictionaryWithTXTData(alloc: CFAllocatorRef; txtRecord: CFDataRef): CFDictionaryRef; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceCreateTXTDataWithDictionary(alloc: CFAllocatorRef; keyValuePairs: CFDictionaryRef): CFDataRef; cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceSetClient(theService: CFNetServiceRef; clientCB: CFNetServiceClientCallBack; clientContext: CFNetServiceClientContext): Boolean; cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceScheduleWithRunLoop(theService: CFNetServiceRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceUnscheduleFromRunLoop(theService: CFNetServiceRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceMonitorCreate(alloc: CFAllocatorRef; theService: CFNetServiceRef; clientCB: CFNetServiceMonitorClientCallBack; var clientContext: CFNetServiceClientContext): CFNetServiceMonitorRef; cdecl; external; { available in 10_4, 2_0 }
procedure CFNetServiceMonitorInvalidate(monitor: CFNetServiceMonitorRef); cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceMonitorStart(monitor: CFNetServiceMonitorRef; recordType: CFNetServiceMonitorType; error: CFStreamError): Boolean; cdecl; external; { available in 10_4, 2_0 }
procedure CFNetServiceMonitorStop(monitor: CFNetServiceMonitorRef; error: CFStreamError); cdecl; external; { available in 10_4, 2_0 }
procedure CFNetServiceMonitorScheduleWithRunLoop(monitor: CFNetServiceMonitorRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_4, 2_0 }
procedure CFNetServiceMonitorUnscheduleFromRunLoop(monitor: CFNetServiceMonitorRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_4, 2_0 }
function CFNetServiceBrowserCreate(alloc: CFAllocatorRef; clientCB: CFNetServiceBrowserClientCallBack; var clientContext: CFNetServiceClientContext): CFNetServiceBrowserRef; cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceBrowserInvalidate(browser: CFNetServiceBrowserRef); cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceBrowserSearchForDomains(browser: CFNetServiceBrowserRef; registrationDomains: Boolean; error: CFStreamError): Boolean; cdecl; external; { available in 10_2, 2_0 }
function CFNetServiceBrowserSearchForServices(browser: CFNetServiceBrowserRef; domain: CFStringRef; serviceType: CFStringRef; error: CFStreamError): Boolean; cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceBrowserStopSearch(browser: CFNetServiceBrowserRef; error: CFStreamError); cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceBrowserScheduleWithRunLoop(browser: CFNetServiceBrowserRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_2, 2_0 }
procedure CFNetServiceBrowserUnscheduleFromRunLoop(browser: CFNetServiceBrowserRef; runLoop: CFRunLoopRef; runLoopMode: CFStringRef); cdecl; external; { available in 10_2, 2_0 }
{$endif}

{$ifdef __MACH__}
{$ifdef FUNCTIONS}
function CFNetServiceRegister(theService: CFNetServiceRef; error: CFStreamError): Boolean; cdecl; external; deprecated 'in 10_2, 10_4, NA, NA';
function CFNetServiceResolve(theService: CFNetServiceRef; error: CFStreamError): Boolean; cdecl; external; deprecated 'in 10_2, 10_4, NA, NA';
function CFNetServiceGetProtocolSpecificInformation(theService: CFNetServiceRef): CFStringRef; cdecl; external; deprecated 'in 10_2, 10_4, NA, NA';
procedure CFNetServiceSetProtocolSpecificInformation(theService: CFNetServiceRef; theInfo: CFStringRef); cdecl; external; deprecated 'in 10_2, 10_4, NA, NA';
{$endif}

{$endif}
{$endif}
