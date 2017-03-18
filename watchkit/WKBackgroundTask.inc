{ Parsed from WatchKit.framework WKBackgroundTask.h }

{$ifdef TYPES}
type
  WKRefreshBackgroundTaskPtr = ^WKRefreshBackgroundTask;
  WKApplicationRefreshBackgroundTaskPtr = ^WKApplicationRefreshBackgroundTask;
  WKSnapshotRefreshBackgroundTaskPtr = ^WKSnapshotRefreshBackgroundTask;
  WKURLSessionRefreshBackgroundTaskPtr = ^WKURLSessionRefreshBackgroundTask;
  WKWatchConnectivityRefreshBackgroundTaskPtr = ^WKWatchConnectivityRefreshBackgroundTask;
{$endif}

{$if defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  WKRefreshBackgroundTask = objcclass external (NSObject)
  public
    function userInfo: NSSecureCodingProtocol; message 'userInfo';
    procedure setTaskCompleted; message 'setTaskCompleted';
  end;

type
  WKApplicationRefreshBackgroundTask = objcclass external (WKRefreshBackgroundTask)
  end;

type
  WKSnapshotRefreshBackgroundTask = objcclass external (WKRefreshBackgroundTask)
  public
    function returnToDefaultState: boolean; message 'returnToDefaultState';
    procedure setTaskCompletedWithDefaultStateRestored_estimatedSnapshotExpiration_userInfo_restoredDefaultState (restoredDefaultState: boolean; estimatedSnapshotExpiration: nullable NSDatePtr; userInfo_: nullable NSSecureCodingProtocol; estimatedSnapshotExpiration4: id); message 'setTaskCompletedWithDefaultStateRestored:estimatedSnapshotExpiration:userInfo:restoredDefaultState:';
  end;

type
  WKURLSessionRefreshBackgroundTask = objcclass external (WKRefreshBackgroundTask)
  public
    function sessionIdentifier: NSString; message 'sessionIdentifier';
  end;

type
  WKWatchConnectivityRefreshBackgroundTask = objcclass external (WKRefreshBackgroundTask)
  end;


type
  WKBackgroundTasks = objccategory external (WKExtension)
    procedure scheduleBackgroundRefreshWithPreferredDate_userInfo_scheduledCompletion (preferredFireDate: NSDate; userInfo: nullable NSSecureCodingProtocol; scheduledCompletion: OpaqueCBlock); message 'scheduleBackgroundRefreshWithPreferredDate:userInfo:scheduledCompletion:'; { available in 3.0 }
    procedure scheduleSnapshotRefreshWithPreferredDate_userInfo_scheduledCompletion (preferredFireDate: NSDate; userInfo: nullable NSSecureCodingProtocol; scheduledCompletion: OpaqueCBlock); message 'scheduleSnapshotRefreshWithPreferredDate:userInfo:scheduledCompletion:'; { available in 3.0 }
  end;
{$endif}

{$endif}
