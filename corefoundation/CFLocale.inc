{ Parsed from CoreFoundation.framework CFLocale.h }

{$if  not (defined(__COREFOUNDATION_CFLOCALE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFLOCALE__ = 1;

type
  CFLocaleRef = OpaqueType;
  CFLocaleIdentifier = OpaqueType;
  CFLocaleKey = OpaqueType;
  CF_EXTENSIBLE_STRING_ENUM = CFStringRef;
  CF_EXTENSIBLE_STRING_ENUMPtr = ^CF_EXTENSIBLE_STRING_ENUM;
  CF_STRING_ENUM = CFStringRef;
  CF_STRING_ENUMPtr = ^CF_STRING_ENUM;
{$endif}

{$ifdef FUNCTIONS}
function CFLocaleGetSystem: CFLocaleRef; cdecl; external;
function CFLocaleCopyCurrent: CFLocaleRef; cdecl; external;
function CFLocaleCopyAvailableLocaleIdentifiers: CFArrayRef; cdecl; external;
function CFLocaleCopyISOLanguageCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyISOCountryCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyISOCurrencyCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyCommonISOCurrencyCodes: CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFLocaleCopyPreferredLanguages: CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFLocaleCreateCanonicalLanguageIdentifierFromString(allocator: CFAllocatorRef; localeIdentifier: CFStringRef): CFLocaleIdentifier; cdecl; external;
function CFLocaleCreateCanonicalLocaleIdentifierFromString(allocator: CFAllocatorRef; localeIdentifier: CFStringRef): CFLocaleIdentifier; cdecl; external;
function CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes(allocator: CFAllocatorRef; lcode: LangCode; rcode: RegionCode): CFLocaleIdentifier; cdecl; external;
function CFLocaleCreateLocaleIdentifierFromWindowsLocaleCode(allocator: CFAllocatorRef; lcid: cuint32): CFLocaleIdentifier; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleGetWindowsLocaleCodeFromLocaleIdentifier(localeIdentifier: CFLocaleIdentifier): cuint32; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef TYPES}
type
  CFLocaleLanguageDirection = CFIndex;
  CFLocaleLanguageDirectionPtr = ^CFLocaleLanguageDirection;

const
  kCFLocaleLanguageDirectionUnknown = 0;
  kCFLocaleLanguageDirectionLeftToRight = 1;
  kCFLocaleLanguageDirectionRightToLeft = 2;
  kCFLocaleLanguageDirectionTopToBottom = 3;
  kCFLocaleLanguageDirectionBottomToTop = 4;
{$endif}

{$ifdef FUNCTIONS}
function CFLocaleGetLanguageCharacterDirection(isoLangCode: CFStringRef): CFLocaleLanguageDirection; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleGetLanguageLineDirection(isoLangCode: CFStringRef): CFLocaleLanguageDirection; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleCreateComponentsFromLocaleIdentifier(allocator: CFAllocatorRef; localeID: CFLocaleIdentifier): CFDictionaryRef; cdecl; external;
function CFLocaleCreateLocaleIdentifierFromComponents(allocator: CFAllocatorRef; dictionary: CFDictionaryRef): CFLocaleIdentifier; cdecl; external;
function CFLocaleCreate(allocator: CFAllocatorRef; localeIdentifier: CFLocaleIdentifier): CFLocaleRef; cdecl; external;
function CFLocaleCreateCopy(allocator: CFAllocatorRef; locale: CFLocaleRef): CFLocaleRef; cdecl; external;
function CFLocaleGetIdentifier(locale: CFLocaleRef): CFLocaleIdentifier; cdecl; external;
function CFLocaleGetValue(locale: CFLocaleRef; key: CFLocaleKey): CFTypeRef; cdecl; external;
function CFLocaleCopyDisplayNameForPropertyValue(displayLocale: CFLocaleRef; key: CFLocaleKey; value: CFStringRef): CFStringRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFLocaleCurrentLocaleDidChangeNotification: CFNotificationName { available in 10_5, 2_0 }; cvar; external;
  kCFLocaleIdentifier: CFLocaleKey; cvar; external;
  kCFLocaleLanguageCode: CFLocaleKey; cvar; external;
  kCFLocaleCountryCode: CFLocaleKey; cvar; external;
  kCFLocaleScriptCode: CFLocaleKey; cvar; external;
  kCFLocaleVariantCode: CFLocaleKey; cvar; external;
  kCFLocaleExemplarCharacterSet: CFLocaleKey; cvar; external;
  kCFLocaleCalendarIdentifier: CFLocaleKey; cvar; external;
  kCFLocaleCalendar: CFLocaleKey; cvar; external;
  kCFLocaleCollationIdentifier: CFLocaleKey; cvar; external;
  kCFLocaleUsesMetricSystem: CFLocaleKey; cvar; external;
  kCFLocaleMeasurementSystem: CFLocaleKey; cvar; external;
  kCFLocaleDecimalSeparator: CFLocaleKey; cvar; external;
  kCFLocaleGroupingSeparator: CFLocaleKey; cvar; external;
  kCFLocaleCurrencySymbol: CFLocaleKey; cvar; external;
  kCFLocaleCurrencyCode: CFLocaleKey; cvar; external;
  kCFLocaleCollatorIdentifier: CFLocaleKey { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleQuotationBeginDelimiterKey: CFLocaleKey { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleQuotationEndDelimiterKey: CFLocaleKey { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleAlternateQuotationBeginDelimiterKey: CFLocaleKey { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleAlternateQuotationEndDelimiterKey: CFLocaleKey { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFGregorianCalendar: CFCalendarIdentifier; cvar; external;
  kCFBuddhistCalendar: CFCalendarIdentifier; cvar; external;
  kCFChineseCalendar: CFCalendarIdentifier; cvar; external;
  kCFHebrewCalendar: CFCalendarIdentifier; cvar; external;
  kCFIslamicCalendar: CFCalendarIdentifier; cvar; external;
  kCFIslamicCivilCalendar: CFCalendarIdentifier; cvar; external;
  kCFJapaneseCalendar: CFCalendarIdentifier; cvar; external;
  kCFRepublicOfChinaCalendar: CFCalendarIdentifier { available in 10_6, 4_0 }; cvar; external;
  kCFPersianCalendar: CFCalendarIdentifier { available in 10_6, 4_0 }; cvar; external;
  kCFIndianCalendar: CFCalendarIdentifier { available in 10_6, 4_0 }; cvar; external;
  kCFISO8601Calendar: CFCalendarIdentifier { available in 10_6, 4_0 }; cvar; external;
  kCFIslamicTabularCalendar: CFCalendarIdentifier { available in 10_10, 8_0 }; cvar; external;
  kCFIslamicUmmAlQuraCalendar: CFCalendarIdentifier { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$endif}
