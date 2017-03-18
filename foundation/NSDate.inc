{ Parsed from Foundation.framework NSDate.h }

{ Types from NSExtendedDate }
{$ifdef TYPES}

{$endif}


{ Types from NSDateCreation }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSDatePtr = ^NSDate;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSystemClockDidChangeNotification: NSNotificationName { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTimeInterval = double;
  NSTimeIntervalPtr = ^NSTimeInterval;

const
  NSTimeIntervalSince1970 = 978307200.0;
{$endif}

{$ifdef CLASSES}

type
  NSDate = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function timeIntervalSinceReferenceDate: NSTimeInterval; message 'timeIntervalSinceReferenceDate';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithTimeIntervalSinceReferenceDate (ti: NSTimeInterval): instancetype; message 'initWithTimeIntervalSinceReferenceDate:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSExtendedDate = objccategory external (NSDate)
    function timeIntervalSinceDate (anotherDate: NSDate): NSTimeInterval; message 'timeIntervalSinceDate:';
    function timeIntervalSinceNow: NSTimeInterval; message 'timeIntervalSinceNow';
    function timeIntervalSince1970: NSTimeInterval; message 'timeIntervalSince1970';
    function addTimeInterval (seconds: NSTimeInterval): id; message 'addTimeInterval:'; deprecated 'in 10_0, 10_6, 2_0, 4_0';
    function dateByAddingTimeInterval (ti: NSTimeInterval): instancetype; message 'dateByAddingTimeInterval:'; { available in 10_6, 2_0 }
    function earlierDate (anotherDate: NSDate): NSDate; message 'earlierDate:';
    function laterDate (anotherDate: NSDate): NSDate; message 'laterDate:';
    function compare (other: NSDate): NSComparisonResult; message 'compare:';
    function isEqualToDate (otherDate: NSDate): boolean; message 'isEqualToDate:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function timeIntervalSinceReferenceDate: NSTimeInterval; message 'timeIntervalSinceReferenceDate';
    {$endif}
  end;

type
  NSDateCreation = objccategory external (NSDate)
    class function date: instancetype; message 'date';
    class function dateWithTimeIntervalSinceNow (secs: NSTimeInterval): instancetype; message 'dateWithTimeIntervalSinceNow:';
    class function dateWithTimeIntervalSinceReferenceDate (ti: NSTimeInterval): instancetype; message 'dateWithTimeIntervalSinceReferenceDate:';
    class function dateWithTimeIntervalSince1970 (secs: NSTimeInterval): instancetype; message 'dateWithTimeIntervalSince1970:';
    class function dateWithTimeInterval_sinceDate (secsToBeAdded: NSTimeInterval; date_: NSDate): instancetype; message 'dateWithTimeInterval:sinceDate:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function distantFuture: NSDate; message 'distantFuture';
    function distantPast: NSDate; message 'distantPast';
    {$endif}
    function initWithTimeIntervalSinceNow (secs: NSTimeInterval): instancetype; message 'initWithTimeIntervalSinceNow:';
    function initWithTimeIntervalSince1970 (secs: NSTimeInterval): instancetype; message 'initWithTimeIntervalSince1970:';
    function initWithTimeInterval_sinceDate (secsToBeAdded: NSTimeInterval; date_: NSDate): instancetype; message 'initWithTimeInterval:sinceDate:';
  end;
{$endif}

