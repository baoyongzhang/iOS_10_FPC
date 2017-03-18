{ Parsed from Foundation.framework NSBundle.h }

{ Types from NSBundle }
{$ifdef TYPES}



const
  NSBundleExecutableArchitectureI386 = $00000007;
  NSBundleExecutableArchitecturePPC = $00000012;
  NSBundleExecutableArchitectureX86_64 = $01000007;
  NSBundleExecutableArchitecturePPC64 = $01000012;
{$endif}


{$ifdef TYPES}
type
  NSBundlePtr = ^NSBundle;
  NSBundleResourceRequestPtr = ^NSBundleResourceRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBundle = objcclass external (NSObject)
  private
    _flags: NSUInteger;
    _cfBundle: id;
    _reserved2: NSUInteger;
    _principalClass: pobjc_class;
    _initialPath: id;
    _resolvedPath: id;
    _reserved3: id;
    _lock: id;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function mainBundle: NSBundle; message 'mainBundle';
    {$endif}
    class function bundleWithPath (path: NSString): nullable instancetype; message 'bundleWithPath:';
    function initWithPath (path: NSString): nullable instancetype; message 'initWithPath:'; { NS_DESIGNATED_INITIALIZER }
    class function bundleWithURL (url: NSURL): nullable instancetype; message 'bundleWithURL:'; { available in 10_6, 4_0 }
    function initWithURL (url: NSURL): nullable instancetype; message 'initWithURL:'; { available in 10_6, 4_0 }
    class function bundleForClass (aClass: pobjc_class): NSBundle; message 'bundleForClass:';
    class function bundleWithIdentifier (identifier: NSString): nullable NSBundlePtr; message 'bundleWithIdentifier:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function allBundles: NSBundle *ProtocolPtr; message 'allBundles';
    function allFrameworks: NSBundle *ProtocolPtr; message 'allFrameworks';
    {$endif}
    function load: boolean; message 'load';
    function isLoaded: boolean; message 'isLoaded';
    function unload: boolean; message 'unload';
    function preflightAndReturnError (error: NSErrorPtr): boolean; message 'preflightAndReturnError:'; { available in 10_5, 2_0 }
    function loadAndReturnError (error: NSErrorPtr): boolean; message 'loadAndReturnError:'; { available in 10_5, 2_0 }
    function bundleURL: NSURL; message 'bundleURL';
    function resourceURL: NSURL; message 'resourceURL';
    function executableURL: NSURL; message 'executableURL';
    function URLForAuxiliaryExecutable (executableName: NSString): nullable NSURLPtr; message 'URLForAuxiliaryExecutable:'; { available in 10_6, 4_0 }
    function privateFrameworksURL: NSURL; message 'privateFrameworksURL';
    function sharedFrameworksURL: NSURL; message 'sharedFrameworksURL';
    function sharedSupportURL: NSURL; message 'sharedSupportURL';
    function builtInPlugInsURL: NSURL; message 'builtInPlugInsURL';
    function appStoreReceiptURL: NSURL; message 'appStoreReceiptURL';
    function bundlePath: NSString; message 'bundlePath';
    function resourcePath: NSString; message 'resourcePath';
    function executablePath: NSString; message 'executablePath';
    function pathForAuxiliaryExecutable (executableName: NSString): nullable NSStringPtr; message 'pathForAuxiliaryExecutable:';
    function privateFrameworksPath: NSString; message 'privateFrameworksPath';
    function sharedFrameworksPath: NSString; message 'sharedFrameworksPath';
    function sharedSupportPath: NSString; message 'sharedSupportPath';
    function builtInPlugInsPath: NSString; message 'builtInPlugInsPath';
    class function URLForResource_withExtension_subdirectory_inBundleWithURL (name: nullable NSStringPtr; ext: nullable NSStringPtr; subpath: nullable NSStringPtr; bundleURL_: NSURL): nullable NSURLPtr; message 'URLForResource:withExtension:subdirectory:inBundleWithURL:'; { available in 10_6, 4_0 }
    class function URLsForResourcesWithExtension_subdirectory_inBundleWithURL (ext: nullable NSStringPtr; subpath: nullable NSStringPtr; bundleURL_: NSURL): nullable NSURL *ProtocolPtr; message 'URLsForResourcesWithExtension:subdirectory:inBundleWithURL:'; { available in 10_6, 4_0 }
    function URLForResource_withExtension (name: nullable NSStringPtr; ext: nullable NSStringPtr): nullable NSURLPtr; message 'URLForResource:withExtension:'; { available in 10_6, 4_0 }
    function URLForResource_withExtension_subdirectory (name: nullable NSStringPtr; ext: nullable NSStringPtr; subpath: nullable NSStringPtr): nullable NSURLPtr; message 'URLForResource:withExtension:subdirectory:'; { available in 10_6, 4_0 }
    function URLForResource_withExtension_subdirectory_localization (name: nullable NSStringPtr; ext: nullable NSStringPtr; subpath: nullable NSStringPtr; localizationName: nullable NSStringPtr): nullable NSURLPtr; message 'URLForResource:withExtension:subdirectory:localization:'; { available in 10_6, 4_0 }
    function URLsForResourcesWithExtension_subdirectory (ext: nullable NSStringPtr; subpath: nullable NSStringPtr): nullable NSURL *ProtocolPtr; message 'URLsForResourcesWithExtension:subdirectory:'; { available in 10_6, 4_0 }
    function URLsForResourcesWithExtension_subdirectory_localization (ext: nullable NSStringPtr; subpath: nullable NSStringPtr; localizationName: nullable NSStringPtr): nullable NSURL *ProtocolPtr; message 'URLsForResourcesWithExtension:subdirectory:localization:'; { available in 10_6, 4_0 }
    class function classPathForResource_ofType_inDirectory (name: nullable NSStringPtr; ext: nullable NSStringPtr; bundlePath_: NSString): nullable NSStringPtr; message 'pathForResource:ofType:inDirectory:';
    class function classPathsForResourcesOfType_inDirectory (ext: nullable NSStringPtr; bundlePath_: NSString): NSString *ProtocolPtr; message 'pathsForResourcesOfType:inDirectory:';
    function pathForResource_ofType (name: nullable NSStringPtr; ext: nullable NSStringPtr): nullable NSStringPtr; message 'pathForResource:ofType:';
    function pathForResource_ofType_inDirectory (name: nullable NSStringPtr; ext: nullable NSStringPtr; subpath: nullable NSStringPtr): nullable NSStringPtr; message 'pathForResource:ofType:inDirectory:';
    function pathForResource_ofType_inDirectory_forLocalization (name: nullable NSStringPtr; ext: nullable NSStringPtr; subpath: nullable NSStringPtr; localizationName: nullable NSStringPtr): nullable NSStringPtr; message 'pathForResource:ofType:inDirectory:forLocalization:';
    function pathsForResourcesOfType_inDirectory (ext: nullable NSStringPtr; subpath: nullable NSStringPtr): NSString *ProtocolPtr; message 'pathsForResourcesOfType:inDirectory:';
    function pathsForResourcesOfType_inDirectory_forLocalization (ext: nullable NSStringPtr; subpath: nullable NSStringPtr; localizationName: nullable NSStringPtr): NSString *ProtocolPtr; message 'pathsForResourcesOfType:inDirectory:forLocalization:';
    function localizedStringForKey_value_table (key: NSString; value: nullable NSStringPtr; tableName: nullable NSStringPtr): NSString; message 'localizedStringForKey:value:table:';
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    function infoDictionary: NSDictionary; message 'infoDictionary';
    function localizedInfoDictionary: NSDictionary; message 'localizedInfoDictionary';
    function objectForInfoDictionaryKey (key: NSString): nullable id; message 'objectForInfoDictionaryKey:';
    function classNamed (className: NSString): nullable Class; message 'classNamed:';
    function principalClass: pobjc_class; message 'principalClass';
    function preferredLocalizations: NSString *ProtocolPtr; message 'preferredLocalizations';
    function localizations: NSString *ProtocolPtr; message 'localizations';
    function developmentLocalization: NSString; message 'developmentLocalization';
    class function preferredLocalizationsFromArray (localizationsArray: NSString *ProtocolPtr): NSString *ProtocolPtr; message 'preferredLocalizationsFromArray:';
    class function preferredLocalizationsFromArray_forPreferences (localizationsArray: NSString *ProtocolPtr; preferencesArray: nullable NSString *ProtocolPtr): NSString *ProtocolPtr; message 'preferredLocalizationsFromArray:forPreferences:';
    function executableArchitectures: NSNumber *ProtocolPtr; message 'executableArchitectures';
  end;


type
  NSBundleExtensionMethods = objccategory external (NSString)
    function variantFittingPresentationWidth (width: NSInteger): NSString; message 'variantFittingPresentationWidth:'; { available in 10_11, 9_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSBundleDidLoadNotification: NSNotificationName; cvar; external;
  NSLoadedClasses: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBundleResourceRequest = objcclass external (NSObject, NSProgressReportingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithTags (tags: NSString *ProtocolPtr): instancetype; message 'initWithTags:';
    function initWithTags_bundle (tags: NSString *ProtocolPtr; bundle: NSBundle): instancetype; message 'initWithTags:bundle:'; { NS_DESIGNATED_INITIALIZER }
    procedure setLoadingPriority(newValue: double); message 'setLoadingPriority:';
    function loadingPriority: double; message 'loadingPriority';
    function tags: NSString *ProtocolPtr; message 'tags';
    function bundle: NSBundle; message 'bundle';
    procedure beginAccessingResourcesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'beginAccessingResourcesWithCompletionHandler:';
    procedure conditionallyBeginAccessingResourcesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'conditionallyBeginAccessingResourcesWithCompletionHandler:';
    procedure endAccessingResources; message 'endAccessingResources';
    function progress: NSProgress; message 'progress';
  end;


type
  NSBundleResourceRequestAdditions = objccategory external (NSBundle)
    procedure setPreservationPriority_forTags (priority: double; tags: NSString *ProtocolPtr); message 'setPreservationPriority:forTags:'; { available in NA, 9_0 }
    function preservationPriorityForTag (tag: NSString): double; message 'preservationPriorityForTag:'; { available in NA, 9_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSBundleResourceRequestLowDiskSpaceNotification: NSNotificationName { available in NA, 9_0 }; cvar; external;
  NSBundleResourceRequestLoadingPriorityUrgent: double { available in NA, 9_0 }; cvar; external;
{$endif}

