{ Parsed from WebKit.framework WKWebsiteDataRecord.h }

{$ifdef TYPES}
type
  WKWebsiteDataRecordPtr = ^WKWebsiteDataRecord;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKWebsiteDataRecord = objcclass external (NSObject)
  public
    function displayName: NSString; message 'displayName';
    function dataTypes: NSString *ProtocolPtr; message 'dataTypes';
  end;
{$endif}

{$endif}
