{ Parsed from NewsstandKit.framework NKIssue.h }

{$ifdef TYPES}
type
  NKIssuePtr = ^NKIssue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NKIssueDownloadCompletedNotification: NSString *__nonnull { available in 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NKIssueContentStatus = NSInteger;
  NKIssueContentStatusPtr = ^NKIssueContentStatus;

const
  NKIssueContentStatusNone = 0;
  NKIssueContentStatusDownloading = 1;
  NKIssueContentStatusAvailable = 2;
{$endif}

{$ifdef CLASSES}

type
  NKIssue = objcclass external (NSObject)
  public
    function downloadingAssets: NKAssetDownload *ProtocolPtr; message 'downloadingAssets';
    function contentURL: NSURL; message 'contentURL';
    function status: NKIssueContentStatus; message 'status';
    function name: NSString; message 'name';
    function date: NSDate; message 'date';
    function addAssetWithRequest (request: NSURLRequest): NKAssetDownload; message 'addAssetWithRequest:';
  end;
{$endif}

