{ Parsed from AVKit.framework AVError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  AVKitErrorDomain: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVKitError = NSInteger;
  AVKitErrorPtr = ^AVKitError;

const
  AVKitErrorUnknown = -1000;
  AVKitErrorPictureInPictureStartFailed = -1001;
{$endif}

