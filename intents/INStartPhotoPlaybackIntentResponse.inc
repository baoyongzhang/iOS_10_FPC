{ Parsed from Intents.framework INStartPhotoPlaybackIntentResponse.h }

{$ifdef TYPES}
type
  INStartPhotoPlaybackIntentResponsePtr = ^INStartPhotoPlaybackIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INStartPhotoPlaybackIntentResponseCode = NSInteger;
  INStartPhotoPlaybackIntentResponseCodePtr = ^INStartPhotoPlaybackIntentResponseCode;

const
  INStartPhotoPlaybackIntentResponseCodeUnspecified = 0;
  INStartPhotoPlaybackIntentResponseCodeReady = 1;
  INStartPhotoPlaybackIntentResponseCodeContinueInApp = 2;
  INStartPhotoPlaybackIntentResponseCodeFailure = 3;
  INStartPhotoPlaybackIntentResponseCodeFailureRequiringAppLaunch = 4;
  INStartPhotoPlaybackIntentResponseCodeFailureAppConfigurationRequired = 5;
{$endif}

{$ifdef CLASSES}

type
  INStartPhotoPlaybackIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INStartPhotoPlaybackIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INStartPhotoPlaybackIntentResponseCode; message 'code';
    procedure setNS_REFINED_FOR_SWIFT(newValue: NSNumber *searchResultsCount); message 'setNS_REFINED_FOR_SWIFT:';
    function NS_REFINED_FOR_SWIFT_: NSNumber *searchResultsCount; message 'NS_REFINED_FOR_SWIFT';
  end;
{$endif}

