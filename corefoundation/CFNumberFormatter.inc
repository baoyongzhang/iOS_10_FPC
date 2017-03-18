{ Parsed from CoreFoundation.framework CFNumberFormatter.h }

{$if  not (defined(__COREFOUNDATION_CFNUMBERFORMATTER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFNUMBERFORMATTER__ = 1;

type
  CFNumberFormatterStyle = CFIndex;
  CFNumberFormatterStylePtr = ^CFNumberFormatterStyle;
  CFNumberFormatterRef = OpaqueType;
  CFNumberFormatterKey = OpaqueType;

const
  kCFNumberFormatterNoStyle = 0;
  kCFNumberFormatterDecimalStyle = 1;
  kCFNumberFormatterCurrencyStyle = 2;
  kCFNumberFormatterPercentStyle = 3;
  kCFNumberFormatterScientificStyle = 4;
  kCFNumberFormatterSpellOutStyle = 5;
  kCFNumberFormatterOrdinalStyle = 6 { available in 10_11, 9_0 };
  kCFNumberFormatterCurrencyISOCodeStyle = 8 { available in 10_11, 9_0 };
  kCFNumberFormatterCurrencyPluralStyle = 9 { available in 10_11, 9_0 };
  kCFNumberFormatterCurrencyAccountingStyle = 10 { available in 10_11, 9_0 };
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterCreate(allocator: CFAllocatorRef; locale: CFLocaleRef; style: CFNumberFormatterStyle): CFNumberFormatterRef; cdecl; external;
function CFNumberFormatterGetLocale(formatter: CFNumberFormatterRef): CFLocaleRef; cdecl; external;
function CFNumberFormatterGetStyle(formatter: CFNumberFormatterRef): CFNumberFormatterStyle; cdecl; external;
function CFNumberFormatterGetFormat(formatter: CFNumberFormatterRef): CFStringRef; cdecl; external;
procedure CFNumberFormatterSetFormat(formatter: CFNumberFormatterRef; formatString: CFStringRef); cdecl; external;
function CFNumberFormatterCreateStringWithNumber(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; number: CFNumberRef): CFStringRef; cdecl; external;
function CFNumberFormatterCreateStringWithValue(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; numberType: CFNumberType; valuePtr: pointer): CFStringRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberFormatterOptionFlags = CFOptionFlags;
  CFNumberFormatterOptionFlagsPtr = ^CFNumberFormatterOptionFlags;

const
  kCFNumberFormatterParseIntegersOnly = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterCreateNumberFromString(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; string_: CFStringRef; rangep: CFRangePtr; options: CFOptionFlags): CFNumberRef; cdecl; external;
function CFNumberFormatterGetValueFromString(formatter: CFNumberFormatterRef; string_: CFStringRef; rangep: CFRangePtr; numberType: CFNumberType; valuePtr: pointer): Boolean; cdecl; external;
procedure CFNumberFormatterSetProperty(formatter: CFNumberFormatterRef; key: CFNumberFormatterKey; value: CFTypeRef); cdecl; external;
function CFNumberFormatterCopyProperty(formatter: CFNumberFormatterRef; key: CFNumberFormatterKey): CFTypeRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFNumberFormatterCurrencyCode: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterDecimalSeparator: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterCurrencyDecimalSeparator: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterAlwaysShowDecimalSeparator: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterGroupingSeparator: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterUseGroupingSeparator: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPercentSymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterZeroSymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterNaNSymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterInfinitySymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMinusSign: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPlusSign: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterCurrencySymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterExponentSymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMinIntegerDigits: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMaxIntegerDigits: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMinFractionDigits: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMaxFractionDigits: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterGroupingSize: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterSecondaryGroupingSize: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterRoundingMode: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterRoundingIncrement: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterFormatWidth: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPaddingPosition: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPaddingCharacter: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterDefaultFormat: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterMultiplier: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPositivePrefix: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPositiveSuffix: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterNegativePrefix: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterNegativeSuffix: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterPerMillSymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterInternationalCurrencySymbol: CFNumberFormatterKey; cvar; external;
  kCFNumberFormatterCurrencyGroupingSeparator: CFNumberFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterIsLenient: CFNumberFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterUseSignificantDigits: CFNumberFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterMinSignificantDigits: CFNumberFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterMaxSignificantDigits: CFNumberFormatterKey { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberFormatterRoundingMode = CFIndex;
  CFNumberFormatterRoundingModePtr = ^CFNumberFormatterRoundingMode;

const
  kCFNumberFormatterRoundCeiling = 0;
  kCFNumberFormatterRoundFloor = 1;
  kCFNumberFormatterRoundDown = 2;
  kCFNumberFormatterRoundUp = 3;
  kCFNumberFormatterRoundHalfEven = 4;
  kCFNumberFormatterRoundHalfDown = 5;
  kCFNumberFormatterRoundHalfUp = 6;

type
  CFNumberFormatterPadPosition = CFIndex;
  CFNumberFormatterPadPositionPtr = ^CFNumberFormatterPadPosition;

const
  kCFNumberFormatterPadBeforePrefix = 0;
  kCFNumberFormatterPadAfterPrefix = 1;
  kCFNumberFormatterPadBeforeSuffix = 2;
  kCFNumberFormatterPadAfterSuffix = 3;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterGetDecimalInfoForCurrencyCode(currencyCode: CFStringRef; defaultFractionDigits: pcint32; roundingIncrement: pdouble): Boolean; cdecl; external;
{$endif}

{$endif}
