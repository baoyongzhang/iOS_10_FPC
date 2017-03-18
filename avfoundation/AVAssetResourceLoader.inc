{ Parsed from AVFoundation.framework AVAssetResourceLoader.h }

{$ifdef TYPES}
type
  AVAssetResourceLoaderPtr = ^AVAssetResourceLoader;
  AVAssetResourceLoadingRequestPtr = ^AVAssetResourceLoadingRequest;
  AVAssetResourceRenewalRequestPtr = ^AVAssetResourceRenewalRequest;
  AVAssetResourceLoadingContentInformationRequestPtr = ^AVAssetResourceLoadingContentInformationRequest;
  AVAssetResourceLoadingDataRequestPtr = ^AVAssetResourceLoadingDataRequest;
  AVAssetResourceLoaderDelegateProtocolPtr = ^AVAssetResourceLoaderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoader = objcclass external (NSObject)
  private
    _resourceLoader: AVAssetResourceLoaderInternal;
  public
    procedure setDelegate_queue (delegate: nullable AVAssetResourceLoaderDelegateProtocol; delegateQueue: nullable dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVAssetResourceLoaderDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAssetResourceLoaderDelegateProtocol = objcprotocol external name 'AVAssetResourceLoaderDelegate' (NSObjectProtocol)
  optional
    function resourceLoader_shouldWaitForLoadingOfRequestedResource (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest): boolean; message 'resourceLoader:shouldWaitForLoadingOfRequestedResource:'; { available in 10_9, 6_0 }
    function resourceLoader_shouldWaitForRenewalOfRequestedResource (resourceLoader: AVAssetResourceLoader; renewalRequest: AVAssetResourceRenewalRequest): boolean; message 'resourceLoader:shouldWaitForRenewalOfRequestedResource:'; { available in 10_10, 8_0 }
    procedure resourceLoader_didCancelLoadingRequest (resourceLoader: AVAssetResourceLoader; loadingRequest: AVAssetResourceLoadingRequest); message 'resourceLoader:didCancelLoadingRequest:'; { available in 10_9, 7_0 }
    function resourceLoader_shouldWaitForResponseToAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge): boolean; message 'resourceLoader:shouldWaitForResponseToAuthenticationChallenge:'; { available in 10_10, 8_0 }
    procedure resourceLoader_didCancelAuthenticationChallenge (resourceLoader: AVAssetResourceLoader; authenticationChallenge: NSURLAuthenticationChallenge); message 'resourceLoader:didCancelAuthenticationChallenge:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoadingRequest = objcclass external (NSObject)
  private
    _loadingRequest: AVAssetResourceLoadingRequestInternal;
  public
    function request: NSURLRequest; message 'request';
    function isFinished: boolean; message 'isFinished';
    function isCancelled: boolean; message 'isCancelled';
    function contentInformationRequest: AVAssetResourceLoadingContentInformationRequest; message 'contentInformationRequest';
    function dataRequest: AVAssetResourceLoadingDataRequest; message 'dataRequest';
    procedure setResponse(newValue: NSURLResponse); message 'setResponse:';
    function response: NSURLResponse; message 'response';
    procedure setRedirect(newValue: NSURLRequest); message 'setRedirect:';
    function redirect: NSURLRequest; message 'redirect';
    procedure finishLoading; message 'finishLoading'; { available in 10_9, 7_0 }
    procedure finishLoadingWithError (error: nullable NSErrorPtr); message 'finishLoadingWithError:';
  end;

type
  AVAssetResourceRenewalRequest = objcclass external (AVAssetResourceLoadingRequest)
  end;

type
  AVAssetResourceLoadingContentInformationRequest = objcclass external (NSObject)
  private
    _contentInformationRequest: AVAssetResourceLoadingContentInformationRequestInternal;
  public
    procedure setContentType(newValue: NSString); message 'setContentType:';
    function contentType: NSString; message 'contentType';
    procedure setContentLength(newValue: clonglong); message 'setContentLength:';
    function contentLength: clonglong; message 'contentLength';
    procedure setByteRangeAccessSupported(newValue: boolean); message 'setByteRangeAccessSupported:';
    function isByteRangeAccessSupported: boolean; message 'isByteRangeAccessSupported';
    procedure setRenewalDate(newValue: NSDate); message 'setRenewalDate:';
    function renewalDate: NSDate; message 'renewalDate';
  end;

type
  AVAssetResourceLoadingDataRequest = objcclass external (NSObject)
  private
    _dataRequest: AVAssetResourceLoadingDataRequestInternal;
  public
    function requestedOffset: clonglong; message 'requestedOffset';
    function requestedLength: NSInteger; message 'requestedLength';
    function requestsAllDataToEndOfResource: boolean; message 'requestsAllDataToEndOfResource';
    function currentOffset: clonglong; message 'currentOffset';
    procedure respondWithData (data: NSData); message 'respondWithData:';
  end;


type
  AVAssetResourceLoaderContentKeySupport = objccategory external (AVAssetResourceLoader)
    procedure setPreloadsEligibleContentKeys(newValue: boolean); message 'setPreloadsEligibleContentKeys:';
    function preloadsEligibleContentKeys: boolean; message 'preloadsEligibleContentKeys';
  end;

type
  AVAssetResourceLoadingRequestContentKeyRequestSupport = objccategory external (AVAssetResourceLoadingRequest)
    function streamingContentKeyRequestDataForApp_contentIdentifier_options_error (appIdentifier: NSData; contentIdentifier: NSData; options: nullable NSDictionaryPtr; outError: NSError * _Nullable * _Nullable): nullable NSDataPtr; message 'streamingContentKeyRequestDataForApp:contentIdentifier:options:error:';
    function persistentContentKeyFromKeyVendorResponse_options_error (keyVendorResponse: NSData; options: nullable NSDictionaryPtr; outError: NSErrorPtr): NSData; message 'persistentContentKeyFromKeyVendorResponse:options:error:'; { available in 9_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetResourceLoadingRequestStreamingContentKeyRequestRequiresPersistentKey: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetResourceLoadingRequestDeprecated = objccategory external (AVAssetResourceLoadingRequest)
    procedure finishLoadingWithResponse_data_redirect (response_: nullable NSURLResponsePtr; data: nullable NSDataPtr; redirect_: nullable NSURLRequestPtr); message 'finishLoadingWithResponse:data:redirect:'; deprecated 'in 6_0, 7_0';
  end;
{$endif}

