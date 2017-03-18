{ Parsed from Security.framework SecTrust.h }

{$ifndef _SECURITY_SECTRUST_H_}
{$ifdef TYPES}
type
  SecTrustResultType = cuint32;
  SecTrustResultTypePtr = ^SecTrustResultType;

const
  kSecTrustResultInvalid = 0 { available in 10_3, 2_0 };
  kSecTrustResultProceed = 1 { available in 10_3, 2_0 };
  kSecTrustResultConfirm = 2 deprecated 'in 10_3, 10_9, 2_0, 7_0';
  kSecTrustResultDeny = 3 { available in 10_3, 2_0 };
  kSecTrustResultUnspecified = 4 { available in 10_3, 2_0 };
  kSecTrustResultRecoverableTrustFailure = 5 { available in 10_3, 2_0 };
  kSecTrustResultFatalTrustFailure = 6 { available in 10_3, 2_0 };
  kSecTrustResultOtherError = 7 { available in 10_3, 2_0 };

type
  SecTrustRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPropertyTypeTitle: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPropertyTypeError: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecTrustEvaluationDate: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustExtendedValidation: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustOrganizationName: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustResultValue: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustRevocationChecked: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustRevocationValidUntilDate: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustCertificateTransparency: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kSecTrustCertificateTransparencyWhiteList: CFStringRef { available starting in __MAC_10_12, __IPHONE_10_0 }; cvar; external;
{$endif}

{$ifdef __BLOCKS__}
{$ifdef TYPES}
type
  SecTrustCallback = OpaqueCBlock;
{$endif}

{$endif}

{$if defined(TARGET_OS_MAC) and not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  SecTrustUserSetting = SecTrustResultType deprecated 'in __MAC_10_2, __MAC_10_9, __IPHONE_NA, __IPHONE_NA';
  SecTrustUserSettingPtr = ^SecTrustUserSetting deprecated 'in __MAC_10_2, __MAC_10_9, __IPHONE_NA, __IPHONE_NA';
  SecTrustOptionFlags = cuint32;
  SecTrustOptionFlagsPtr = ^SecTrustOptionFlags;

const
  kSecTrustOptionAllowExpired = $00000001;
  kSecTrustOptionLeafIsCA = $00000002;
  kSecTrustOptionFetchIssuerFromNet = $00000004;
  kSecTrustOptionAllowExpiredRoot = $00000008;
  kSecTrustOptionRequireRevPerCert = $00000010;
  kSecTrustOptionUseTrustSettings = $00000020;
  kSecTrustOptionImplicitAnchors = $00000040;
{$endif}

{$endif}
{$endif}
