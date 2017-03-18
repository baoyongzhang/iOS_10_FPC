{ Parsed from CloudKit.framework CKNotification.h }

{$ifdef TYPES}
type
  CKNotificationIDPtr = ^CKNotificationID;
  CKNotificationPtr = ^CKNotification;
  CKQueryNotificationPtr = ^CKQueryNotification;
  CKRecordZoneNotificationPtr = ^CKRecordZoneNotification;
  CKDatabaseNotificationPtr = ^CKDatabaseNotification;
{$endif}

{$ifdef CLASSES}

type
  CKNotificationID = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CKNotificationType = NSInteger;
  CKNotificationTypePtr = ^CKNotificationType;

const
  CKNotificationTypeQuery = 1;
  CKNotificationTypeRecordZone = 2;
  CKNotificationTypeReadNotification = 3;
  CKNotificationTypeDatabase = 4 { available in 10_12, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  CKNotification = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    class function notificationFromRemoteNotificationDictionary (notificationDictionary: NSDictionary): instancetype; message 'notificationFromRemoteNotificationDictionary:';
    function notificationType: CKNotificationType; message 'notificationType';
    function notificationID: CKNotificationID; message 'notificationID';
    function containerIdentifier: NSString; message 'containerIdentifier';
    function isPruned: boolean; message 'isPruned';
    function __TVOS_PROHIBITED_: NSString *alertBody; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: NSString *alertLocalizationKey; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: NSString *Protocol *alertLocalizationArgs; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: NSString *alertActionLocalizationKey; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: NSString *alertLaunchImage; message 'TVOS_PROHIBITED';
    function badge: NSNumber; message 'badge';
    function __TVOS_PROHIBITED_____: NSString *soundName; message 'TVOS_PROHIBITED';
    function subscriptionID: NSString; message 'subscriptionID';
    function __TVOS_PROHIBITED______: NSString *category; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef TYPES}
type
  CKQueryNotificationReason = NSInteger;
  CKQueryNotificationReasonPtr = ^CKQueryNotificationReason;

const
  CKQueryNotificationReasonRecordCreated = 1;
  CKQueryNotificationReasonRecordUpdated = 2;
  CKQueryNotificationReasonRecordDeleted = 3;
{$endif}

{$ifdef CLASSES}

type
  CKQueryNotification = objcclass external (CKNotification)
  public
    function queryNotificationReason: CKQueryNotificationReason; message 'queryNotificationReason';
    function recordFields: NSDictionary; message 'recordFields';
    function recordID: CKRecordID; message 'recordID';
    function isPublicDatabase: boolean; message 'isPublicDatabase';
    function databaseScope: CKDatabaseScope; message 'databaseScope';
  end;

type
  CKRecordZoneNotification = objcclass external (CKNotification)
  public
    function recordZoneID: CKRecordZoneID; message 'recordZoneID';
    function databaseScope: CKDatabaseScope; message 'databaseScope';
  end;

type
  CKDatabaseNotification = objcclass external (CKNotification)
  public
    function databaseScope: CKDatabaseScope; message 'databaseScope';
  end;
{$endif}

