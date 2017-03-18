{ Parsed from UserNotifications.framework UNNotificationTrigger.h }

{$ifdef TYPES}
type
  UNNotificationTriggerPtr = ^UNNotificationTrigger;
  UNPushNotificationTriggerPtr = ^UNPushNotificationTrigger;
  UNTimeIntervalNotificationTriggerPtr = ^UNTimeIntervalNotificationTrigger;
  UNCalendarNotificationTriggerPtr = ^UNCalendarNotificationTrigger;
  UNLocationNotificationTriggerPtr = ^UNLocationNotificationTrigger;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationTrigger = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function repeats: boolean; message 'repeats';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UNPushNotificationTrigger = objcclass external (UNNotificationTrigger)
  end;

type
  UNTimeIntervalNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function timeInterval: NSTimeInterval; message 'timeInterval';
    class function triggerWithTimeInterval_repeats (timeInterval_: NSTimeInterval; repeats_: boolean): instancetype; message 'triggerWithTimeInterval:repeats:';
    function nextTriggerDate: nullable NSDatePtr; message 'nextTriggerDate';
  end;

type
  UNCalendarNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function dateComponents: NSDateComponents; message 'dateComponents';
    class function triggerWithDateMatchingComponents_repeats (dateComponents_: NSDateComponents; repeats_: boolean): instancetype; message 'triggerWithDateMatchingComponents:repeats:';
    function nextTriggerDate: nullable NSDatePtr; message 'nextTriggerDate';
  end;

type
  UNLocationNotificationTrigger = objcclass external (UNNotificationTrigger)
  public
    function region: CLRegion; message 'region';
    class function triggerWithRegion_repeats (region_: CLRegion; repeats_: boolean): instancetype; message 'triggerWithRegion:repeats:';
  end;
{$endif}

