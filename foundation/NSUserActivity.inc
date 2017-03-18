{ Parsed from Foundation.framework NSUserActivity.h }

{$ifdef TYPES}
type
  NSUserActivityPtr = ^NSUserActivity;
  NSUserActivityDelegateProtocolPtr = ^NSUserActivityDelegateProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSUserActivity = objcclass external (NSObject)
  public
    function initWithActivityType (activityType: NSString): instancetype; message 'initWithActivityType:'; { NS_DESIGNATED_INITIALIZER }
    function init                                                                                                      , ios(8.0, 10.0), watchos(2.0, 3.0), tvos(9.0, 10.0)): instancetype; message 'init                                                                                                      , ios(8.0, 10.0), watchos(2.0, 3.0), tvos(9.0, 10.0))'; deprecated 'in "Use initWithActivityType: with a specific activity type string", macosx(10.10, 10.12';
    function activityType: NSString; message 'activityType';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure addUserInfoEntriesFromDictionary (otherDictionary: NSDictionary); message 'addUserInfoEntriesFromDictionary:';
    procedure setRequiredUserInfoKeys(newValue: NSString *ProtocolPtr); message 'setRequiredUserInfoKeys:';
    function requiredUserInfoKeys: NSString *ProtocolPtr; message 'requiredUserInfoKeys';
    procedure setNeedsSave(newValue: boolean); message 'setNeedsSave:';
    function needsSave: boolean; message 'needsSave';
    procedure setWebpageURL(newValue: NSURL); message 'setWebpageURL:';
    function webpageURL: NSURL; message 'webpageURL';
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:';
    function expirationDate: NSDate; message 'expirationDate';
    procedure setKeywords(newValue: NSString *ProtocolPtr); message 'setKeywords:';
    function keywords: NSString *ProtocolPtr; message 'keywords';
    procedure setSupportsContinuationStreams(newValue: boolean); message 'setSupportsContinuationStreams:';
    function supportsContinuationStreams: boolean; message 'supportsContinuationStreams';
    procedure setDelegate(newValue: NSUserActivityDelegateProtocol); message 'setDelegate:';
    function delegate: NSUserActivityDelegateProtocol; message 'delegate';
    procedure becomeCurrent; message 'becomeCurrent';
    procedure resignCurrent; message 'resignCurrent'; { available in 10_11, 9_0 }
    procedure invalidate; message 'invalidate';
    procedure getContinuationStreamsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getContinuationStreamsWithCompletionHandler:';
    procedure setEligibleForHandoff(newValue: boolean); message 'setEligibleForHandoff:';
    function isEligibleForHandoff: boolean; message 'isEligibleForHandoff';
    procedure setEligibleForSearch(newValue: boolean); message 'setEligibleForSearch:';
    function isEligibleForSearch: boolean; message 'isEligibleForSearch';
    procedure setEligibleForPublicIndexing(newValue: boolean); message 'setEligibleForPublicIndexing:';
    function isEligibleForPublicIndexing: boolean; message 'isEligibleForPublicIndexing';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserActivityTypeBrowsingWeb: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserActivityDelegateProtocol = objcprotocol external name 'NSUserActivityDelegate' (NSObjectProtocol)
  optional
    procedure userActivityWillSave (userActivity: NSUserActivity); message 'userActivityWillSave:';
    procedure userActivityWasContinued (userActivity: NSUserActivity); message 'userActivityWasContinued:';
    procedure userActivity_didReceiveInputStream_outputStream (userActivity: nullable NSUserActivityPtr; inputStream: NSInputStream; outputStream: NSOutputStream); message 'userActivity:didReceiveInputStream:outputStream:';
  end;
{$endif}

{$endif}
