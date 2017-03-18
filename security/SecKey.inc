{ Parsed from Security.framework SecKey.h }

{$ifndef _SECURITY_SECKEY_H_}
{$ifdef TYPES}
type
  SecPadding = cuint32;
  SecPaddingPtr = ^SecPadding;

const
  kSecPaddingNone = 0;
  kSecPaddingPKCS1 = 1;
  kSecPaddingOAEP = 2;
  kSecPaddingSigRaw = $4000;
  kSecPaddingPKCS1MD2 = $8000;
  kSecPaddingPKCS1MD5 = $8001;
  kSecPaddingPKCS1SHA1 = $8002;
  kSecPaddingPKCS1SHA224 = $8003;
  kSecPaddingPKCS1SHA256 = $8004;
  kSecPaddingPKCS1SHA384 = $8005;
  kSecPaddingPKCS1SHA512 = $8006;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPrivateKeyAttrs: CFStringRef { available starting in __MAC_10_8, __IPHONE_2_0 }; cvar; external;
  kSecPublicKeyAttrs: CFStringRef { available starting in __MAC_10_8, __IPHONE_2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function alRepresentation(key: SecKeyRef; error: CFErrorRefPtr): ; cdecl; external; { available in 10.12 }
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecKeyAlgorithmRSASignatureRaw: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15Raw: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureDigestPKCS1v15SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureRFC4754: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureDigestX962SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureMessageX962SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureMessageX962SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureMessageX962SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureMessageX962SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDSASignatureMessageX962SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionRaw: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionPKCS1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA1AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA224AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA256AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA384AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmRSAEncryptionOAEPSHA512AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionStandardX963SHA1AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionStandardX963SHA224AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionStandardX963SHA256AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionStandardX963SHA384AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionStandardX963SHA512AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionCofactorX963SHA1AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionCofactorX963SHA224AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionCofactorX963SHA256AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionCofactorX963SHA384AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECIESEncryptionCofactorX963SHA512AESGCM: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandard: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeStandardX963SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactor: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA1: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA224: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA256: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA384: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyAlgorithmECDHKeyExchangeCofactorX963SHA512: SecKeyAlgorithm { available in 10.12 }; cvar; external;
  kSecKeyKeyExchangeParameterRequestedSize: SecKeyKeyExchangeParameter { available in 10.12 }; cvar; external;
  kSecKeyKeyExchangeParameterSharedInfo: SecKeyKeyExchangeParameter { available in 10.12 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SecKeyOperationType = CFIndex;
  SecKeyOperationTypePtr = ^SecKeyOperationType;

const
  kSecKeyOperationTypeSign = 0;
  kSecKeyOperationTypeVerify = 1;
  kSecKeyOperationTypeEncrypt = 2;
  kSecKeyOperationTypeDecrypt = 3;
  kSecKeyOperationTypeKeyExchange = 4;
{$endif}

{$endif}
