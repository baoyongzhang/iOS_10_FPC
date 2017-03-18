{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesUserNotificationsUI;
interface

type
  UNNotificationContentExtensionProtocol = objcprotocol external name 'UNNotificationContentExtension';

type
  UNNotification = objcclass external;
  UNNotificationResponse = objcclass external;

implementation
end.
