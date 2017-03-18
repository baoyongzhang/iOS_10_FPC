{ Parsed from CoreFoundation.framework CFCalendar.h }

{$if  not (defined(__COREFOUNDATION_CFCALENDAR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFCALENDAR__ = 1;

type
  CFCalendarRef = OpaqueType;
  CFCalendarIdentifier = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFCalendarGetTypeID: CFTypeID; cdecl; external;
function CFCalendarCopyCurrent: CFCalendarRef; cdecl; external;
function CFCalendarCreateWithIdentifier(allocator: CFAllocatorRef; identifier: CFCalendarIdentifier): CFCalendarRef; cdecl; external;
function CFCalendarGetIdentifier(calendar: CFCalendarRef): CFCalendarIdentifier; cdecl; external;
function CFCalendarCopyLocale(calendar: CFCalendarRef): CFLocaleRef; cdecl; external;
procedure CFCalendarSetLocale(calendar: CFCalendarRef; locale: CFLocaleRef); cdecl; external;
function CFCalendarCopyTimeZone(calendar: CFCalendarRef): CFTimeZoneRef; cdecl; external;
procedure CFCalendarSetTimeZone(calendar: CFCalendarRef; tz: CFTimeZoneRef); cdecl; external;
function CFCalendarGetFirstWeekday(calendar: CFCalendarRef): CFIndex; cdecl; external;
procedure CFCalendarSetFirstWeekday(calendar: CFCalendarRef; wkdy: CFIndex); cdecl; external;
function CFCalendarGetMinimumDaysInFirstWeek(calendar: CFCalendarRef): CFIndex; cdecl; external;
procedure CFCalendarSetMinimumDaysInFirstWeek(calendar: CFCalendarRef; mwd: CFIndex); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFCalendarUnit = CFOptionFlags;
  CFCalendarUnitPtr = ^CFCalendarUnit;

const
  kCFCalendarUnitEra = 1 shl 1;
  kCFCalendarUnitYear = 1 shl 2;
  kCFCalendarUnitMonth = 1 shl 3;
  kCFCalendarUnitDay = 1 shl 4;
  kCFCalendarUnitHour = 1 shl 5;
  kCFCalendarUnitMinute = 1 shl 6;
  kCFCalendarUnitSecond = 1 shl 7;
  kCFCalendarUnitWeek = 1 shl 8 deprecated 'in 10_4, 10_10, 2_0, 8_0';
  kCFCalendarUnitWeekday = 1 shl 9;
  kCFCalendarUnitWeekdayOrdinal = 1 shl 10;
  kCFCalendarUnitQuarter = 1 shl 11 { available in 10_6, 4_0 };
  kCFCalendarUnitWeekOfMonth = 1 shl 12 { available in 10_7, 5_0 };
  kCFCalendarUnitWeekOfYear = 1 shl 13 { available in 10_7, 5_0 };
  kCFCalendarUnitYearForWeekOfYear = 1 shl 14 { available in 10_7, 5_0 };
{$endif}

{$ifdef FUNCTIONS}
function CFCalendarGetMinimumRangeOfUnit(calendar: CFCalendarRef; unit_: CFCalendarUnit): CFRange; cdecl; external;
function CFCalendarGetMaximumRangeOfUnit(calendar: CFCalendarRef; unit_: CFCalendarUnit): CFRange; cdecl; external;
function CFCalendarGetRangeOfUnit(calendar: CFCalendarRef; smallerUnit: CFCalendarUnit; biggerUnit: CFCalendarUnit; at: CFAbsoluteTime): CFRange; cdecl; external;
function CFCalendarGetOrdinalityOfUnit(calendar: CFCalendarRef; smallerUnit: CFCalendarUnit; biggerUnit: CFCalendarUnit; at: CFAbsoluteTime): CFIndex; cdecl; external;
function CFCalendarGetTimeRangeOfUnit(calendar: CFCalendarRef; unit_: CFCalendarUnit; at: CFAbsoluteTime; var startp: CFAbsoluteTime; var tip: CFTimeInterval): Boolean; cdecl; external; { available in 10_5, 2_0 }
function CFCalendarComposeAbsoluteTime(calendar: CFCalendarRef; var at: CFAbsoluteTime; componentDesc: PChar): Boolean; varargs; cdecl; external;
function CFCalendarDecomposeAbsoluteTime(calendar: CFCalendarRef; at: CFAbsoluteTime; componentDesc: PChar): Boolean; varargs; cdecl; external;
function CFCalendarAddComponents(calendar: CFCalendarRef; var at: CFAbsoluteTime; options: CFOptionFlags; componentDesc: PChar): Boolean; varargs; cdecl; external;
function CFCalendarGetComponentDifference(calendar: CFCalendarRef; startingAT: CFAbsoluteTime; resultAT: CFAbsoluteTime; options: CFOptionFlags; componentDesc: PChar): Boolean; varargs; cdecl; external;
{$endif}

{$endif}
