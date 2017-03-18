{ Parsed from UserNotifications.framework UNNotificationSettings.h }

{$ifdef TYPES}
type
  UNNotificationSettingsPtr = ^UNNotificationSettings;
{$endif}

{$ifdef TYPES}
type
  UNAuthorizationStatus = NSInteger;
  UNAuthorizationStatusPtr = ^UNAuthorizationStatus;

const
  UNAuthorizationStatusNotDetermined = 0;
  UNAuthorizationStatusDenied = 1;
  UNAuthorizationStatusAuthorized = 2;

type
  UNNotificationSetting = NSInteger;
  UNNotificationSettingPtr = ^UNNotificationSetting;

const
  UNNotificationSettingNotSupported = 0;
  UNNotificationSettingDisabled = 1;
  UNNotificationSettingEnabled = 2;

type
  UNAlertStyle = NSInteger;
  UNAlertStylePtr = ^UNAlertStyle;

const
  UNAlertStyleNone = 0;
  UNAlertStyleBanner = 1;
  UNAlertStyleAlert = 2;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationSettings = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function authorizationStatus: UNAuthorizationStatus; message 'authorizationStatus';
    function __TVOS_PROHIBITED_: UNNotificationSetting soundSetting; message 'TVOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_: UNNotificationSetting badgeSetting; message 'WATCHOS_PROHIBITED';
    function __TVOS_PROHIBITED_: UNNotificationSetting alertSetting; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: UNNotificationSetting notificationCenterSetting; message 'TVOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_: UNNotificationSetting lockScreenSetting __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED__: UNNotificationSetting carPlaySetting __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED___: UNAlertStyle alertStyle __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

