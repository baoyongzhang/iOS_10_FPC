{ Parsed from Foundation.framework FoundationLegacySwiftCompatibility.h }

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_LESS_THAN)}
{$ifdef CLASSES}

type
  NSBundle_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSBundle)
    class function mainBundle: NSBundle; message 'mainBundle';
    class function allBundles: NSBundle *ProtocolPtr; message 'allBundles';
    class function allFrameworks: NSBundle *ProtocolPtr; message 'allFrameworks';
  end;

type
  NSCalendar_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSCalendar)
    class function currentCalendar: NSCalendar; message 'currentCalendar';
    class function autoupdatingCurrentCalendar: NSCalendar; message 'autoupdatingCurrentCalendar'; { available in 10_5, 2_0 }
  end;

type
  NSCharacterSet_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSCharacterSet)
    class function controlCharacterSet: NSCharacterSet; message 'controlCharacterSet';
    class function whitespaceCharacterSet: NSCharacterSet; message 'whitespaceCharacterSet';
    class function whitespaceAndNewlineCharacterSet: NSCharacterSet; message 'whitespaceAndNewlineCharacterSet';
    class function decimalDigitCharacterSet: NSCharacterSet; message 'decimalDigitCharacterSet';
    class function letterCharacterSet: NSCharacterSet; message 'letterCharacterSet';
    class function lowercaseLetterCharacterSet: NSCharacterSet; message 'lowercaseLetterCharacterSet';
    class function uppercaseLetterCharacterSet: NSCharacterSet; message 'uppercaseLetterCharacterSet';
    class function nonBaseCharacterSet: NSCharacterSet; message 'nonBaseCharacterSet';
    class function alphanumericCharacterSet: NSCharacterSet; message 'alphanumericCharacterSet';
    class function decomposableCharacterSet: NSCharacterSet; message 'decomposableCharacterSet';
    class function illegalCharacterSet: NSCharacterSet; message 'illegalCharacterSet';
    class function punctuationCharacterSet: NSCharacterSet; message 'punctuationCharacterSet';
    class function capitalizedLetterCharacterSet: NSCharacterSet; message 'capitalizedLetterCharacterSet';
    class function symbolCharacterSet: NSCharacterSet; message 'symbolCharacterSet';
    class function newlineCharacterSet: NSCharacterSet; message 'newlineCharacterSet'; { available in 10_5, 2_0 }
  end;

type
  NSDate_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSDate)
    class function timeIntervalSinceReferenceDate_: NSTimeInterval; message 'timeIntervalSinceReferenceDate';
    class function distantFuture: NSDate; message 'distantFuture';
    class function distantPast: NSDate; message 'distantPast';
  end;

type
  NSDateFormatter_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSDateFormatter)
    class function defaultFormatterBehavior: NSDateFormatterBehavior; message 'defaultFormatterBehavior';
    class procedure setDefaultFormatterBehavior (behavior: NSDateFormatterBehavior); message 'setDefaultFormatterBehavior:';
  end;

type
  NSDecimalNumber_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSDecimalNumber)
    class function zero: NSDecimalNumber; message 'zero';
    class function one: NSDecimalNumber; message 'one';
    class function minimumDecimalNumber: NSDecimalNumber; message 'minimumDecimalNumber';
    class function maximumDecimalNumber: NSDecimalNumber; message 'maximumDecimalNumber';
    class function notANumber: NSDecimalNumber; message 'notANumber';
    class function defaultBehavior: NSDecimalNumberBehaviorsProtocol; message 'defaultBehavior';
    class procedure setDefaultBehavior (behavior: NSDecimalNumberBehaviorsProtocol); message 'setDefaultBehavior:';
  end;

type
  NSAssertionHandler_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSAssertionHandler)
    class function currentHandler: NSAssertionHandler; message 'currentHandler';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}
{$ifdef CLASSES}

type
  NSFileCoordinator_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSFileCoordinator)
    class function filePresenters: id<NSFilePresenterProtocol>Ptr; message 'filePresenters';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSFileHandle_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSFileHandle)
    class function fileHandleWithStandardInput: NSFileHandle; message 'fileHandleWithStandardInput';
    class function fileHandleWithStandardOutput: NSFileHandle; message 'fileHandleWithStandardOutput';
    class function fileHandleWithStandardError: NSFileHandle; message 'fileHandleWithStandardError';
    class function fileHandleWithNullDevice: NSFileHandle; message 'fileHandleWithNullDevice';
  end;

type
  NSFileManager_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSFileManager)
    class function defaultManager: NSFileManager; message 'defaultManager';
    function fileAttributes: NSDictionary; message 'fileAttributes';
    function directoryAttributes: NSDictionary; message 'directoryAttributes';
    function setAttributes_ofItemAtPath_error (attributes: NSDictionary; path: NSString; error: NSErrorPtr): boolean; message 'setAttributes:ofItemAtPath:error:'; { available in 10_5, 2_0 }
    function attributesOfItemAtPath_error (path: NSString; error: NSErrorPtr): nullable NSDictionaryPtr; message 'attributesOfItemAtPath:error:'; { available in 10_5, 2_0 }
    function attributesOfFileSystemForPath_error (path: NSString; error: NSErrorPtr): nullable NSDictionaryPtr; message 'attributesOfFileSystemForPath:error:'; { available in 10_5, 2_0 }
  end;

type
  NSHTTPCookieStorage_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSHTTPCookieStorage)
    class function sharedHTTPCookieStorage: NSHTTPCookieStorage; message 'sharedHTTPCookieStorage';
  end;

type
  NSKeyValueCodingLegacySwiftCompatibility = objccategory external (NSObject)
    class function accessInstanceVariablesDirectly: boolean; message 'accessInstanceVariablesDirectly';
  end;

type
  NSLocale_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSLocale)
    class function autoupdatingCurrentLocale: NSLocale; message 'autoupdatingCurrentLocale'; { available in 10_5, 2_0 }
    class function currentLocale: NSLocale; message 'currentLocale';
    class function systemLocale: NSLocale; message 'systemLocale';
    class function availableLocaleIdentifiers: NSString *ProtocolPtr; message 'availableLocaleIdentifiers';
    class function ISOLanguageCodes: NSString *ProtocolPtr; message 'ISOLanguageCodes';
    class function ISOCountryCodes: NSString *ProtocolPtr; message 'ISOCountryCodes';
    class function ISOCurrencyCodes: NSString *ProtocolPtr; message 'ISOCurrencyCodes';
    class function commonISOCurrencyCodes: NSString *ProtocolPtr; message 'commonISOCurrencyCodes'; { available in 10_5, 2_0 }
    class function preferredLanguages: NSString *ProtocolPtr; message 'preferredLanguages'; { available in 10_5, 2_0 }
  end;

type
  NSNotificationCenter_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSNotificationCenter)
    class function defaultCenter: NSNotificationCenter; message 'defaultCenter';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; aName: nullable NSStringPtr; anObject: nullable id); message 'addObserver:selector:name:object:';
  end;

type
  NSNotificationQueue_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSNotificationQueue)
    class function defaultQueue: NSNotificationQueue; message 'defaultQueue';
  end;

type
  NSOperationQueue_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSOperationQueue)
    class function currentQueue: nullable NSOperationQueuePtr; message 'currentQueue'; { available in 10_6, 4_0 }
    class function mainQueue: NSOperationQueue; message 'mainQueue';
  end;

type
  NSProcessInfo_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSProcessInfo)
    class function processInfo: NSProcessInfo; message 'processInfo';
  end;

type
  NSRunLoop_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSRunLoop)
    class function currentRunLoop: NSRunLoop; message 'currentRunLoop';
    class function mainRunLoop: NSRunLoop; message 'mainRunLoop'; { available in 10_5, 2_0 }
  end;

type
  NSStream_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSStream)
    function propertyForKey (key: NSString): nullable id; message 'propertyForKey:';
    function setProperty_forKey (property_: nullable id; key: NSString): boolean; message 'setProperty:forKey:';
  end;

type
  NSString_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSString)
    class function availableStringEncodings: NSStringEncodingPtr; message 'availableStringEncodings';
    class function defaultCStringEncoding: NSStringEncoding; message 'defaultCStringEncoding';
  end;

type
  NSTextCheckingResult_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSTextCheckingResult)
    function grammarDetails: NSString *ProtocolPtr; message 'grammarDetails';
    class function grammarCheckingResultWithRange_details (range_: NSRange; details: NSString *ProtocolPtr): NSTextCheckingResult; message 'grammarCheckingResultWithRange:details:';
  end;

type
  NSThread_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSThread)
    class function currentThread: NSThread; message 'currentThread';
    class function callStackReturnAddresses: NSNumber *ProtocolPtr; message 'callStackReturnAddresses';
    class function callStackSymbols: NSString *ProtocolPtr; message 'callStackSymbols';
    class function isMainThread_: boolean; message 'isMainThread'; { available in 10_5, 2_0 }
    class function mainThread: NSThread; message 'mainThread'; { available in 10_5, 2_0 }
  end;

type
  NSTimeZone_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSTimeZone)
    class function systemTimeZone: NSTimeZone; message 'systemTimeZone';
    class function defaultTimeZone: NSTimeZone; message 'defaultTimeZone';
    class procedure setDefaultTimeZone (timeZone: NSTimeZone); message 'setDefaultTimeZone:';
    class function localTimeZone: NSTimeZone; message 'localTimeZone';
    class function knownTimeZoneNames: NSString *ProtocolPtr; message 'knownTimeZoneNames';
    class procedure setAbbreviationDictionary (dictionary: NSDictionary); message 'setAbbreviationDictionary:'; { available in 10_6, 4_0 }
    class function abbreviationDictionary: NSDictionary; message 'abbreviationDictionary';
    class function timeZoneDataVersion: NSString; message 'timeZoneDataVersion'; { available in 10_6, 4_0 }
  end;

type
  NSCharacterSet_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSCharacterSet)
    class function URLUserAllowedCharacterSet: NSCharacterSet; message 'URLUserAllowedCharacterSet'; { available in 10_9, 7_0 }
    class function URLPasswordAllowedCharacterSet: NSCharacterSet; message 'URLPasswordAllowedCharacterSet'; { available in 10_9, 7_0 }
    class function URLHostAllowedCharacterSet: NSCharacterSet; message 'URLHostAllowedCharacterSet'; { available in 10_9, 7_0 }
    class function URLPathAllowedCharacterSet: NSCharacterSet; message 'URLPathAllowedCharacterSet'; { available in 10_9, 7_0 }
    class function URLQueryAllowedCharacterSet: NSCharacterSet; message 'URLQueryAllowedCharacterSet'; { available in 10_9, 7_0 }
    class function URLFragmentAllowedCharacterSet: NSCharacterSet; message 'URLFragmentAllowedCharacterSet'; { available in 10_9, 7_0 }
  end;

type
  NSURLCache_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSURLCache)
    class function sharedURLCache: NSURLCache; message 'sharedURLCache';
  end;

type
  NSURLCredentialStorage_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSURLCredentialStorage)
    class function sharedCredentialStorage: NSURLCredentialStorage; message 'sharedCredentialStorage';
  end;

type
  NSURLRequest_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSURLRequest)
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}
{$ifdef CLASSES}

type
  NSURLSession_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSURLSession)
    class function sharedSession: NSURLSession; message 'sharedSession';
  end;

type
  NSURLSessionConfiguration_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSURLSessionConfiguration)
    class function defaultSessionConfiguration: NSURLSessionConfiguration; message 'defaultSessionConfiguration';
    class function ephemeralSessionConfiguration: NSURLSessionConfiguration; message 'ephemeralSessionConfiguration';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSUserDefaults_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSUserDefaults)
    class function standardUserDefaults: NSUserDefaults; message 'standardUserDefaults';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSUserNotificationCenter_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSUserNotificationCenter)
    class function defaultUserNotificationCenter: NSUserNotificationCenterPtr; message 'defaultUserNotificationCenter';
  end;
{$endif}

{$endif}
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_LESS_THAN)}
{$ifdef CLASSES}

type
  NSError_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSError)
    class procedure setUserInfoValueProviderForDomain_provider (errorDomain: NSErrorDomain; provider: id _Nullable (^ _Nullable)(NSError *err, NSErrorUserInfoKey userInfoKey)); message 'setUserInfoValueProviderForDomain:provider:'; { available in 10_11, 9_0 }
    class function userInfoValueProviderForDomain (errorDomain: NSErrorDomain): id _Nullable (^ _Nullable; message 'userInfoValueProviderForDomain:'; { available in 10_11, 9_0 }
  end;
{$endif}

{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_LESS_THAN)}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}
{$ifdef CLASSES}

type
  NSExpression_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSExpression)
    function constantValue: id; message 'constantValue';
    function expressionValueWithObject_context (object_: nullable id; context: nullable NSMutableDictionaryPtr): id; message 'expressionValueWithObject:context:';
  end;

type
  NSPredicate_NSLegacySwiftCompatibility = objccategory external name 'NSLegacySwiftCompatibility' (NSPredicate)
    class function predicateWithBlock (block: OpaqueCBlock): NSPredicate; message 'predicateWithBlock:'; { available in 10_6, 4_0 }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSLegacySwiftCompatibility = objccategory external (NSURL)
    function absoluteString: NSString; message 'absoluteString';
    function relativeString: NSString; message 'relativeString';
    function baseURL: NSURL; message 'baseURL';
    function absoluteURL: NSURL; message 'absoluteURL';
    function scheme: NSString; message 'scheme';
    function resourceSpecifier: NSString; message 'resourceSpecifier';
    function URLByAppendingPathComponent (pathComponent: NSString): NSURL; message 'URLByAppendingPathComponent:'; { available in 10_6, 4_0 }
    function URLByAppendingPathComponent_isDirectory (pathComponent: NSString; isDirectory: boolean): NSURL; message 'URLByAppendingPathComponent:isDirectory:'; { available in 10_7, 5_0 }
    function URLByDeletingLastPathComponent: NSURL; message 'URLByDeletingLastPathComponent';
    function URLByAppendingPathExtension (pathExtension: NSString): NSURL; message 'URLByAppendingPathExtension:'; { available in 10_6, 4_0 }
    function URLByDeletingPathExtension: NSURL; message 'URLByDeletingPathExtension';
  end;

type
  NSStringPathExtensionsLegacySwiftCompatibility = objccategory external (NSString)
    function completePathIntoString_caseSensitive_matchesIntoArray_filterTypes (outputName: NSString * _Nonnull * _Nullable; flag: boolean; outputArray: NSString *Protocol * _Nonnull * _Nullable; filterTypes: nullable NSString *ProtocolPtr): NSUInteger; message 'completePathIntoString:caseSensitive:matchesIntoArray:filterTypes:';
  end;
{$endif}

{$endif}
