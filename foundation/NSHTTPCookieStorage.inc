{ Parsed from Foundation.framework NSHTTPCookieStorage.h }

{ Types from NSHTTPCookieStorage }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSHTTPCookieStoragePtr = ^NSHTTPCookieStorage;
{$endif}

{$ifdef TYPES}
type
  NSHTTPCookieAcceptPolicy = NSUInteger;
  NSHTTPCookieAcceptPolicyPtr = ^NSHTTPCookieAcceptPolicy;

const
  NSHTTPCookieAcceptPolicyAlways = 0;
  NSHTTPCookieAcceptPolicyNever = 1;
  NSHTTPCookieAcceptPolicyOnlyFromMainDocumentDomain = 2;
{$endif}

{$ifdef CLASSES}

type
  NSHTTPCookieStorage = objcclass external (NSObject)
  private
    _internal: NSHTTPCookieStorageInternal;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function sharedHTTPCookieStorage: NSHTTPCookieStorage; message 'sharedHTTPCookieStorage';
    {$endif}
    class function sharedCookieStorageForGroupContainerIdentifier (identifier: NSString): NSHTTPCookieStorage; message 'sharedCookieStorageForGroupContainerIdentifier:'; { available in 10_11, 9_0 }
    function cookies: NSHTTPCookie *ProtocolPtr; message 'cookies';
    procedure setCookie (cookie: NSHTTPCookie); message 'setCookie:';
    procedure deleteCookie (cookie: NSHTTPCookie); message 'deleteCookie:';
    procedure removeCookiesSinceDate (date: NSDate); message 'removeCookiesSinceDate:'; { available in 10_10, 8_0 }
    function cookiesForURL (URL: NSURL): nullable NSHTTPCookie *ProtocolPtr; message 'cookiesForURL:';
    procedure setCookies_forURL_mainDocumentURL (cookies_: NSHTTPCookie *ProtocolPtr; URL: nullable NSURLPtr; mainDocumentURL: nullable NSURLPtr); message 'setCookies:forURL:mainDocumentURL:';
    procedure setCookieAcceptPolicy(newValue: NSHTTPCookieAcceptPolicy); message 'setCookieAcceptPolicy:';
    function cookieAcceptPolicy: NSHTTPCookieAcceptPolicy; message 'cookieAcceptPolicy';
    function sortedCookiesUsingDescriptors (sortOrder: NSSortDescriptor *ProtocolPtr): NSHTTPCookie *ProtocolPtr; message 'sortedCookiesUsingDescriptors:'; { available in 10_7, 5_0 }
  end;


type
  NSHTTPCookieStorage_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSHTTPCookieStorage)
    procedure storeCookies_forTask (cookies_: NSHTTPCookie *ProtocolPtr; task: NSURLSessionTask); message 'storeCookies:forTask:'; { available in 10_10, 8_0 }
    procedure getCookiesForTask_completionHandler (task: NSURLSessionTask; completionHandler: OpaqueCBlock); message 'getCookiesForTask:completionHandler:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSHTTPCookieManagerAcceptPolicyChangedNotification: NSNotificationName; cvar; external;
  NSHTTPCookieManagerCookiesChangedNotification: NSNotificationName; cvar; external;
{$endif}

