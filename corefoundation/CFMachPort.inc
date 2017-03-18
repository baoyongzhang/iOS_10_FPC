{ Parsed from CoreFoundation.framework CFMachPort.h }

{$if  not (defined(__COREFOUNDATION_CFMACHPORT__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFMACHPORT__ = 1;

type
  CFMachPortRef = OpaqueType;

type
  CFMachPortContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFMachPortContextPtr = ^CFMachPortContext;

type
  CFMachPortCallBack = procedure (port: CFMachPortRef; msg: pointer; size: CFIndex; info: pointer); cdecl;
  CFMachPortInvalidationCallBack = procedure (port: CFMachPortRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFMachPortGetTypeID: CFTypeID; cdecl; external;
function CFMachPortCreate(allocator: CFAllocatorRef; callout: CFMachPortCallBack; var context: CFMachPortContext; var shouldFreeInfo: pboolean): CFMachPortRef; cdecl; external;
function CFMachPortCreateWithPort(allocator: CFAllocatorRef; portNum: mach_port_t; callout: CFMachPortCallBack; var context: CFMachPortContext; var shouldFreeInfo: pboolean): CFMachPortRef; cdecl; external;
function CFMachPortGetPort(port: CFMachPortRef): mach_port_t; cdecl; external;
procedure CFMachPortGetContext(port: CFMachPortRef; var context: CFMachPortContext); cdecl; external;
procedure CFMachPortInvalidate(port: CFMachPortRef); cdecl; external;
function CFMachPortIsValid(port: CFMachPortRef): Boolean; cdecl; external;
function CFMachPortGetInvalidationCallBack(port: CFMachPortRef): CFMachPortInvalidationCallBack; cdecl; external;
procedure CFMachPortSetInvalidationCallBack(port: CFMachPortRef; callout: CFMachPortInvalidationCallBack); cdecl; external;
function CFMachPortCreateRunLoopSource(allocator: CFAllocatorRef; port: CFMachPortRef; order: CFIndex): CFRunLoopSourceRef; cdecl; external;
{$endif}

{$endif}
