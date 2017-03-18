{ Parsed from SceneKit.framework SCNSceneSource.h }

{ Types from SCNSceneSource }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNSceneSourcePtr = ^SCNSceneSource;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneSourceAssetContributorsKey: NSString; cvar; external;
  SCNSceneSourceAssetCreatedDateKey: NSString; cvar; external;
  SCNSceneSourceAssetModifiedDateKey: NSString; cvar; external;
  SCNSceneSourceAssetUpAxisKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitKey: NSString; cvar; external;
  SCNSceneSourceAssetAuthoringToolKey: NSString; cvar; external;
  SCNSceneSourceAssetAuthorKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitNameKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitMeterKey: NSString; cvar; external;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNSceneSourceLoadingOption;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNSceneSourceLoadingOption = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneSourceCreateNormalsIfAbsentKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceCheckConsistencyKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceFlattenSceneKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceUseSafeModeKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceAssetDirectoryURLsKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceOverrideAssetURLsKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceStrictConformanceKey: SCNSceneSourceLoadingOption; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function API_UNAVAILABLE___(param1: ios; param2: tvos; param3: watchos): SCNSceneSourceLoadingOption  SCNSceneSourceConvertUnitsToMetersKey                            ); cdecl; external; { available in macosx(10.10 }
function API_UNAVAILABLE____(param1: ios; param2: tvos; param3: watchos): SCNSceneSourceLoadingOption  SCNSceneSourceConvertToYUpKey                            ); cdecl; external; { available in macosx(10.10 }
{$endif}

{$ifdef TYPES}
const
  SCNSceneSourceLoadingOptionConvertUnitsToMeters = SCNSceneSourceConvertUnitsToMetersKey;
  SCNSceneSourceLoadingOptionConvertToYUp = SCNSceneSourceConvertToYUpKey;
  SCNSceneSourceLoadingOptionAnimationImportPolicy = SCNSceneSourceAnimationImportPolicyKey;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNSceneSourceAnimationImportPolicy;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNSceneSourceAnimationImportPolicy = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNDetailedErrorsKey: NSString; cvar; external;
  SCNConsistencyElementIDErrorKey: NSString; cvar; external;
  SCNConsistencyElementTypeErrorKey: NSString; cvar; external;
  SCNConsistencyLineNumberErrorKey: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNConsistencyInvalidURIError = 1000;
  SCNConsistencyInvalidCountError = 1001;
  SCNConsistencyInvalidArgumentError = 1002;
  SCNConsistencyMissingElementError = 1003;
  SCNConsistencyMissingAttributeError = 1004;
  SCNConsistencyXMLSchemaValidationError = 1005;

type
  SCNSceneSourceStatus = NSInteger;
  SCNSceneSourceStatusPtr = ^SCNSceneSourceStatus;

const
  SCNSceneSourceStatusError = -1;
  SCNSceneSourceStatusParsing = 4;
  SCNSceneSourceStatusValidating = 8;
  SCNSceneSourceStatusProcessing = 12;
  SCNSceneSourceStatusComplete = 16;

type
  SCNSceneSourceStatusHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  SCNSceneSource = objcclass external (NSObject)
  public
    class function sceneSourceWithURL_options (url: NSURL; options: nullable NSDictionaryPtr): nullable instancetype; message 'sceneSourceWithURL:options:';
    class function sceneSourceWithData_options (data: NSData; options: nullable NSDictionaryPtr): nullable instancetype; message 'sceneSourceWithData:options:';
    function initWithURL_options (url: NSURL; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithURL:options:';
    function initWithData_options (data: NSData; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithData:options:';
    function url: NSURL; message 'url';
    function data: NSData; message 'data';
    function sceneWithOptions_statusHandler (options: nullable NSDictionaryPtr; statusHandler: nullable SCNSceneSourceStatusHandler): nullable SCNScenePtr; message 'sceneWithOptions:statusHandler:';
    function sceneWithOptions_error (options: nullable NSDictionaryPtr; error: NSErrorPtr): nullable SCNScenePtr; message 'sceneWithOptions:error:';
    function propertyForKey (key: NSString): nullable id; message 'propertyForKey:';
    {$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 1)}
    function entryWithIdentifier_withClass (uid: NSString; entryClass: pobjc_class): nullable id; message 'entryWithIdentifier:withClass:';
    {$else}
    function entryWithIdentifier_withClass (uid: NSString; entryClass: pobjc_class): nullable id; message 'entryWithIdentifier:withClass:';
    {$endif}
    function identifiersOfEntriesWithClass (entryClass: pobjc_class): NSString *ProtocolPtr; message 'identifiersOfEntriesWithClass:';
    function entriesPassingTest (predicate: OpaqueCBlock): idProtocolPtr; message 'entriesPassingTest:'; { available in macosx(10.9 }
  end;
{$endif}

