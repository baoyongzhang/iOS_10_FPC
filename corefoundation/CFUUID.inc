{ Parsed from CoreFoundation.framework CFUUID.h }

{$if  not (defined(__COREFOUNDATION_CFUUID__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFUUID__ = 1;

type
  CFUUIDRef = OpaqueType;

type
  CFUUIDBytes = record
    byte0: UInt8;
    byte1: UInt8;
    byte2: UInt8;
    byte3: UInt8;
    byte4: UInt8;
    byte5: UInt8;
    byte6: UInt8;
    byte7: UInt8;
    byte8: UInt8;
    byte9: UInt8;
    byte10: UInt8;
    byte11: UInt8;
    byte12: UInt8;
    byte13: UInt8;
    byte14: UInt8;
    byte15: UInt8;
  end;
type
  CFUUIDBytesPtr = ^CFUUIDBytes;
{$endif}

{$ifdef FUNCTIONS}
function CFUUIDGetTypeID: CFTypeID; cdecl; external;
function CFUUIDCreate(alloc: CFAllocatorRef): CFUUIDRef; cdecl; external;
function CFUUIDCreateWithBytes(alloc: CFAllocatorRef; byte0: UInt8; byte1: UInt8; byte2: UInt8; byte3: UInt8; byte4: UInt8; byte5: UInt8; byte6: UInt8; byte7: UInt8; byte8: UInt8; byte9: UInt8; byte10: UInt8; byte11: UInt8; byte12: UInt8; byte13: UInt8; byte14: UInt8; byte15: UInt8): CFUUIDRef; cdecl; external;
function CFUUIDCreateFromString(alloc: CFAllocatorRef; uuidStr: CFStringRef): CFUUIDRef; cdecl; external;
function CFUUIDCreateString(alloc: CFAllocatorRef; uuid: CFUUIDRef): CFStringRef; cdecl; external;
function CFUUIDGetConstantUUIDWithBytes(alloc: CFAllocatorRef; byte0: UInt8; byte1: UInt8; byte2: UInt8; byte3: UInt8; byte4: UInt8; byte5: UInt8; byte6: UInt8; byte7: UInt8; byte8: UInt8; byte9: UInt8; byte10: UInt8; byte11: UInt8; byte12: UInt8; byte13: UInt8; byte14: UInt8; byte15: UInt8): CFUUIDRef; cdecl; external;
function CFUUIDGetUUIDBytes(uuid: CFUUIDRef): CFUUIDBytes; cdecl; external;
function CFUUIDCreateFromUUIDBytes(alloc: CFAllocatorRef; bytes: CFUUIDBytes): CFUUIDRef; cdecl; external;
{$endif}

{$endif}
