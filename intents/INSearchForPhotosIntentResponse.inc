{ Parsed from Intents.framework INSearchForPhotosIntentResponse.h }

{$ifdef TYPES}
type
  INSearchForPhotosIntentResponsePtr = ^INSearchForPhotosIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSearchForPhotosIntentResponseCode = NSInteger;
  INSearchForPhotosIntentResponseCodePtr = ^INSearchForPhotosIntentResponseCode;

const
  INSearchForPhotosIntentResponseCodeUnspecified = 0;
  INSearchForPhotosIntentResponseCodeReady = 1;
  INSearchForPhotosIntentResponseCodeContinueInApp = 2;
  INSearchForPhotosIntentResponseCodeFailure = 3;
  INSearchForPhotosIntentResponseCodeFailureRequiringAppLaunch = 4;
  INSearchForPhotosIntentResponseCodeFailureAppConfigurationRequired = 5;
{$endif}

{$ifdef CLASSES}

type
  INSearchForPhotosIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSearchForPhotosIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSearchForPhotosIntentResponseCode; message 'code';
    procedure setNS_REFINED_FOR_SWIFT(newValue: NSNumber *searchResultsCount); message 'setNS_REFINED_FOR_SWIFT:';
    function NS_REFINED_FOR_SWIFT_: NSNumber *searchResultsCount; message 'NS_REFINED_FOR_SWIFT';
  end;
{$endif}

