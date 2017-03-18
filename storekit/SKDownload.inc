{ Parsed from StoreKit.framework SKDownload.h }

{$ifdef TYPES}
type
  SKDownloadPtr = ^SKDownload;
{$endif}

{$ifdef TYPES}
type
  SKDownloadState = NSInteger;
  SKDownloadStatePtr = ^SKDownloadState;

const
  SKDownloadStateWaiting = 0;
  SKDownloadStateActive = 1;
  SKDownloadStatePaused = 2;
  SKDownloadStateFinished = 3;
  SKDownloadStateFailed = 4;
  SKDownloadStateCancelled = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKDownloadTimeRemainingUnknown: NSTimeInterval { available in 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SKDownload = objcclass external (NSObject)
  public
    function downloadState: SKDownloadState; message 'downloadState';
    function contentLength: clonglong; message 'contentLength';
    function contentIdentifier: NSString; message 'contentIdentifier';
    function contentURL: NSURL; message 'contentURL';
    function contentVersion: NSString; message 'contentVersion';
    function error: NSError; message 'error';
    function progress: single; message 'progress';
    function timeRemaining: NSTimeInterval; message 'timeRemaining';
    function transaction: SKPaymentTransaction; message 'transaction';
  end;
{$endif}

