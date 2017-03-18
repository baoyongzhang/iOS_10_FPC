{ Parsed from Foundation.framework NSURL.h }

{ Types from NSURL }
{$ifdef TYPES}

type
  NSURLBookmarkCreationOptions = NSUInteger;
type
  NSURLBookmarkCreationOptionsPtr = ^NSURLBookmarkCreationOptions;

const
  NSURLBookmarkCreationPreferFileIDResolution = 1 shl 8 deprecated 'in 10_6, 10_9, 4_0, 7_0';
  NSURLBookmarkCreationMinimalBookmark = 1 shl 9;
  NSURLBookmarkCreationSuitableForBookmarkFile = 1 shl 10;
  NSURLBookmarkCreationWithSecurityScope = 1 shl 11 { available in 10_7, NA };
  NSURLBookmarkCreationSecurityScopeAllowOnlyReadAccess = 1 shl 12 { available in 10_7, NA };

type
  NSURLBookmarkResolutionOptions = NSUInteger;
type
  NSURLBookmarkResolutionOptionsPtr = ^NSURLBookmarkResolutionOptions;

const
  NSURLBookmarkResolutionWithoutUI = 1 shl 8;
  NSURLBookmarkResolutionWithoutMounting = 1 shl 9;
  NSURLBookmarkResolutionWithSecurityScope = 1 shl 10 { available in 10_7, NA };

type
  NSURLBookmarkFileCreationOptions = NSUInteger;
type
  NSURLBookmarkFileCreationOptionsPtr = ^NSURLBookmarkFileCreationOptions;
{$endif}


{ Types from NSCharacterSet_NSURLUtilities }
{$ifdef TYPES}

{$endif}


{ Types from NSURLPathUtilities }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSURLPtr = ^NSURL;
  NSURLQueryItemPtr = ^NSURLQueryItem;
  NSURLComponentsPtr = ^NSURLComponents;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSURL = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _urlString: NSString;
    _baseURL: NSURL;
    _clients: pointer;
    _reserved: pointer;
  public
    function initWithScheme_host_path (scheme: NSString; host: nullable NSStringPtr; path: NSString): nullable instancetype; message 'initWithScheme:host:path:'; deprecated 'in 10_0, 10_11, 2_0, 9_0, "Use NSURLComponents instead, which lets you create a valid URL with any valid combination of URL components and subcomponents (not just scheme, host and path';
    function initFileURLWithPath_isDirectory_relativeToURL (path: NSString; isDir: boolean; baseURL: nullable NSURLPtr): instancetype; message 'initFileURLWithPath:isDirectory:relativeToURL:'; { available in 10_11, 9_0 }
    function initFileURLWithPath_relativeToURL (path: NSString; baseURL: nullable NSURLPtr): instancetype; message 'initFileURLWithPath:relativeToURL:'; { available in 10_11, 9_0 }
    function initFileURLWithPath_isDirectory (path: NSString; isDir: boolean): instancetype; message 'initFileURLWithPath:isDirectory:'; { available in 10_5, 2_0 }
    function initFileURLWithPath (path: NSString): instancetype; message 'initFileURLWithPath:'; { NS_DESIGNATED_INITIALIZER }
    class function fileURLWithPath_isDirectory_relativeToURL (path: NSString; isDir: boolean; baseURL: nullable NSURLPtr): NSURL; message 'fileURLWithPath:isDirectory:relativeToURL:'; { available in 10_11, 9_0 }
    class function fileURLWithPath_relativeToURL (path: NSString; baseURL: nullable NSURLPtr): NSURL; message 'fileURLWithPath:relativeToURL:'; { available in 10_11, 9_0 }
    class function fileURLWithPath_isDirectory (path: NSString; isDir: boolean): NSURL; message 'fileURLWithPath:isDirectory:'; { available in 10_5, 2_0 }
    class function fileURLWithPath (path: NSString): NSURL; message 'fileURLWithPath:';
    function initFileURLWithFileSystemRepresentation_isDirectory_relativeToURL (path: PChar; isDir: boolean; baseURL: nullable NSURLPtr): instancetype; message 'initFileURLWithFileSystemRepresentation:isDirectory:relativeToURL:'; { available in 10_9, 7_0 }
    class function fileURLWithFileSystemRepresentation_isDirectory_relativeToURL (path: PChar; isDir: boolean; baseURL: nullable NSURLPtr): NSURL; message 'fileURLWithFileSystemRepresentation:isDirectory:relativeToURL:'; { available in 10_9, 7_0 }
    function initWithString (URLString: NSString): nullable instancetype; message 'initWithString:';
    function initWithString_relativeToURL (URLString: NSString; baseURL: nullable NSURLPtr): nullable instancetype; message 'initWithString:relativeToURL:'; { NS_DESIGNATED_INITIALIZER }
    class function URLWithString (URLString: NSString): nullable instancetype; message 'URLWithString:';
    class function URLWithString_relativeToURL (URLString: NSString; baseURL: nullable NSURLPtr): nullable instancetype; message 'URLWithString:relativeToURL:';
    function initWithDataRepresentation_relativeToURL (data: NSData; baseURL: nullable NSURLPtr): instancetype; message 'initWithDataRepresentation:relativeToURL:'; { available in 10_11, 9_0 }
    class function URLWithDataRepresentation_relativeToURL (data: NSData; baseURL: nullable NSURLPtr): NSURL; message 'URLWithDataRepresentation:relativeToURL:'; { available in 10_11, 9_0 }
    function initAbsoluteURLWithDataRepresentation_relativeToURL (data: NSData; baseURL: nullable NSURLPtr): instancetype; message 'initAbsoluteURLWithDataRepresentation:relativeToURL:'; { available in 10_11, 9_0 }
    class function absoluteURLWithDataRepresentation_relativeToURL (data: NSData; baseURL: nullable NSURLPtr): NSURL; message 'absoluteURLWithDataRepresentation:relativeToURL:'; { available in 10_11, 9_0 }
    function dataRepresentation: NSData; message 'dataRepresentation';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function absoluteString: NSString; message 'absoluteString';
    function relativeString: NSString; message 'relativeString';
    function baseURL: NSURL; message 'baseURL';
    function absoluteURL: NSURL; message 'absoluteURL';
    function scheme: NSString; message 'scheme';
    function resourceSpecifier: NSString; message 'resourceSpecifier';
    {$endif}
    function host: NSString; message 'host';
    function port: NSNumber; message 'port';
    function user: NSString; message 'user';
    function password: NSString; message 'password';
    function path: NSString; message 'path';
    function fragment: NSString; message 'fragment';
    function parameterString: NSString; message 'parameterString';
    function query: NSString; message 'query';
    function relativePath: NSString; message 'relativePath';
    function hasDirectoryPath: boolean; message 'hasDirectoryPath';
    function getFileSystemRepresentation_maxLength (buffer: PChar; maxBufferLength: NSUInteger): boolean; message 'getFileSystemRepresentation:maxLength:'; { available in 10_9, 7_0 }
    function fileSystemRepresentation: PChar; message 'fileSystemRepresentation';
    function isFileURL: boolean; message 'isFileURL';
    function standardizedURL: NSURL; message 'standardizedURL';
    function checkResourceIsReachableAndReturnError (error: NSErrorPtr): boolean; message 'checkResourceIsReachableAndReturnError:'; { available in 10_6, 4_0 }
    function isFileReferenceURL: boolean; message 'isFileReferenceURL'; { available in 10_6, 4_0 }
    function fileReferenceURL: nullable NSURLPtr; message 'fileReferenceURL'; { available in 10_6, 4_0 }
    function filePathURL: NSURL; message 'filePathURL';
    function getResourceValue_forKey_error (value: id _Nullable * _Nonnull; key: NSURLResourceKey; error: NSError ** _Nullable): boolean; message 'getResourceValue:forKey:error:'; { available in 10_6, 4_0 }
    function resourceValuesForKeys_error (keys: NSURLResourceKeyProtocolPtr; error: NSErrorPtr): nullable NSDictionaryPtr; message 'resourceValuesForKeys:error:'; { available in 10_6, 4_0 }
    function setResourceValue_forKey_error (value: nullable id; key: NSURLResourceKey; error: NSErrorPtr): boolean; message 'setResourceValue:forKey:error:'; { available in 10_6, 4_0 }
    function setResourceValues_error (keyedValues: NSDictionary; error: NSErrorPtr): boolean; message 'setResourceValues:error:'; { available in 10_6, 4_0 }
    procedure removeCachedResourceValueForKey (key: NSURLResourceKey); message 'removeCachedResourceValueForKey:'; { available in 10_9, 7_0 }
    procedure removeAllCachedResourceValues; message 'removeAllCachedResourceValues'; { available in 10_9, 7_0 }
    procedure setTemporaryResourceValue_forKey (value: nullable id; key: NSURLResourceKey); message 'setTemporaryResourceValue:forKey:'; { available in 10_9, 7_0 }
    function bookmarkDataWithOptions_includingResourceValuesForKeys_relativeToURL_error (options: NSURLBookmarkCreationOptions; keys: nullable NSURLResourceKeyProtocolPtr; relativeURL: nullable NSURLPtr; error: NSErrorPtr): nullable NSDataPtr; message 'bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:'; { available in 10_6, 4_0 }
    function initByResolvingBookmarkData_options_relativeToURL_bookmarkDataIsStale_error (bookmarkData: NSData; options: NSURLBookmarkResolutionOptions; relativeURL: nullable NSURLPtr; isStale: BOOL * _Nullable; error: NSErrorPtr): nullable instancetype; message 'initByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:'; { available in 10_6, 4_0 }
    class function URLByResolvingBookmarkData_options_relativeToURL_bookmarkDataIsStale_error (bookmarkData: NSData; options: NSURLBookmarkResolutionOptions; relativeURL: nullable NSURLPtr; isStale: BOOL * _Nullable; error: NSErrorPtr): nullable instancetype; message 'URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:'; { available in 10_6, 4_0 }
    class function resourceValuesForKeys_fromBookmarkData (keys: NSURLResourceKeyProtocolPtr; bookmarkData: NSData): nullable NSDictionaryPtr; message 'resourceValuesForKeys:fromBookmarkData:'; { available in 10_6, 4_0 }
    class function writeBookmarkData_toURL_options_error (bookmarkData: NSData; bookmarkFileURL: NSURL; options: NSURLBookmarkFileCreationOptions; error: NSErrorPtr): boolean; message 'writeBookmarkData:toURL:options:error:'; { available in 10_6, 4_0 }
    class function bookmarkDataWithContentsOfURL_error (bookmarkFileURL: NSURL; error: NSErrorPtr): nullable NSDataPtr; message 'bookmarkDataWithContentsOfURL:error:'; { available in 10_6, 4_0 }
    class function URLByResolvingAliasFileAtURL_options_error (url: NSURL; options: NSURLBookmarkResolutionOptions; error: NSErrorPtr): nullable instancetype; message 'URLByResolvingAliasFileAtURL:options:error:'; { available in 10_10, 8_0 }
    function startAccessingSecurityScopedResource: boolean; message 'startAccessingSecurityScopedResource'; { available in 10_7, 8_0 }
    procedure stopAccessingSecurityScopedResource; message 'stopAccessingSecurityScopedResource'; { available in 10_7, 8_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSPromisedItems = objccategory external (NSURL)
    function getPromisedItemResourceValue_forKey_error (value: id _Nullable * _Nonnull; key: NSURLResourceKey; error: NSErrorPtr): boolean; message 'getPromisedItemResourceValue:forKey:error:'; { available in 10_10, 8_0 }
    function promisedItemResourceValuesForKeys_error (keys: NSURLResourceKeyProtocolPtr; error: NSErrorPtr): nullable NSDictionaryPtr; message 'promisedItemResourceValuesForKeys:error:'; { available in 10_10, 8_0 }
    function checkPromisedItemIsReachableAndReturnError (error: NSErrorPtr): boolean; message 'checkPromisedItemIsReachableAndReturnError:'; { available in 10_10, 8_0 }
  end;


type
  NSURLQueryItem = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _name: NSString;
    _value: NSString;
  public
    function initWithName_value (name: NSString; value: nullable NSStringPtr): instancetype; message 'initWithName:value:'; { NS_DESIGNATED_INITIALIZER }
    class function queryItemWithName_value (name: NSString; value: nullable NSStringPtr): instancetype; message 'queryItemWithName:value:';
    function name: NSString; message 'name';
    function value: NSString; message 'value';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSURLComponents = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithURL_resolvingAgainstBaseURL (url: NSURL; resolve: boolean): nullable instancetype; message 'initWithURL:resolvingAgainstBaseURL:';
    class function componentsWithURL_resolvingAgainstBaseURL (url: NSURL; resolve: boolean): nullable instancetype; message 'componentsWithURL:resolvingAgainstBaseURL:';
    function initWithString (URLString: NSString): nullable instancetype; message 'initWithString:';
    class function componentsWithString (URLString: NSString): nullable instancetype; message 'componentsWithString:';
    function URL: NSURL; message 'URL';
    function URLRelativeToURL (baseURL: nullable NSURLPtr): nullable NSURLPtr; message 'URLRelativeToURL:';
    function string_: NSString; message 'string';
    procedure setScheme(newValue: NSString); message 'setScheme:';
    function scheme: NSString; message 'scheme';
    procedure setUser(newValue: NSString); message 'setUser:';
    function user: NSString; message 'user';
    procedure setPassword(newValue: NSString); message 'setPassword:';
    function password: NSString; message 'password';
    procedure setHost(newValue: NSString); message 'setHost:';
    function host: NSString; message 'host';
    procedure setPort(newValue: NSNumber); message 'setPort:';
    function port: NSNumber; message 'port';
    procedure setPath(newValue: NSString); message 'setPath:';
    function path: NSString; message 'path';
    procedure setQuery(newValue: NSString); message 'setQuery:';
    function query: NSString; message 'query';
    procedure setFragment(newValue: NSString); message 'setFragment:';
    function fragment: NSString; message 'fragment';
    procedure setPercentEncodedUser(newValue: NSString); message 'setPercentEncodedUser:';
    function percentEncodedUser: NSString; message 'percentEncodedUser';
    procedure setPercentEncodedPassword(newValue: NSString); message 'setPercentEncodedPassword:';
    function percentEncodedPassword: NSString; message 'percentEncodedPassword';
    procedure setPercentEncodedHost(newValue: NSString); message 'setPercentEncodedHost:';
    function percentEncodedHost: NSString; message 'percentEncodedHost';
    procedure setPercentEncodedPath(newValue: NSString); message 'setPercentEncodedPath:';
    function percentEncodedPath: NSString; message 'percentEncodedPath';
    procedure setPercentEncodedQuery(newValue: NSString); message 'setPercentEncodedQuery:';
    function percentEncodedQuery: NSString; message 'percentEncodedQuery';
    procedure setPercentEncodedFragment(newValue: NSString); message 'setPercentEncodedFragment:';
    function percentEncodedFragment: NSString; message 'percentEncodedFragment';
    function rangeOfScheme: NSRange; message 'rangeOfScheme';
    function rangeOfUser: NSRange; message 'rangeOfUser';
    function rangeOfPassword: NSRange; message 'rangeOfPassword';
    function rangeOfHost: NSRange; message 'rangeOfHost';
    function rangeOfPort: NSRange; message 'rangeOfPort';
    function rangeOfPath: NSRange; message 'rangeOfPath';
    function rangeOfQuery: NSRange; message 'rangeOfQuery';
    function rangeOfFragment: NSRange; message 'rangeOfFragment';
    procedure setQueryItems(newValue: NSURLQueryItem *ProtocolPtr); message 'setQueryItems:';
    function queryItems: NSURLQueryItem *ProtocolPtr; message 'queryItems';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSCharacterSet_NSURLUtilities = objccategory external name 'NSURLUtilities' (NSCharacterSet)
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function URLUserAllowedCharacterSet: NSCharacterSet; message 'URLUserAllowedCharacterSet';
    function URLPasswordAllowedCharacterSet: NSCharacterSet; message 'URLPasswordAllowedCharacterSet';
    function URLHostAllowedCharacterSet: NSCharacterSet; message 'URLHostAllowedCharacterSet';
    function URLPathAllowedCharacterSet: NSCharacterSet; message 'URLPathAllowedCharacterSet';
    function URLQueryAllowedCharacterSet: NSCharacterSet; message 'URLQueryAllowedCharacterSet';
    function URLFragmentAllowedCharacterSet: NSCharacterSet; message 'URLFragmentAllowedCharacterSet';
    {$endif}
  end;

type
  NSURLUtilities = objccategory external (NSString)
    function stringByAddingPercentEncodingWithAllowedCharacters (allowedCharacters: NSCharacterSet): nullable NSStringPtr; message 'stringByAddingPercentEncodingWithAllowedCharacters:'; { available in 10_9, 7_0 }
    function stringByRemovingPercentEncoding: NSString; message 'stringByRemovingPercentEncoding';
    function stringByAddingPercentEscapesUsingEncoding (enc: NSStringEncoding): nullable NSStringPtr; message 'stringByAddingPercentEscapesUsingEncoding:'; deprecated 'in 10_0, 10_11, 2_0, 9_0, "Use -stringByAddingPercentEncodingWithAllowedCharacters: instead, which always uses the recommended UTF-8 encoding, and which encodes for a specific URL component or subcomponent since each URL component or subcomponent has different rules for what characters are valid."';
    function stringByReplacingPercentEscapesUsingEncoding (enc: NSStringEncoding): nullable NSStringPtr; message 'stringByReplacingPercentEscapesUsingEncoding:'; deprecated 'in 10_0, 10_11, 2_0, 9_0, "Use -stringByRemovingPercentEncoding instead, which always uses the recommended UTF-8 encoding."';
  end;

type
  NSURLPathUtilities = objccategory external (NSURL)
    class function fileURLWithPathComponents (components: NSString *ProtocolPtr): nullable NSURLPtr; message 'fileURLWithPathComponents:'; { available in 10_6, 4_0 }
    function pathComponents: NSString *ProtocolPtr; message 'pathComponents';
    function lastPathComponent: NSString; message 'lastPathComponent';
    function pathExtension: NSString; message 'pathExtension';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function URLByAppendingPathComponent (pathComponent: NSString): nullable NSURLPtr; message 'URLByAppendingPathComponent:'; { available in 10_6, 4_0 }
    function URLByAppendingPathComponent_isDirectory (pathComponent: NSString; isDirectory: boolean): nullable NSURLPtr; message 'URLByAppendingPathComponent:isDirectory:'; { available in 10_7, 5_0 }
    function URLByDeletingLastPathComponent: NSURL; message 'URLByDeletingLastPathComponent';
    function URLByAppendingPathExtension (pathExtension_: NSString): nullable NSURLPtr; message 'URLByAppendingPathExtension:'; { available in 10_6, 4_0 }
    function URLByDeletingPathExtension: NSURL; message 'URLByDeletingPathExtension';
    {$endif}
    function URLByStandardizingPath: NSURL; message 'URLByStandardizingPath';
    function URLByResolvingSymlinksInPath: NSURL; message 'URLByResolvingSymlinksInPath';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}

{$if  not (defined(SWIFT_CLASS_EXTRA))}
{$ifdef CLASSES}

type
  NSURLClient = objccategory external (NSObject)
    procedure URL_resourceDataDidBecomeAvailable (sender: NSURL; newBytes: NSData); message 'URL:resourceDataDidBecomeAvailable:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure URLResourceDidFinishLoading (sender: NSURL); message 'URLResourceDidFinishLoading:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure URLResourceDidCancelLoading (sender: NSURL); message 'URLResourceDidCancelLoading:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure URL_resourceDidFailLoadingWithReason (sender: NSURL; reason: NSString); message 'URL:resourceDidFailLoadingWithReason:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSURLLoading = objccategory external (NSURL)
    function resourceDataUsingCache (shouldUseCache: boolean): nullable NSDataPtr; message 'resourceDataUsingCache:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure loadResourceDataNotifyingClient_usingCache (client: id; shouldUseCache: boolean); message 'loadResourceDataNotifyingClient:usingCache:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function propertyForKey (propertyKey: NSString): nullable id; message 'propertyForKey:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function setResourceData (data: NSData): boolean; message 'setResourceData:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function setProperty_forKey (property_: id; propertyKey: NSString): boolean; message 'setProperty:forKey:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function URLHandleUsingCache (shouldUseCache: boolean): nullable NSURLHandlePtr; message 'URLHandleUsingCache:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
  end;
{$endif}

{$endif}
