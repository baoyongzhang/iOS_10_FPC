{ Parsed from LocalAuthentication.framework LAContext.h }

{ Types from LAContext }
{$ifdef TYPES}

type
  LAAccessControlOperation = NSInteger;
type
  LAAccessControlOperationPtr = ^LAAccessControlOperation;

const
  LAAccessControlOperationCreateItem = 0;
  LAAccessControlOperationUseItem = 1;
  LAAccessControlOperationCreateKey = 2;
  LAAccessControlOperationUseKeySign = 3;
  LAAccessControlOperationUseKeyDecrypt = 4 { available in 10_12, 10_0 };
  LAAccessControlOperationUseKeyKeyExchange = 5 { available in 10_12, 10_0 };
{$endif}


{$ifdef TYPES}
type
  LAContextPtr = ^LAContext;
{$endif}

{$ifdef TYPES}
type
  LAPolicy = NSInteger;
  LAPolicyPtr = ^LAPolicy;

const
  LAPolicyDeviceOwnerAuthenticationWithBiometrics = kLAPolicyDeviceOwnerAuthenticationWithBiometrics { available in NA, 8_0 };
  LAPolicyDeviceOwnerAuthentication = kLAPolicyDeviceOwnerAuthentication { available in 10_11, 9_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_UNAVAILABLE: NSTimeInterval LATouchIDAuthenticationMaximumAllowableReuseDuration __WATCHOS_UNAVAILABLE { available in NA, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  LAContext = objcclass external (NSObject)
  private
  public
    function setCredential_type (credential: nullable NSDataPtr; type_: LACredentialType): boolean; message 'setCredential:type:'; { available in 10_11, 9_0 }
    function isCredentialSet (type_: LACredentialType): boolean; message 'isCredentialSet:'; { available in 10_11, 9_0 }
    procedure evaluateAccessControl_operation_localizedReason_reply (accessControl: SecAccessControlRef; operation: LAAccessControlOperation; localizedReason: NSString; reply: OpaqueCBlock); message 'evaluateAccessControl:operation:localizedReason:reply:'; { available in 10_11, 9_0 }
    procedure setLocalizedFallbackTitle(newValue: NSString); message 'setLocalizedFallbackTitle:';
    function localizedFallbackTitle: NSString; message 'localizedFallbackTitle';
    procedure setLocalizedCancelTitle(newValue: NSString); message 'setLocalizedCancelTitle:';
    function localizedCancelTitle: NSString; message 'localizedCancelTitle';
    procedure set__TVOS_UNAVAILABLE(newValue: NSNumber *maxBiometryFailures __WATCHOS_UNAVAILABLE); message 'set__TVOS_UNAVAILABLE:';
    function __TVOS_UNAVAILABLE_: NSNumber *maxBiometryFailures __WATCHOS_UNAVAILABLE; message 'TVOS_UNAVAILABLE';
    function __TVOS_UNAVAILABLE_: NSData *evaluatedPolicyDomainState __WATCHOS_UNAVAILABLE; message 'TVOS_UNAVAILABLE';
    procedure set__TVOS_UNAVAILABLE_(newValue: NSTimeInterval touchIDAuthenticationAllowableReuseDuration __WATCHOS_UNAVAILABLE); message 'set__TVOS_UNAVAILABLE:';
    function __TVOS_UNAVAILABLE__: NSTimeInterval touchIDAuthenticationAllowableReuseDuration __WATCHOS_UNAVAILABLE; message 'TVOS_UNAVAILABLE';
  end;
{$endif}

