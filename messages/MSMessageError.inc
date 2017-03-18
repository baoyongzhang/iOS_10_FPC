{ Parsed from Messages.framework MSMessageError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  MSStickersErrorDomain: NSString { available in 10_0 }; cvar; external;
  MSMessagesErrorDomain: NSString { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MSMessageErrorCode = NSInteger;
  MSMessageErrorCodePtr = ^MSMessageErrorCode;

const
  MSMessageErrorCodeFileNotFound = 1;
  MSMessageErrorCodeFileUnreadable = 2;
  MSMessageErrorCodeImproperFileType = 3;
  MSMessageErrorCodeImproperFileURL = 4;
  MSMessageErrorCodeStickerFileImproperFileAttributes = 5;
  MSMessageErrorCodeStickerFileImproperFileSize = 6;
  MSMessageErrorCodeStickerFileImproperFileFormat = 7;
  MSMessageErrorCodeURLExceedsMaxSize = 8;
{$endif}

