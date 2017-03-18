{ Parsed from UserNotifications.framework NSString+UserNotifications.h }
{$ifdef CLASSES}

type
  UNUserNotificationCenterSupport = objccategory external (NSString)
    class function localizedUserNotificationStringForKey_arguments (key: NSString; arguments: nullable NSArrayPtr): NSString; message 'localizedUserNotificationStringForKey:arguments:'; { available in 10.0 }
  end;
{$endif}

