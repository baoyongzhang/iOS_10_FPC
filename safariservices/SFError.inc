{ Parsed from SafariServices.framework SFError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  SFErrorDomain: NSString { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SFErrorCode = NSInteger;
  SFErrorCodePtr = ^SFErrorCode;

const
  SFErrorNoExtensionFound = 1;
  SFErrorNoAttachmentFound = 2;
  SFErrorLoadingInterrupted = 3;
{$endif}

