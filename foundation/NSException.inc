{ Parsed from Foundation.framework NSException.h }

{ Types from NSAssertionHandler }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSExceptionPtr = ^NSException;
  NSAssertionHandlerPtr = ^NSAssertionHandler;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGenericException: NSExceptionName; cvar; external;
  NSRangeException: NSExceptionName; cvar; external;
  NSInvalidArgumentException: NSExceptionName; cvar; external;
  NSInternalInconsistencyException: NSExceptionName; cvar; external;
  NSMallocException: NSExceptionName; cvar; external;
  NSObjectInaccessibleException: NSExceptionName; cvar; external;
  NSObjectNotAvailableException: NSExceptionName; cvar; external;
  NSDestinationInvalidException: NSExceptionName; cvar; external;
  NSPortTimeoutException: NSExceptionName; cvar; external;
  NSInvalidSendPortException: NSExceptionName; cvar; external;
  NSInvalidReceivePortException: NSExceptionName; cvar; external;
  NSPortSendException: NSExceptionName; cvar; external;
  NSPortReceiveException: NSExceptionName; cvar; external;
  NSOldStyleException: NSExceptionName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSException = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    name: NSString;
    reason: NSString;
    userInfo: NSDictionary;
    reserved: id;
  public
    class function exceptionWithName_reason_userInfo (name_: NSExceptionName; reason_: nullable NSStringPtr; userInfo_: nullable NSDictionaryPtr): NSException; message 'exceptionWithName:reason:userInfo:';
    function initWithName_reason_userInfo (aName: NSExceptionName; aReason: nullable NSStringPtr; aUserInfo: nullable NSDictionaryPtr): instancetype; message 'initWithName:reason:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    function name_: NSExceptionName; message 'name';
    function reason_: NSString; message 'reason';
    function userInfo_: NSDictionary; message 'userInfo';
    function callStackReturnAddresses: NSNumber *ProtocolPtr; message 'callStackReturnAddresses';
    function callStackSymbols: NSString *ProtocolPtr; message 'callStackSymbols';
    procedure raise_; message 'raise';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;


type
  NSExceptionRaisingConveniences = objccategory external (NSException)
    class procedure raise_format (name__: NSExceptionName; format: NSString); varargs; message 'raise:format:';
    class procedure raise_format_arguments (name__: NSExceptionName; format: NSString; argList: va_list); message 'raise:format:arguments:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSUncaughtExceptionHandler = procedure (exception: NSException); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function NSGetUncaughtExceptionHandler: NSUncaughtExceptionHandler * _Nullable; cdecl; external;
procedure NSSetUncaughtExceptionHandler(_Nullable: NSUncaughtExceptionHandler); cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAssertionHandlerKey: NSString { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAssertionHandler = objcclass external (NSObject)
  private
    _reserved: pointer;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function currentHandler: NSAssertionHandler; message 'currentHandler';
    {$endif}
    procedure handleFailureInMethod_object_file_lineNumber_description (selector: SEL; object_: id; fileName: NSString; line: NSInteger; format: nullable NSStringPtr); varargs; message 'handleFailureInMethod:object:file:lineNumber:description:';
    procedure handleFailureInFunction_file_lineNumber_description (functionName: NSString; fileName: NSString; line: NSInteger; format: nullable NSStringPtr); varargs; message 'handleFailureInFunction:file:lineNumber:description:';
  end;
{$endif}

