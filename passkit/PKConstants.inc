{ Parsed from PassKit.framework PKConstants.h }

{$ifndef PKCONSTANTS_H}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *PKEncryptionScheme;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKEncryptionSchemeECC_V2: PKEncryptionScheme { available in 9_0 }; cvar; external;
  PKEncryptionSchemeRSA_V2: PKEncryptionScheme { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *PKPaymentNetwork;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPaymentNetworkAmex: PKPaymentNetwork { available in 8_0 }; cvar; external;
  PKPaymentNetworkChinaUnionPay: PKPaymentNetwork { available in 9_2 }; cvar; external;
  PKPaymentNetworkDiscover: PKPaymentNetwork { available in 9_0 }; cvar; external;
  PKPaymentNetworkInterac: PKPaymentNetwork { available in 9_2 }; cvar; external;
  PKPaymentNetworkMasterCard: PKPaymentNetwork { available in 8_0 }; cvar; external;
  PKPaymentNetworkPrivateLabel: PKPaymentNetwork { available in 9_0 }; cvar; external;
  PKPaymentNetworkVisa: PKPaymentNetwork { available in 8_0 }; cvar; external;
  PKPaymentNetworkJCB: PKPaymentNetwork { available in 10_1 }; cvar; external;
  PKPaymentNetworkSuica: PKPaymentNetwork { available in 10_1 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PKPaymentAuthorizationStatus = NSInteger;
  PKPaymentAuthorizationStatusPtr = ^PKPaymentAuthorizationStatus;

const
  PKPaymentAuthorizationStatusSuccess = 0;
  PKPaymentAuthorizationStatusFailure = 1;
  PKPaymentAuthorizationStatusInvalidBillingPostalAddress = 2;
  PKPaymentAuthorizationStatusInvalidShippingPostalAddress = 3;
  PKPaymentAuthorizationStatusInvalidShippingContact = 4;
  PKPaymentAuthorizationStatusPINRequired = 5 { available in 9_2 };
  PKPaymentAuthorizationStatusPINIncorrect = 6 { available in 9_2 };
  PKPaymentAuthorizationStatusPINLockout = 7 { available in 9_2 };

type
  PKPaymentButtonStyle = NSInteger;
  PKPaymentButtonStylePtr = ^PKPaymentButtonStyle;

const
  PKPaymentButtonStyleWhite = 0;
  PKPaymentButtonStyleWhiteOutline = 1;
  PKPaymentButtonStyleBlack = 2;

type
  PKPaymentButtonType = NSInteger;
  PKPaymentButtonTypePtr = ^PKPaymentButtonType;

const
  PKPaymentButtonTypePlain = 0;
  PKPaymentButtonTypeBuy = 1;
  PKPaymentButtonTypeSetUp = 2 { available in 9_0 };
  PKPaymentButtonTypeInStore = 3 { available in 10_0 };
  PKPaymentButtonTypeDonate = 4 { available in 10_2 };
{$endif}

{$endif}
