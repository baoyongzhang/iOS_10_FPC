{ Parsed from Foundation.framework NSError.h }

{ Types from NSError }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSErrorPtr = ^NSError;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef TYPES}
type
  NSErrorDomain = ^NSString;
{$endif}

{$else}
{$ifdef TYPES}
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSCocoaErrorDomain: NSErrorDomain; cvar; external;
  NSPOSIXErrorDomain: NSErrorDomain; cvar; external;
  NSOSStatusErrorDomain: NSErrorDomain; cvar; external;
  NSMachErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSUnderlyingErrorKey: NSString; cvar; external;
{$endif}

{$else}
{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUnderlyingErrorKey: NSErrorUserInfoKey; cvar; external;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSLocalizedDescriptionKey: NSString; cvar; external;
  NSLocalizedFailureReasonErrorKey: NSString; cvar; external;
  NSLocalizedRecoverySuggestionErrorKey: NSString; cvar; external;
  NSLocalizedRecoveryOptionsErrorKey: NSString; cvar; external;
  NSRecoveryAttempterErrorKey: NSString; cvar; external;
  NSHelpAnchorErrorKey: NSString; cvar; external;
  NSStringEncodingErrorKey: NSString; cvar; external;
  NSURLErrorKey: NSString; cvar; external;
  NSFilePathErrorKey: NSString; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSLocalizedDescriptionKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedFailureReasonErrorKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedRecoverySuggestionErrorKey: NSErrorUserInfoKey; cvar; external;
  NSLocalizedRecoveryOptionsErrorKey: NSErrorUserInfoKey; cvar; external;
  NSRecoveryAttempterErrorKey: NSErrorUserInfoKey; cvar; external;
  NSHelpAnchorErrorKey: NSErrorUserInfoKey; cvar; external;
  NSStringEncodingErrorKey: NSErrorUserInfoKey; cvar; external;
  NSURLErrorKey: NSErrorUserInfoKey; cvar; external;
  NSFilePathErrorKey: NSErrorUserInfoKey; cvar; external;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSError = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: pointer;
    _code: NSInteger;
    _domain: NSString;
    _userInfo: NSDictionary;
  public
    function initWithDomain_code_userInfo (domain: NSErrorDomain; code: NSInteger; dict: nullable NSDictionaryPtr): instancetype; message 'initWithDomain:code:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    class function errorWithDomain_code_userInfo (domain: NSErrorDomain; code: NSInteger; dict: nullable NSDictionaryPtr): instancetype; message 'errorWithDomain:code:userInfo:';
    function domain: NSErrorDomain; message 'domain';
    function code: NSInteger; message 'code';
    function userInfo: NSDictionary; message 'userInfo';
    function localizedDescription: NSString; message 'localizedDescription';
    function localizedFailureReason: NSString; message 'localizedFailureReason';
    function localizedRecoverySuggestion: NSString; message 'localizedRecoverySuggestion';
    function localizedRecoveryOptions: NSString *ProtocolPtr; message 'localizedRecoveryOptions';
    function recoveryAttempter: id; message 'recoveryAttempter';
    function helpAnchor: NSString; message 'helpAnchor';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    class procedure setUserInfoValueProviderForDomain_provider (errorDomain: NSErrorDomain; provider: id _Nullable (^ _Nullable)(NSError *err, NSString *userInfoKey)); message 'setUserInfoValueProviderForDomain:provider:'; { available in 10_11, 9_0 }
    class function userInfoValueProviderForDomain (errorDomain: NSErrorDomain): id _Nullable (^ _Nullable; message 'userInfoValueProviderForDomain:'; { available in 10_11, 9_0 }
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSErrorRecoveryAttempting = objccategory external (NSObject)
    procedure attemptRecoveryFromError_optionIndex_delegate_didRecoverSelector_contextInfo (error: NSError; recoveryOptionIndex: NSUInteger; delegate: nullable id; didRecoverSelector: nullable SEL; contextInfo: nullable voidPtr); message 'attemptRecoveryFromError:optionIndex:delegate:didRecoverSelector:contextInfo:';
    function attemptRecoveryFromError_optionIndex (error: NSError; recoveryOptionIndex: NSUInteger): boolean; message 'attemptRecoveryFromError:optionIndex:';
  end;
{$endif}

