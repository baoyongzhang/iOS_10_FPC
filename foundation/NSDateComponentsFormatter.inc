{ Parsed from Foundation.framework NSDateComponentsFormatter.h }

{$ifdef TYPES}
type
  NSDateComponentsFormatterPtr = ^NSDateComponentsFormatter;
{$endif}

{$ifdef TYPES}
type
  NSDateComponentsFormatterUnitsStyle = NSInteger;
  NSDateComponentsFormatterUnitsStylePtr = ^NSDateComponentsFormatterUnitsStyle;

const
  NSDateComponentsFormatterUnitsStylePositional = 0;
  NSDateComponentsFormatterUnitsStyleAbbreviated = 1;
  NSDateComponentsFormatterUnitsStyleShort = 2;
  NSDateComponentsFormatterUnitsStyleFull = 3;
  NSDateComponentsFormatterUnitsStyleSpellOut = 4;
  NSDateComponentsFormatterUnitsStyleBrief = 5 { available in macosx(10.12 };

type
  NSDateComponentsFormatterZeroFormattingBehavior = NSUInteger;
  NSDateComponentsFormatterZeroFormattingBehaviorPtr = ^NSDateComponentsFormatterZeroFormattingBehavior;

const
  NSDateComponentsFormatterZeroFormattingBehaviorNone = 0;
  NSDateComponentsFormatterZeroFormattingBehaviorDefault = 1 shl 0;
  NSDateComponentsFormatterZeroFormattingBehaviorDropLeading = 1 shl 1;
  NSDateComponentsFormatterZeroFormattingBehaviorDropMiddle = 1 shl 2;
  NSDateComponentsFormatterZeroFormattingBehaviorDropTrailing = 1 shl 3;
  NSDateComponentsFormatterZeroFormattingBehaviorDropAll = NSDateComponentsFormatterZeroFormattingBehaviorDropLeading + NSDateComponentsFormatterZeroFormattingBehaviorDropMiddle + NSDateComponentsFormatterZeroFormattingBehaviorDropTrailing;
  NSDateComponentsFormatterZeroFormattingBehaviorPad = 1 shl 16;
{$endif}

{$ifdef CLASSES}

type
  NSDateComponentsFormatter = objcclass external (NSFormatter)
  private
    _lock: pthread_mutex_t;
    _fmt: pointer;
    _unused: pointer;
    _fmtLocaleIdent: NSString;
    _calendar: NSCalendar;
    _referenceDate: NSDate;
    _unitFormatter: NSNumberFormatter;
    _allowedUnits: NSCalendarUnit;
    _formattingContext: NSFormattingContext;
    _unitsStyle: NSDateComponentsFormatterUnitsStyle;
    _zeroFormattingBehavior: NSDateComponentsFormatterZeroFormattingBehavior;
    _maximumUnitCount: NSInteger;
    _allowsFractionalUnits: boolean;
    _collapsesLargestUnit: boolean;
    _includesApproximationPhrase: boolean;
    _includesTimeRemainingPhrase: boolean;
    _reserved: pointer;
  public
    function stringForObjectValue (obj: nullable id): nullable NSStringPtr; message 'stringForObjectValue:';
    function stringFromDateComponents (components: NSDateComponents): nullable NSStringPtr; message 'stringFromDateComponents:';
    function stringFromDate_toDate (startDate: NSDate; endDate: NSDate): nullable NSStringPtr; message 'stringFromDate:toDate:';
    function stringFromTimeInterval (ti: NSTimeInterval): nullable NSStringPtr; message 'stringFromTimeInterval:';
    class function localizedStringFromDateComponents_unitsStyle (components: NSDateComponents; unitsStyle: NSDateComponentsFormatterUnitsStyle): nullable NSStringPtr; message 'localizedStringFromDateComponents:unitsStyle:';
    procedure setUnitsStyle(newValue: NSDateComponentsFormatterUnitsStyle); message 'setUnitsStyle:';
    function unitsStyle: NSDateComponentsFormatterUnitsStyle; message 'unitsStyle';
    procedure setAllowedUnits(newValue: NSCalendarUnit); message 'setAllowedUnits:';
    function allowedUnits: NSCalendarUnit; message 'allowedUnits';
    procedure setZeroFormattingBehavior(newValue: NSDateComponentsFormatterZeroFormattingBehavior); message 'setZeroFormattingBehavior:';
    function zeroFormattingBehavior: NSDateComponentsFormatterZeroFormattingBehavior; message 'zeroFormattingBehavior';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setAllowsFractionalUnits(newValue: boolean); message 'setAllowsFractionalUnits:';
    function allowsFractionalUnits: boolean; message 'allowsFractionalUnits';
    procedure setMaximumUnitCount(newValue: NSInteger); message 'setMaximumUnitCount:';
    function maximumUnitCount: NSInteger; message 'maximumUnitCount';
    procedure setCollapsesLargestUnit(newValue: boolean); message 'setCollapsesLargestUnit:';
    function collapsesLargestUnit: boolean; message 'collapsesLargestUnit';
    procedure setIncludesApproximationPhrase(newValue: boolean); message 'setIncludesApproximationPhrase:';
    function includesApproximationPhrase: boolean; message 'includesApproximationPhrase';
    procedure setIncludesTimeRemainingPhrase(newValue: boolean); message 'setIncludesTimeRemainingPhrase:';
    function includesTimeRemainingPhrase: boolean; message 'includesTimeRemainingPhrase';
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:';
    function formattingContext: NSFormattingContext; message 'formattingContext';
    function getObjectValue_forString_errorDescription (obj: id _Nullable * _Nullable; string_: NSString; error: NSString * _Nullable * _Nullable): boolean; message 'getObjectValue:forString:errorDescription:';
  end;
{$endif}

