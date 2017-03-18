{ Parsed from UserNotifications.framework UNNotificationCategory.h }

{$ifdef TYPES}
type
  UNNotificationCategoryPtr = ^UNNotificationCategory;
{$endif}

{$ifdef TYPES}
type
  UNNotificationCategoryOptions = NSUInteger;
  UNNotificationCategoryOptionsPtr = ^UNNotificationCategoryOptions;

const
  UNNotificationCategoryOptionNone = 0;
  UNNotificationCategoryOptionCustomDismissAction = 1 shl 0;
  UNNotificationCategoryOptionAllowInCarPlay = 2 shl 0;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationCategory = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function actions: UNNotificationAction *ProtocolPtr; message 'actions';
    function intentIdentifiers: NSString *ProtocolPtr; message 'intentIdentifiers';
    function options: UNNotificationCategoryOptions; message 'options';
    class function categoryWithIdentifier_actions_intentIdentifiers_options (identifier_: NSString; actions_: UNNotificationAction *ProtocolPtr; intentIdentifiers_: NSString *ProtocolPtr; options_: UNNotificationCategoryOptions): instancetype; message 'categoryWithIdentifier:actions:intentIdentifiers:options:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

