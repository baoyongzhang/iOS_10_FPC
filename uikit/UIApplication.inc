{ Parsed from UIKit.framework UIApplication.h }


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
  UIApplicationInvalidInterfaceOrientationException: NSString { available in 6_0 }; cvar; external;
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
  UIApplicationBackgroundFetchIntervalMinimum: NSTimeInterval { available in 7_0 }; cvar; external;
  UIApplicationBackgroundFetchIntervalNever: NSTimeInterval { available in 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}

{$endif}

{$ifdef CLASSES}

type
  UIApplication = objcclass external (UIResponder, UIActionSheetDelegateProtocol)
  private
    _delegate: UIApplicationDelegateProtocol;
    _exclusiveTouchWindows: NSMutableSet;
    _event: UIEvent;
    _touchesEvent: UIEvent;
    _motionEvent: UIEvent;
    _remoteControlEvent: UIEvent;
    _remoteControlEventObservers: NSInteger;
    _topLevelNibObjects: NSArray;
    _networkResourcesCurrentlyLoadingCount: NSInteger;
    _hideNetworkActivityIndicatorTimer: NSTimer;
    _editAlertView: UIAlertView;
    _statusBar: UIStatusBar;
    _statusBarRequestedStyle: UIStatusBarStyle;
    _statusBarWindow: UIStatusBarWindow;
    _observerBlocks: NSMutableArray;
    _postCommitActions: NSMutableArray;
    _mainStoryboardName: NSString;
    _tintViewDurationStack: NSMutableArray;
    _statusBarTintColorLockingControllers: NSMutableArray;
    _statusBarTintColorLockingCount: NSInteger;
    _preferredContentSizeCategory: NSString;
    _applicationFlags: bitpacked record
      case byte of
        0: (_anonBitField__applicationFlags0: cuint);
        1: (
          deactivatingReasonFlags: 0..((1 shl 11)-1);
          isSuspended: 0..1;
          isSuspendedEventsOnly: 0..1;
          isLaunchedSuspended: 0..1;
          calledNonSuspendedLaunchDelegate: 0..1;
          calledSuspendedLaunchDelegate: 0..1;
          isHandlingURL: 0..1;
          statusBarShowsProgress: 0..1;
          statusBarHidden: 0..1;
          statusBarHiddenDefault: 0..1;
          statusBarHiddenVerticallyCompact: 0..1;
          blockInteractionEvents: 0..((1 shl 4)-1);
          receivesMemoryWarnings: 0..1;
          showingProgress: 0..1;
          receivesPowerMessages: 0..1;
          launchEventReceived: 0..1;
          activateEventReceived: 0..1;
          systemIsAnimatingApplicationLifecycleEvent: 0..1;
          isActivating: 0..1;
          isSuspendedUnderLock: 0..1;
          shouldExitAfterSendSuspend: 0..1;
          terminating: 0..1;
          isHandlingShortCutURL: 0..1;
          idleTimerDisabled: 0..1;
          deviceOrientation: 0..((1 shl 3)-1);
          delegateShouldBeReleasedUponSet: 0..1;
          delegateHandleOpenURL: 0..1;
          delegateOpenURL: 0..1;
          delegateDidReceiveMemoryWarning: 0..1;
          delegateWillTerminate: 0..1;
          delegateSignificantTimeChange: 0..1;
          delegateWillChangeInterfaceOrientation: 0..1;
          delegateDidChangeInterfaceOrientation: 0..1;
          delegateWillChangeStatusBarFrame: 0..1;
          delegateDidChangeStatusBarFrame: 0..1;
          delegateDeviceAccelerated: 0..1;
          delegateDeviceChangedOrientation: 0..1;
          delegateDidBecomeActive: 0..1;
          delegateWillResignActive: 0..1;
          delegateDidEnterBackground: 0..1;
          delegateDidEnterBackgroundWasSent: 0..1;
          delegateWillEnterForeground: 0..1;
          delegateWillSuspend: 0..1;
          delegateDidResume: 0..1;
          delegateSupportsStateRestoration: 0..1;
          delegateSupportedInterfaceOrientations: 0..1;
          delegateHandleSiriTask: 0..1;
          delegateSupportsWatchKitRequests: 0..1;
          userDefaultsSyncDisabled: 0..1;
          headsetButtonClickCount: 0..((1 shl 4)-1);
          isHeadsetButtonDown: 0..1;
          isFastForwardActive: 0..1;
          isRewindActive: 0..1;
          shakeToEdit: 0..1;
          zoomInClassicMode: 0..1;
          ignoreHeadsetClicks: 0..1;
          touchRotationDisabled: 0..1;
          taskSuspendingUnsupported: 0..1;
          taskSuspendingOnLockUnsupported: 0..1;
          isUnitTests: 0..1;
          requiresHighResolution: 0..1;
          singleUseLaunchOrientation: 0..((1 shl 3)-1);
          defaultInterfaceOrientation: 0..((1 shl 3)-1);
          supportedInterfaceOrientationsMask: 0..((1 shl 5)-1);
          delegateWantsNextResponder: 0..1;
          isRunningInApplicationSwitcher: 0..1;
          isSendingEventForProgrammaticTouchCancellation: 0..1;
          delegateWantsStatusBarTouchesEnded: 0..1;
          interfaceLayoutDirectionIsValid: 0..1;
          interfaceLayoutDirection: 0..((1 shl 3)-1);
          restorationExtended: 0..1;
          normalRestorationInProgress: 0..1;
          normalRestorationCompleted: 0..1;
          isDelayingTintViewChange: 0..1;
          isUpdatingTintViewColor: 0..1;
          isHandlingMemoryWarning: 0..1;
          forceStatusBarTintColorChanges: 0..1;
          disableLegacyAutorotation: 0..1;
          isFakingForegroundTransitionForBackgroundFetch: 0..1;
          couldNotRestoreStateWhenLocked: 0..1;
          disableStyleOverrides: 0..1;
          legibilityAccessibilitySettingEnabled: 0..1;
          viewControllerBasedStatusBarAppearance: 0..1;
          fakingRequiresHighResolution: 0..1;
          isStatusBarFading: 0..1;
          systemWindowsSecure: 0..1;
        );
      end;
  public
    class function sharedApplication : UIApplication; message 'sharedApplication';
    procedure setDelegate(newValue: UIApplicationDelegateProtocol); message 'setDelegate:';
    function delegate: UIApplicationDelegateProtocol; message 'delegate';
    procedure beginIgnoringInteractionEvents; message 'beginIgnoringInteractionEvents';
    procedure endIgnoringInteractionEvents; message 'endIgnoringInteractionEvents';
    function isIgnoringInteractionEvents: boolean; message 'isIgnoringInteractionEvents';
    procedure setIdleTimerDisabled(newValue: boolean); message 'setIdleTimerDisabled:';
    function isIdleTimerDisabled: boolean; message 'isIdleTimerDisabled';
    function openURL (url: NSURL): boolean; message 'openURL:';
    function canOpenURL (url: NSURL): boolean; message 'canOpenURL:'; { available in 3_0 }
    procedure sendEvent (event: UIEvent); message 'sendEvent:';
    function keyWindow: UIWindow; message 'keyWindow';
    function windows: NSArray; message 'windows';
    function sendAction_to_from_forEvent (action: SEL; target: id; sender: id; event: UIEvent): boolean; message 'sendAction:to:from:forEvent:';
    procedure setNetworkActivityIndicatorVisible(newValue: boolean); message 'setNetworkActivityIndicatorVisible:';
    function isNetworkActivityIndicatorVisible: boolean; message 'isNetworkActivityIndicatorVisible';
    procedure setStatusBarStyle(newValue: UIStatusBarStyle); message 'setStatusBarStyle:';
    function statusBarStyle: UIStatusBarStyle; message 'statusBarStyle';
    procedure setStatusBarStyle_animated (statusBarStyle_: UIStatusBarStyle; animated: boolean); message 'setStatusBarStyle:animated:';
    procedure setStatusBarHidden(newValue: boolean); message 'setStatusBarHidden:';
    function isStatusBarHidden: boolean; message 'isStatusBarHidden';
    procedure setStatusBarHidden_withAnimation (hidden: boolean; animation: UIStatusBarAnimation); message 'setStatusBarHidden:withAnimation:'; { available in 3_2 }
    procedure setStatusBarOrientation(newValue: UIInterfaceOrientation); message 'setStatusBarOrientation:';
    function statusBarOrientation: UIInterfaceOrientation; message 'statusBarOrientation';
    procedure setStatusBarOrientation_animated (interfaceOrientation: UIInterfaceOrientation; animated: boolean); message 'setStatusBarOrientation:animated:';
    function supportedInterfaceOrientationsForWindow (window: UIWindow): NSUInteger; message 'supportedInterfaceOrientationsForWindow:'; { available in 6_0 }
    function statusBarOrientationAnimationDuration: NSTimeInterval; message 'statusBarOrientationAnimationDuration';
    function statusBarFrame: CGRect; message 'statusBarFrame';
    procedure setApplicationIconBadgeNumber(newValue: NSInteger); message 'setApplicationIconBadgeNumber:';
    function applicationIconBadgeNumber: NSInteger; message 'applicationIconBadgeNumber';
    procedure setApplicationSupportsShakeToEdit(newValue: boolean); message 'setApplicationSupportsShakeToEdit:';
    function applicationSupportsShakeToEdit: boolean; message 'applicationSupportsShakeToEdit';
    function applicationState: UIApplicationState; message 'applicationState';
    function backgroundTimeRemaining: NSTimeInterval; message 'backgroundTimeRemaining';
    function beginBackgroundTaskWithExpirationHandler (handler: OpaqueCBlock): UIBackgroundTaskIdentifier; message 'beginBackgroundTaskWithExpirationHandler:'; { available in 4_0 }
    function beginBackgroundTaskWithName_expirationHandler (taskName: NSString; handler: OpaqueCBlock): UIBackgroundTaskIdentifier; message 'beginBackgroundTaskWithName:expirationHandler:'; { available in 7_0 }
    procedure endBackgroundTask (identifier: UIBackgroundTaskIdentifier); message 'endBackgroundTask:'; { available in 4_0 }
    procedure setMinimumBackgroundFetchInterval (minimumBackgroundFetchInterval: NSTimeInterval); message 'setMinimumBackgroundFetchInterval:'; { available in 7_0 }
    function backgroundRefreshStatus: UIBackgroundRefreshStatus; message 'backgroundRefreshStatus';
    function setKeepAliveTimeout_handler (timeout: NSTimeInterval; keepAliveHandler: OpaqueCBlock): boolean; message 'setKeepAliveTimeout:handler:'; { available in 4_0 }
    procedure clearKeepAliveTimeout; message 'clearKeepAliveTimeout'; { available in 4_0 }
    function isProtectedDataAvailable: boolean; message 'isProtectedDataAvailable';
    function userInterfaceLayoutDirection: UIUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection';
    function preferredContentSizeCategory: NSString; message 'preferredContentSizeCategory';

    { Adopted protocols }
    procedure actionSheet_clickedButtonAtIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:clickedButtonAtIndex:';
    procedure actionSheet_didDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:didDismissWithButtonIndex:';
    procedure actionSheet_willDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:willDismissWithButtonIndex:';
    procedure actionSheetCancel (actionSheet: UIActionSheet); message 'actionSheetCancel:';
    procedure didPresentActionSheet (actionSheet: UIActionSheet); message 'didPresentActionSheet:';
    procedure willPresentActionSheet (actionSheet: UIActionSheet); message 'willPresentActionSheet:';
  end;


type
  UIRemoteNotifications = objccategory external (UIApplication)
    procedure registerForRemoteNotifications; message 'registerForRemoteNotifications'; { available in 8_0 }
    procedure unregisterForRemoteNotifications; message 'unregisterForRemoteNotifications'; { available in 3_0 }
    function isRegisteredForRemoteNotifications: boolean; message 'isRegisteredForRemoteNotifications'; { available in 8_0 }
    procedure registerForRemoteNotificationTypes (types: UIRemoteNotificationType); message 'registerForRemoteNotificationTypes:'; deprecated 'in 3_0, 8_0, "Please use registerForRemoteNotifications and registerUserNotificationSettings: instead"';
    function enabledRemoteNotificationTypes: UIRemoteNotificationType; message 'enabledRemoteNotificationTypes'; deprecated 'in 3_0, 8_0, "Please use -[UIApplication isRegisteredForRemoteNotifications], or -[UIApplication currentUserNotificationSettings] to retrieve user-enabled remote notification and user notification settings"';
  end;

type
  UILocalNotifications = objccategory external (UIApplication)
    procedure presentLocalNotificationNow (notification: UILocalNotification); message 'presentLocalNotificationNow:'; { available in 4_0 }
    procedure scheduleLocalNotification (notification: UILocalNotification); message 'scheduleLocalNotification:'; { available in 4_0 }
    procedure cancelLocalNotification (notification: UILocalNotification); message 'cancelLocalNotification:'; { available in 4_0 }
    procedure cancelAllLocalNotifications; message 'cancelAllLocalNotifications'; { available in 4_0 }
    procedure setScheduledLocalNotifications(newValue: NSArray); message 'setScheduledLocalNotifications:';
    function scheduledLocalNotifications: NSArray; message 'scheduledLocalNotifications';
  end;

type
  UIApplication_UIUserNotificationSettings = objccategory external name 'UIUserNotificationSettings' (UIApplication)
    procedure registerUserNotificationSettings (notificationSettings: UIUserNotificationSettings); message 'registerUserNotificationSettings:'; { available in 8_0 }
    function currentUserNotificationSettings: UIUserNotificationSettings; message 'currentUserNotificationSettings'; { available in 8_0 }
  end;

type
  UIRemoteControlEvents = objccategory external (UIApplication)
    procedure beginReceivingRemoteControlEvents; message 'beginReceivingRemoteControlEvents'; { available in 4_0 }
    procedure endReceivingRemoteControlEvents; message 'endReceivingRemoteControlEvents'; { available in 4_0 }
  end;

type
  UINewsstand = objccategory external (UIApplication)
    procedure setNewsstandIconImage (image: UIImagePtr); message 'setNewsstandIconImage:'; deprecated 'in 5_0, 9_0, "Newsstand apps now behave like normal apps on SpringBoard"';
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

{$ifdef PROTOCOLS}

type
  UIApplicationDelegateProtocol = objcprotocol external name 'UIApplicationDelegate' (NSObjectProtocol)
  optional
    procedure applicationDidFinishLaunching (application: UIApplication); message 'applicationDidFinishLaunching:';
    function application_willFinishLaunchingWithOptions (application: UIApplication; launchOptions: NSDictionary): boolean; message 'application:willFinishLaunchingWithOptions:'; { available in 6_0 }
    function application_didFinishLaunchingWithOptions (application: UIApplication; launchOptions: NSDictionary): boolean; message 'application:didFinishLaunchingWithOptions:'; { available in 3_0 }
    procedure applicationDidBecomeActive (application: UIApplication); message 'applicationDidBecomeActive:';
    procedure applicationWillResignActive (application: UIApplication); message 'applicationWillResignActive:';
    function application_handleOpenURL (application: UIApplication; url: NSURL): boolean; message 'application:handleOpenURL:';
    function application_openURL_sourceApplication_annotation (application: UIApplication; url: NSURL; sourceApplication: NSString; annotation: id): boolean; message 'application:openURL:sourceApplication:annotation:'; { available in 4_2 }
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
    procedure application_didReceiveRemoteNotification (application: UIApplication; userInfo: NSDictionary); message 'application:didReceiveRemoteNotification:'; { available in 3_0 }
    procedure application_didReceiveLocalNotification (application: UIApplication; notification: UILocalNotification); message 'application:didReceiveLocalNotification:'; { available in 4_0 }
    procedure application_handleActionWithIdentifier_forLocalNotification_completionHandler (application: UIApplication; identifier: NSString; notification: UILocalNotification; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forLocalNotification:completionHandler:'; { available in 8_0 }
    procedure application_handleActionWithIdentifier_forRemoteNotification_completionHandler (application: UIApplication; identifier: NSString; userInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:handleActionWithIdentifier:forRemoteNotification:completionHandler:'; { available in 8_0 }
    procedure application_didReceiveRemoteNotification_fetchCompletionHandler (application: UIApplication; userInfo: NSDictionary; completionHandler: OpaqueCBlock); message 'application:didReceiveRemoteNotification:fetchCompletionHandler:'; { available in 7_0 }
    procedure application_performFetchWithCompletionHandler (application: UIApplication; completionHandler: OpaqueCBlock); message 'application:performFetchWithCompletionHandler:'; { available in 7_0 }
    procedure application_performActionForShortcutItem_completionHandler (application: UIApplication; shortcutItem: UIApplicationShortcutItem; completionHandler: OpaqueCBlock); message 'application:performActionForShortcutItem:completionHandler:'; { available in 9_0 }
    procedure application_handleEventsForBackgroundURLSession_completionHandler (application: UIApplication; identifier: NSString; completionHandler: OpaqueCBlock); message 'application:handleEventsForBackgroundURLSession:completionHandler:'; { available in 7_0 }
    procedure application_handleWatchKitExtensionRequest_reply (application: UIApplication; userInfo: NSDictionary; reply: OpaqueCBlock); message 'application:handleWatchKitExtensionRequest:reply:'; { available in 8_2 }
    procedure applicationDidEnterBackground (application: UIApplication); message 'applicationDidEnterBackground:'; { available in 4_0 }
    procedure applicationWillEnterForeground (application: UIApplication); message 'applicationWillEnterForeground:'; { available in 4_0 }
    procedure applicationProtectedDataWillBecomeUnavailable (application: UIApplication); message 'applicationProtectedDataWillBecomeUnavailable:'; { available in 4_0 }
    procedure applicationProtectedDataDidBecomeAvailable (application: UIApplication); message 'applicationProtectedDataDidBecomeAvailable:'; { available in 4_0 }
    procedure setWindow(newValue: UIWindow); message 'setWindow:';
    function window: UIWindow; message 'window';
    function application_supportedInterfaceOrientationsForWindow (application: UIApplication; window_: UIWindow): NSUInteger; message 'application:supportedInterfaceOrientationsForWindow:'; { available in 6_0 }
    function application_shouldAllowExtensionPointIdentifier (application: UIApplication; extensionPointIdentifier: NSString): boolean; message 'application:shouldAllowExtensionPointIdentifier:'; { available in 8_0 }
    function application_viewControllerWithRestorationIdentifierPath_coder (application: UIApplication; identifierComponents: NSArray; coder: NSCoder): UIViewController; message 'application:viewControllerWithRestorationIdentifierPath:coder:'; { available in 6_0 }
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
    procedure setProximitySensingEnabled(newValue: boolean); message 'setProximitySensingEnabled:';
    function isProximitySensingEnabled: boolean; message 'isProximitySensingEnabled';
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
function UIApplicationMain(argc: cint; argv: PChar { variable size array of PChar }; principalClassName: NSString; delegateClassName: NSString): cint; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITrackingRunLoopMode: NSString; cvar; external;
  UIApplicationDidEnterBackgroundNotification: NSString { available in 4_0 }; cvar; external;
  UIApplicationWillEnterForegroundNotification: NSString { available in 4_0 }; cvar; external;
  UIApplicationDidFinishLaunchingNotification: NSString; cvar; external;
  UIApplicationDidBecomeActiveNotification: NSString; cvar; external;
  UIApplicationWillResignActiveNotification: NSString; cvar; external;
  UIApplicationDidReceiveMemoryWarningNotification: NSString; cvar; external;
  UIApplicationWillTerminateNotification: NSString; cvar; external;
  UIApplicationSignificantTimeChangeNotification: NSString; cvar; external;
  UIApplicationWillChangeStatusBarOrientationNotification: NSString; cvar; external;
  UIApplicationDidChangeStatusBarOrientationNotification: NSString; cvar; external;
  UIApplicationStatusBarOrientationUserInfoKey: NSString; cvar; external;
  UIApplicationWillChangeStatusBarFrameNotification: NSString; cvar; external;
  UIApplicationDidChangeStatusBarFrameNotification: NSString; cvar; external;
  UIApplicationStatusBarFrameUserInfoKey: NSString; cvar; external;
  UIApplicationBackgroundRefreshStatusDidChangeNotification: NSString { available in 7_0 }; cvar; external;
  UIApplicationLaunchOptionsURLKey: NSString { available in 3_0 }; cvar; external;
  UIApplicationLaunchOptionsSourceApplicationKey: NSString { available in 3_0 }; cvar; external;
  UIApplicationLaunchOptionsRemoteNotificationKey: NSString { available in 3_0 }; cvar; external;
  UIApplicationLaunchOptionsLocalNotificationKey: NSString { available in 4_0 }; cvar; external;
  UIApplicationLaunchOptionsAnnotationKey: NSString { available in 3_2 }; cvar; external;
  UIApplicationProtectedDataWillBecomeUnavailable: NSString { available in 4_0 }; cvar; external;
  UIApplicationProtectedDataDidBecomeAvailable: NSString { available in 4_0 }; cvar; external;
  UIApplicationLaunchOptionsLocationKey: NSString { available in 4_0 }; cvar; external;
  UIApplicationLaunchOptionsNewsstandDownloadsKey: NSString { available in 5_0 }; cvar; external;
  UIApplicationLaunchOptionsBluetoothCentralsKey: NSString { available in 7_0 }; cvar; external;
  UIApplicationLaunchOptionsBluetoothPeripheralsKey: NSString { available in 7_0 }; cvar; external;
  UIApplicationLaunchOptionsUserActivityDictionaryKey: NSString { available in 8_0 }; cvar; external;
  UIApplicationLaunchOptionsUserActivityTypeKey: NSString { available in 8_0 }; cvar; external;
  UIApplicationOpenSettingsURLString: NSString { available in 8_0 }; cvar; external;
  UIContentSizeCategoryExtraSmall: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategorySmall: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryMedium: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryExtraExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryExtraExtraExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryAccessibilityMedium: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryAccessibilityLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryAccessibilityExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryAccessibilityExtraExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryAccessibilityExtraExtraExtraLarge: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryDidChangeNotification: NSString { available in 7_0 }; cvar; external;
  UIContentSizeCategoryNewValueKey: NSString { available in 7_0 }; cvar; external;
  UIApplicationUserDidTakeScreenshotNotification: NSString { available in 7_0 }; cvar; external;
  UIApplicationKeyboardExtensionPointIdentifier: NSString { available in 8_0 }; cvar; external;
{$endif}

