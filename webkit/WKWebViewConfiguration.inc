{ Parsed from WebKit.framework WKWebViewConfiguration.h }

{ Types from WKWebViewConfiguration }
{$ifdef TYPES}

{$endif}


{ Types from WKDeprecated }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKWebViewConfigurationPtr = ^WKWebViewConfiguration;
{$endif}

{$if defined(WK_API_ENABLED)}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  WKSelectionGranularity = NSInteger;
  WKSelectionGranularityPtr = ^WKSelectionGranularity;

const
  WKSelectionGranularityDynamic = 0;
  WKSelectionGranularityCharacter = 1;

type
  WKDataDetectorTypes = NSUInteger;
  WKDataDetectorTypesPtr = ^WKDataDetectorTypes;

const
  WKDataDetectorTypeNone = 0;
  WKDataDetectorTypePhoneNumber = 1 shl 0;
  WKDataDetectorTypeLink = 1 shl 1;
  WKDataDetectorTypeAddress = 1 shl 2;
  WKDataDetectorTypeCalendarEvent = 1 shl 3;
  WKDataDetectorTypeTrackingNumber = 1 shl 4;
  WKDataDetectorTypeFlightNumber = 1 shl 5;
  WKDataDetectorTypeLookupSuggestion = 1 shl 6;
  WKDataDetectorTypeAll = NSUIntegerMax;
  WKDataDetectorTypeSpotlightSuggestion = 1 deprecated 'in "WKDataDetectorTypeLookupSuggestion", ios(10.0, 10.0';
  WKDataDetectorTypeLookupSuggestion = 2 deprecated 'in "WKDataDetectorTypeLookupSuggestion", ios(10.0, 10.0';
{$endif}

{$else}
{$ifdef TYPES}
type
  WKUserInterfaceDirectionPolicy = NSInteger;
  WKUserInterfaceDirectionPolicyPtr = ^WKUserInterfaceDirectionPolicy;

const
  WKUserInterfaceDirectionPolicyContent = 0;
  WKUserInterfaceDirectionPolicySystem = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  WKAudiovisualMediaTypes = NSUInteger;
  WKAudiovisualMediaTypesPtr = ^WKAudiovisualMediaTypes;

const
  WKAudiovisualMediaTypeNone = 0;
  WKAudiovisualMediaTypeAudio = 1 shl 0;
  WKAudiovisualMediaTypeVideo = 1 shl 1;
  WKAudiovisualMediaTypeAll = NSUIntegerMax;
{$endif}

{$ifdef CLASSES}

type
  WKWebViewConfiguration = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  public
    procedure setProcessPool(newValue: WKProcessPool); message 'setProcessPool:';
    function processPool: WKProcessPool; message 'processPool';
    procedure setPreferences(newValue: WKPreferences); message 'setPreferences:';
    function preferences: WKPreferences; message 'preferences';
    procedure setUserContentController(newValue: WKUserContentController); message 'setUserContentController:';
    function userContentController: WKUserContentController; message 'userContentController';
    procedure setWebsiteDataStore(newValue: WKWebsiteDataStore); message 'setWebsiteDataStore:';
    function websiteDataStore: WKWebsiteDataStore; message 'websiteDataStore';
    procedure setIos(9.0))(newValue: WKWebsiteDataStore); message 'setIos(9.0)):';
    function ios(9.0)): WKWebsiteDataStore; message 'ios(9.0))';
    procedure setSuppressesIncrementalRendering(newValue: boolean); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: boolean; message 'suppressesIncrementalRendering';
    procedure setApplicationNameForUserAgent(newValue: NSString); message 'setApplicationNameForUserAgent:';
    function applicationNameForUserAgent: NSString; message 'applicationNameForUserAgent';
    procedure setIos(9.0))_(newValue: NSString); message 'setIos(9.0)):';
    function ios(9.0))_: NSString; message 'ios(9.0))';
    procedure setAllowsAirPlayForMediaPlayback(newValue: boolean); message 'setAllowsAirPlayForMediaPlayback:';
    function allowsAirPlayForMediaPlayback: boolean; message 'allowsAirPlayForMediaPlayback';
    procedure setIos(9.0))__(newValue: boolean); message 'setIos(9.0)):';
    function ios(9.0))__: boolean; message 'ios(9.0))';
    procedure setMediaTypesRequiringUserActionForPlayback(newValue: WKAudiovisualMediaTypes); message 'setMediaTypesRequiringUserActionForPlayback:';
    function mediaTypesRequiringUserActionForPlayback: WKAudiovisualMediaTypes; message 'mediaTypesRequiringUserActionForPlayback';
    procedure setIos(10.0))(newValue: WKAudiovisualMediaTypes); message 'setIos(10.0)):';
    function ios(10.0)): WKAudiovisualMediaTypes; message 'ios(10.0))';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setAllowsInlineMediaPlayback(newValue: boolean); message 'setAllowsInlineMediaPlayback:';
    function allowsInlineMediaPlayback: boolean; message 'allowsInlineMediaPlayback';
    procedure setSelectionGranularity(newValue: WKSelectionGranularity); message 'setSelectionGranularity:';
    function selectionGranularity: WKSelectionGranularity; message 'selectionGranularity';
    procedure set)(newValue: BOOL allowsPictureInPictureMediaPlayback); message 'set):';
    function ): BOOL allowsPictureInPictureMediaPlayback; message ')';
    procedure set)_(newValue: WKDataDetectorTypes dataDetectorTypes); message 'set):';
    function )_: WKDataDetectorTypes dataDetectorTypes; message ')';
    procedure set)__(newValue: BOOL ignoresViewportScaleLimits); message 'set):';
    function )__: BOOL ignoresViewportScaleLimits; message ')';
    {$else}
    procedure set)___(newValue: WKUserInterfaceDirectionPolicy userInterfaceDirectionPolicy); message 'set):';
    function )___: WKUserInterfaceDirectionPolicy userInterfaceDirectionPolicy; message ')';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;


type
  WKDeprecated = objccategory external (WKWebViewConfiguration)
    {$if defined(TARGET_OS_IPHONE)}
    procedure set)(newValue: BOOL mediaPlaybackRequiresUserAction); message 'set):';
    function ): BOOL mediaPlaybackRequiresUserAction; message ')';
    procedure set)_(newValue: BOOL mediaPlaybackAllowsAirPlay); message 'set):';
    function )_: BOOL mediaPlaybackAllowsAirPlay; message ')';
    procedure set)__(newValue: BOOL requiresUserActionForMediaPlayback); message 'set):';
    function )__: BOOL requiresUserActionForMediaPlayback; message ')';
    {$endif}
  end;
{$endif}

{$endif}
