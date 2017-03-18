{ Parsed from VideoSubscriberAccount.framework VideoSubscriberAccountErrors.h }
{$ifdef TYPES}
type
  VSErrorCode = NSInteger;
  VSErrorCodePtr = ^VSErrorCode;

const
  VSErrorCodeAccessNotGranted = 0;
  VSErrorCodeUnsupportedProvider = 1;
  VSErrorCodeUserCancelled = 2;
  VSErrorCodeServiceTemporarilyUnavailable = 3;
  VSErrorCodeProviderRejected = 4;
  VSErrorCodeInvalidVerificationToken = 5;
{$endif}

