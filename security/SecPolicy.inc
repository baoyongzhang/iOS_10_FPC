{ Parsed from Security.framework SecPolicy.h }

{$ifndef _SECURITY_SECPOLICY_H_}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyAppleX509Basic: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleSSL: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleSMIME: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleEAP: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleIPsec: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_MAC) and not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyAppleiChat: CFStringRef deprecated 'in __MAC_10_7, __MAC_10_9, __IPHONE_NA, __IPHONE_NA'; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyApplePKINITClient: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyApplePKINITServer: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyAppleCodeSigning: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyMacAppStoreReceipt: CFStringRef { available starting in __MAC_10_7, __IPHONE_9_0 }; cvar; external;
  kSecPolicyAppleIDValidation: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleTimeStamping: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleRevocation: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecPolicyApplePassbookSigning: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecPolicyApplePayIssuerEncryption: CFStringRef { available starting in __MAC_10_11, __IPHONE_9_0 }; cvar; external;
  kSecPolicyOid: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyName: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyClient: CFStringRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyRevocationFlags: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecPolicyTeamIdentifier: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_MAC) and not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyKU_DigitalSignature: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_NonRepudiation: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyEncipherment: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_DataEncipherment: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyAgreement: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyCertSign: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_CRLSign: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_EncipherOnly: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_DecipherOnly: CFStringRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
{$endif}

{$endif}
{$endif}
