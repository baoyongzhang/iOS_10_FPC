{ Parsed from UserNotifications.framework UNNotificationContent.h }

{$ifdef TYPES}
type
  UNNotificationContentPtr = ^UNNotificationContent;
  UNMutableNotificationContentPtr = ^UNMutableNotificationContent;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationContent = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function __TVOS_PROHIBITED_: UNNotificationAttachment *Protocol *attachments; message 'TVOS_PROHIBITED';
    function badge: NSNumber; message 'badge';
    function __TVOS_PROHIBITED_: NSString *body; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: NSString *categoryIdentifier; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: NSString *launchImageName; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: UNNotificationSound *sound; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_____: NSString *subtitle; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED______: NSString *threadIdentifier; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_______: NSString *title; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED________: NSDictionary *userInfo; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UNMutableNotificationContent = objcclass external (UNNotificationContent)
  public
    procedure set__TVOS_PROHIBITED(newValue: UNNotificationAttachment *Protocol *attachments); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UNNotificationAttachment *Protocol *attachments; message 'TVOS_PROHIBITED';
    procedure setBadge(newValue: NSNumber); message 'setBadge:';
    function badge: NSNumber; message 'badge';
    procedure set__TVOS_PROHIBITED_(newValue: NSString *body); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSString *body; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: NSString *categoryIdentifier); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: NSString *categoryIdentifier; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: NSString *launchImageName); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: NSString *launchImageName; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: UNNotificationSound *sound); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: UNNotificationSound *sound; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_____(newValue: NSString *subtitle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_____: NSString *subtitle; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED______(newValue: NSString *threadIdentifier); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: NSString *threadIdentifier; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_______(newValue: NSString *title); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_______: NSString *title; message 'TVOS_PROHIBITED';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
  end;
{$endif}

