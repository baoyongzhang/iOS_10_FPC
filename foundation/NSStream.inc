{ Parsed from Foundation.framework NSStream.h }

{ Types from NSStream }
{$ifdef TYPES}

{$endif}


{ Types from NSSocketStreamCreationExtensions }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSStreamPtr = ^NSStream;
  NSInputStreamPtr = ^NSInputStream;
  NSOutputStreamPtr = ^NSOutputStream;
  NSStreamDelegateProtocolPtr = ^NSStreamDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSStreamStatus = NSUInteger;
  NSStreamStatusPtr = ^NSStreamStatus;

const
  NSStreamStatusNotOpen = 0;
  NSStreamStatusOpening = 1;
  NSStreamStatusOpen = 2;
  NSStreamStatusReading = 3;
  NSStreamStatusWriting = 4;
  NSStreamStatusAtEnd = 5;
  NSStreamStatusClosed = 6;
  NSStreamStatusError = 7;

type
  NSStreamEvent = NSUInteger;
  NSStreamEventPtr = ^NSStreamEvent;

const
  NSStreamEventNone = 0;
  NSStreamEventOpenCompleted = 1 shl 0;
  NSStreamEventHasBytesAvailable = 1 shl 1;
  NSStreamEventHasSpaceAvailable = 1 shl 2;
  NSStreamEventErrorOccurred = 1 shl 3;
  NSStreamEventEndEncountered = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  NSStream = objcclass external (NSObject)
  public
    procedure open; message 'open';
    procedure close; message 'close';
    procedure setDelegate(newValue: NSStreamDelegateProtocol); message 'setDelegate:';
    function delegate: NSStreamDelegateProtocol; message 'delegate';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function propertyForKey (key: NSStreamPropertyKey): nullable id; message 'propertyForKey:';
    function setProperty_forKey (property_: nullable id; key: NSStreamPropertyKey): boolean; message 'setProperty:forKey:';
    {$else}
    function propertyForKey (key: NSString): nullable id; message 'propertyForKey:';
    function setProperty_forKey (property_: nullable id; key: NSString): boolean; message 'setProperty:forKey:';
    {$endif}
    procedure scheduleInRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    function streamStatus: NSStreamStatus; message 'streamStatus';
    function streamError: NSError; message 'streamError';
  end;

type
  NSInputStream = objcclass external (NSStream)
  public
    function read_maxLength (buffer: pbyte; len: NSUInteger): NSInteger; message 'read:maxLength:';
    function getBuffer_length (buffer: uint8_t * _Nullable * _Nonnull; len: NSUIntegerPtr): boolean; message 'getBuffer:length:';
    function hasBytesAvailable: boolean; message 'hasBytesAvailable';
    function initWithData (data: NSData): instancetype; message 'initWithData:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL (url: NSURL): nullable instancetype; message 'initWithURL:'; { available in 10_6, 4_0 }
  end;

type
  NSOutputStream = objcclass external (NSStream)
  public
    function write_maxLength (buffer: pbyte; len: NSUInteger): NSInteger; message 'write:maxLength:';
    function hasSpaceAvailable: boolean; message 'hasSpaceAvailable';
    function initToMemory: instancetype; message 'initToMemory'; { NS_DESIGNATED_INITIALIZER }
    function initToBuffer_capacity (buffer: pbyte; capacity: NSUInteger): instancetype; message 'initToBuffer:capacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL_append (url: NSURL; shouldAppend: boolean): nullable instancetype; message 'initWithURL:append:'; { available in 10_6, 4_0 }
  end;


type
  NSSocketStreamCreationExtensions = objccategory external (NSStream)
    class procedure getStreamsToHostWithName_port_inputStream_outputStream (hostname: NSString; port: NSInteger; inputStream: NSInputStream * _Nullable * _Nullable; outputStream: NSOutputStream * _Nullable * _Nullable); message 'getStreamsToHostWithName:port:inputStream:outputStream:'; { available in 10_10, 8_0 }
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    class procedure getStreamsToHost_port_inputStream_outputStream (host: NSHost; port: NSInteger; inputStream: NSInputStream * _Nullable * _Nullable; outputStream: NSOutputStream * _Nullable * _Nullable); message 'getStreamsToHost:port:inputStream:outputStream:'; deprecated 'in 10_3, 10_10, "Please use getStreamsToHostWithName:port:inputStream:outputStream: instead"';
    {$endif}
  end;

type
  NSStreamBoundPairCreationExtensions = objccategory external (NSStream)
    class procedure getBoundStreamsWithBufferSize_inputStream_outputStream (bufferSize: NSUInteger; inputStream: NSInputStream * _Nullable * _Nullable; outputStream: NSOutputStream * _Nullable * _Nullable); message 'getBoundStreamsWithBufferSize:inputStream:outputStream:'; { available in 10_10, 8_0 }
  end;

type
  NSInputStreamExtensions = objccategory external (NSInputStream)
    function initWithFileAtPath (path: NSString): nullable instancetype; message 'initWithFileAtPath:';
    class function inputStreamWithData (data: NSData): nullable instancetype; message 'inputStreamWithData:';
    class function inputStreamWithFileAtPath (path: NSString): nullable instancetype; message 'inputStreamWithFileAtPath:';
    class function inputStreamWithURL (url: NSURL): nullable instancetype; message 'inputStreamWithURL:'; { available in 10_6, 4_0 }
  end;

type
  NSOutputStreamExtensions = objccategory external (NSOutputStream)
    function initToFileAtPath_append (path: NSString; shouldAppend: boolean): nullable instancetype; message 'initToFileAtPath:append:';
    class function outputStreamToMemory: instancetype; message 'outputStreamToMemory';
    class function outputStreamToBuffer_capacity (buffer: pbyte; capacity: NSUInteger): instancetype; message 'outputStreamToBuffer:capacity:';
    class function outputStreamToFileAtPath_append (path: NSString; shouldAppend: boolean): instancetype; message 'outputStreamToFileAtPath:append:';
    class function outputStreamWithURL_append (url: NSURL; shouldAppend: boolean): nullable instancetype; message 'outputStreamWithURL:append:'; { available in 10_6, 4_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSStreamDelegateProtocol = objcprotocol external name 'NSStreamDelegate' (NSObjectProtocol)
  optional
    procedure stream_handleEvent (aStream: NSStream; eventCode: NSStreamEvent); message 'stream:handleEvent:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSocketSecurityLevelKey: NSStreamPropertyKey { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSocketSecurityLevelNone: NSStreamSocketSecurityLevel { available in 10_3, 2_0 }; cvar; external;
  NSStreamSocketSecurityLevelSSLv2: NSStreamSocketSecurityLevel { available in 10_3, 2_0 }; cvar; external;
  NSStreamSocketSecurityLevelSSLv3: NSStreamSocketSecurityLevel { available in 10_3, 2_0 }; cvar; external;
  NSStreamSocketSecurityLevelTLSv1: NSStreamSocketSecurityLevel { available in 10_3, 2_0 }; cvar; external;
  NSStreamSocketSecurityLevelNegotiatedSSL: NSStreamSocketSecurityLevel { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyConfigurationKey: NSStreamPropertyKey { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSOCKSProxyHostKey: NSStreamSOCKSProxyConfiguration { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyPortKey: NSStreamSOCKSProxyConfiguration { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyVersionKey: NSStreamSOCKSProxyConfiguration { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyUserKey: NSStreamSOCKSProxyConfiguration { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyPasswordKey: NSStreamSOCKSProxyConfiguration { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSOCKSProxyVersion4: NSStreamSOCKSProxyVersion { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSProxyVersion5: NSStreamSOCKSProxyVersion { available in 10_3, 2_0 }; cvar; external;
  NSStreamDataWrittenToMemoryStreamKey: NSStreamPropertyKey { available in 10_3, 2_0 }; cvar; external;
  NSStreamFileCurrentOffsetKey: NSStreamPropertyKey { available in 10_3, 2_0 }; cvar; external;
  NSStreamSocketSSLErrorDomain: NSErrorDomain { available in 10_3, 2_0 }; cvar; external;
  NSStreamSOCKSErrorDomain: NSErrorDomain { available in 10_3, 2_0 }; cvar; external;
  NSStreamNetworkServiceType: NSStreamPropertyKey { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamNetworkServiceTypeVoIP: NSStreamNetworkServiceTypeValue { available in 10_7, 4_0 }; cvar; external;
  NSStreamNetworkServiceTypeVideo: NSStreamNetworkServiceTypeValue { available in 10_7, 5_0 }; cvar; external;
  NSStreamNetworkServiceTypeBackground: NSStreamNetworkServiceTypeValue { available in 10_7, 5_0 }; cvar; external;
  NSStreamNetworkServiceTypeVoice: NSStreamNetworkServiceTypeValue { available in 10_7, 5_0 }; cvar; external;
{$endif}

