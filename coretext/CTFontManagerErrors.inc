{ Parsed from CoreText.framework CTFontManagerErrors.h }

{$ifndef __CTFONTMANAGERERRORS__}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerErrorDomain: _C_BEGIN CF_ASSUME_NONNULL_BEGIN CT_EXPORT CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTFontManagerErrorFontURLsKey: CFStringRef { available in 10_6, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontManagerError = CFIndex;
  CTFontManagerErrorPtr = ^CTFontManagerError;

const
  kCTFontManagerErrorFileNotFound = 101;
  kCTFontManagerErrorInsufficientPermissions = 102;
  kCTFontManagerErrorUnrecognizedFormat = 103;
  kCTFontManagerErrorInvalidFontData = 104;
  kCTFontManagerErrorAlreadyRegistered = 105;
  kCTFontManagerErrorNotRegistered = 201;
  kCTFontManagerErrorInUse = 202;
  kCTFontManagerErrorSystemRequired = 203;
{$endif}

{$endif}
