{ Parsed from AVFoundation.framework AVAssetDownloadTask.h }

{$ifdef TYPES}
type
  AVAssetDownloadTaskPtr = ^AVAssetDownloadTask;
  AVAssetDownloadURLSessionPtr = ^AVAssetDownloadURLSession;
  AVAssetDownloadDelegateProtocolPtr = ^AVAssetDownloadDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetDownloadTaskMinimumRequiredMediaBitrateKey: NSString { available in 9_0 }; cvar; external;
  AVAssetDownloadTaskMediaSelectionKey: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetDownloadTask = objcclass external (NSURLSessionTask)
  public
    function URLAsset: AVURLAsset; message 'URLAsset';
    function destinationURL: NSURL; message 'destinationURL';
    function options: NSDictionary; message 'options';
    function loadedTimeRanges: NSValue *ProtocolPtr; message 'loadedTimeRanges';
    function originalRequest: NSURLRequest; message 'originalRequest';
    function currentRequest: NSURLRequest; message 'currentRequest';
    function response: NSURLResponse; message 'response';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAssetDownloadDelegateProtocol = objcprotocol external name 'AVAssetDownloadDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_assetDownloadTask_didFinishDownloadingToURL (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; location: NSURL); message 'URLSession:assetDownloadTask:didFinishDownloadingToURL:'; { available in 10_0 }
    procedure URLSession_assetDownloadTask_didLoadTimeRange_totalTimeRangesLoaded_timeRangeExpectedToLoad (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; timeRange: CMTimeRange; loadedTimeRanges: NSValue *ProtocolPtr; timeRangeExpectedToLoad: CMTimeRange); message 'URLSession:assetDownloadTask:didLoadTimeRange:totalTimeRangesLoaded:timeRangeExpectedToLoad:'; { available in 9_0 }
    procedure URLSession_assetDownloadTask_didResolveMediaSelection (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; resolvedMediaSelection: AVMediaSelection); message 'URLSession:assetDownloadTask:didResolveMediaSelection:'; { available in 9_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAssetDownloadURLSession = objcclass external (NSURLSession)
  public
    class function sessionWithConfiguration_assetDownloadDelegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: nullable AVAssetDownloadDelegateProtocol; delegateQueue: nullable NSOperationQueuePtr): AVAssetDownloadURLSession; message 'sessionWithConfiguration:assetDownloadDelegate:delegateQueue:';
    function assetDownloadTaskWithURLAsset_destinationURL_options (URLAsset: AVURLAsset; destinationURL: NSURL; options: nullable NSDictionaryPtr): nullable AVAssetDownloadTaskPtr; message 'assetDownloadTaskWithURLAsset:destinationURL:options:'; deprecated 'in 9_0, 10_0';
    function assetDownloadTaskWithURLAsset_assetTitle_assetArtworkData_options (URLAsset: AVURLAsset; title: NSString; artworkData: nullable NSDataPtr; options: nullable NSDictionaryPtr): nullable AVAssetDownloadTaskPtr; message 'assetDownloadTaskWithURLAsset:assetTitle:assetArtworkData:options:'; { available in 10_0 }
    class function sharedSession: NSURLSession; message 'sharedSession';
    class function sessionWithConfiguration (configuration: NSURLSessionConfiguration): NSURLSession; message 'sessionWithConfiguration:';
    class function sessionWithConfiguration_delegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: nullable NSURLSessionDelegateProtocol; queue: nullable NSOperationQueuePtr): NSURLSession; message 'sessionWithConfiguration:delegate:delegateQueue:';
    function dataTaskWithRequest (request: NSURLRequest): NSURLSessionDataTask; message 'dataTaskWithRequest:';
    function dataTaskWithURL (url: NSURL): NSURLSessionDataTask; message 'dataTaskWithURL:';
    function uploadTaskWithRequest_fromFile (request: NSURLRequest; fileURL: NSURL): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:';
    function uploadTaskWithRequest_fromData (request: NSURLRequest; bodyData: NSData): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:';
    function uploadTaskWithStreamedRequest (request: NSURLRequest): NSURLSessionUploadTask; message 'uploadTaskWithStreamedRequest:';
    function downloadTaskWithRequest (request: NSURLRequest): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:';
    function downloadTaskWithURL (url: NSURL): NSURLSessionDownloadTask; message 'downloadTaskWithURL:';
    function downloadTaskWithResumeData (resumeData: NSData): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:';
    function dataTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: OpaqueCBlock): NSURLSessionDataTask; message 'dataTaskWithRequest:completionHandler:';
    function dataTaskWithURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock): NSURLSessionDataTask; message 'dataTaskWithURL:completionHandler:';
    function uploadTaskWithRequest_fromFile_completionHandler (request: NSURLRequest; fileURL: NSURL; completionHandler: OpaqueCBlock): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:completionHandler:';
    function uploadTaskWithRequest_fromData_completionHandler (request: NSURLRequest; bodyData: nullable NSDataPtr; completionHandler: OpaqueCBlock): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:completionHandler:';
    function downloadTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:completionHandler:';
    function downloadTaskWithURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithURL:completionHandler:';
    function downloadTaskWithResumeData_completionHandler (resumeData: NSData; completionHandler: OpaqueCBlock): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:completionHandler:';
  end;
{$endif}

