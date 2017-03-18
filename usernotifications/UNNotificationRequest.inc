{ Parsed from UserNotifications.framework UNNotificationRequest.h }

{$ifdef TYPES}
type
  UNNotificationRequestPtr = ^UNNotificationRequest;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationRequest = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function content: UNNotificationContent; message 'content';
    function trigger: UNNotificationTrigger; message 'trigger';
    class function requestWithIdentifier_content_trigger (identifier_: NSString; content_: UNNotificationContent; trigger_: nullable UNNotificationTriggerPtr): instancetype; message 'requestWithIdentifier:content:trigger:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

