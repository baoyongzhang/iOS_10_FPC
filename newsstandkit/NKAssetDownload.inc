{ Parsed from NewsstandKit.framework NKAssetDownload.h }

{$ifdef TYPES}
type
  NKAssetDownloadPtr = ^NKAssetDownload;
{$endif}

{$ifdef CLASSES}

type
  NKAssetDownload = objcclass external (NSObject)
  public
    function issue: NKIssue; message 'issue';
    function identifier: NSString; message 'identifier';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    function URLRequest: NSURLRequest; message 'URLRequest';
    function downloadWithDelegate (delegate: NSURLConnectionDownloadDelegateProtocol): NSURLConnection; message 'downloadWithDelegate:';
  end;
{$endif}

