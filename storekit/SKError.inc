{ Parsed from StoreKit.framework SKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  SKErrorDomain: NSString { available in 3_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SKErrorCode = NSInteger;
  SKErrorCodePtr = ^SKErrorCode;

const
  SKErrorUnknown = 0;
  SKErrorClientInvalid = 1;
  SKErrorPaymentCancelled = 2;
  SKErrorPaymentInvalid = 3;
  SKErrorPaymentNotAllowed = 4;
  SKErrorStoreProductNotAvailable = 5;
  SKErrorCloudServicePermissionDenied = 6 { available in 9_3 };
  SKErrorCloudServiceNetworkConnectionFailed = 7 { available in 9_3 };
{$endif}

