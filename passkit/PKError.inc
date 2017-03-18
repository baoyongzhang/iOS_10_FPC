{ Parsed from PassKit.framework PKError.h }

{$ifndef __PKERROR_H}
{$ifdef EXTERNAL_SYMBOLS}
var
  PKPassKitErrorDomain: NSString { available in 6_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PKPassKitErrorCode = NSInteger;
  PKPassKitErrorCodePtr = ^PKPassKitErrorCode;

const
  PKUnknownError = -1;
  PKInvalidDataError = 1;
  PKUnsupportedVersionError = 2;
  PKInvalidSignature = 3;
  PKNotEntitledError = 4;
{$endif}

{$endif}
