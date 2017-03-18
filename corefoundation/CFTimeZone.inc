{ Parsed from CoreFoundation.framework CFTimeZone.h }

{$if  not (defined(__COREFOUNDATION_CFTIMEZONE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFTIMEZONE__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFTimeZoneGetTypeID: CFTypeID; cdecl; external;
function CFTimeZoneCopySystem: CFTimeZoneRef; cdecl; external;
procedure CFTimeZoneResetSystem; cdecl; external;
function CFTimeZoneCopyDefault: CFTimeZoneRef; cdecl; external;
procedure CFTimeZoneSetDefault(tz: CFTimeZoneRef); cdecl; external;
function CFTimeZoneCopyKnownNames: CFArrayRef; cdecl; external;
function CFTimeZoneCopyAbbreviationDictionary: CFDictionaryRef; cdecl; external;
procedure CFTimeZoneSetAbbreviationDictionary(dict: CFDictionaryRef); cdecl; external;
function CFTimeZoneCreate(allocator: CFAllocatorRef; name: CFStringRef; data: CFDataRef): CFTimeZoneRef; cdecl; external;
function CFTimeZoneCreateWithTimeIntervalFromGMT(allocator: CFAllocatorRef; ti: CFTimeInterval): CFTimeZoneRef; cdecl; external;
function CFTimeZoneCreateWithName(allocator: CFAllocatorRef; name: CFStringRef; tryAbbrev: Boolean): CFTimeZoneRef; cdecl; external;
function CFTimeZoneGetName(tz: CFTimeZoneRef): CFStringRef; cdecl; external;
function CFTimeZoneGetData(tz: CFTimeZoneRef): CFDataRef; cdecl; external;
function CFTimeZoneGetSecondsFromGMT(tz: CFTimeZoneRef; at: CFAbsoluteTime): CFTimeInterval; cdecl; external;
function CFTimeZoneCopyAbbreviation(tz: CFTimeZoneRef; at: CFAbsoluteTime): CFStringRef; cdecl; external;
function CFTimeZoneIsDaylightSavingTime(tz: CFTimeZoneRef; at: CFAbsoluteTime): Boolean; cdecl; external;
function CFTimeZoneGetDaylightSavingTimeOffset(tz: CFTimeZoneRef; at: CFAbsoluteTime): CFTimeInterval; cdecl; external; { available in 10_5, 2_0 }
function CFTimeZoneGetNextDaylightSavingTimeTransition(tz: CFTimeZoneRef; at: CFAbsoluteTime): CFAbsoluteTime; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$ifdef TYPES}
type
  CFTimeZoneNameStyle = CFIndex;
  CFTimeZoneNameStylePtr = ^CFTimeZoneNameStyle;

const
  kCFTimeZoneNameStyleStandard = 0;
  kCFTimeZoneNameStyleShortStandard = 1;
  kCFTimeZoneNameStyleDaylightSaving = 2;
  kCFTimeZoneNameStyleShortDaylightSaving = 3;
  kCFTimeZoneNameStyleGeneric = 4;
  kCFTimeZoneNameStyleShortGeneric = 5;
{$endif}

{$ifdef FUNCTIONS}
function CFTimeZoneCopyLocalizedName(tz: CFTimeZoneRef; style: CFTimeZoneNameStyle; locale: CFLocaleRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTimeZoneSystemTimeZoneDidChangeNotification: CFNotificationName { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$endif}
