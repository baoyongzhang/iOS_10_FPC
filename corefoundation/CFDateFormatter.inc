{ Parsed from CoreFoundation.framework CFDateFormatter.h }

{$if  not (defined(__COREFOUNDATION_CFDATEFORMATTER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFDATEFORMATTER__ = 1;

type
  CFDateFormatterRef = OpaqueType;
  CFDateFormatterKey = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFDateFormatterGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFDateFormatterStyle = CFIndex;
  CFDateFormatterStylePtr = ^CFDateFormatterStyle;

const
  kCFDateFormatterNoStyle = 0;
  kCFDateFormatterShortStyle = 1;
  kCFDateFormatterMediumStyle = 2;
  kCFDateFormatterLongStyle = 3;
  kCFDateFormatterFullStyle = 4;

type
  CFISO8601DateFormatOptions = CFOptionFlags;
  CFISO8601DateFormatOptionsPtr = ^CFISO8601DateFormatOptions;

{$endif}

{$ifdef FUNCTIONS}
function CFDateFormatterCreate(allocator: CFAllocatorRef; locale: CFLocaleRef; dateStyle: CFDateFormatterStyle; timeStyle: CFDateFormatterStyle): CFDateFormatterRef; cdecl; external;
function CFDateFormatterGetLocale(formatter: CFDateFormatterRef): CFLocaleRef; cdecl; external;
function CFDateFormatterGetDateStyle(formatter: CFDateFormatterRef): CFDateFormatterStyle; cdecl; external;
function CFDateFormatterGetTimeStyle(formatter: CFDateFormatterRef): CFDateFormatterStyle; cdecl; external;
function CFDateFormatterGetFormat(formatter: CFDateFormatterRef): CFStringRef; cdecl; external;
procedure CFDateFormatterSetFormat(formatter: CFDateFormatterRef; formatString: CFStringRef); cdecl; external;
function CFDateFormatterCreateStringWithDate(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; date: CFDateRef): CFStringRef; cdecl; external;
function CFDateFormatterCreateStringWithAbsoluteTime(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; at: CFAbsoluteTime): CFStringRef; cdecl; external;
function CFDateFormatterCreateDateFromString(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; string_: CFStringRef; rangep: CFRangePtr): CFDateRef; cdecl; external;
function CFDateFormatterGetAbsoluteTimeFromString(formatter: CFDateFormatterRef; string_: CFStringRef; rangep: CFRangePtr; atp: CFAbsoluteTimePtr): Boolean; cdecl; external;
procedure CFDateFormatterSetProperty(formatter: CFDateFormatterRef; key: CFStringRef; value: CFTypeRef); cdecl; external;
function CFDateFormatterCopyProperty(formatter: CFDateFormatterRef; key: CFDateFormatterKey): CFTypeRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFDateFormatterIsLenient: CFDateFormatterKey; cvar; external;
  kCFDateFormatterTimeZone: CFDateFormatterKey; cvar; external;
  kCFDateFormatterCalendarName: CFDateFormatterKey; cvar; external;
  kCFDateFormatterDefaultFormat: CFDateFormatterKey; cvar; external;
  kCFDateFormatterTwoDigitStartDate: CFDateFormatterKey; cvar; external;
  kCFDateFormatterDefaultDate: CFDateFormatterKey; cvar; external;
  kCFDateFormatterCalendar: CFDateFormatterKey; cvar; external;
  kCFDateFormatterEraSymbols: CFDateFormatterKey; cvar; external;
  kCFDateFormatterMonthSymbols: CFDateFormatterKey; cvar; external;
  kCFDateFormatterShortMonthSymbols: CFDateFormatterKey; cvar; external;
  kCFDateFormatterWeekdaySymbols: CFDateFormatterKey; cvar; external;
  kCFDateFormatterShortWeekdaySymbols: CFDateFormatterKey; cvar; external;
  kCFDateFormatterAMSymbol: CFDateFormatterKey; cvar; external;
  kCFDateFormatterPMSymbol: CFDateFormatterKey; cvar; external;
  kCFDateFormatterLongEraSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortMonthSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneMonthSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneMonthSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortStandaloneMonthSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortWeekdaySymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneWeekdaySymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneWeekdaySymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortStandaloneWeekdaySymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterQuarterSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortQuarterSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneQuarterSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneQuarterSymbols: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterGregorianStartDate: CFDateFormatterKey { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterDoesRelativeDateFormattingKey: CFDateFormatterKey { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$endif}
