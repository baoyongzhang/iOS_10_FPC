{ Parsed from Foundation.framework NSDateFormatter.h }

{ Types from NSDateFormatter }
{$ifdef TYPES}

type
  NSDateFormatterStyle = NSUInteger;
type
  NSDateFormatterStylePtr = ^NSDateFormatterStyle;

const
  NSDateFormatterNoStyle = kCFDateFormatterNoStyle;
  NSDateFormatterShortStyle = kCFDateFormatterShortStyle;
  NSDateFormatterMediumStyle = kCFDateFormatterMediumStyle;
  NSDateFormatterLongStyle = kCFDateFormatterLongStyle;
  NSDateFormatterFullStyle = kCFDateFormatterFullStyle;

type
  NSDateFormatterBehavior = NSUInteger;
type
  NSDateFormatterBehaviorPtr = ^NSDateFormatterBehavior;

const
  NSDateFormatterBehaviorDefault = 0;
  {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
  NSDateFormatterBehavior10_0 = 1000;
  {$endif}
  NSDateFormatterBehavior10_4 = 1040;

{$endif}


{$ifdef TYPES}
type
  NSDateFormatterPtr = ^NSDateFormatter;
{$endif}

{$ifdef CLASSES}

type
  NSDateFormatter = objcclass external (NSFormatter)
  private
    _attributes: NSMutableDictionary;
    _formatter: CFDateFormatterRef;
    _counter: NSUInteger;
  public
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:';
    function formattingContext: NSFormattingContext; message 'formattingContext';
    function getObjectValue_forString_range_error (obj: id _Nullable * _Nullable; string_: NSString; rangep: nullable NSRangePtr; error: NSErrorPtr): boolean; message 'getObjectValue:forString:range:error:';
    function stringFromDate (date: NSDate): NSString; message 'stringFromDate:';
    function dateFromString (string_: NSString): nullable NSDatePtr; message 'dateFromString:';
    class function localizedStringFromDate_dateStyle_timeStyle (date: NSDate; dstyle: NSDateFormatterStyle; tstyle: NSDateFormatterStyle): NSString; message 'localizedStringFromDate:dateStyle:timeStyle:'; { available in 10_6, 4_0 }
    class function dateFormatFromTemplate_options_locale (tmplate: NSString; opts: NSUInteger; locale: nullable NSLocalePtr): nullable NSStringPtr; message 'dateFormatFromTemplate:options:locale:'; { available in 10_6, 4_0 }
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    procedure setDefaultFormatterBehavior(newValue: NSDateFormatterBehavior); message 'setDefaultFormatterBehavior:';
    function defaultFormatterBehavior: NSDateFormatterBehavior; message 'defaultFormatterBehavior';
    {$endif}
    procedure setLocalizedDateFormatFromTemplate (dateFormatTemplate: NSString); message 'setLocalizedDateFormatFromTemplate:'; { available in 10_10, 8_0 }
    procedure setDateFormat(newValue: NSString); message 'setDateFormat:';
    function dateFormat: NSString; message 'dateFormat';
    procedure setDateStyle(newValue: NSDateFormatterStyle); message 'setDateStyle:';
    function dateStyle: NSDateFormatterStyle; message 'dateStyle';
    procedure setTimeStyle(newValue: NSDateFormatterStyle); message 'setTimeStyle:';
    function timeStyle: NSDateFormatterStyle; message 'timeStyle';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setGeneratesCalendarDates(newValue: boolean); message 'setGeneratesCalendarDates:';
    function generatesCalendarDates: boolean; message 'generatesCalendarDates';
    procedure setFormatterBehavior(newValue: NSDateFormatterBehavior); message 'setFormatterBehavior:';
    function formatterBehavior: NSDateFormatterBehavior; message 'formatterBehavior';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setLenient(newValue: boolean); message 'setLenient:';
    function isLenient: boolean; message 'isLenient';
    procedure setTwoDigitStartDate(newValue: NSDate); message 'setTwoDigitStartDate:';
    function twoDigitStartDate: NSDate; message 'twoDigitStartDate';
    procedure setDefaultDate(newValue: NSDate); message 'setDefaultDate:';
    function defaultDate: NSDate; message 'defaultDate';
    procedure setEraSymbols(newValue: NSString *ProtocolPtr); message 'setEraSymbols:';
    function eraSymbols: NSString *ProtocolPtr; message 'eraSymbols';
    procedure setMonthSymbols(newValue: NSString *ProtocolPtr); message 'setMonthSymbols:';
    function monthSymbols: NSString *ProtocolPtr; message 'monthSymbols';
    procedure setShortMonthSymbols(newValue: NSString *ProtocolPtr); message 'setShortMonthSymbols:';
    function shortMonthSymbols: NSString *ProtocolPtr; message 'shortMonthSymbols';
    procedure setWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setWeekdaySymbols:';
    function weekdaySymbols: NSString *ProtocolPtr; message 'weekdaySymbols';
    procedure setShortWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setShortWeekdaySymbols:';
    function shortWeekdaySymbols: NSString *ProtocolPtr; message 'shortWeekdaySymbols';
    procedure setAMSymbol(newValue: NSString); message 'setAMSymbol:';
    function AMSymbol: NSString; message 'AMSymbol';
    procedure setPMSymbol(newValue: NSString); message 'setPMSymbol:';
    function PMSymbol: NSString; message 'PMSymbol';
    procedure setLongEraSymbols(newValue: NSString *ProtocolPtr); message 'setLongEraSymbols:';
    function longEraSymbols: NSString *ProtocolPtr; message 'longEraSymbols';
    procedure setVeryShortMonthSymbols(newValue: NSString *ProtocolPtr); message 'setVeryShortMonthSymbols:';
    function veryShortMonthSymbols: NSString *ProtocolPtr; message 'veryShortMonthSymbols';
    procedure setStandaloneMonthSymbols(newValue: NSString *ProtocolPtr); message 'setStandaloneMonthSymbols:';
    function standaloneMonthSymbols: NSString *ProtocolPtr; message 'standaloneMonthSymbols';
    procedure setShortStandaloneMonthSymbols(newValue: NSString *ProtocolPtr); message 'setShortStandaloneMonthSymbols:';
    function shortStandaloneMonthSymbols: NSString *ProtocolPtr; message 'shortStandaloneMonthSymbols';
    procedure setVeryShortStandaloneMonthSymbols(newValue: NSString *ProtocolPtr); message 'setVeryShortStandaloneMonthSymbols:';
    function veryShortStandaloneMonthSymbols: NSString *ProtocolPtr; message 'veryShortStandaloneMonthSymbols';
    procedure setVeryShortWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setVeryShortWeekdaySymbols:';
    function veryShortWeekdaySymbols: NSString *ProtocolPtr; message 'veryShortWeekdaySymbols';
    procedure setStandaloneWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setStandaloneWeekdaySymbols:';
    function standaloneWeekdaySymbols: NSString *ProtocolPtr; message 'standaloneWeekdaySymbols';
    procedure setShortStandaloneWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setShortStandaloneWeekdaySymbols:';
    function shortStandaloneWeekdaySymbols: NSString *ProtocolPtr; message 'shortStandaloneWeekdaySymbols';
    procedure setVeryShortStandaloneWeekdaySymbols(newValue: NSString *ProtocolPtr); message 'setVeryShortStandaloneWeekdaySymbols:';
    function veryShortStandaloneWeekdaySymbols: NSString *ProtocolPtr; message 'veryShortStandaloneWeekdaySymbols';
    procedure setQuarterSymbols(newValue: NSString *ProtocolPtr); message 'setQuarterSymbols:';
    function quarterSymbols: NSString *ProtocolPtr; message 'quarterSymbols';
    procedure setShortQuarterSymbols(newValue: NSString *ProtocolPtr); message 'setShortQuarterSymbols:';
    function shortQuarterSymbols: NSString *ProtocolPtr; message 'shortQuarterSymbols';
    procedure setStandaloneQuarterSymbols(newValue: NSString *ProtocolPtr); message 'setStandaloneQuarterSymbols:';
    function standaloneQuarterSymbols: NSString *ProtocolPtr; message 'standaloneQuarterSymbols';
    procedure setShortStandaloneQuarterSymbols(newValue: NSString *ProtocolPtr); message 'setShortStandaloneQuarterSymbols:';
    function shortStandaloneQuarterSymbols: NSString *ProtocolPtr; message 'shortStandaloneQuarterSymbols';
    procedure setGregorianStartDate(newValue: NSDate); message 'setGregorianStartDate:';
    function gregorianStartDate: NSDate; message 'gregorianStartDate';
    procedure setDoesRelativeDateFormatting(newValue: boolean); message 'setDoesRelativeDateFormatting:';
    function doesRelativeDateFormatting: boolean; message 'doesRelativeDateFormatting';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSDateFormatterCompatibility = objccategory external (NSDateFormatter)
    function initWithDateFormat_allowNaturalLanguage (format: NSString; flag: boolean): id; message 'initWithDateFormat:allowNaturalLanguage:'; deprecated 'in 10_4, 10_9, "Use -setDateFormat: as of OS X 10.9 to set the date format of a 10.0-style date formatter; but expect 10.0-style date formatting to be deprecated in the future as well"';
    function allowsNaturalLanguage: boolean; message 'allowsNaturalLanguage'; deprecated 'in 10_4, 10_9, "There is no replacement"';
  end;
{$endif}

{$endif}
