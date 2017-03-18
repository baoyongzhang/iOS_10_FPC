{ Parsed from CoreFoundation.framework CFSocket.h }

{$if  not (defined(__COREFOUNDATION_CFSOCKET__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSOCKET__ = 1;

type
  CFSocketRef = OpaqueType;
  CFSocketError = CFIndex;
  CFSocketErrorPtr = ^CFSocketError;

const
  kCFSocketSuccess = 0;
  kCFSocketError = -1;
  kCFSocketTimeout = -2;

type
  CFSocketSignature = record
    protocolFamily: SInt32;
    socketType: SInt32;
    protocol: SInt32;
    address: CFDataRef;
  end;
type
  CFSocketSignaturePtr = ^CFSocketSignature;

type
  CFSocketCallBackType = CFOptionFlags;
  CFSocketCallBackTypePtr = ^CFSocketCallBackType;

const
  kCFSocketNoCallBack = 0;
  kCFSocketReadCallBack = 1;
  kCFSocketAcceptCallBack = 2;
  kCFSocketDataCallBack = 3;
  kCFSocketConnectCallBack = 4;
  kCFSocketWriteCallBack = 8;

type
  CFSocketCallBack = procedure (s: CFSocketRef; type_: CFSocketCallBackType; address: CFDataRef; data: pointer; info: pointer); cdecl;

type
  CFSocketContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFSocketContextPtr = ^CFSocketContext;
{$endif}

{$if defined(TARGET_OS_WIN32)}
{$ifdef TYPES}
type
  CFSocketNativeHandle = culong;
  CFSocketNativeHandlePtr = ^CFSocketNativeHandle;
{$endif}

{$else}
{$ifdef TYPES}
type
  CFSocketNativeHandle = cint;
  CFSocketNativeHandlePtr = ^CFSocketNativeHandle;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFSocketGetTypeID: CFTypeID; cdecl; external;
function CFSocketCreate(allocator: CFAllocatorRef; protocolFamily: SInt32; socketType: SInt32; protocol: SInt32; callBackTypes: CFOptionFlags; callout: CFSocketCallBack; context: CFSocketContextPtr): CFSocketRef; cdecl; external;
function CFSocketCreateWithNative(allocator: CFAllocatorRef; sock: CFSocketNativeHandle; callBackTypes: CFOptionFlags; callout: CFSocketCallBack; context: CFSocketContextPtr): CFSocketRef; cdecl; external;
function CFSocketCreateWithSocketSignature(allocator: CFAllocatorRef; signature: CFSocketSignaturePtr; callBackTypes: CFOptionFlags; callout: CFSocketCallBack; context: CFSocketContextPtr): CFSocketRef; cdecl; external;
function CFSocketCreateConnectedToSocketSignature(allocator: CFAllocatorRef; signature: CFSocketSignaturePtr; callBackTypes: CFOptionFlags; callout: CFSocketCallBack; context: CFSocketContextPtr; timeout: CFTimeInterval): CFSocketRef; cdecl; external;
function CFSocketSetAddress(s: CFSocketRef; address: CFDataRef): CFSocketError; cdecl; external;
function CFSocketConnectToAddress(s: CFSocketRef; address: CFDataRef; timeout: CFTimeInterval): CFSocketError; cdecl; external;
procedure CFSocketInvalidate(s: CFSocketRef); cdecl; external;
function CFSocketIsValid(s: CFSocketRef): Boolean; cdecl; external;
function CFSocketCopyAddress(s: CFSocketRef): CFDataRef; cdecl; external;
function CFSocketCopyPeerAddress(s: CFSocketRef): CFDataRef; cdecl; external;
procedure CFSocketGetContext(s: CFSocketRef; var context: CFSocketContext); cdecl; external;
function CFSocketGetNative(s: CFSocketRef): CFSocketNativeHandle; cdecl; external;
function CFSocketCreateRunLoopSource(allocator: CFAllocatorRef; s: CFSocketRef; order: CFIndex): CFRunLoopSourceRef; cdecl; external;
function CFSocketGetSocketFlags(s: CFSocketRef): CFOptionFlags; cdecl; external;
procedure CFSocketSetSocketFlags(s: CFSocketRef; flags: CFOptionFlags); cdecl; external;
procedure CFSocketDisableCallBacks(s: CFSocketRef; callBackTypes: CFOptionFlags); cdecl; external;
procedure CFSocketEnableCallBacks(s: CFSocketRef; callBackTypes: CFOptionFlags); cdecl; external;
function CFSocketSendData(s: CFSocketRef; address: CFDataRef; data: CFDataRef; timeout: CFTimeInterval): CFSocketError; cdecl; external;
function CFSocketRegisterValue(nameServerSignature: CFSocketSignaturePtr; timeout: CFTimeInterval; name: CFStringRef; value: CFPropertyListRef): CFSocketError; cdecl; external;
function CFSocketCopyRegisteredValue(nameServerSignature: CFSocketSignaturePtr; timeout: CFTimeInterval; name: CFStringRef; var value: CFPropertyListRef; var nameServerAddress: CFDataRef): CFSocketError; cdecl; external;
function CFSocketRegisterSocketSignature(nameServerSignature: CFSocketSignaturePtr; timeout: CFTimeInterval; name: CFStringRef; signature: CFSocketSignaturePtr): CFSocketError; cdecl; external;
function CFSocketCopyRegisteredSocketSignature(nameServerSignature: CFSocketSignaturePtr; timeout: CFTimeInterval; name: CFStringRef; var signature: CFSocketSignature; var nameServerAddress: CFDataRef): CFSocketError; cdecl; external;
function CFSocketUnregister(nameServerSignature: CFSocketSignaturePtr; timeout: CFTimeInterval; name: CFStringRef): CFSocketError; cdecl; external;
procedure CFSocketSetDefaultNameRegistryPortNumber(port: UInt16); cdecl; external;
function CFSocketGetDefaultNameRegistryPortNumber: UInt16; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFSocketCommandKey: CFStringRef; cvar; external;
  kCFSocketNameKey: CFStringRef; cvar; external;
  kCFSocketValueKey: CFStringRef; cvar; external;
  kCFSocketResultKey: CFStringRef; cvar; external;
  kCFSocketErrorKey: CFStringRef; cvar; external;
  kCFSocketRegisterCommand: CFStringRef; cvar; external;
  kCFSocketRetrieveCommand: CFStringRef; cvar; external;
{$endif}

{$endif}
