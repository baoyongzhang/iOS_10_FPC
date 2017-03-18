{ Parsed from CloudKit.framework CKSubscription.h }

{$ifdef TYPES}
type
  CKSubscriptionPtr = ^CKSubscription;
  CKQuerySubscriptionPtr = ^CKQuerySubscription;
  CKRecordZoneSubscriptionPtr = ^CKRecordZoneSubscription;
  CKDatabaseSubscriptionPtr = ^CKDatabaseSubscription;
  CKNotificationInfoPtr = ^CKNotificationInfo;
{$endif}

{$ifdef TYPES}
type
  CKSubscriptionType = NSInteger;
  CKSubscriptionTypePtr = ^CKSubscriptionType;

const
  CKSubscriptionTypeQuery = 1;
  CKSubscriptionTypeRecordZone = 2;
  CKSubscriptionTypeDatabase = 3 { available in 10_12, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  CKSubscription = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function subscriptionID: NSString; message 'subscriptionID';
    function subscriptionType: CKSubscriptionType; message 'subscriptionType';
    procedure setNotificationInfo(newValue: CKNotificationInfo); message 'setNotificationInfo:';
    function notificationInfo: CKNotificationInfo; message 'notificationInfo';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CKQuerySubscriptionOptions = NSUInteger;
  CKQuerySubscriptionOptionsPtr = ^CKQuerySubscriptionOptions;

const
  CKQuerySubscriptionOptionsFiresOnRecordCreation = 1 shl 0;
  CKQuerySubscriptionOptionsFiresOnRecordUpdate = 1 shl 1;
  CKQuerySubscriptionOptionsFiresOnRecordDeletion = 1 shl 2;
  CKQuerySubscriptionOptionsFiresOnce = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CKQuerySubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithRecordType_predicate_options (recordType: NSString; predicate: NSPredicate; querySubscriptionOptions: CKQuerySubscriptionOptions): instancetype; message 'initWithRecordType:predicate:options:';
    function initWithRecordType_predicate_subscriptionID_options (recordType: NSString; predicate: NSPredicate; subscriptionID_: NSString; querySubscriptionOptions: CKQuerySubscriptionOptions): instancetype; message 'initWithRecordType:predicate:subscriptionID:options:'; { NS_DESIGNATED_INITIALIZER }
    function recordType: NSString; message 'recordType';
    function predicate: NSPredicate; message 'predicate';
    procedure setZoneID(newValue: CKRecordZoneID); message 'setZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
    function querySubscriptionOptions: CKQuerySubscriptionOptions; message 'querySubscriptionOptions';
  end;

type
  CKRecordZoneSubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithZoneID (zoneID: CKRecordZoneID): instancetype; message 'initWithZoneID:';
    function initWithZoneID_subscriptionID (zoneID: CKRecordZoneID; subscriptionID_: NSString): instancetype; message 'initWithZoneID:subscriptionID:'; { NS_DESIGNATED_INITIALIZER }
    function zoneID: CKRecordZoneID; message 'zoneID';
    procedure setRecordType(newValue: NSString); message 'setRecordType:';
    function recordType: NSString; message 'recordType';
  end;

type
  CKDatabaseSubscription = objcclass external (CKSubscription, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithSubscriptionID (subscriptionID_: NSString): instancetype; message 'initWithSubscriptionID:'; { NS_DESIGNATED_INITIALIZER }
    procedure setRecordType(newValue: NSString); message 'setRecordType:';
    function recordType: NSString; message 'recordType';
  end;

type
  CKNotificationInfo = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure set__TVOS_PROHIBITED(newValue: NSString *alertBody); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSString *alertBody; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: NSString *alertLocalizationKey); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSString *alertLocalizationKey; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: NSString *Protocol *alertLocalizationArgs); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: NSString *Protocol *alertLocalizationArgs; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED___(newValue: NSString *alertActionLocalizationKey); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED___: NSString *alertActionLocalizationKey; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: NSString *alertLaunchImage); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: NSString *alertLaunchImage; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_____(newValue: NSString *soundName); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_____: NSString *soundName; message 'TVOS_PROHIBITED';
    procedure setDesiredKeys(newValue: NSString *ProtocolPtr); message 'setDesiredKeys:';
    function desiredKeys: NSString *ProtocolPtr; message 'desiredKeys';
    procedure setShouldBadge(newValue: boolean); message 'setShouldBadge:';
    function shouldBadge: boolean; message 'shouldBadge';
    procedure setShouldSendContentAvailable(newValue: boolean); message 'setShouldSendContentAvailable:';
    function shouldSendContentAvailable: boolean; message 'shouldSendContentAvailable';
    procedure set__TVOS_PROHIBITED______(newValue: NSString *category); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: NSString *category; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CKSubscriptionOptions = NSUInteger;
  CKSubscriptionOptionsPtr = ^CKSubscriptionOptions;

const
  CKSubscriptionOptionsFiresOnRecordCreation = 1 shl 0;
  CKSubscriptionOptionsFiresOnRecordUpdate = 1 shl 1;
  CKSubscriptionOptionsFiresOnRecordDeletion = 1 shl 2;
  CKSubscriptionOptionsFiresOnce = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CKSubscriptionDeprecated = objccategory external (CKSubscription)
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Init the appropriate CKSubscription subclass"';
    function initWithRecordType_predicate_options (recordType: NSString; predicate: NSPredicate; subscriptionOptions: CKSubscriptionOptions): instancetype; message 'initWithRecordType:predicate:options:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use CKQuerySubscription instead"';
    function initWithRecordType_predicate_subscriptionID_options (recordType: NSString; predicate: NSPredicate; subscriptionID_: NSString; subscriptionOptions: CKSubscriptionOptions): instancetype; message 'initWithRecordType:predicate:subscriptionID:options:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use CKQuerySubscription instead"';
    function recordType: NSString; message 'recordType';
    function predicate: NSPredicate; message 'predicate';
    function subscriptionOptions: CKSubscriptionOptions; message 'subscriptionOptions';
    function initWithZoneID_options (zoneID: CKRecordZoneID; subscriptionOptions_: CKSubscriptionOptions): instancetype; message 'initWithZoneID:options:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use CKRecordZoneSubscription instead"';
    function initWithZoneID_subscriptionID_options (zoneID: CKRecordZoneID; subscriptionID_: NSString; subscriptionOptions_: CKSubscriptionOptions): instancetype; message 'initWithZoneID:subscriptionID:options:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use CKRecordZoneSubscription instead"';
    procedure setZoneID(newValue: CKRecordZoneID); message 'setZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
  end;
{$endif}

