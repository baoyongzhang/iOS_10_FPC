{ Parsed from WatchKit.framework WKExtension.h }

{ Types from WKExtension }
{$ifdef TYPES}

type
  WKApplicationState = NSInteger;
type
  WKApplicationStatePtr = ^WKApplicationState;

const
  WKApplicationStateActive = 0;
  WKApplicationStateInactive = 1;
  WKApplicationStateBackground = 2;
{$endif}


{$ifdef TYPES}
type
  WKExtensionPtr = ^WKExtension;
  WKExtensionDelegateProtocolPtr = ^WKExtensionDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  WKExtension = objcclass external (NSObject)
  public
    class function sharedExtension: WKExtension; message 'sharedExtension';
    procedure openSystemURL (url: NSURL); message 'openSystemURL:';
    procedure setDelegate(newValue: WKExtensionDelegateProtocol); message 'setDelegate:';
    function delegate: WKExtensionDelegateProtocol; message 'delegate';
    function rootInterfaceController: WKInterfaceController; message 'rootInterfaceController';
    function applicationState: WKApplicationState; message 'applicationState';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  WKExtensionDelegateProtocol = objcprotocol external name 'WKExtensionDelegate' (NSObjectProtocol)
  optional
    procedure applicationDidFinishLaunching; message 'applicationDidFinishLaunching';
    procedure applicationDidBecomeActive; message 'applicationDidBecomeActive';
    procedure applicationWillResignActive; message 'applicationWillResignActive';
    procedure applicationWillEnterForeground; message 'applicationWillEnterForeground';
    procedure applicationDidEnterBackground; message 'applicationDidEnterBackground';
    procedure handleWorkoutConfiguration (workoutConfiguration: HKWorkoutConfiguration); message 'handleWorkoutConfiguration:'; { available in 3.0 }
    procedure handleUserActivity (userInfo: nullable NSDictionaryPtr); message 'handleUserActivity:';
    procedure handleBackgroundTasks (backgroundTasks: WKRefreshBackgroundTask *ProtocolPtr); message 'handleBackgroundTasks:'; { available in 3.0 }
    procedure handleActionWithIdentifier_forRemoteNotification (identifier: nullable NSStringPtr; remoteNotification: NSDictionary); message 'handleActionWithIdentifier:forRemoteNotification:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
    procedure handleActionWithIdentifier_forLocalNotification (identifier: nullable NSStringPtr; localNotification: UILocalNotification); message 'handleActionWithIdentifier:forLocalNotification:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
    procedure handleActionWithIdentifier_forRemoteNotification_withResponseInfo (identifier: nullable NSStringPtr; remoteNotification: NSDictionary; responseInfo: NSDictionary); message 'handleActionWithIdentifier:forRemoteNotification:withResponseInfo:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
    procedure handleActionWithIdentifier_forLocalNotification_withResponseInfo (identifier: nullable NSStringPtr; localNotification: UILocalNotification; responseInfo: NSDictionary); message 'handleActionWithIdentifier:forLocalNotification:withResponseInfo:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
    procedure didReceiveRemoteNotification (userInfo: NSDictionary); message 'didReceiveRemoteNotification:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
    procedure didReceiveLocalNotification (notification: UILocalNotification); message 'didReceiveLocalNotification:'; deprecated 'in 2.0, 3.0, "use UNUserNotificationCenterDelegate"';
  end;
{$endif}

{$endif}
