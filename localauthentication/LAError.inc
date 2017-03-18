{ Parsed from LocalAuthentication.framework LAError.h }
{$ifdef TYPES}
type
  LAError = NSInteger;
  LAErrorPtr = ^LAError;

const
  LAErrorAuthenticationFailed = kLAErrorAuthenticationFailed;
  LAErrorUserCancel = kLAErrorUserCancel;
  LAErrorUserFallback = kLAErrorUserFallback;
  LAErrorSystemCancel = kLAErrorSystemCancel;
  LAErrorPasscodeNotSet = kLAErrorPasscodeNotSet;
  LAErrorTouchIDNotAvailable = kLAErrorTouchIDNotAvailable;
  LAErrorTouchIDNotEnrolled = kLAErrorTouchIDNotEnrolled;
  LAErrorTouchIDLockout = kLAErrorTouchIDLockout { available in 10_11, 9_0 };
  LAErrorAppCancel = kLAErrorAppCancel { available in 10_11, 9_0 };
  LAErrorInvalidContext = kLAErrorInvalidContext { available in 10_11, 9_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  LAErrorDomain: NSString *__nonnull { available in 10_10, 8_3 }; cvar; external;
{$endif}

