{ Parsed from UserNotifications.framework UNUserNotificationCenter.h }

{$ifdef TYPES}
type
  UNUserNotificationCenterPtr = ^UNUserNotificationCenter;
  UNUserNotificationCenterDelegateProtocolPtr = ^UNUserNotificationCenterDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UNAuthorizationOptions = NSUInteger;
  UNAuthorizationOptionsPtr = ^UNAuthorizationOptions;

const
  UNAuthorizationOptionBadge = 1 shl 0;
  UNAuthorizationOptionSound = 1 shl 1;
  UNAuthorizationOptionAlert = 1 shl 2;
  UNAuthorizationOptionCarPlay = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  UNUserNotificationCenter = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: UNUserNotificationCenterDelegateProtocol); message 'setDelegate:';
    function delegate: UNUserNotificationCenterDelegateProtocol; message 'delegate';
    function supportsContentExtensions: boolean; message 'supportsContentExtensions';
    class function currentNotificationCenter: UNUserNotificationCenter; message 'currentNotificationCenter';
    function init: instancetype; message 'init';
    procedure requestAuthorizationWithOptions_completionHandler (options: UNAuthorizationOptions; completionHandler: OpaqueCBlock); message 'requestAuthorizationWithOptions:completionHandler:';
    procedure setNotificationCategories (categories: UNNotificationCategory *ProtocolPtr); message 'setNotificationCategories:';
    procedure getNotificationCategoriesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getNotificationCategoriesWithCompletionHandler:';
    procedure getNotificationSettingsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getNotificationSettingsWithCompletionHandler:';
    procedure addNotificationRequest_withCompletionHandler (request: UNNotificationRequest; completionHandler: OpaqueCBlock); message 'addNotificationRequest:withCompletionHandler:';
    procedure getPendingNotificationRequestsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getPendingNotificationRequestsWithCompletionHandler:';
    procedure removePendingNotificationRequestsWithIdentifiers (identifiers: NSString *ProtocolPtr); message 'removePendingNotificationRequestsWithIdentifiers:';
    procedure removeAllPendingNotificationRequests; message 'removeAllPendingNotificationRequests';
    procedure getDeliveredNotificationsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getDeliveredNotificationsWithCompletionHandler:';
    procedure removeDeliveredNotificationsWithIdentifiers (identifiers: NSString *ProtocolPtr); message 'removeDeliveredNotificationsWithIdentifiers:';
    procedure removeAllDeliveredNotifications __TVOS_PROHIBITED; message 'removeAllDeliveredNotifications __TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef TYPES}
type
  UNNotificationPresentationOptions = NSUInteger;
  UNNotificationPresentationOptionsPtr = ^UNNotificationPresentationOptions;

const
  UNNotificationPresentationOptionBadge = 1 shl 0;
  UNNotificationPresentationOptionSound = 1 shl 1;
  UNNotificationPresentationOptionAlert = 1 shl 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UNUserNotificationCenterDelegateProtocol = objcprotocol external name 'UNUserNotificationCenterDelegate' (NSObjectProtocol)
  optional
    procedure userNotificationCenter_willPresentNotification_withCompletionHandler (center: UNUserNotificationCenter; notification: UNNotification; completionHandler: OpaqueCBlock); message 'userNotificationCenter:willPresentNotification:withCompletionHandler:'; { available in 10.0 }
    procedure userNotificationCenter_didReceiveNotificationResponse_withCompletionHandler (center: UNUserNotificationCenter; response: UNNotificationResponse; completionHandler: OpaqueCBlock); message 'userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:'; { available in 10.0 }
  end;
{$endif}

