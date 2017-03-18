{ Parsed from Foundation.framework NSHTTPCookie.h }

{$ifdef TYPES}
type
  NSHTTPCookiePtr = ^NSHTTPCookie;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSHTTPCookieName: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieValue: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieOriginURL: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieVersion: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieDomain: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookiePath: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieSecure: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieExpires: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieComment: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieCommentURL: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieDiscard: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookieMaximumAge: NSHTTPCookiePropertyKey; cvar; external;
  NSHTTPCookiePort: NSHTTPCookiePropertyKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSHTTPCookie = objcclass external (NSObject)
  private
    _cookiePrivate: NSHTTPCookieInternal;
  public
    function initWithProperties (properties: NSDictionary): nullable instancetype; message 'initWithProperties:';
    class function cookieWithProperties (properties: NSDictionary): nullable NSHTTPCookiePtr; message 'cookieWithProperties:';
    class function requestHeaderFieldsWithCookies (cookies: NSHTTPCookie *ProtocolPtr): NSDictionary; message 'requestHeaderFieldsWithCookies:';
    class function cookiesWithResponseHeaderFields_forURL (headerFields: NSDictionary; URL: NSURL): NSHTTPCookie *ProtocolPtr; message 'cookiesWithResponseHeaderFields:forURL:';
    function properties: NSDictionary; message 'properties';
    function version: NSUInteger; message 'version';
    function name: NSString; message 'name';
    function value: NSString; message 'value';
    function expiresDate: NSDate; message 'expiresDate';
    function isSessionOnly: boolean; message 'isSessionOnly';
    function domain: NSString; message 'domain';
    function path: NSString; message 'path';
    function isSecure: boolean; message 'isSecure';
    function isHTTPOnly: boolean; message 'isHTTPOnly';
    function comment: NSString; message 'comment';
    function commentURL: NSURL; message 'commentURL';
    function portList: NSNumber *ProtocolPtr; message 'portList';
  end;
{$endif}

