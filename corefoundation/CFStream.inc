{ Parsed from CoreFoundation.framework CFStream.h }

{$if  not (defined(__COREFOUNDATION_CFSTREAM__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSTREAM__ = 1;

type
  CFStreamStatus = CFIndex;
  CFStreamStatusPtr = ^CFStreamStatus;
  CFStreamPropertyKey = OpaqueType;

const
  kCFStreamStatusNotOpen = 0;
  kCFStreamStatusOpening = 1;
  kCFStreamStatusOpen = 2;
  kCFStreamStatusReading = 3;
  kCFStreamStatusWriting = 4;
  kCFStreamStatusAtEnd = 5;
  kCFStreamStatusClosed = 6;
  kCFStreamStatusError = 7;

type
  CFStreamEventType = CFOptionFlags;
  CFStreamEventTypePtr = ^CFStreamEventType;

const
  kCFStreamEventNone = 0;
  kCFStreamEventOpenCompleted = 1;
  kCFStreamEventHasBytesAvailable = 2;
  kCFStreamEventCanAcceptBytes = 4;
  kCFStreamEventErrorOccurred = 8;
  kCFStreamEventEndEncountered = 16;

type
  CFStreamClientContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFStreamClientContextPtr = ^CFStreamClientContext;

type
  CFReadStreamRef = OpaqueType;
  CFWriteStreamRef = OpaqueType;
  CFReadStreamClientCallBack = procedure (stream: CFReadStreamRef; type_: CFStreamEventType; clientCallBackInfo: pointer); cdecl;
  CFWriteStreamClientCallBack = procedure (stream: CFWriteStreamRef; type_: CFStreamEventType; clientCallBackInfo: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamGetTypeID: CFTypeID; cdecl; external;
function CFWriteStreamGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertyDataWritten: CFStreamPropertyKey; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamCreateWithBytesNoCopy(alloc: CFAllocatorRef; bytes: pointer; length: CFIndex; bytesDeallocator: CFAllocatorRef): CFReadStreamRef; cdecl; external;
function CFWriteStreamCreateWithBuffer(alloc: CFAllocatorRef; buffer: pointer; bufferCapacity: CFIndex): CFWriteStreamRef; cdecl; external;
function CFWriteStreamCreateWithAllocatedBuffers(alloc: CFAllocatorRef; bufferAllocator: CFAllocatorRef): CFWriteStreamRef; cdecl; external;
function CFReadStreamCreateWithFile(alloc: CFAllocatorRef; fileURL: CFURLRef): CFReadStreamRef; cdecl; external;
function CFWriteStreamCreateWithFile(alloc: CFAllocatorRef; fileURL: CFURLRef): CFWriteStreamRef; cdecl; external;
procedure CFStreamCreateBoundPair(alloc: CFAllocatorRef; var readStream: CFReadStreamRef; var writeStream: CFWriteStreamRef; transferBufferSize: CFIndex); cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertyAppendToFile: CFStreamPropertyKey; cvar; external;
  kCFStreamPropertyFileCurrentOffset: CFStreamPropertyKey; cvar; external;
  kCFStreamPropertySocketNativeHandle: CFStreamPropertyKey; cvar; external;
  kCFStreamPropertySocketRemoteHostName: CFStreamPropertyKey; cvar; external;
  kCFStreamPropertySocketRemotePortNumber: CFStreamPropertyKey; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
procedure CFStreamCreatePairWithSocket(alloc: CFAllocatorRef; sock: CFSocketNativeHandle; var readStream: CFReadStreamRef; var writeStream: CFWriteStreamRef); cdecl; external;
procedure CFStreamCreatePairWithSocketToHost(alloc: CFAllocatorRef; host: CFStringRef; port: UInt32; var readStream: CFReadStreamRef; var writeStream: CFWriteStreamRef); cdecl; external;
procedure CFStreamCreatePairWithPeerSocketSignature(alloc: CFAllocatorRef; signature: CFSocketSignaturePtr; var readStream: CFReadStreamRef; var writeStream: CFWriteStreamRef); cdecl; external;
function CFReadStreamGetStatus(stream: CFReadStreamRef): CFStreamStatus; cdecl; external;
function CFWriteStreamGetStatus(stream: CFWriteStreamRef): CFStreamStatus; cdecl; external;
function CFReadStreamCopyError(stream: CFReadStreamRef): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFWriteStreamCopyError(stream: CFWriteStreamRef): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFReadStreamOpen(stream: CFReadStreamRef): Boolean; cdecl; external;
function CFWriteStreamOpen(stream: CFWriteStreamRef): Boolean; cdecl; external;
procedure CFReadStreamClose(stream: CFReadStreamRef); cdecl; external;
procedure CFWriteStreamClose(stream: CFWriteStreamRef); cdecl; external;
function CFReadStreamHasBytesAvailable(stream: CFReadStreamRef): Boolean; cdecl; external;
function CFReadStreamRead(stream: CFReadStreamRef; buffer: pointer; bufferLength: CFIndex): CFIndex; cdecl; external;
function CFReadStreamGetBuffer(stream: CFReadStreamRef; maxBytesToRead: CFIndex; var numBytesRead: CFIndex): pointer; cdecl; external;
function CFWriteStreamCanAcceptBytes(stream: CFWriteStreamRef): Boolean; cdecl; external;
function CFWriteStreamWrite(stream: CFWriteStreamRef; buffer: pointer; bufferLength: CFIndex): CFIndex; cdecl; external;
function CFReadStreamCopyProperty(stream: CFReadStreamRef; propertyName: CFStreamPropertyKey): CFTypeRef; cdecl; external;
function CFWriteStreamCopyProperty(stream: CFWriteStreamRef; propertyName: CFStreamPropertyKey): CFTypeRef; cdecl; external;
function CFReadStreamSetProperty(stream: CFReadStreamRef; propertyName: CFStreamPropertyKey; propertyValue: CFTypeRef): Boolean; cdecl; external;
function CFWriteStreamSetProperty(stream: CFWriteStreamRef; propertyName: CFStreamPropertyKey; propertyValue: CFTypeRef): Boolean; cdecl; external;
function CFReadStreamSetClient(stream: CFReadStreamRef; streamEvents: CFOptionFlags; clientCB: CFReadStreamClientCallBack; var clientContext: CFStreamClientContext): Boolean; cdecl; external;
function CFWriteStreamSetClient(stream: CFWriteStreamRef; streamEvents: CFOptionFlags; clientCB: CFWriteStreamClientCallBack; var clientContext: CFStreamClientContext): Boolean; cdecl; external;
procedure CFReadStreamScheduleWithRunLoop(stream: CFReadStreamRef; runLoop: CFRunLoopRef; runLoopMode: CFRunLoopMode); cdecl; external;
procedure CFWriteStreamScheduleWithRunLoop(stream: CFWriteStreamRef; runLoop: CFRunLoopRef; runLoopMode: CFRunLoopMode); cdecl; external;
procedure CFReadStreamUnscheduleFromRunLoop(stream: CFReadStreamRef; runLoop: CFRunLoopRef; runLoopMode: CFRunLoopMode); cdecl; external;
procedure CFWriteStreamUnscheduleFromRunLoop(stream: CFWriteStreamRef; runLoop: CFRunLoopRef; runLoopMode: CFRunLoopMode); cdecl; external;
procedure CFReadStreamSetDispatchQueue(stream: CFReadStreamRef; q: dispatch_queue_t); cdecl; external; { available in 10_9, 7_0 }
procedure CFWriteStreamSetDispatchQueue(stream: CFWriteStreamRef; q: dispatch_queue_t); cdecl; external; { available in 10_9, 7_0 }
function CFReadStreamCopyDispatchQueue(stream: CFReadStreamRef): dispatch_queue_t; cdecl; external; { available in 10_9, 7_0 }
function CFWriteStreamCopyDispatchQueue(stream: CFWriteStreamRef): dispatch_queue_t; cdecl; external; { available in 10_9, 7_0 }
{$endif}

{$ifdef TYPES}
type
  CFStreamErrorDomain = CFIndex;
  CFStreamErrorDomainPtr = ^CFStreamErrorDomain;

const
  kCFStreamErrorDomainCustom = -1;
  kCFStreamErrorDomainPOSIX = 1;
  kCFStreamErrorDomainMacOSStatus = 2;

type
  CFStreamError = record
    domain: CFIndex;
    error: SInt32;
  end;
type
  CFStreamErrorPtr = ^CFStreamError;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamGetError(stream: CFReadStreamRef): CFStreamError; cdecl; external;
function CFWriteStreamGetError(stream: CFWriteStreamRef): CFStreamError; cdecl; external;
{$endif}

{$endif}
