{ Parsed from Foundation.framework NSURLSession.h }

{ Types from NSURLSession }
{$ifdef TYPES}

{$endif}


{ Types from NSURLSessionConfiguration }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSURLSessionPtr = ^NSURLSession;
  NSURLSessionTaskPtr = ^NSURLSessionTask;
  NSURLSessionDataTaskPtr = ^NSURLSessionDataTask;
  NSURLSessionUploadTaskPtr = ^NSURLSessionUploadTask;
  NSURLSessionDownloadTaskPtr = ^NSURLSessionDownloadTask;
  NSURLSessionStreamTaskPtr = ^NSURLSessionStreamTask;
  NSURLSessionConfigurationPtr = ^NSURLSessionConfiguration;
  NSURLSessionTaskTransactionMetricsPtr = ^NSURLSessionTaskTransactionMetrics;
  NSURLSessionTaskMetricsPtr = ^NSURLSessionTaskMetrics;
  NSURLSessionDelegateProtocolPtr = ^NSURLSessionDelegateProtocol;
  NSURLSessionTaskDelegateProtocolPtr = ^NSURLSessionTaskDelegateProtocol;
  NSURLSessionDataDelegateProtocolPtr = ^NSURLSessionDataDelegateProtocol;
  NSURLSessionDownloadDelegateProtocolPtr = ^NSURLSessionDownloadDelegateProtocol;
  NSURLSessionStreamDelegateProtocolPtr = ^NSURLSessionStreamDelegateProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
const
  NSURLSESSION_AVAILABLE = 10_9;
{$endif}

{$else}
{$ifdef TYPES}
const
  NSURLSESSION_AVAILABLE = 1010;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionTransferSizeUnknown: cint64 { available in NSURLSESSION_AVAILABLE, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSession = objcclass external (NSObject)
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function sharedSession: NSURLSession; message 'sharedSession';
    {$endif}
    class function sessionWithConfiguration (configuration: NSURLSessionConfiguration): NSURLSession; message 'sessionWithConfiguration:';
    class function sessionWithConfiguration_delegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: NSURLSessionDelegateProtocol; queue: NSOperationQueuePtr): NSURLSession; message 'sessionWithConfiguration:delegate:delegateQueue:';
    function delegateQueue: NSOperationQueue; message 'delegateQueue';
    function delegate: NSURLSessionDelegateProtocol; message 'delegate';
    function configuration: NSURLSessionConfiguration; message 'configuration';
    procedure setSessionDescription(newValue: NSString); message 'setSessionDescription:';
    function sessionDescription: NSString; message 'sessionDescription';
    procedure finishTasksAndInvalidate; message 'finishTasksAndInvalidate';
    procedure invalidateAndCancel; message 'invalidateAndCancel';
    procedure resetWithCompletionHandler (completionHandler: OpaqueCBlock); message 'resetWithCompletionHandler:';
    procedure flushWithCompletionHandler (completionHandler: OpaqueCBlock); message 'flushWithCompletionHandler:';
    procedure getTasksWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getTasksWithCompletionHandler:';
    procedure getAllTasksWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getAllTasksWithCompletionHandler:'; { available in 10_11, 9_0 }
    function dataTaskWithRequest (request: NSURLRequest): NSURLSessionDataTask; message 'dataTaskWithRequest:';
    function dataTaskWithURL (url: NSURL): NSURLSessionDataTask; message 'dataTaskWithURL:';
    function uploadTaskWithRequest_fromFile (request: NSURLRequest; fileURL: NSURL): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:';
    function uploadTaskWithRequest_fromData (request: NSURLRequest; bodyData: NSData): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:';
    function uploadTaskWithStreamedRequest (request: NSURLRequest): NSURLSessionUploadTask; message 'uploadTaskWithStreamedRequest:';
    function downloadTaskWithRequest (request: NSURLRequest): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:';
    function downloadTaskWithURL (url: NSURL): NSURLSessionDownloadTask; message 'downloadTaskWithURL:';
    function downloadTaskWithResumeData (resumeData: NSData): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:';
    function streamTaskWithHostName_port (hostname: NSString; port: NSInteger): NSURLSessionStreamTask; message 'streamTaskWithHostName:port:'; { available in 10_11, 9_0 }
    function streamTaskWithNetService (service: NSNetService): NSURLSessionStreamTask; message 'streamTaskWithNetService:'; { available in 10_11, 9_0 }
  end;


type
  NSURLSessionAsynchronousConvenience = objccategory external (NSURLSession)
    function dataTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: OpaqueCBlock): NSURLSessionDataTask; message 'dataTaskWithRequest:completionHandler:';
    function dataTaskWithURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock): NSURLSessionDataTask; message 'dataTaskWithURL:completionHandler:';
    function uploadTaskWithRequest_fromFile_completionHandler (request: NSURLRequest; fileURL: NSURL; completionHandler: OpaqueCBlock): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:completionHandler:';
    function uploadTaskWithRequest_fromData_completionHandler (request: NSURLRequest; bodyData: NSDataPtr; completionHandler: OpaqueCBlock): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:completionHandler:';
    function downloadTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:completionHandler:';
    function downloadTaskWithURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithURL:completionHandler:';
    function downloadTaskWithResumeData_completionHandler (resumeData: NSData; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:completionHandler:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionTaskState = NSInteger;
  NSURLSessionTaskStatePtr = ^NSURLSessionTaskState;

const
  NSURLSessionTaskStateRunning = 0;
  NSURLSessionTaskStateSuspended = 1;
  NSURLSessionTaskStateCanceling = 2;
  NSURLSessionTaskStateCompleted = 3;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionTask = objcclass external (NSObject, NSCopyingProtocol)
  public
    function taskIdentifier: NSUInteger; message 'taskIdentifier';
    function originalRequest: NSURLRequest; message 'originalRequest';
    function currentRequest: NSURLRequest; message 'currentRequest';
    function response: NSURLResponse; message 'response';
    function countOfBytesReceived: cint64; message 'countOfBytesReceived';
    function countOfBytesSent: cint64; message 'countOfBytesSent';
    function countOfBytesExpectedToSend: cint64; message 'countOfBytesExpectedToSend';
    function countOfBytesExpectedToReceive: cint64; message 'countOfBytesExpectedToReceive';
    procedure setTaskDescription(newValue: NSString); message 'setTaskDescription:';
    function taskDescription: NSString; message 'taskDescription';
    procedure cancel; message 'cancel';
    function state: NSURLSessionTaskState; message 'state';
    function error: NSError; message 'error';
    procedure suspend; message 'suspend';
    procedure resume; message 'resume';
    procedure setPriority(newValue: single); message 'setPriority:';
    function priority: single; message 'priority';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionTaskPriorityDefault: single { available in 10_10, 8_0 }; cvar; external;
  NSURLSessionTaskPriorityLow: single { available in 10_10, 8_0 }; cvar; external;
  NSURLSessionTaskPriorityHigh: single { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionDataTask = objcclass external (NSURLSessionTask)
  end;

type
  NSURLSessionUploadTask = objcclass external (NSURLSessionDataTask)
  end;

type
  NSURLSessionDownloadTask = objcclass external (NSURLSessionTask)
  public
    procedure cancelByProducingResumeData (completionHandler: OpaqueCBlock); message 'cancelByProducingResumeData:';
  end;

type
  NSURLSessionStreamTask = objcclass external (NSURLSessionTask)
  public
    procedure readDataOfMinLength_maxLength_timeout_completionHandler (minBytes: NSUInteger; maxBytes: NSUInteger; timeout: NSTimeInterval; completionHandler: OpaqueCBlock); message 'readDataOfMinLength:maxLength:timeout:completionHandler:';
    procedure writeData_timeout_completionHandler (data: NSData; timeout: NSTimeInterval; completionHandler: OpaqueCBlock); message 'writeData:timeout:completionHandler:';
    procedure captureStreams; message 'captureStreams';
    procedure closeWrite; message 'closeWrite';
    procedure closeRead; message 'closeRead';
    procedure startSecureConnection; message 'startSecureConnection';
    procedure stopSecureConnection; message 'stopSecureConnection';
  end;

type
  NSURLSessionConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function defaultSessionConfiguration: NSURLSessionConfiguration; message 'defaultSessionConfiguration';
    function ephemeralSessionConfiguration: NSURLSessionConfiguration; message 'ephemeralSessionConfiguration';
    {$endif}
    class function backgroundSessionConfigurationWithIdentifier (identifier: NSString): NSURLSessionConfiguration; message 'backgroundSessionConfigurationWithIdentifier:'; { available in 10_10, 8_0 }
    function identifier: NSString; message 'identifier';
    procedure setRequestCachePolicy(newValue: NSURLRequestCachePolicy); message 'setRequestCachePolicy:';
    function requestCachePolicy: NSURLRequestCachePolicy; message 'requestCachePolicy';
    procedure setTimeoutIntervalForRequest(newValue: NSTimeInterval); message 'setTimeoutIntervalForRequest:';
    function timeoutIntervalForRequest: NSTimeInterval; message 'timeoutIntervalForRequest';
    procedure setTimeoutIntervalForResource(newValue: NSTimeInterval); message 'setTimeoutIntervalForResource:';
    function timeoutIntervalForResource: NSTimeInterval; message 'timeoutIntervalForResource';
    procedure setNetworkServiceType(newValue: NSURLRequestNetworkServiceType); message 'setNetworkServiceType:';
    function networkServiceType: NSURLRequestNetworkServiceType; message 'networkServiceType';
    procedure setAllowsCellularAccess(newValue: boolean); message 'setAllowsCellularAccess:';
    function allowsCellularAccess: boolean; message 'allowsCellularAccess';
    procedure setDiscretionary(newValue: boolean); message 'setDiscretionary:';
    function isDiscretionary: boolean; message 'isDiscretionary';
    procedure setSharedContainerIdentifier(newValue: NSString); message 'setSharedContainerIdentifier:';
    function sharedContainerIdentifier: NSString; message 'sharedContainerIdentifier';
    procedure setSessionSendsLaunchEvents(newValue: boolean); message 'setSessionSendsLaunchEvents:';
    function sessionSendsLaunchEvents: boolean; message 'sessionSendsLaunchEvents';
    procedure setConnectionProxyDictionary(newValue: NSDictionary); message 'setConnectionProxyDictionary:';
    function connectionProxyDictionary: NSDictionary; message 'connectionProxyDictionary';
    procedure setTLSMinimumSupportedProtocol(newValue: SSLProtocol); message 'setTLSMinimumSupportedProtocol:';
    function TLSMinimumSupportedProtocol: SSLProtocol; message 'TLSMinimumSupportedProtocol';
    procedure setTLSMaximumSupportedProtocol(newValue: SSLProtocol); message 'setTLSMaximumSupportedProtocol:';
    function TLSMaximumSupportedProtocol: SSLProtocol; message 'TLSMaximumSupportedProtocol';
    procedure setHTTPShouldUsePipelining(newValue: boolean); message 'setHTTPShouldUsePipelining:';
    function HTTPShouldUsePipelining: boolean; message 'HTTPShouldUsePipelining';
    procedure setHTTPShouldSetCookies(newValue: boolean); message 'setHTTPShouldSetCookies:';
    function HTTPShouldSetCookies: boolean; message 'HTTPShouldSetCookies';
    procedure setHTTPCookieAcceptPolicy(newValue: NSHTTPCookieAcceptPolicy); message 'setHTTPCookieAcceptPolicy:';
    function HTTPCookieAcceptPolicy: NSHTTPCookieAcceptPolicy; message 'HTTPCookieAcceptPolicy';
    procedure setHTTPAdditionalHeaders(newValue: NSDictionary); message 'setHTTPAdditionalHeaders:';
    function HTTPAdditionalHeaders: NSDictionary; message 'HTTPAdditionalHeaders';
    procedure setHTTPMaximumConnectionsPerHost(newValue: NSInteger); message 'setHTTPMaximumConnectionsPerHost:';
    function HTTPMaximumConnectionsPerHost: NSInteger; message 'HTTPMaximumConnectionsPerHost';
    procedure setHTTPCookieStorage(newValue: NSHTTPCookieStorage); message 'setHTTPCookieStorage:';
    function HTTPCookieStorage: NSHTTPCookieStorage; message 'HTTPCookieStorage';
    procedure setURLCredentialStorage(newValue: NSURLCredentialStorage); message 'setURLCredentialStorage:';
    function URLCredentialStorage: NSURLCredentialStorage; message 'URLCredentialStorage';
    procedure setURLCache(newValue: NSURLCache); message 'setURLCache:';
    function URLCache: NSURLCache; message 'URLCache';
    procedure setShouldUseExtendedBackgroundIdleMode(newValue: boolean); message 'setShouldUseExtendedBackgroundIdleMode:';
    function shouldUseExtendedBackgroundIdleMode: boolean; message 'shouldUseExtendedBackgroundIdleMode';
    procedure setProtocolClasses(newValue: ClassProtocolPtr); message 'setProtocolClasses:';
    function protocolClasses: ClassProtocolPtr; message 'protocolClasses';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionAuthChallengeDisposition = NSInteger;
  NSURLSessionAuthChallengeDispositionPtr = ^NSURLSessionAuthChallengeDisposition;

const
  NSURLSessionAuthChallengeUseCredential = 0;
  NSURLSessionAuthChallengePerformDefaultHandling = 1;
  NSURLSessionAuthChallengeCancelAuthenticationChallenge = 2;
  NSURLSessionAuthChallengeRejectProtectionSpace = 3;

type
  NSURLSessionResponseDisposition = NSInteger;
  NSURLSessionResponseDispositionPtr = ^NSURLSessionResponseDisposition;

const
  NSURLSessionResponseCancel = 0;
  NSURLSessionResponseAllow = 1;
  NSURLSessionResponseBecomeDownload = 2;
  NSURLSessionResponseBecomeStream = 3 { available in 10_11, 9_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLSessionDelegateProtocol = objcprotocol external name 'NSURLSessionDelegate' (NSObjectProtocol)
  optional
    procedure URLSession_didBecomeInvalidWithError (session: NSURLSession; error: NSErrorPtr); message 'URLSession:didBecomeInvalidWithError:';
    procedure URLSession_didReceiveChallenge_completionHandler (session: NSURLSession; challenge: NSURLAuthenticationChallenge; completionHandler: OpaqueCBlock); message 'URLSession:didReceiveChallenge:completionHandler:';
    procedure URLSessionDidFinishEventsForBackgroundURLSession (session: NSURLSession); message 'URLSessionDidFinishEventsForBackgroundURLSession:'; { available in 7_0 }
  end;

type
  NSURLSessionTaskDelegateProtocol = objcprotocol external name 'NSURLSessionTaskDelegate' (NSURLSessionDelegateProtocol)
  optional
    procedure URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler (session: NSURLSession; task: NSURLSessionTask; response: NSHTTPURLResponse; request: NSURLRequest; completionHandler: OpaqueCBlock); message 'URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:';
    procedure URLSession_task_didReceiveChallenge_completionHandler (session: NSURLSession; task: NSURLSessionTask; challenge: NSURLAuthenticationChallenge; completionHandler: OpaqueCBlock); message 'URLSession:task:didReceiveChallenge:completionHandler:';
    procedure URLSession_task_needNewBodyStream (session: NSURLSession; task: NSURLSessionTask; completionHandler: OpaqueCBlock); message 'URLSession:task:needNewBodyStream:';
    procedure URLSession_task_didSendBodyData_totalBytesSent_totalBytesExpectedToSend (session: NSURLSession; task: NSURLSessionTask; bytesSent: cint64; totalBytesSent: cint64; totalBytesExpectedToSend: cint64); message 'URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:';
    procedure URLSession_task_didFinishCollectingMetrics (session: NSURLSession; task: NSURLSessionTask; metrics: NSURLSessionTaskMetrics); message 'URLSession:task:didFinishCollectingMetrics:'; { available in macosx(10.12 }
    procedure URLSession_task_didCompleteWithError (session: NSURLSession; task: NSURLSessionTask; error: NSErrorPtr); message 'URLSession:task:didCompleteWithError:';
  end;

type
  NSURLSessionDataDelegateProtocol = objcprotocol external name 'NSURLSessionDataDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_dataTask_didReceiveResponse_completionHandler (session: NSURLSession; dataTask: NSURLSessionDataTask; response: NSURLResponse; completionHandler: OpaqueCBlock); message 'URLSession:dataTask:didReceiveResponse:completionHandler:';
    procedure URLSession_dataTask_didBecomeDownloadTask (session: NSURLSession; dataTask: NSURLSessionDataTask; downloadTask: NSURLSessionDownloadTask); message 'URLSession:dataTask:didBecomeDownloadTask:';
    procedure URLSession_dataTask_didBecomeStreamTask (session: NSURLSession; dataTask: NSURLSessionDataTask; streamTask: NSURLSessionStreamTask); message 'URLSession:dataTask:didBecomeStreamTask:';
    procedure URLSession_dataTask_didReceiveData (session: NSURLSession; dataTask: NSURLSessionDataTask; data: NSData); message 'URLSession:dataTask:didReceiveData:';
    procedure URLSession_dataTask_willCacheResponse_completionHandler (session: NSURLSession; dataTask: NSURLSessionDataTask; proposedResponse: NSCachedURLResponse; completionHandler: OpaqueCBlock); message 'URLSession:dataTask:willCacheResponse:completionHandler:';
  end;

type
  NSURLSessionDownloadDelegateProtocol = objcprotocol external name 'NSURLSessionDownloadDelegate' (NSURLSessionTaskDelegateProtocol)
    procedure URLSession_downloadTask_didFinishDownloadingToURL (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; location: NSURL); message 'URLSession:downloadTask:didFinishDownloadingToURL:';
  optional
    procedure URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; bytesWritten: cint64; totalBytesWritten: cint64; totalBytesExpectedToWrite: cint64); message 'URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:';
    procedure URLSession_downloadTask_didResumeAtOffset_expectedTotalBytes (session: NSURLSession; downloadTask: NSURLSessionDownloadTask; fileOffset: cint64; expectedTotalBytes: cint64); message 'URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:';
  end;

type
  NSURLSessionStreamDelegateProtocol = objcprotocol external name 'NSURLSessionStreamDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_readClosedForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:readClosedForStreamTask:';
    procedure URLSession_writeClosedForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:writeClosedForStreamTask:';
    procedure URLSession_betterRouteDiscoveredForStreamTask (session: NSURLSession; streamTask: NSURLSessionStreamTask); message 'URLSession:betterRouteDiscoveredForStreamTask:';
    procedure URLSession_streamTask_didBecomeInputStream_outputStream (session: NSURLSession; streamTask: NSURLSessionStreamTask; inputStream: NSInputStream; outputStream: NSOutputStream); message 'URLSession:streamTask:didBecomeInputStream:outputStream:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLSessionDownloadTaskResumeData: NSString { available in NSURLSESSION_AVAILABLE, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionDeprecated = objccategory external (NSURLSessionConfiguration)
    class function backgroundSessionConfiguration (identifier_: NSString): NSURLSessionConfiguration; message 'backgroundSessionConfiguration:'; deprecated 'in NSURLSESSION_AVAILABLE, 10_10, 7_0, 8_0, "Please use backgroundSessionConfigurationWithIdentifier: instead"';
  end;
{$endif}

{$ifdef TYPES}
type
  NSURLSessionTaskMetricsResourceFetchType = NSInteger;
  NSURLSessionTaskMetricsResourceFetchTypePtr = ^NSURLSessionTaskMetricsResourceFetchType;

const
  NSURLSessionTaskMetricsResourceFetchTypeUnknown = 0;
  NSURLSessionTaskMetricsResourceFetchTypeNetworkLoad = 1;
  NSURLSessionTaskMetricsResourceFetchTypeServerPush = 2;
  NSURLSessionTaskMetricsResourceFetchTypeLocalCache = 3;
{$endif}

{$ifdef CLASSES}

type
  NSURLSessionTaskTransactionMetrics = objcclass external (NSObject)
  public
    function request: NSURLRequest; message 'request';
    function response: NSURLResponse; message 'response';
    function fetchStartDate: NSDate; message 'fetchStartDate';
    function domainLookupStartDate: NSDate; message 'domainLookupStartDate';
    function domainLookupEndDate: NSDate; message 'domainLookupEndDate';
    function connectStartDate: NSDate; message 'connectStartDate';
    function secureConnectionStartDate: NSDate; message 'secureConnectionStartDate';
    function secureConnectionEndDate: NSDate; message 'secureConnectionEndDate';
    function connectEndDate: NSDate; message 'connectEndDate';
    function requestStartDate: NSDate; message 'requestStartDate';
    function requestEndDate: NSDate; message 'requestEndDate';
    function responseStartDate: NSDate; message 'responseStartDate';
    function responseEndDate: NSDate; message 'responseEndDate';
    function networkProtocolName: NSString; message 'networkProtocolName';
    function isProxyConnection: boolean; message 'isProxyConnection';
    function isReusedConnection: boolean; message 'isReusedConnection';
    function resourceFetchType: NSURLSessionTaskMetricsResourceFetchType; message 'resourceFetchType';
    function init: instancetype; message 'init';
  end;

type
  NSURLSessionTaskMetrics = objcclass external (NSObject)
  public
    function transactionMetrics: NSURLSessionTaskTransactionMetrics *ProtocolPtr; message 'transactionMetrics';
    function taskInterval: NSDateInterval; message 'taskInterval';
    function redirectCount: NSUInteger; message 'redirectCount';
    function init: instancetype; message 'init';
  end;
{$endif}

