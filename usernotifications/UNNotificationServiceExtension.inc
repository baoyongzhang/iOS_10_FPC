{ Parsed from UserNotifications.framework UNNotificationServiceExtension.h }

{$ifdef TYPES}
type
  UNNotificationServiceExtensionPtr = ^UNNotificationServiceExtension;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationServiceExtension = objcclass external (NSObject)
  public
    procedure didReceiveNotificationRequest_withContentHandler (request: UNNotificationRequest; contentHandler: OpaqueCBlock); message 'didReceiveNotificationRequest:withContentHandler:';
    procedure serviceExtensionTimeWillExpire; message 'serviceExtensionTimeWillExpire';
  end;
{$endif}

