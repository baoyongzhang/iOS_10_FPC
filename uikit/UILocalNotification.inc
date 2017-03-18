{ Parsed from UIKit.framework UILocalNotification.h }

{$ifdef TYPES}
type
  UILocalNotificationPtr = ^UILocalNotification;
{$endif}

{$ifdef CLASSES}

type
  UILocalNotification = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setFireDate(newValue: NSDate); message 'setFireDate:';
    function fireDate: NSDate; message 'fireDate';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setRepeatInterval(newValue: NSCalendarUnit); message 'setRepeatInterval:';
    function repeatInterval: NSCalendarUnit; message 'repeatInterval';
    procedure setRepeatCalendar(newValue: NSCalendar); message 'setRepeatCalendar:';
    function repeatCalendar: NSCalendar; message 'repeatCalendar';
    procedure setRegion(newValue: CLRegion); message 'setRegion:';
    function region: CLRegion; message 'region';
    procedure setRegionTriggersOnce(newValue: boolean); message 'setRegionTriggersOnce:';
    function regionTriggersOnce: boolean; message 'regionTriggersOnce';
    procedure setAlertBody(newValue: NSString); message 'setAlertBody:';
    function alertBody: NSString; message 'alertBody';
    procedure setHasAction(newValue: boolean); message 'setHasAction:';
    function hasAction: boolean; message 'hasAction';
    procedure setAlertAction(newValue: NSString); message 'setAlertAction:';
    function alertAction: NSString; message 'alertAction';
    procedure setAlertLaunchImage(newValue: NSString); message 'setAlertLaunchImage:';
    function alertLaunchImage: NSString; message 'alertLaunchImage';
    procedure setAlertTitle(newValue: NSString); message 'setAlertTitle:';
    function alertTitle: NSString; message 'alertTitle';
    procedure setSoundName(newValue: NSString); message 'setSoundName:';
    function soundName: NSString; message 'soundName';
    procedure setApplicationIconBadgeNumber(newValue: NSInteger); message 'setApplicationIconBadgeNumber:';
    function applicationIconBadgeNumber: NSInteger; message 'applicationIconBadgeNumber';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UILocalNotificationDefaultSoundName deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's +[UNNotificationSound defaultSound]"'; cvar; external;
{$endif}

