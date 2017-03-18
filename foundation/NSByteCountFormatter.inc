{ Parsed from Foundation.framework NSByteCountFormatter.h }

{$ifdef TYPES}
type
  NSByteCountFormatterPtr = ^NSByteCountFormatter;
{$endif}

{$ifdef TYPES}
type
  NSByteCountFormatterUnits = NSUInteger;
  NSByteCountFormatterUnitsPtr = ^NSByteCountFormatterUnits;

const
  NSByteCountFormatterUseDefault = 0;
  NSByteCountFormatterUseBytes = 1 shl 0;
  NSByteCountFormatterUseKB = 1 shl 1;
  NSByteCountFormatterUseMB = 1 shl 2;
  NSByteCountFormatterUseGB = 1 shl 3;
  NSByteCountFormatterUseTB = 1 shl 4;
  NSByteCountFormatterUsePB = 1 shl 5;
  NSByteCountFormatterUseEB = 1 shl 6;
  NSByteCountFormatterUseZB = 1 shl 7;
  NSByteCountFormatterUseYBOrHigher = $0FF shl 8;
  NSByteCountFormatterUseAll = $0FFFF;

type
  NSByteCountFormatterCountStyle = NSInteger;
  NSByteCountFormatterCountStylePtr = ^NSByteCountFormatterCountStyle;

const
  NSByteCountFormatterCountStyleFile = 0;
  NSByteCountFormatterCountStyleMemory = 1;
  NSByteCountFormatterCountStyleDecimal = 2;
  NSByteCountFormatterCountStyleBinary = 3;
{$endif}

{$ifdef CLASSES}

type
  NSByteCountFormatter = objcclass external (NSFormatter)
  private
    _allowedUnits: cuint;
    _countStyle: char;
    _allowsNonnumericFormatting, _includesUnit, _includesCount, _includesActualByteCount, _adaptive, _zeroPadsFractionDigits: boolean;
    _formattingContext: cint;
    _reserved:array[0..4] of cint;
  public
    class function stringFromByteCount_countStyle (byteCount: clonglong; countStyle: NSByteCountFormatterCountStyle): NSString; message 'stringFromByteCount:countStyle:';
    function stringFromByteCount (byteCount: clonglong): NSString; message 'stringFromByteCount:';
    procedure setAllowedUnits(newValue: NSByteCountFormatterUnits); message 'setAllowedUnits:';
    function allowedUnits: NSByteCountFormatterUnits; message 'allowedUnits';
    procedure setCountStyle(newValue: NSByteCountFormatterCountStyle); message 'setCountStyle:';
    function countStyle: NSByteCountFormatterCountStyle; message 'countStyle';
    procedure setAllowsNonnumericFormatting(newValue: boolean); message 'setAllowsNonnumericFormatting:';
    function allowsNonnumericFormatting: boolean; message 'allowsNonnumericFormatting';
    procedure setIncludesUnit(newValue: boolean); message 'setIncludesUnit:';
    function includesUnit: boolean; message 'includesUnit';
    procedure setIncludesCount(newValue: boolean); message 'setIncludesCount:';
    function includesCount: boolean; message 'includesCount';
    procedure setIncludesActualByteCount(newValue: boolean); message 'setIncludesActualByteCount:';
    function includesActualByteCount: boolean; message 'includesActualByteCount';
    procedure setAdaptive(newValue: boolean); message 'setAdaptive:';
    function isAdaptive: boolean; message 'isAdaptive';
    procedure setZeroPadsFractionDigits(newValue: boolean); message 'setZeroPadsFractionDigits:';
    function zeroPadsFractionDigits: boolean; message 'zeroPadsFractionDigits';
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:';
    function formattingContext: NSFormattingContext; message 'formattingContext';
  end;
{$endif}

