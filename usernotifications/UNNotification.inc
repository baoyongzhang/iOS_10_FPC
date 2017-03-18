{ Parsed from UserNotifications.framework UNNotification.h }

{$ifdef TYPES}
type
  UNNotificationPtr = ^UNNotification;
{$endif}

{$ifdef CLASSES}

type
  UNNotification = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function date: NSDate; message 'date';
    function request: UNNotificationRequest; message 'request';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

