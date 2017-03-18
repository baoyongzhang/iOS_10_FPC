{ Parsed from UIKit.framework UIUserNotificationSettings.h }

{$ifdef TYPES}
type
  UIUserNotificationSettingsPtr = ^UIUserNotificationSettings;
  UIUserNotificationCategoryPtr = ^UIUserNotificationCategory;
  UIMutableUserNotificationCategoryPtr = ^UIMutableUserNotificationCategory;
  UIUserNotificationActionPtr = ^UIUserNotificationAction;
  UIMutableUserNotificationActionPtr = ^UIMutableUserNotificationAction;
{$endif}

{$ifdef TYPES}
type
  UIUserNotificationType = NSUInteger;
  UIUserNotificationTypePtr = ^UIUserNotificationType;

const
  UIUserNotificationTypeNone = 0;
  UIUserNotificationTypeBadge = 1 shl 0;
  UIUserNotificationTypeSound = 1 shl 1;
  UIUserNotificationTypeAlert = 1 shl 2;

type
  UIUserNotificationActionBehavior = NSUInteger;
  UIUserNotificationActionBehaviorPtr = ^UIUserNotificationActionBehavior;

const
  UIUserNotificationActionBehaviorDefault = 0;
  UIUserNotificationActionBehaviorTextInput = 1;

type
  UIUserNotificationActivationMode = NSUInteger;
  UIUserNotificationActivationModePtr = ^UIUserNotificationActivationMode;

const
  UIUserNotificationActivationModeForeground = 0;
  UIUserNotificationActivationModeBackground = 1;

type
  UIUserNotificationActionContext = NSUInteger;
  UIUserNotificationActionContextPtr = ^UIUserNotificationActionContext;

const
  UIUserNotificationActionContextDefault = 0;
  UIUserNotificationActionContextMinimal = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UIUserNotificationTextInputActionButtonTitleKey deprecated 'in 9_0, 10_0, "Use UserNotifications Framework's -[UNTextInputNotificationAction textInputButtonTitle]"'; cvar; external;
  __TVOS_PROHIBITED: NSString *UIUserNotificationActionResponseTypedTextKey deprecated 'in 9_0, 10_0, "Use UserNotifications Framework's -[UNTextInputNotificationResponse userText]"'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIUserNotificationSettings = objcclass external (NSObject)
  public
    class function settingsForTypes_categories (types: UIUserNotificationType; categories: nullable UIUserNotificationCategory *ProtocolPtr): instancetype; message 'settingsForTypes:categories:';
    function types: UIUserNotificationType; message 'types';
    function categories: UIUserNotificationCategory *ProtocolPtr; message 'categories';
  end;

type
  UIUserNotificationCategory = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function init                           __TVOS_PROHIBITED: instancetype; message 'init                           __TVOS_PROHIBITED'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function __TVOS_PROHIBITED_: NSString *identifier; message 'TVOS_PROHIBITED';
    function actionsForContext (context: UIUserNotificationActionContext): nullable UIUserNotificationAction *ProtocolPtr; message 'actionsForContext:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIMutableUserNotificationCategory = objcclass external (UIUserNotificationCategory)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setActions_forContext (actions: nullable UIUserNotificationAction *ProtocolPtr; context: UIUserNotificationActionContext); message 'setActions:forContext:';
  end;

type
  UIUserNotificationAction = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function init                           __TVOS_PROHIBITED: instancetype; message 'init                           __TVOS_PROHIBITED'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function __TVOS_PROHIBITED_: NSString *identifier; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: NSString *title; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED__: UIUserNotificationActionBehavior behavior; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: NSDictionary *parameters; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED____: UIUserNotificationActivationMode activationMode; message 'TVOS_PROHIBITED';
    function isAuthenticationRequired: BOOL authenticationRequired; message 'isAuthenticationRequired';
    function isDestructive: BOOL destructive; message 'isDestructive';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIMutableUserNotificationAction = objcclass external (UIUserNotificationAction)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setBehavior(newValue: UIUserNotificationActionBehavior); message 'setBehavior:';
    function behavior: UIUserNotificationActionBehavior; message 'behavior';
    procedure setParameters(newValue: NSDictionary); message 'setParameters:';
    function parameters: NSDictionary; message 'parameters';
    procedure setActivationMode(newValue: UIUserNotificationActivationMode); message 'setActivationMode:';
    function activationMode: UIUserNotificationActivationMode; message 'activationMode';
    procedure setAuthenticationRequired(newValue: boolean); message 'setAuthenticationRequired:';
    function isAuthenticationRequired: boolean; message 'isAuthenticationRequired';
    procedure setDestructive(newValue: boolean); message 'setDestructive:';
    function isDestructive: boolean; message 'isDestructive';
  end;
{$endif}

