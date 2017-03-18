{ Parsed from UserNotifications.framework UNNotificationAttachment.h }

{$ifdef TYPES}
type
  UNNotificationAttachmentPtr = ^UNNotificationAttachment;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationAttachment = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function URL: NSURL; message 'URL';
    function type_: NSString; message 'type';
    class function attachmentWithIdentifier_URL_options_error (identifier_: NSString; URL_: NSURL; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable instancetype; message 'attachmentWithIdentifier:URL:options:error:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UNNotificationAttachmentOptionsTypeHintKey: NSString { available in 10.0 }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailHiddenKey: NSString { available in 10.0 }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailClippingRectKey: NSString { available in 10.0 }; cvar; external;
  UNNotificationAttachmentOptionsThumbnailTimeKey: NSString { available in 10.0 }; cvar; external;
{$endif}

