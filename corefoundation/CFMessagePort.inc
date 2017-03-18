{ Parsed from CoreFoundation.framework CFMessagePort.h }

{$if  not (defined(__COREFOUNDATION_CFMESSAGEPORT__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFMESSAGEPORT__ = 1;

type
  CFMessagePortRef = OpaqueType;

type
  CFMessagePortContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFMessagePortContextPtr = ^CFMessagePortContext;

type
  CFMessagePortCallBack = function (local: CFMessagePortRef; msgid: SInt32; data: CFDataRef; info: pointer): CFDataRef; cdecl;
  CFMessagePortInvalidationCallBack = procedure (ms: CFMessagePortRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFMessagePortGetTypeID: CFTypeID; cdecl; external;
function CFMessagePortCreateLocal(allocator: CFAllocatorRef; name: CFStringRef; callout: CFMessagePortCallBack; var context: CFMessagePortContext; var shouldFreeInfo: pboolean): CFMessagePortRef; cdecl; external;
function CFMessagePortCreateRemote(allocator: CFAllocatorRef; name: CFStringRef): CFMessagePortRef; cdecl; external;
function CFMessagePortIsRemote(ms: CFMessagePortRef): Boolean; cdecl; external;
function CFMessagePortGetName(ms: CFMessagePortRef): CFStringRef; cdecl; external;
function CFMessagePortSetName(ms: CFMessagePortRef; newName: CFStringRef): Boolean; cdecl; external;
procedure CFMessagePortGetContext(ms: CFMessagePortRef; var context: CFMessagePortContext); cdecl; external;
procedure CFMessagePortInvalidate(ms: CFMessagePortRef); cdecl; external;
function CFMessagePortIsValid(ms: CFMessagePortRef): Boolean; cdecl; external;
function CFMessagePortGetInvalidationCallBack(ms: CFMessagePortRef): CFMessagePortInvalidationCallBack; cdecl; external;
procedure CFMessagePortSetInvalidationCallBack(ms: CFMessagePortRef; callout: CFMessagePortInvalidationCallBack); cdecl; external;
function CFMessagePortSendRequest(remote: CFMessagePortRef; msgid: SInt32; data: CFDataRef; sendTimeout: CFTimeInterval; rcvTimeout: CFTimeInterval; replyMode: CFStringRef; returnData: CFDataRef): SInt32; cdecl; external;
function CFMessagePortCreateRunLoopSource(allocator: CFAllocatorRef; local: CFMessagePortRef; order: CFIndex): CFRunLoopSourceRef; cdecl; external;
procedure CFMessagePortSetDispatchQueue(ms: CFMessagePortRef; queue: dispatch_queue_t); cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$endif}
