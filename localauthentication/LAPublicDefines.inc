{ Parsed from LocalAuthentication.framework LAPublicDefines.h }

{$ifndef LocalAuthentication_LAPublicDefines_h}
{$ifdef TYPES}
const
  kLAPolicyDeviceOwnerAuthenticationWithBiometrics = 1;
  kLAPolicyDeviceOwnerAuthentication = 2;
  kLAOptionUserFallback = 1;
  kLAOptionAuthenticationReason = 2;
  kLACredentialTypePasscode = -1;
  kLACredentialTypePassphrase = -2;
  kLACredentialCTKPIN = -3;
  kLAErrorAuthenticationFailed = -1;
  kLAErrorUserCancel = -2;
  kLAErrorUserFallback = -3;
  kLAErrorSystemCancel = -4;
  kLAErrorPasscodeNotSet = -5;
  kLAErrorTouchIDNotAvailable = -6;
  kLAErrorTouchIDNotEnrolled = -7;
  kLAErrorTouchIDLockout = -8;
  kLAErrorAppCancel = -9;
  kLAErrorInvalidContext = -10;
  kLAErrorDomain = 'com.apple.LocalAuthentication';
{$endif}

{$endif}
