{ Parsed from NewsstandKit.framework NKLibrary.h }

{$ifdef TYPES}
type
  NKLibraryPtr = ^NKLibrary;
{$endif}

{$ifdef CLASSES}

type
  NKLibrary = objcclass external (NSObject)
  public
    function issues: NKIssue *ProtocolPtr; message 'issues';
    function downloadingAssets: NKAssetDownload *ProtocolPtr; message 'downloadingAssets';
    procedure setCurrentlyReadingIssue(newValue: NKIssue); message 'setCurrentlyReadingIssue:';
    function currentlyReadingIssue: NKIssue; message 'currentlyReadingIssue';
    class function sharedLibrary: nullable NKLibraryPtr; message 'sharedLibrary';
    function issueWithName (name: NSString): nullable NKIssuePtr; message 'issueWithName:';
    function addIssueWithName_date (name: NSString; date: NSDate): NKIssue; message 'addIssueWithName:date:';
    procedure removeIssue (issue: NKIssue); message 'removeIssue:';
  end;
{$endif}

