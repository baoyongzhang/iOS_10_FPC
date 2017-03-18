{ Parsed from Foundation.framework NSDateInterval.h }

{$ifdef TYPES}
type
  NSDateIntervalPtr = ^NSDateInterval;
{$endif}

{$ifdef CLASSES}

type
  NSDateInterval = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function duration: NSTimeInterval; message 'duration';
    function init: instancetype; message 'init';
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithStartDate_duration (startDate_: NSDate; duration_: NSTimeInterval): instancetype; message 'initWithStartDate:duration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithStartDate_endDate (startDate_: NSDate; endDate_: NSDate): instancetype; message 'initWithStartDate:endDate:';
    function compare (dateInterval: NSDateInterval): NSComparisonResult; message 'compare:';
    function isEqualToDateInterval (dateInterval: NSDateInterval): boolean; message 'isEqualToDateInterval:';
    function intersectsDateInterval (dateInterval: NSDateInterval): boolean; message 'intersectsDateInterval:';
    function intersectionWithDateInterval (dateInterval: NSDateInterval): nullable NSDateIntervalPtr; message 'intersectionWithDateInterval:';
    function containsDate (date: NSDate): boolean; message 'containsDate:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

