{ Parsed from SafariServices.framework SSReadingList.h }

{$ifdef TYPES}
type
  SSReadingListPtr = ^SSReadingList;
{$endif}

{$ifdef CLASSES}

type
  SSReadingList = objcclass external (NSObject)
  public
    class function defaultReadingList: nullable SSReadingListPtr; message 'defaultReadingList';
    function init: instancetype; message 'init';
    class function supportsURL (URL: NSURL): boolean; message 'supportsURL:';
    function addReadingListItemWithURL_title_previewText_error (URL: NSURL; title: nullable NSStringPtr; previewText: nullable NSStringPtr; error: NSErrorPtr): boolean; message 'addReadingListItemWithURL:title:previewText:error:'; { available in 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SSReadingListErrorDomain: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SSReadingListErrorCode = NSInteger;
  SSReadingListErrorCodePtr = ^SSReadingListErrorCode;

const
  SSReadingListErrorURLSchemeNotAllowed = 1;
{$endif}

