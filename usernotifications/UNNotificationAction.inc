{ Parsed from UserNotifications.framework UNNotificationAction.h }

{$ifdef TYPES}
type
  UNNotificationActionPtr = ^UNNotificationAction;
  UNTextInputNotificationActionPtr = ^UNTextInputNotificationAction;
{$endif}

{$ifdef TYPES}
type
  UNNotificationActionOptions = NSUInteger;
  UNNotificationActionOptionsPtr = ^UNNotificationActionOptions;

const
  UNNotificationActionOptionAuthenticationRequired = 1 shl 0;
  UNNotificationActionOptionDestructive = 1 shl 1;
  UNNotificationActionOptionForeground = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function options: UNNotificationActionOptions; message 'options';
    class function actionWithIdentifier_title_options (identifier_: NSString; title_: NSString; options_: UNNotificationActionOptions): instancetype; message 'actionWithIdentifier:title:options:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UNTextInputNotificationAction = objcclass external (UNNotificationAction)
  public
    class function actionWithIdentifier_title_options_textInputButtonTitle_textInputPlaceholder (identifier_: NSString; title_: NSString; options_: UNNotificationActionOptions; textInputButtonTitle: NSString; textInputPlaceholder: NSString): instancetype; message 'actionWithIdentifier:title:options:textInputButtonTitle:textInputPlaceholder:';
    function textInputButtonTitle: NSString; message 'textInputButtonTitle';
    function textInputPlaceholder: NSString; message 'textInputPlaceholder';
  end;
{$endif}

