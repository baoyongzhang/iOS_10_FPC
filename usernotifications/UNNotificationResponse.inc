{ Parsed from UserNotifications.framework UNNotificationResponse.h }

{$ifdef TYPES}
type
  UNNotificationResponsePtr = ^UNNotificationResponse;
  UNTextInputNotificationResponsePtr = ^UNTextInputNotificationResponse;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UNNotificationDefaultActionIdentifier { available in 10.0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *UNNotificationDismissActionIdentifier { available in 10.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationResponse = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function notification: UNNotification; message 'notification';
    function actionIdentifier: NSString; message 'actionIdentifier';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UNTextInputNotificationResponse = objcclass external (UNNotificationResponse)
  public
    function userText: NSString; message 'userText';
  end;
{$endif}

