{ Parsed from Foundation.framework NSISO8601DateFormatter.h }

{$ifdef TYPES}
type
  NSISO8601DateFormatterPtr = ^NSISO8601DateFormatter;
{$endif}

{$ifdef TYPES}
type
  NSISO8601DateFormatOptions = NSUInteger;
  NSISO8601DateFormatOptionsPtr = ^NSISO8601DateFormatOptions;
{$endif}

{$ifdef CLASSES}

type
  NSISO8601DateFormatter = objcclass external (NSFormatter, NSSecureCodingProtocol)
  private
    _formatter: CFDateFormatterRef;
    _timeZone: NSTimeZone;
    _formatOptions: NSISO8601DateFormatOptions;
  public
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setFormatOptions(newValue: NSISO8601DateFormatOptions); message 'setFormatOptions:';
    function formatOptions: NSISO8601DateFormatOptions; message 'formatOptions';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function stringFromDate (date: NSDate): NSString; message 'stringFromDate:';
    function dateFromString (string_: NSString): nullable NSDatePtr; message 'dateFromString:';
    class function stringFromDate_timeZone_formatOptions (date: NSDate; timeZone_: NSTimeZone; formatOptions_: NSISO8601DateFormatOptions): NSString; message 'stringFromDate:timeZone:formatOptions:';

    { Adopted protocols }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

