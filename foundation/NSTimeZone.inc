{ Parsed from Foundation.framework NSTimeZone.h }

{ Types from NSExtendedTimeZone }
{$ifdef TYPES}



type
  NSTimeZoneNameStyle = NSInteger;
type
  NSTimeZoneNameStylePtr = ^NSTimeZoneNameStyle;

const
  NSTimeZoneNameStyleStandard = 0;
  NSTimeZoneNameStyleShortStandard = 1;
  NSTimeZoneNameStyleDaylightSaving = 2;
  NSTimeZoneNameStyleShortDaylightSaving = 3;
  NSTimeZoneNameStyleGeneric = 4;
  NSTimeZoneNameStyleShortGeneric = 5;
{$endif}


{$ifdef TYPES}
type
  NSTimeZonePtr = ^NSTimeZone;
{$endif}

{$ifdef CLASSES}

type
  NSTimeZone = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function name: NSString; message 'name';
    function data: NSData; message 'data';
    function secondsFromGMTForDate (aDate: NSDate): NSInteger; message 'secondsFromGMTForDate:';
    function abbreviationForDate (aDate: NSDate): nullable NSStringPtr; message 'abbreviationForDate:';
    function isDaylightSavingTimeForDate (aDate: NSDate): boolean; message 'isDaylightSavingTimeForDate:';
    function daylightSavingTimeOffsetForDate (aDate: NSDate): NSTimeInterval; message 'daylightSavingTimeOffsetForDate:'; { available in 10_5, 2_0 }
    function nextDaylightSavingTimeTransitionAfterDate (aDate: NSDate): nullable NSDatePtr; message 'nextDaylightSavingTimeTransitionAfterDate:'; { available in 10_5, 2_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSExtendedTimeZone = objccategory external (NSTimeZone)
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function systemTimeZone: NSTimeZone; message 'systemTimeZone';
    {$endif}
    class procedure resetSystemTimeZone; message 'resetSystemTimeZone';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    procedure setDefaultTimeZone(newValue: NSTimeZone); message 'setDefaultTimeZone:';
    function defaultTimeZone: NSTimeZone; message 'defaultTimeZone';
    function localTimeZone: NSTimeZone; message 'localTimeZone';
    function knownTimeZoneNames: NSString *ProtocolPtr; message 'knownTimeZoneNames';
    procedure setAbbreviationDictionary(newValue: NSDictionary); message 'setAbbreviationDictionary:';
    function abbreviationDictionary: NSDictionary; message 'abbreviationDictionary';
    class function abbreviationDictionary: NSDictionary; message 'abbreviationDictionary';
    function timeZoneDataVersion: NSString; message 'timeZoneDataVersion';
    {$endif}
    function secondsFromGMT: NSInteger; message 'secondsFromGMT';
    function abbreviation: NSString; message 'abbreviation';
    function isDaylightSavingTime: boolean; message 'isDaylightSavingTime';
    function daylightSavingTimeOffset: NSTimeInterval; message 'daylightSavingTimeOffset';
    function nextDaylightSavingTimeTransition: NSDate; message 'nextDaylightSavingTimeTransition';
    function description: NSString; message 'description';
    function isEqualToTimeZone (aTimeZone: NSTimeZone): boolean; message 'isEqualToTimeZone:';
    function localizedName_locale (style: NSTimeZoneNameStyle; locale: nullable NSLocalePtr): nullable NSStringPtr; message 'localizedName:locale:'; { available in 10_5, 2_0 }
  end;

type
  NSTimeZoneCreation = objccategory external (NSTimeZone)
    class function timeZoneWithName (tzName: NSString): nullable instancetype; message 'timeZoneWithName:';
    class function timeZoneWithName_data (tzName: NSString; aData: nullable NSDataPtr): nullable instancetype; message 'timeZoneWithName:data:';
    function initWithName (tzName: NSString): nullable instancetype; message 'initWithName:';
    function initWithName_data (tzName: NSString; aData: nullable NSDataPtr): nullable instancetype; message 'initWithName:data:';
    class function timeZoneForSecondsFromGMT (seconds: NSInteger): instancetype; message 'timeZoneForSecondsFromGMT:';
    class function timeZoneWithAbbreviation (abbreviation: NSString): nullable instancetype; message 'timeZoneWithAbbreviation:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSystemTimeZoneDidChangeNotification: NSNotificationName { available in 10_5, 2_0 }; cvar; external;
{$endif}

