{ Parsed from UIKit.framework UIApplication.h }

{ Types from UIApplication }
{$ifdef TYPES}


{$endif}


{ Types from UIRemoteNotifications }
{$ifdef TYPES}

{$endif}


{ Types from UIApplication_UIUserNotificationSettings }
{$ifdef TYPES}

{$endif}


{ Types from UIApplicationDelegateProtocol }
{$ifdef TYPES}

{$if defined(UIKIT_STRING_ENUMS)}

type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIApplicationOpenURLOptionsKey;


type
  UIApplicationOpenURLOptionsKey = ^NSString;

{$endif}
{$if defined(UIKIT_STRING_ENUMS)}

type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIApplicationExtensionPointIdentifier;


type
  UIApplicationExtensionPointIdentifier = ^NSString;

{$endif}
{$endif}


{$ifdef TYPES}
type
  UIApplicationPtr = ^UIApplication;
  UIApplicationDelegateProtocolPtr = ^UIApplicationDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIStatusBarStyle = NSInteger;
  UIStatusBarStylePtr = ^UIStatusBarStyle;

const
  UIStatusBarStyleDefault = 0;
  UIStatusBarStyleLightContent = 1 { available in 7_0 };
  UIStatusBarStyleBlackTranslucent = 1 deprecated 'in 2_0, 7_0, "Use UIStatusBarStyleLightContent"';
  UIStatusBarStyleBlackOpaque = 2 deprecated 'in 2_0, 7_0, "Use UIStatusBarStyleLightContent"';

type
  UIStatusBarAnimation = NSInteger;
  UIStatusBarAnimationPtr = ^UIStatusBarAnimation;

const
  UIStatusBarAnimationNone = 0;
  UIStatusBarAnimationFade = 1 { available in 3_2 };
  UIStatusBarAnimationSlide = 2 { available in 3_2 };

type
  UIInterfaceOrientation = NSInteger;
  UIInterfaceOrientationPtr = ^UIInterfaceOrientation;

const
  UIInterfaceOrientationUnknown = UIDeviceOrientationUnknown;
  UIInterfaceOrientationPortrait = UIDeviceOrientationPortrait;
  UIInterfaceOrientationPortraitUpsideDown = UIDeviceOrientationPortraitUpsideDown;
  UIInterfaceOrientationLandscapeLeft = UIDeviceOrientationLandscapeRight;
  UIInterfaceOrientationLandscapeRight = UIDeviceOrientationLandscapeLeft;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSExceptionName UIApplicationInvalidInterfaceOrientationException { available in 6_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIInterfaceOrientationMask = NSUInteger;
  UIInterfaceOrientationMaskPtr = ^UIInterfaceOrientationMask;

const
  UIInterfaceOrientationMaskPortrait = 1 shl UIInterfaceOrientationPortrait;
  UIInterfaceOrientationMaskLandscapeLeft = 1 shl UIInterfaceOrientationLandscapeLeft;
  UIInterfaceOrientationMaskLandscapeRight = 1 shl UIInterfaceOrientationLandscapeRight;
  UIInterfaceOrientationMaskPortraitUpsideDown = 1 shl UIInterfaceOrientationPortraitUpsideDown;
  UIInterfaceOrientationMaskLandscape = UIInterfaceOrientationMaskLandscapeLeft + UIInterfaceOrientationMaskLandscapeRight;
  UIInterfaceOrientationMaskAll = UIInterfaceOrientationMaskPortrait + UIInterfaceOrientationMaskLandscapeLeft + UIInterfaceOrientationMaskLandscapeRight + UIInterfaceOrientationMaskPortraitUpsideDown;
  UIInterfaceOrientationMaskAllButUpsideDown = UIInterfaceOrientationMaskPortrait + UIInterfaceOrientationMaskLandscapeLeft + UIInterfaceOrientationMaskLandscapeRight;

type
  UIRemoteNotificationType = NSUInteger;
  UIRemoteNotificationTypePtr = ^UIRemoteNotificationType;

const
  UIRemoteNotificationTypeNone = 0;
  UIRemoteNotificationTypeBadge = 1 shl 0;
  UIRemoteNotificationTypeSound = 1 shl 1;
  UIRemoteNotificationTypeAlert = 1 shl 2;
  UIRemoteNotificationTypeNewsstandContentAvailability = 1 shl 3;

type
  UIBackgroundFetchResult = NSUInteger;
  UIBackgroundFetchResultPtr = ^UIBackgroundFetchResult;

const
  UIBackgroundFetchResultNewData = 0;
  UIBackgroundFetchResultNoData = 1;
  UIBackgroundFetchResultFailed = 2;

type
  UIBackgroundRefreshStatus = NSInteger;
  UIBackgroundRefreshStatusPtr = ^UIBackgroundRefreshStatus;

const
  UIBackgroundRefreshStatusRestricted = 0;
  UIBackgroundRefreshStatusDenied = 1;
  UIBackgroundRefreshStatusAvailable = 2;

type
  UIApplicationState = NSInteger;
  UIApplicationStatePtr = ^UIApplicationState;

const
  UIApplicationStateActive = 0;
  UIApplicationStateInactive = 1;
  UIApplicationStateBackground = 2;

type
  UIBackgroundTaskIdentifier = NSUInteger;
  UIBackgroundTaskIdentifierPtr = ^UIBackgroundTaskIdentifier;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIBackgroundTaskInvalid: UIBackgroundTaskIdentifier { available in 4_0 }; cvar; external;
  UIMinimumKeepAliveTimeout: NSTimeInterval { available in 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSTimeInterval UIApplicationBackgroundFetchIntervalMinimum { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: NSTimeInterval UIApplicationBackgroundFetchIntervalNever { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIApplication = objcclass external (UIResponder)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function instead."): UIApplication *sharedApplication NS_EXTENSION_UNAVAILABLE_IOS("Use view controller based solutions where appropriate; message 'instead.")';
    {$else}
    class function sharedApplication NS_EXTENSION_UNAVAILABLE_IOS("Use view controller based solutions where appropriate instead."): UIApplication; message 'sharedApplication NS_EXTENSION_UNAVAILABLE_IOS("Use view controller based solutions where appropriate instead.")';
    {$endif}
    procedure setDelegate(newValue: UIApplicationDelegateProtocol); message 'setDelegate:';
    function delegate: UIApplicationDelegateProtocol; message 'delegate';
    procedure beginIgnoringInteractionEvents NS_EXTENSION_UNAVAILABLE_IOS(""); message 'beginIgnoringInteractionEvents NS_EXTENSION_UNAVAILABLE_IOS("")';
    procedure endIgnoringInteractionEvents NS_EXTENSION_UNAVAILABLE_IOS(""); message 'endIgnoringInteractionEvents NS_EXTENSION_UNAVAILABLE_IOS("")';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isIgnoringInteractionEvents: boolean; message 'isIgnoringInteractionEvents';
    {$else}
    function isIgnoringInteractionEvents: boolean; message 'isIgnoringInteractionEvents';
    {$endif}
    procedure setIdleTimerDisabled(newValue: boolean); message 'setIdleTimerDisabled:';
    function isIdleTimerDisabled: boolean; message 'isIdleTimerDisabled';
    function openURL (url: NSURL): boolean; message 'openURL:'; deprecated 'in 2_0, 10_0, "Please use openURL:options:completionHandler: instead"';
    function canOpenURL (url: NSURL): boolean; message 'canOpenURL:'; { available in 3_0 }
    procedure openURL_options_completionHandler (url: NSURL; options: NSDictionary; completion: void (^ __nullable)(BOOL success)); message 'openURL:options:completionHandler:'; { available in 10_0 }
    procedure sendEvent (event: UIEvent); message 'sendEvent:';
    function keyWindow: UIWindow; message 'keyWindow';
    function windows: __kindof UIWindow *ProtocolPtr; message 'windows';
    function sendAction_to_from_forEvent (action: SEL; target: nullable id; sender: nullable id; event: nullable UIEventPtr): boolean; message 'sendAction:to:from:forEvent:';
    procedure set__TVOS_PROHIBITED(newValue: BOOL networkActivityIndicatorVisible); message 'set__TVOS_PROHIBITED:';
    function isNetworkActivityIndicatorVisible: BOOL networkActivityIndicatorVisible; message 'isNetworkActivityIndicatorVisible';
    function __TVOS_PROHIBITED_: UIStatusBarStyle statusBarStyle; message 'TVOS_PROHIBITED';
    function isStatusBarHidden: BOOL statusBarHidden; message 'isStatusBarHidden';
    function __TVOS_PROHIBITED_: UIInterfaceOrientation statusBarOrientation; message 'TVOS_PROHIBITED';
    function supportedInterfaceOrientationsForWindow (window: nullable UIWindowPtr): UIInterfaceOrientationMask; message 'supportedInterfaceOrientationsForWindow:'; { available in 6_0 }
    function __TVOS_PROHIBITED__: NSTimeInterval statusBarOrientationAnimationDuration; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED___: CGRect statusBarFrame; message 'TVOS_PROHIBITED';
    procedure setApplicationIconBadgeNumber(newValue: NSInteger); message 'setApplicationIconBadgeNumber:';
    function applicationIconBadgeNumber: NSInteger; message 'applicationIconBadgeNumber';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL applicationSupportsShakeToEdit); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: BOOL applicationSupportsShakeToEdit; message 'TVOS_PROHIBITED';
    function applicationState: UIApplicationState; message 'applicationState';
    function backgroundTimeRemaining: NSTimeInterval; message 'backgroundTimeRemaining';
    function beginBackgroundTaskWithExpirationHandler (handler: void(^ __nullable)(void)): UIBackgroundTaskIdentifier; message 'beginBackgroundTaskWithExpirationHandler:'; { available in 4_0 }
    function beginBackgroundTaskWithName_expirationHandler (taskName: nullable NSStringPtr; handler: void(^ __nullable)(void)): UIBackgroundTaskIdentifier; message 'beginBackgroundTaskWithName:expirationHandler:'; { available in 7_0 }
    procedure endBackgroundTask (identifier: UIBackgroundTaskIdentifier); message 'endBackgroundTask:'; { available in 4_0 }
    procedure setMinimumBackgroundFetchInterval (minimumBackgroundFetchInterval: NSTimeInterval); message 'setMinimumBackgroundFetchInterval:'; { available in 7_0 }
    function __TVOS_PROHIBITED_____: UIBackgroundRefreshStatus backgroundRefreshStatus; message 'TVOS_PROHIBITED';
    function isProtectedDataAvailable: boolean; message 'isProtectedDataAvailable';
    function userInterfaceLayoutDirection: UIUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection';
    function preferredContentSizeCategory: UIContentSizeCategory; message 'preferredContentSizeCategory';
  end;


type
  UIRemoteNotifications = objccategory external (UIApplication)
    procedure registerForRemoteNotifications; message 'registerForRemoteNotifications'; { available in 8_0 }
    procedure unregisterForRemoteNotifications; message 'unregisterForRemoteNotifications'; { available in 3_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isRegisteredForRemoteNotifications: boolean; message 'isRegisteredForRemoteNotifications';
    {$else}
    function isRegisteredForRemoteNotifications: boolean; message 'isRegisteredForRemoteNotifications'; { available in 8_0 }
    {$endif}
    procedure registerForRemoteNotificationTypes (types: UIRemoteNotificationType); message 'registerForRemoteNotificationTypes:'; deprecated 'in 3_0, 8_0, "Use -[UIApplication registerForRemoteNotifications] and UserNotifications Framework's -[UNUserNotificationCenter requestAuthorizationWithOptions:completionHandler:]"';
    function enabledRemoteNotificationTypes                                                                                                                                                                                                                                                                                __TVOS_PROHIBITED: UIRemoteNotificationType; message 'enabledRemoteNotificationTypes                                                                                                                                                                                                                                                                                __TVOS_PROHIBITED'; deprecated 'in 3_0, 8_0, "Use -[UIApplication isRegisteredForRemoteNotifications] and UserNotifications Framework's -[UNUserNotificationCenter getNotificationSettingsWithCompletionHandler:] to retrieve user-enabled remote notification and user notification settings"';
  end;

type
  UILocalNotifications = objccategory external (UIApplication)
    procedure presentLocalNotificationNow (notification: UILocalNotification); message 'presentLocalNotificationNow:'; deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenter addNotificationRequest:withCompletionHandler:]"';
    procedure scheduleLocalNotification (notification: UILocalNotification); message 'scheduleLocalNotification:'; deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenter addNotificationRequest:withCompletionHandler:]"';
    procedure cancelLocalNotification (notification: UILocalNotification); message 'cancelLocalNotification:'; deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenter removePendingNotificationRequestsWithIdentifiers:]"';
    procedure cancelAllLocalNotifications                                                                                                                                    __TVOS_PROHIBITED; message 'cancelAllLocalNotifications                                                                                                                                    __TVOS_PROHIBITED'; deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenter removeAllPendingNotificationRequests]"';
    procedure set__TVOS_PROHIBITED(newValue: UILocalNotification *Protocol *scheduledLocalNotifications); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UILocalNotification *Protocol *scheduledLocalNotifications; message 'TVOS_PROHIBITED';
  end;

type
  UIApplication_UIUserNotificationSettings = objccategory external name 'UIUserNotificationSettings' (UIApplication)
    procedure registerUserNotificationSettings (notificationSettings: UIUserNotificationSettings); message 'registerUserNotificationSettings:'; { available in 8_0 }
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function __TVOS_PROHIBITED_: UIUserNotificationSettings *currentUserNotificationSettings; message 'TVOS_PROHIBITED';
    {$else}
    function currentUserNotificationSettings                       __TVOS_PROHIBITED: nullable UIUserNotificationSettingsPtr; message 'currentUserNotificationSettings                       __TVOS_PROHIBITED'; { available in 8_0 }
    {$endif}
  end;

type
  UIRemoteControlEvents = objccategory external (UIApplication)
    procedure beginReceivingRemoteControlEvents; message 'beginReceivingRemoteControlEvents'; { available in 4_0 }
    procedure endReceivingRemoteControlEvents; message 'endReceivingRemoteControlEvents'; { available in 4_0 }
  end;

type
  UINewsstand = objccategory external (UIApplication)
    procedure setNewsstandIconImage (image: nullable UIImagePtr); message 'setNewsstandIconImage:'; deprecated 'in 5_0, 9_0, "Newsstand apps now behave like normal apps on SpringBoard"';
  end;

type
  UIShortcutItems = objccategory external (UIApplication)
    procedure set__TVOS_PROHIBITED(newValue: UIApplicationShortcutItem *Protocol *shortcutItems); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIApplicationShortcutItem *Protocol *shortcutItems; message 'TVOS_PROHIBITED';
  end;

type
  UIApplication_UIStateRestoration = objccategory external name 'UIStateRestoration' (UIApplication)
    procedure extendStateRestoration; message 'extendStateRestoration'; { available in 6_0 }
    procedure completeStateRestoration; message 'completeStateRestoration'; { available in 6_0 }
    procedure ignoreSnapshotOnNextApplicationLaunch; message 'ignoreSnapshotOnNextApplicationLaunch'; { available in 7_0 }
    class procedure registerObjectForStateRestoration_restorationIdentifier (object_: UIStateRestoringProtocol; restorationIdentifier: NSString); message 'registerObjectForStateRestoration:restorationIdentifier:'; { available in 7_0 }
  end;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIApplicationLaunchOptionsKey;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  UIApplicationLaunchOptionsKey = ^NSString;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  UIApplicationDelegateProtocol = objcprotocol external name 'UIApplicationDelegate' (NSObjectProtocol)
  optional
    procedure applicationDidFinishLaunching (application: UIApplication); message 'applicationDidFinishLaunching:';
    {$if defined(UIKIT_STRING_ENUMS)}
    function application_willFinishLaunchingWithOptions (application: UIApplication; launchOptions: nullable NSDictionaryPtr): boolean; message 'application:willFinishLaunchingWithOptions:'; { available in 6_0 }
    function application_didFinishLaunchingWithOptions (application: UIApplication; launchOptions: nullable NSDictionaryPtr): boolean; message 'application:didFinishLaunchingWithOptions:'; { available in 3_0 }
    {$else}
    function application_willFinishLaunchingWithOptions (application: UIApplication; launchOptions: nullable NSDictionaryPtr): boolean; message 'application:willFinishLaunchingWithOptions:'; { available in 6_0 }
    function application_didFinishLaunchingWithOptions (application: UIApplication; launchOptions: nullable NSDictionaryPtr): boolean; message 'application:didFinishLaunchingWithOptions:'; { available in 3_0 }
    {$endif}
    procedure applicationDidBecomeActive (application: UIApplication); message 'applicationDidBecomeActive:';
    procedure applicationWillResignActive (application: UIApplication); message 'applicationWillResignActive:';
    function application_handleOpenURL (application: UIApplication; url: NSURL): boolean; message 'application:handleOpenURL:'; deprecated 'in 2_0, 9_0, "Please use application:openURL:options:"';
    function application_openURL_sourceApplication_annotation (application: UIApplication; url: NSURL; sourceApplication: nullable NSStringPtr; annotation: id): boolean; message 'application:openURL:sourceApplication:annotation:'; deprecated 'in 4_2, 9_0, "Please use application:openURL:options:"';
    {$if defined(UIKIT_STRING_ENUMS)}
    {$else}
    {$endif}
    function application_openURL_options (app: UIApplication; url: NSURL; options: NSDictionary): boolean; message 'application:openURL:options:'; { available in 9_0 }
    procedure applicationDidReceiveMemoryWarning (application: UIApplication); message 'applicationDidReceiveMemoryWarning:';
    procedure applicationWillTerminate (application: UIApplication); message 'applicationWillTerminate:';
    procedure applicationSignificantTimeChange (application: UIApplication); message 'applicationSignificantTimeChange:';
    procedure application_willChangeStatusBarOrientation_duration (application: UIApplication; newStatusBarOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'application:willChangeStatusBarOrientation:duration:';
    procedure application_didChangeStatusBarOrientation (application: UIApplication; oldStatusBarOrientation: UIInterfaceOrientation); message 'application:didChangeStatusBarOrientation:';
    procedure application_willChangeStatusBarFrame (application: UIApplication; newStatusBarFrame: CGRect); message 'application:willChangeStatusBarFrame:';
    procedure application_didChangeStatusBarFrame (application: UIApplication; oldStatusBarFrame: CGRect); message 'application:didChangeStatusBarFrame:';
    procedure application_didRegisterUserNotificationSettings (application: UIApplication; notificationSettings: UIUserNotificationSettings); message 'application:didRegisterUserNotificationSettings:'; { available in 8_0 }
    procedure application_didRegisterForRemoteNotificationsWithDeviceToken (application: UIApplication; deviceToken: NSData); message 'application:didRegisterForRemoteNotificationsWithDeviceToken:'; { available in 3_0 }
    procedure application_didFailToRegisterForRemoteNotificationsWithError (application: UIApplication; error: NSError); message 'application:didFailToRegisterForRemoteNotificationsWithError:'; { available in 3_0 }
    procedure application_didReceiveRemoteNotification (application: UIApplication; userInfo: NSDictionary); message 'application:didReceiveRemoteNotification:'; deprecated 'in 3_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate willPresentNotification:withCompletionHandler:] or -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:] for user visible notifications and -[UIApplicationDelegate application:didReceiveRemoteNotification:fetchCompletionHandler:] for silent remote notifications"';
    procedure application_didReceiveLocalNotification (application: UIApplication; notification: UILocalNotification); message 'application:didReceiveLocalNotification:'; deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate willPresentNotification:withCompletionHandler:] or -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"';
    procedure application_handleActionWithIdentifier_forLocalNotification_completionHandler (application: UIApplication; identifier: nullable NSStringPtr; notification: UILocalNotification; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forLocalNotification:completionHandler:'; deprecated 'in 8_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"';
    procedure application_handleActionWithIdentifier_forRemoteNotification_withResponseInfo_completionHandler (application: UIApplication; identifier: nullable NSStringPtr; userInfo: NSDictionary; responseInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forRemoteNotification:withResponseInfo:completionHandler:'; deprecated 'in 9_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"';
    procedure application_handleActionWithIdentifier_forRemoteNotification_completionHandler (application: UIApplication; identifier: nullable NSStringPtr; userInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forRemoteNotification:completionHandler:'; deprecated 'in 8_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"';
    procedure application_handleActionWithIdentifier_forLocalNotification_withResponseInfo_completionHandler (application: UIApplication; identifier: nullable NSStringPtr; notification: UILocalNotification; responseInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forLocalNotification:withResponseInfo:completionHandler:'; deprecated 'in 9_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"';
    procedure application_didReceiveRemoteNotification_fetchCompletionHandler (application: UIApplication; userInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:didReceiveRemoteNotification:fetchCompletionHandler:'; { available in 7_0 }
    procedure application_performFetchWithCompletionHandler (application: UIApplication; completionHandler: OpaqueCBlock); message 'application:performFetchWithCompletionHandler:'; { available in 7_0 }
    procedure application_performActionForShortcutItem_completionHandler (application: UIApplication; shortcutItem: UIApplicationShortcutItem; completionHandler: OpaqueCBlock); message 'application:performActionForShortcutItem:completionHandler:'; { available in 9_0 }
    procedure application_handleEventsForBackgroundURLSession_completionHandler (application: UIApplication; identifier: NSString; completionHandler: OpaqueCBlock); message 'application:handleEventsForBackgroundURLSession:completionHandler:'; { available in 7_0 }
    procedure application_handleWatchKitExtensionRequest_reply (application: UIApplication; userInfo: nullable NSDictionaryPtr; reply: OpaqueCBlock); message 'application:handleWatchKitExtensionRequest:reply:'; { available in 8_2 }
    procedure applicationShouldRequestHealthAuthorization (application: UIApplication); message 'applicationShouldRequestHealthAuthorization:'; { available in 9_0 }
    procedure applicationDidEnterBackground (application: UIApplication); message 'applicationDidEnterBackground:'; { available in 4_0 }
    procedure applicationWillEnterForeground (application: UIApplication); message 'applicationWillEnterForeground:'; { available in 4_0 }
    procedure applicationProtectedDataWillBecomeUnavailable (application: UIApplication); message 'applicationProtectedDataWillBecomeUnavailable:'; { available in 4_0 }
    procedure applicationProtectedDataDidBecomeAvailable (application: UIApplication); message 'applicationProtectedDataDidBecomeAvailable:'; { available in 4_0 }
    procedure setWindow(newValue: UIWindow); message 'setWindow:';
    function window: UIWindow; message 'window';
    function application_supportedInterfaceOrientationsForWindow (application: UIApplication; window_: nullable UIWindowPtr): UIInterfaceOrientationMask; message 'application:supportedInterfaceOrientationsForWindow:'; { available in 6_0 }
    {$if defined(UIKIT_STRING_ENUMS)}
    {$else}
    {$endif}
    function application_shouldAllowExtensionPointIdentifier (application: UIApplication; extensionPointIdentifier: UIApplicationExtensionPointIdentifier): boolean; message 'application:shouldAllowExtensionPointIdentifier:'; { available in 8_0 }
    function application_viewControllerWithRestorationIdentifierPath_coder (application: UIApplication; identifierComponents: NSArray; coder: NSCoder): nullable UIViewControllerPtr; message 'application:viewControllerWithRestorationIdentifierPath:coder:'; { available in 6_0 }
    function application_shouldSaveApplicationState (application: UIApplication; coder: NSCoder): boolean; message 'application:shouldSaveApplicationState:'; { available in 6_0 }
    function application_shouldRestoreApplicationState (application: UIApplication; coder: NSCoder): boolean; message 'application:shouldRestoreApplicationState:'; { available in 6_0 }
    procedure application_willEncodeRestorableStateWithCoder (application: UIApplication; coder: NSCoder); message 'application:willEncodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure application_didDecodeRestorableStateWithCoder (application: UIApplication; coder: NSCoder); message 'application:didDecodeRestorableStateWithCoder:'; { available in 6_0 }
    function application_willContinueUserActivityWithType (application: UIApplication; userActivityType: NSString): boolean; message 'application:willContinueUserActivityWithType:'; { available in 8_0 }
    function application_continueUserActivity_restorationHandler (application: UIApplication; userActivity: NSUserActivity; restorationHandler: OpaqueCBlock): boolean; message 'application:continueUserActivity:restorationHandler:'; { available in 8_0 }
    procedure application_didFailToContinueUserActivityWithType_error (application: UIApplication; userActivityType: NSString; error: NSError); message 'application:didFailToContinueUserActivityWithType:error:'; { available in 8_0 }
    procedure application_didUpdateUserActivity (application: UIApplication; userActivity: NSUserActivity); message 'application:didUpdateUserActivity:'; { available in 8_0 }
    procedure application_userDidAcceptCloudKitShareWithMetadata (application: UIApplication; cloudKitShareMetadata: CKShareMetadata); message 'application:userDidAcceptCloudKitShareWithMetadata:'; { available in 10_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIApplicationDeprecated = objccategory external (UIApplication)
    procedure set__TVOS_PROHIBITED(newValue: BOOL proximitySensingEnabled); message 'set__TVOS_PROHIBITED:';
    function isProximitySensingEnabled: BOOL proximitySensingEnabled; message 'isProximitySensingEnabled';
    procedure setStatusBarHidden_animated (hidden: boolean; animated: boolean); message 'setStatusBarHidden:animated:'; deprecated 'in 2_0, 3_2';
    procedure set__TVOS_PROHIBITED_(newValue: UIInterfaceOrientation statusBarOrientation); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIInterfaceOrientation statusBarOrientation; message 'TVOS_PROHIBITED';
    procedure setStatusBarOrientation_animated (interfaceOrientation: UIInterfaceOrientation; animated: boolean); message 'setStatusBarOrientation:animated:'; deprecated 'in 2_0, 9_0, "Explicit setting of the status bar orientation is more limited in iOS 6.0 and later"';
    procedure set__TVOS_PROHIBITED__(newValue: UIStatusBarStyle statusBarStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIStatusBarStyle statusBarStyle; message 'TVOS_PROHIBITED';
    procedure setStatusBarStyle_animated (statusBarStyle: UIStatusBarStyle; animated: boolean); message 'setStatusBarStyle:animated:'; deprecated 'in 2_0, 9_0, "Use -[UIViewController preferredStatusBarStyle]"';
    procedure set__TVOS_PROHIBITED___(newValue: BOOL statusBarHidden); message 'set__TVOS_PROHIBITED:';
    function isStatusBarHidden: BOOL statusBarHidden; message 'isStatusBarHidden';
    procedure setStatusBarHidden_withAnimation (hidden: boolean; animation: UIStatusBarAnimation); message 'setStatusBarHidden:withAnimation:'; deprecated 'in 3_2, 9_0, "Use -[UIViewController prefersStatusBarHidden]"';
    function setKeepAliveTimeout_handler (timeout: NSTimeInterval; keepAliveHandler: void(^ __nullable)(void)): boolean; message 'setKeepAliveTimeout:handler:'; deprecated 'in 4_0, 9_0, "Please use UIRemoteNotificationTypeVoIP remote notifications for VoIP applications"';
    procedure clearKeepAliveTimeout                                                                                                                   __TVOS_PROHIBITED; message 'clearKeepAliveTimeout                                                                                                                   __TVOS_PROHIBITED'; deprecated 'in 4_0, 9_0, "Please use UIRemoteNotificationTypeVoIP remote notifications for VoIP applications"';
  end;
{$endif}

{$ifdef FUNCTIONS}
function UIApplicationMain(argc: cint; argv: PChar { variable size array of PChar }; principalClassName: NSString* __nullable; delegateClassName: NSString* __nullable): cint; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITrackingRunLoopMode: NSRunLoopMode; cvar; external;
  UIApplicationDidEnterBackgroundNotification: NSNotificationName { available in 4_0 }; cvar; external;
  UIApplicationWillEnterForegroundNotification: NSNotificationName { available in 4_0 }; cvar; external;
  UIApplicationDidFinishLaunchingNotification: NSNotificationName; cvar; external;
  UIApplicationDidBecomeActiveNotification: NSNotificationName; cvar; external;
  UIApplicationWillResignActiveNotification: NSNotificationName; cvar; external;
  UIApplicationDidReceiveMemoryWarningNotification: NSNotificationName; cvar; external;
  UIApplicationWillTerminateNotification: NSNotificationName; cvar; external;
  UIApplicationSignificantTimeChangeNotification: NSNotificationName; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIApplicationWillChangeStatusBarOrientationNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIApplicationDidChangeStatusBarOrientationNotification; cvar; external;
  __TVOS_PROHIBITED: NSString *UIApplicationStatusBarOrientationUserInfoKey; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIApplicationWillChangeStatusBarFrameNotification; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIApplicationDidChangeStatusBarFrameNotification; cvar; external;
  __TVOS_PROHIBITED: NSString *UIApplicationStatusBarFrameUserInfoKey; cvar; external;
  __TVOS_PROHIBITED: NSNotificationName UIApplicationBackgroundRefreshStatusDidChangeNotification { available in 7_0 }; cvar; external;
  UIApplicationProtectedDataWillBecomeUnavailable: NSNotificationName { available in 4_0 }; cvar; external;
  UIApplicationProtectedDataDidBecomeAvailable: NSNotificationName { available in 4_0 }; cvar; external;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef FUNCTIONS}
function NS_SWIFT_NAME(param1: url): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsURLKey; cdecl; external; { available in 3_0 }
function NS_SWIFT_NAME_(param1: sourceApplication): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsSourceApplicationKey; cdecl; external; { available in 3_0 }
function NS_SWIFT_NAME__(param1: annotation): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsAnnotationKey; cdecl; external; { available in 3_2 }
function NS_SWIFT_NAME___(param1: location): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsLocationKey; cdecl; external; { available in 4_0 }
function NS_SWIFT_NAME____(param1: bluetoothCentrals): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsBluetoothCentralsKey; cdecl; external; { available in 7_0 }
function NS_SWIFT_NAME_____(param1: bluetoothPeripherals): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsBluetoothPeripheralsKey; cdecl; external; { available in 7_0 }
function NS_SWIFT_NAME______(param1: userActivityDictionary): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsUserActivityDictionaryKey; cdecl; external; { available in 8_0 }
function NS_SWIFT_NAME_______(param1: userActivityType): UIApplicationLaunchOptionsKey  UIApplicationLaunchOptionsUserActivityTypeKey; cdecl; external; { available in 8_0 }
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationLaunchOptionsURLKey: UIApplicationLaunchOptionsKey { available in 3_0 }; cvar; external;
  UIApplicationLaunchOptionsSourceApplicationKey: UIApplicationLaunchOptionsKey { available in 3_0 }; cvar; external;
  __TVOS_PROHIBITED: UIApplicationLaunchOptionsKey UIApplicationLaunchOptionsRemoteNotificationKey { available in 3_0 }; cvar; external;
  __TVOS_PROHIBITED: UIApplicationLaunchOptionsKey UIApplicationLaunchOptionsLocalNotificationKey deprecated 'in 4_0, 10_0, "Use UserNotifications Framework's -[UNUserNotificationCenterDelegate didReceiveNotificationResponse:withCompletionHandler:]"'; cvar; external;
  UIApplicationLaunchOptionsAnnotationKey: UIApplicationLaunchOptionsKey { available in 3_2 }; cvar; external;
  UIApplicationLaunchOptionsLocationKey: UIApplicationLaunchOptionsKey { available in 4_0 }; cvar; external;
  __TVOS_PROHIBITED: UIApplicationLaunchOptionsKey UIApplicationLaunchOptionsNewsstandDownloadsKey { available in 5_0 }; cvar; external;
  UIApplicationLaunchOptionsBluetoothCentralsKey: UIApplicationLaunchOptionsKey { available in 7_0 }; cvar; external;
  UIApplicationLaunchOptionsBluetoothPeripheralsKey: UIApplicationLaunchOptionsKey { available in 7_0 }; cvar; external;
  __TVOS_PROHIBITED: UIApplicationLaunchOptionsKey UIApplicationLaunchOptionsShortcutItemKey { available in 9_0 }; cvar; external;
  UIApplicationLaunchOptionsUserActivityDictionaryKey: UIApplicationLaunchOptionsKey { available in 8_0 }; cvar; external;
  UIApplicationLaunchOptionsUserActivityTypeKey: UIApplicationLaunchOptionsKey { available in 8_0 }; cvar; external;
  __TVOS_PROHIBITED: UIApplicationLaunchOptionsKey UIApplicationLaunchOptionsCloudKitShareMetadataKey { available in 10_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationOpenSettingsURLString: NSString { available in 8_0 }; cvar; external;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef FUNCTIONS}
function NS_SWIFT_NAME________(param1: sourceApplication): UIApplicationOpenURLOptionsKey  UIApplicationOpenURLOptionsSourceApplicationKey; cdecl; external; { available in 9_0 }
function NS_SWIFT_NAME_________(param1: annotation): UIApplicationOpenURLOptionsKey  UIApplicationOpenURLOptionsAnnotationKey; cdecl; external; { available in 9_0 }
function NS_SWIFT_NAME__________(param1: openInPlace): UIApplicationOpenURLOptionsKey  UIApplicationOpenURLOptionsOpenInPlaceKey; cdecl; external; { available in 9_0 }
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationOpenURLOptionsSourceApplicationKey: UIApplicationOpenURLOptionsKey { available in 9_0 }; cvar; external;
  UIApplicationOpenURLOptionsAnnotationKey: UIApplicationOpenURLOptionsKey { available in 9_0 }; cvar; external;
  UIApplicationOpenURLOptionsOpenInPlaceKey: UIApplicationOpenURLOptionsKey { available in 9_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationUserDidTakeScreenshotNotification: NSNotificationName { available in 7_0 }; cvar; external;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef FUNCTIONS}
function NS_SWIFT_NAME___________(param1: keyboard): UIApplicationExtensionPointIdentifier  UIApplicationKeyboardExtensionPointIdentifier; cdecl; external; { available in 8_0 }
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationKeyboardExtensionPointIdentifier: UIApplicationExtensionPointIdentifier { available in 8_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  UIApplicationOpenURLOptionUniversalLinksOnly: NSString { available in 10_0 }; cvar; external;
{$endif}

