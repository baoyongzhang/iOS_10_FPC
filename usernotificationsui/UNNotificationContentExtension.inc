{ Parsed from UserNotificationsUI.framework UNNotificationContentExtension.h }

{$ifdef TYPES}
type
  UNNotificationContentExtensionProtocolPtr = ^UNNotificationContentExtensionProtocol;
{$endif}

{$ifdef TYPES}
type
  UNNotificationContentExtensionMediaPlayPauseButtonType = NSUInteger;
  UNNotificationContentExtensionMediaPlayPauseButtonTypePtr = ^UNNotificationContentExtensionMediaPlayPauseButtonType;

const
  UNNotificationContentExtensionMediaPlayPauseButtonTypeNone = 0;
  UNNotificationContentExtensionMediaPlayPauseButtonTypeDefault = 1;
  UNNotificationContentExtensionMediaPlayPauseButtonTypeOverlay = 2;

type
  UNNotificationContentExtensionResponseOption = NSUInteger;
  UNNotificationContentExtensionResponseOptionPtr = ^UNNotificationContentExtensionResponseOption;

const
  UNNotificationContentExtensionResponseOptionDoNotDismiss = 0;
  UNNotificationContentExtensionResponseOptionDismiss = 1;
  UNNotificationContentExtensionResponseOptionDismissAndForwardAction = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UNNotificationContentExtensionProtocol = objcprotocol external name 'UNNotificationContentExtension' (NSObjectProtocol)
    procedure didReceiveNotification (notification: UNNotification); message 'didReceiveNotification:';
  optional
    procedure didReceiveNotificationResponse_completionHandler (response: UNNotificationResponse; completion: OpaqueCBlock); message 'didReceiveNotificationResponse:completionHandler:';
    function mediaPlayPauseButtonType: UNNotificationContentExtensionMediaPlayPauseButtonType; message 'mediaPlayPauseButtonType';
    function mediaPlayPauseButtonFrame: CGRect; message 'mediaPlayPauseButtonFrame';
    function mediaPlayPauseButtonTintColor: UIColor; message 'mediaPlayPauseButtonTintColor';
    procedure mediaPlay; message 'mediaPlay';
    procedure mediaPause; message 'mediaPause';
  end;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationContentExtension = objccategory external (NSExtensionContext)
    procedure mediaPlayingStarted                       __TVOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __OSX_UNAVAILABLE; message 'mediaPlayingStarted                       __TVOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __OSX_UNAVAILABLE'; { available in 10_0 }
    procedure mediaPlayingPaused                       __TVOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __OSX_UNAVAILABLE; message 'mediaPlayingPaused                       __TVOS_UNAVAILABLE __WATCHOS_UNAVAILABLE __OSX_UNAVAILABLE'; { available in 10_0 }
  end;
{$endif}

